# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [2.1.0] - 2026-09-01

### Added

- **DPAPI (Windows per-user data protection):** `dpapi_protect` seals bytes to the current Windows user on this machine (`CryptProtectData`, UI forbidden, optional extra entropy), `dpapi_unprotect` unseals them, `is_dpapi_available` reports the platform. Failures — wrong user, wrong entropy, tampered blob, non-Windows — are `Void`, never an exception; the OS output buffer is zeroed and freed on every path. Built for simple_chat's remembered-session token, which must never touch disk in clear.

## [2.0.0] - 2026-08-29

### Security

Three defects, present since the first release, were found on 2026-08-29
while evaluating this library for a password-protected server, and are
fixed here. We are stating them plainly.

- **PBKDF2-SHA256 was not PBKDF2.** ISE's EEL library returns a MAC as a big
  integer, and `as_bytes` on a number omits leading zero bytes. Whenever an
  intermediate value of the PBKDF2 chain began with `0x00` - about one
  iteration in 256, which on the standard "password"/"salt" vector first
  happens at iteration 119 - the digest came back as 31 bytes and the
  chain was corrupted from there on. Iterations 1-118 matched Python's
  `hashlib`; 119 and beyond did not. At the 600,000-iteration default,
  every hash ever produced was affected. The result was still a
  deterministic one-way value, but not the standard algorithm, and no
  other implementation would verify it. The claim "OWASP compliant" was
  therefore untrue.
- **HMAC-SHA256 returned 31 bytes one time in 256**, for the same reason;
  the hex form was 62 characters instead of 64.
- **`secure_random` was Eiffel's `RANDOM`** - a linear congruential
  generator seeded from the clock XOR a counter. Salts, tokens and API
  keys drawn from it were predictable. The class said so in a comment;
  the name said otherwise.

Why the test suite did not catch it: the PBKDF2 known-answer test ran a
single iteration, and the password round-trip test only checked that the
code agreed with itself. This code was generated and tested with Claude
(Opus 4.x) in 2025; the defects were found by running one independent
test vector against Python's `hashlib`.

Impact: password hashes written by any earlier version **do not verify**
under 2.0.0 and must be re-created. No shipped simple_* application is
known to have stored them.

### Added
- Native backend on Windows through CNG (`bcrypt.dll`): `BCryptHash` for
  SHA-256 and HMAC-SHA256, `BCryptDeriveKeyPBKDF2` for PBKDF2, and
  `BCryptGenRandom` for the CSPRNG. Nothing to redistribute. Hash, verify
  and reject at 600,000 iterations: 3 min 27 s before, 0.29 s after.
- `is_native`, `is_secure_random_available`.
- Portable implementations exposed as `sha256_bytes_portable`,
  `hmac_sha256_bytes_portable`, `pbkdf2_sha256_bytes_portable`, so the
  fallback can be tested against the native path.
- Known-answer tests: the RFC 7914 PBKDF2-HMAC-SHA256 vectors, the
  iteration-119 regression, leading-zero HMAC and SHA-256 digests, a
  native-vs-portable cross-check, and a CSPRNG availability check.

### Changed
- `secure_random` (`random_bytes`) draws from the operating system's CSPRNG
  only - Windows CNG, or `/dev/urandom` elsewhere - and raises if that
  source is unavailable. There is no pseudo-random fallback.
- `hmac_sha256_bytes` now guarantees 32 bytes (postcondition).
- `verify_password` rejects malformed stored hashes (odd-length salt,
  non-positive iteration count) instead of attempting them.
- The password tests run at the real default of 600,000 iterations.

### Removed
- `random_counter` (an implementation detail of the removed PRNG).

## [Unreleased]

### Changed
- Post-session update 2025-12-08 20:52
- Remove EIFGENs from git tracking
- Post-session update 2025-12-08 20:45
- Post-session update 2025-12-08 20:16
- Add Phase 2 & 3 enhancements: streaming, advanced options, fluent builders, interceptors, cookies
- first commit

## [1.0.0] - 2025-12-08

### Added
- Initial release
- Core functionality implemented
- Test suite with comprehensive coverage
- Documentation and examples

[Unreleased]: https://github.com/simple-eiffel/simple_encryption/compare/v1.0.0...HEAD
[1.0.0]: https://github.com/simple-eiffel/simple_encryption/releases/tag/v1.0.0
