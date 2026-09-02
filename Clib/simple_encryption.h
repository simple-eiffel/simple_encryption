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

#endif /* SIMPLE_ENCRYPTION_H */
