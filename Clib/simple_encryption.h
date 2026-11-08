/*
 * simple_encryption.h - native cryptographic primitives for SIMPLE_ENCRYPTION
 *
 * Windows: Cryptography API: Next Generation (bcrypt.dll) - SHA-256,
 *          HMAC-SHA256, PBKDF2-HMAC-SHA256 and the system CSPRNG. Present on
 *          every supported Windows; nothing to redistribute. The one-shot
 *          BCryptHash needs Windows 10 1607 or later.
 * Other:   the CSPRNG reads /dev/urandom; hashing and PBKDF2 report "not
 *          available" (return 0) and the Eiffel implementations over ISE's
 *          EEL library are used instead. There is deliberately NO
 *          pseudo-random fallback anywhere in this file.
 *
 * Following Eric Bezault's pattern: implementations in the .h file, called
 * from Eiffel inline C with a use directive. Every function returns 1 on
 * success and 0 on failure, and a failure zeroes its output buffer so a
 * partial result can never be mistaken for a secret.
 *
 * Copyright (c) 2026 Larry Rix - MIT License
 */

#ifndef SIMPLE_ENCRYPTION_H
#define SIMPLE_ENCRYPTION_H

#include <string.h>

#if defined(_WIN32) || defined(EIF_WINDOWS)
/* ============ WINDOWS: CNG ============ */

#include <windows.h>
#include <bcrypt.h>
#if defined(_MSC_VER)
#pragma comment(lib, "bcrypt.lib")
#endif
#ifndef NT_SUCCESS
#define NT_SUCCESS(s) (((NTSTATUS)(s)) >= 0)
#endif

static int senc_has_native(void) { return 1; }

/* System-preferred CSPRNG. */
static int senc_random(unsigned char *buf, int n) {
    if (!buf || n <= 0) return 0;
    return NT_SUCCESS(BCryptGenRandom(NULL, buf, (ULONG)n, BCRYPT_USE_SYSTEM_PREFERRED_RNG)) ? 1 : 0;
}

/* One-shot SHA-256, or HMAC-SHA256 when a key is given. */
static int senc_sha256_core(const unsigned char *key, int keylen,
                            const unsigned char *data, int len, unsigned char out[32]) {
    BCRYPT_ALG_HANDLE alg = NULL; NTSTATUS st; int ok = 0;
    ULONG flags = key ? BCRYPT_ALG_HANDLE_HMAC_FLAG : 0;
    if (!out || (len > 0 && !data)) return 0;
    st = BCryptOpenAlgorithmProvider(&alg, BCRYPT_SHA256_ALGORITHM, NULL, flags);
    if (!NT_SUCCESS(st)) { memset(out, 0, 32); return 0; }
    st = BCryptHash(alg, (PUCHAR)key, key ? (ULONG)keylen : 0, (PUCHAR)data, (ULONG)len, out, 32);
    ok = NT_SUCCESS(st) ? 1 : 0;
    BCryptCloseAlgorithmProvider(alg, 0);
    if (!ok) memset(out, 0, 32);
    return ok;
}

static int senc_sha256(const unsigned char *data, int len, unsigned char out[32]) {
    return senc_sha256_core(NULL, 0, data, len, out);
}

static int senc_hmac_sha256(const unsigned char *key, int keylen,
                            const unsigned char *data, int len, unsigned char out[32]) {
    static const unsigned char empty = 0;
    if (!key || keylen < 0) { key = &empty; keylen = 0; }   /* an empty key is legal for HMAC */
    return senc_sha256_core(key, keylen, data, len, out);
}

/* PBKDF2-HMAC-SHA256 (RFC 2898 / RFC 8018), any output length. */
static int senc_pbkdf2_sha256(const unsigned char *pw, int pwlen,
                              const unsigned char *salt, int saltlen,
                              unsigned long long iterations,
                              unsigned char *out, int outlen) {
    BCRYPT_ALG_HANDLE alg = NULL; NTSTATUS st; int ok = 0;
    if (!pw || pwlen <= 0 || !out || outlen <= 0 || iterations == 0) return 0;
    st = BCryptOpenAlgorithmProvider(&alg, BCRYPT_SHA256_ALGORITHM, NULL, BCRYPT_ALG_HANDLE_HMAC_FLAG);
    if (!NT_SUCCESS(st)) { memset(out, 0, (size_t)outlen); return 0; }
    st = BCryptDeriveKeyPBKDF2(alg, (PUCHAR)pw, (ULONG)pwlen, (PUCHAR)salt, (ULONG)(saltlen > 0 ? saltlen : 0),
                               (ULONGLONG)iterations, out, (ULONG)outlen, 0);
    ok = NT_SUCCESS(st) ? 1 : 0;
    BCryptCloseAlgorithmProvider(alg, 0);
    if (!ok) memset(out, 0, (size_t)outlen);
    return ok;
}

#elif defined(__APPLE__)
/* ============ macOS: CommonCrypto ============ */
/* The same job CNG does on Windows, and as fast: PBKDF2 at the default 600,000
   iterations takes a moment here, against minutes in the portable Eiffel. */

#include <CommonCrypto/CommonDigest.h>
#include <CommonCrypto/CommonHMAC.h>
#include <CommonCrypto/CommonKeyDerivation.h>
#include <CommonCrypto/CommonRandom.h>

static int senc_has_native(void) { return 1; }

/* The system's CSPRNG. Nothing else qualifies. */
static int senc_random(unsigned char *buf, int n) {
    if (!buf || n <= 0) return 0;
    if (CCRandomGenerateBytes(buf, (size_t)n) != kCCSuccess) {
        memset(buf, 0, (size_t)n);
        return 0;
    }
    return 1;
}

static int senc_sha256(const unsigned char *data, int len, unsigned char out[32]) {
    return CC_SHA256(data, (CC_LONG)len, out) != NULL ? 1 : 0;
}

static int senc_hmac_sha256(const unsigned char *key, int keylen,
                            const unsigned char *data, int len, unsigned char out[32]) {
    CCHmac(kCCHmacAlgSHA256, key, (size_t)keylen, data, (size_t)len, out);
    return 1;
}

static int senc_pbkdf2_sha256(const unsigned char *pw, int pwlen,
                              const unsigned char *salt, int saltlen,
                              unsigned long long iterations,
                              unsigned char *out, int outlen) {
    if (iterations == 0 || iterations > 0xFFFFFFFFULL) return 0;
    return CCKeyDerivationPBKDF(kCCPBKDF2, (const char *)pw, (size_t)pwlen, salt, (size_t)saltlen,
                                kCCPRFHmacAlgSHA256, (unsigned int)iterations, out, (size_t)outlen) == kCCSuccess ? 1 : 0;
}

#elif defined(__linux__)
/* ============ Linux: OpenSSL libcrypto ============ */
/* The same job CNG and CommonCrypto do. Random bytes come straight from the
   kernel, so they do not depend on OpenSSL's generator being seeded. */

#include <errno.h>
#include <limits.h>
#include <openssl/evp.h>
#include <openssl/hmac.h>
#include <sys/random.h>

static int senc_has_native(void) { return 1; }

/* The kernel CSPRNG. Nothing else qualifies. */
static int senc_random(unsigned char *buf, int n) {
    size_t done = 0;
    if (!buf || n <= 0) return 0;
    while (done < (size_t)n) {
        ssize_t got = getrandom(buf + done, (size_t)n - done, 0);
        if (got < 0) {
            if (errno == EINTR) continue;
            memset(buf, 0, (size_t)n);
            return 0;
        }
        done += (size_t)got;
    }
    return 1;
}

static int senc_sha256(const unsigned char *data, int len, unsigned char out[32]) {
    unsigned int size = 0;
    return EVP_Digest(data, (size_t)len, out, &size, EVP_sha256(), NULL) == 1 && size == 32 ? 1 : 0;
}

static int senc_hmac_sha256(const unsigned char *key, int keylen,
                            const unsigned char *data, int len, unsigned char out[32]) {
    unsigned int size = 0;
    return HMAC(EVP_sha256(), key, keylen, data, (size_t)len, out, &size) != NULL && size == 32 ? 1 : 0;
}

static int senc_pbkdf2_sha256(const unsigned char *pw, int pwlen,
                              const unsigned char *salt, int saltlen,
                              unsigned long long iterations,
                              unsigned char *out, int outlen) {
    if (iterations == 0 || iterations > (unsigned long long)INT_MAX) return 0;
    return PKCS5_PBKDF2_HMAC((const char *)pw, pwlen, salt, saltlen, (int)iterations,
                             EVP_sha256(), outlen, out) == 1 ? 1 : 0;
}

#else
/* ============ OTHER PLATFORMS ============ */

#include <stdio.h>

static int senc_has_native(void) { return 0; }

/* The kernel CSPRNG. Nothing else qualifies. */
static int senc_random(unsigned char *buf, int n) {
    FILE *f; size_t got;
    if (!buf || n <= 0) return 0;
    f = fopen("/dev/urandom", "rb");
    if (!f) return 0;
    got = fread(buf, 1, (size_t)n, f);
    fclose(f);
    if (got != (size_t)n) { memset(buf, 0, (size_t)n); return 0; }
    return 1;
}

static int senc_sha256(const unsigned char *data, int len, unsigned char out[32]) {
    (void)data; (void)len; if (out) memset(out, 0, 32); return 0;
}
static int senc_hmac_sha256(const unsigned char *key, int keylen,
                            const unsigned char *data, int len, unsigned char out[32]) {
    (void)key; (void)keylen; (void)data; (void)len; if (out) memset(out, 0, 32); return 0;
}
static int senc_pbkdf2_sha256(const unsigned char *pw, int pwlen,
                              const unsigned char *salt, int saltlen,
                              unsigned long long iterations,
                              unsigned char *out, int outlen) {
    (void)pw; (void)pwlen; (void)salt; (void)saltlen; (void)iterations;
    if (out && outlen > 0) memset(out, 0, (size_t)outlen);
    return 0;
}

#endif /* platform */

/* ============ DPAPI: per-user data protection (Windows only) ============
 * Seals bytes to the current Windows user on this machine
 * (CryptProtectData); only the same user on the same machine unseals them.
 * Optional entropy binds the blob further. Returns bytes written (<= outcap)
 * or 0 on ANY failure; the OS buffer is zeroed and freed on every path. */
#if defined(_WIN32) || defined(EIF_WINDOWS)
#include <wincrypt.h>
#pragma comment(lib, "crypt32.lib")

static int senc_dpapi_protect(const unsigned char *in, int inlen,
                              const unsigned char *entropy, int entlen,
                              unsigned char *out, int outcap) {
    DATA_BLOB bin, bent, bout; int n = 0;
    if (!in || inlen <= 0 || !out || outcap <= 0) return 0;
    bin.pbData = (BYTE*)in; bin.cbData = (DWORD)inlen;
    bent.pbData = (BYTE*)entropy; bent.cbData = (DWORD)((entropy && entlen > 0) ? entlen : 0);
    bout.pbData = NULL; bout.cbData = 0;
    if (!CryptProtectData(&bin, NULL, (entropy && entlen > 0) ? &bent : NULL,
                          NULL, NULL, CRYPTPROTECT_UI_FORBIDDEN, &bout)) return 0;
    if ((int)bout.cbData <= outcap && bout.pbData) { memcpy(out, bout.pbData, bout.cbData); n = (int)bout.cbData; }
    if (bout.pbData) { SecureZeroMemory(bout.pbData, bout.cbData); LocalFree(bout.pbData); }
    return n;
}

static int senc_dpapi_unprotect(const unsigned char *in, int inlen,
                                const unsigned char *entropy, int entlen,
                                unsigned char *out, int outcap) {
    DATA_BLOB bin, bent, bout; int n = 0;
    if (!in || inlen <= 0 || !out || outcap <= 0) return 0;
    bin.pbData = (BYTE*)in; bin.cbData = (DWORD)inlen;
    bent.pbData = (BYTE*)entropy; bent.cbData = (DWORD)((entropy && entlen > 0) ? entlen : 0);
    bout.pbData = NULL; bout.cbData = 0;
    if (!CryptUnprotectData(&bin, NULL, (entropy && entlen > 0) ? &bent : NULL,
                            NULL, NULL, CRYPTPROTECT_UI_FORBIDDEN, &bout)) return 0;
    if ((int)bout.cbData <= outcap && bout.pbData) { memcpy(out, bout.pbData, bout.cbData); n = (int)bout.cbData; }
    if (bout.pbData) { SecureZeroMemory(bout.pbData, bout.cbData); LocalFree(bout.pbData); }
    return n;
}

static int senc_dpapi_available(void) { return 1; }
#else
static int senc_dpapi_protect(const unsigned char *in, int inlen,
                              const unsigned char *entropy, int entlen,
                              unsigned char *out, int outcap) {
    (void)in; (void)inlen; (void)entropy; (void)entlen;
    if (out && outcap > 0) memset(out, 0, (size_t)outcap);
    return 0;
}
static int senc_dpapi_unprotect(const unsigned char *in, int inlen,
                                const unsigned char *entropy, int entlen,
                                unsigned char *out, int outcap) {
    (void)in; (void)inlen; (void)entropy; (void)entlen;
    if (out && outcap > 0) memset(out, 0, (size_t)outcap);
    return 0;
}
static int senc_dpapi_available(void) { return 0; }
#endif

/* ---- Session seal: authenticated encryption under a key that lives only in memory, for
   one process's session (simple_gui's row cache keeps table rows in a scratch file with it).
   The sealed form is platform-local: it never leaves the machine that made it, so each
   platform uses its natural primitive.
     key    SENC_SESSION_KEY_BYTES (64) bytes from senc_random
     sealed nonce || ciphertext || tag
   - macOS (CommonCrypto has no public GCM): AES-256-CTR under key[0..31] from a random 16-byte
     initial counter block, then HMAC-SHA-256 under key[32..63] over nonce || ciphertext
     (encrypt-then-MAC); a 32-byte tag.
   - Linux (OpenSSL EVP): AES-256-GCM under key[0..31], a random 12-byte nonce, a 16-byte tag.
   - Windows (BCrypt AES-256-GCM, the Linux layout): not yet (PROD); `available' answers 0.
   senc_session_seal writes inlen + senc_session_overhead() bytes and answers that count, or
   -1; senc_session_open answers the plain text's length, or -1 when the sealed bytes are
   short, altered or sealed under another key (nothing is written then that may be used). */

#define SENC_SESSION_KEY_BYTES 64

#if defined(__APPLE__) && !defined(SENC_SESSION_OPENSSL)
#include <CommonCrypto/CommonCryptor.h>
#include <CommonCrypto/CommonHMAC.h>
#include <CommonCrypto/CommonRandom.h>

#define SENC_SESSION_NONCE 16
#define SENC_SESSION_TAG 32

static int senc_session_available(void) { return 1; }
static int senc_session_overhead(void) { return SENC_SESSION_NONCE + SENC_SESSION_TAG; }

static int senc_session_ctr(const unsigned char *key, const unsigned char *nonce,
                            const unsigned char *in, int inlen, unsigned char *out) {
    CCCryptorRef c = NULL;
    size_t moved = 0;
    int ok;
    if (CCCryptorCreateWithMode(kCCEncrypt, kCCModeCTR, kCCAlgorithmAES, ccNoPadding, nonce,
                                key, kCCKeySizeAES256, NULL, 0, 0, kCCModeOptionCTR_BE, &c) != kCCSuccess)
        return 0;
    ok = inlen == 0 || (CCCryptorUpdate(c, in, (size_t)inlen, out, (size_t)inlen, &moved) == kCCSuccess
                        && moved == (size_t)inlen);
    CCCryptorRelease(c);
    return ok;
}

static int senc_session_seal(const unsigned char *key, const unsigned char *in, int inlen, unsigned char *out) {
    if (!key || inlen < 0 || !out || (inlen > 0 && !in)) return -1;
    if (CCRandomGenerateBytes(out, SENC_SESSION_NONCE) != kCCSuccess) return -1;
    if (!senc_session_ctr(key, out, in, inlen, out + SENC_SESSION_NONCE)) return -1;
    CCHmac(kCCHmacAlgSHA256, key + 32, 32, out, (size_t)(SENC_SESSION_NONCE + inlen),
           out + SENC_SESSION_NONCE + inlen);
    return inlen + senc_session_overhead();
}

static int senc_session_open(const unsigned char *key, const unsigned char *in, int inlen, unsigned char *out) {
    unsigned char tag[SENC_SESSION_TAG];
    unsigned char diff = 0;
    int n = inlen - senc_session_overhead(), i;
    if (!key || !in || n < 0 || (n > 0 && !out)) return -1;
    CCHmac(kCCHmacAlgSHA256, key + 32, 32, in, (size_t)(SENC_SESSION_NONCE + n), tag);
    for (i = 0; i < SENC_SESSION_TAG; i++) diff |= (unsigned char)(tag[i] ^ in[SENC_SESSION_NONCE + n + i]);
    if (diff != 0) return -1;
    if (!senc_session_ctr(key, in, in + SENC_SESSION_NONCE, n, out)) return -1;
    return n;
}

#elif defined(__linux__) || defined(SENC_SESSION_OPENSSL)
#include <openssl/evp.h>
#include <openssl/rand.h>

#define SENC_SESSION_NONCE 12
#define SENC_SESSION_TAG 16

static int senc_session_available(void) { return 1; }
static int senc_session_overhead(void) { return SENC_SESSION_NONCE + SENC_SESSION_TAG; }

static int senc_session_seal(const unsigned char *key, const unsigned char *in, int inlen, unsigned char *out) {
    EVP_CIPHER_CTX *c;
    int len = 0, total = 0, ok;
    if (!key || inlen < 0 || !out || (inlen > 0 && !in)) return -1;
    if (RAND_bytes(out, SENC_SESSION_NONCE) != 1) return -1;
    if (!(c = EVP_CIPHER_CTX_new())) return -1;
    ok = EVP_EncryptInit_ex(c, EVP_aes_256_gcm(), NULL, NULL, NULL) == 1
      && EVP_CIPHER_CTX_ctrl(c, EVP_CTRL_GCM_SET_IVLEN, SENC_SESSION_NONCE, NULL) == 1
      && EVP_EncryptInit_ex(c, NULL, NULL, key, out) == 1
      && (inlen == 0 || EVP_EncryptUpdate(c, out + SENC_SESSION_NONCE, &len, in, inlen) == 1);
    total = len;
    ok = ok && EVP_EncryptFinal_ex(c, out + SENC_SESSION_NONCE + total, &len) == 1;
    total += len;
    ok = ok && total == inlen
      && EVP_CIPHER_CTX_ctrl(c, EVP_CTRL_GCM_GET_TAG, SENC_SESSION_TAG, out + SENC_SESSION_NONCE + inlen) == 1;
    EVP_CIPHER_CTX_free(c);
    return ok ? inlen + senc_session_overhead() : -1;
}

static int senc_session_open(const unsigned char *key, const unsigned char *in, int inlen, unsigned char *out) {
    EVP_CIPHER_CTX *c;
    int n = inlen - senc_session_overhead(), len = 0, total = 0, ok;
    unsigned char tag[SENC_SESSION_TAG];
    if (!key || !in || n < 0 || (n > 0 && !out)) return -1;
    memcpy(tag, in + SENC_SESSION_NONCE + n, SENC_SESSION_TAG);
    if (!(c = EVP_CIPHER_CTX_new())) return -1;
    ok = EVP_DecryptInit_ex(c, EVP_aes_256_gcm(), NULL, NULL, NULL) == 1
      && EVP_CIPHER_CTX_ctrl(c, EVP_CTRL_GCM_SET_IVLEN, SENC_SESSION_NONCE, NULL) == 1
      && EVP_DecryptInit_ex(c, NULL, NULL, key, in) == 1
      && (n == 0 || EVP_DecryptUpdate(c, out, &len, in + SENC_SESSION_NONCE, n) == 1);
    total = len;
    ok = ok && EVP_CIPHER_CTX_ctrl(c, EVP_CTRL_GCM_SET_TAG, SENC_SESSION_TAG, tag) == 1
      && EVP_DecryptFinal_ex(c, out + total, &len) == 1;
    total += len;
    EVP_CIPHER_CTX_free(c);
    return ok && total == n ? n : -1;
}

#else
/* Windows (BCrypt AES-256-GCM) is to come; elsewhere there is no system primitive. */
static int senc_session_available(void) { return 0; }
static int senc_session_overhead(void) { return 0; }
static int senc_session_seal(const unsigned char *key, const unsigned char *in, int inlen, unsigned char *out) {
    (void)key; (void)in; (void)inlen; (void)out; return -1;
}
static int senc_session_open(const unsigned char *key, const unsigned char *in, int inlen, unsigned char *out) {
    (void)key; (void)in; (void)inlen; (void)out; return -1;
}
#endif

#endif /* SIMPLE_ENCRYPTION_H */
