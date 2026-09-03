# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [2.1.1] - 2026-09-02

### Fixed

- **`c_senc_pbkdf2` is now `blocking`, and its buffers moved to the C heap
  so that marking it is legal.** These are one change; neither is correct
  without the other.

  ISE's garbage collector stops every thread of the system before it
  collects, and a thread inside a plain `external "C inline"` call is one the
  runtime can neither see nor stop: the collection WAITS for that call to
  return, and every other processor waits with it, at its very next
  allocation. Key stretching is the one place in a program where slowness is
  the *feature* — 600,000 iterations is the OWASP floor and simple_chat's
  `PASSWORD_HASHER` enforces it — so this library held the collector for the
  whole of every derivation. On a chat server that is once per login, once
  per verification, once per registration, with the request loop, the poller
  and the writer stopped alongside.

  The defect class was proved in simple_winhttp 0.1.1 earlier the same day,
  from a GUI that froze for 211 seconds in one session. This library was
  audited for the same shape immediately after.

  **Why the marker alone would have been a worse bug than the freeze.**
  `pbkdf2_sha256_bytes` handed the C layer three raw addresses into
  Eiffel-collected memory — `a_password.area.base_address`,
  `a_salt.base_address` and `Result.base_address`, all `SPECIAL` areas. Those
  addresses were safe only *accidentally*: no collection could begin while
  the thread sat in the unmarked call, so nothing could move underneath it.
  The `blocking` marker removes exactly that accidental protection — it tells
  the runtime to collect *while* the C code is still working, and a
  collection may move an Eiffel object. Marking the call and leaving the
  buffers where they were would have traded a freeze for memory corruption in
  the password path.

  So the password and the salt are copied into `MANAGED_POINTER`s on the C
  heap, the key is derived into a third, and the bytes are copied back
  afterwards — the same shape `dpapi_protect` has used since 2.1.0. The C
  heap copy of the password is zeroed before it is released. The copies cost
  microseconds against a KDF measured in hundreds of milliseconds; at the
  600,000-iteration default they are under a thousandth of the call.

  **The algorithm did not change.** All twenty existing tests pass unchanged,
  the RFC 8018 vectors and the `test_pbkdf2_leading_zero_regression` that
  pins the 2.0.0 security defect among them, and
  `test_portable_agrees_with_native` still holds the CNG path and the
  portable path to the same answers.

  **Everything else stays unmarked, deliberately.** `c_senc_sha256`,
  `c_senc_hmac` and `c_senc_random` are microseconds — there is no stall
  worth reclaiming — and their callers still pass `base_address` of Eiffel
  areas, which is safe *because* those calls are unmarked. That is the rule
  this library now states in the source: **an external that hands C the
  address of an Eiffel area must NOT be marked, and an external that is
  marked must hand C nothing but the C heap.** The DPAPI calls already pass
  `MANAGED_POINTER`s and could be marked, but `CryptProtectData` on a local
  blob is a few milliseconds, so they are left alone.

### Added

- `simple_encryption_scoop_tests` — a SCOOP target carrying the vector test
  that would have caught this. `BLOCKING_PROBE` holds the law itself (the
  same 3 s wait taken three ways: an Eiffel sleep, an unmarked C call, the
  same call marked `blocking`); `PBKDF2_HASHER` drives the REAL
  `pbkdf2_sha256_bytes` from its own processor while the root does nothing
  but allocate. The derived key is checked to be non-zero, because the C
  layer zeroes its output on every failure path and an assault that measured
  a derivation which never happened would prove nothing.

  RED (`c_senc_pbkdf2` unmarked, buffers on the Eiffel heap), two runs: worst
  allocation on the root **3,026 ms** and **4,533 ms**, for derivations of
  3,025 ms and 4,531 ms. The root waited out the whole KDF, to the
  millisecond. 3 passed, 1 failed.
  GREEN (marked, buffers on the C heap), three runs: **5, 4 and 3 ms**, for
  derivations of 2,850 / 3,208 / 2,426 ms. 4 passed, 0 failed. The bound is
  500 ms — three orders of magnitude off the measured green.

  The assault runs 16,000,000 iterations so that ONE derivation lasts about
  three seconds and its stall is measurable on its own. That is a magnifying
  glass, not a straw man: BCrypt's PBKDF2-SHA256 runs about 5,000 iterations
  per millisecond on this machine, so at the 600,000-iteration production
  floor the same stall is about 120 ms — on every login.

  THE PROBE MUST RETAIN A LIVE SET, AND MUST ASK. Every allocation burst
  keeps 200 KiB of what it allocates, so the heap grows and the collector has
  real work when it runs; and each burst then calls `MEMORY.full_collect`
  inside the timed span. Without the ask the instrument is flaky — measured
  in simple_shell the same day, roughly one run in four the runtime answered
  a whole six-second burst train out of a free list an earlier test had left
  it, never collected, and the UNMARKED wait scored single digits: the freeze
  reported as absent when it was merely unexercised. What the marker changes
  is not whether a collection is wanted but whether a requested one can
  proceed while another processor is inside C.

### Verified at the consumer

`simple_chat` is the only consumer (`grep -rl simple_encryption
/d/prod/simple_*/*.ecf`), and its server tests already cover login hashing.
Nothing there was edited; `simple_chat_tests` was clean-built and run.

| | before (main) | after (2.1.1) |
|---|---|---|
| `simple_encryption_tests` | 20 passed, 0 failed | 20 passed, 0 failed |
| `simple_chat_tests` | 187 passed, 1 failed | 187 passed, 1 failed |

simple_chat's one failure is `a_blocking_c_call_on_another_processor_stops_the_allocator`,
its own mechanism probe, and it is **pre-existing and unrelated**: it was
measured at 187/1 with both this library and simple_shell checked out at
pristine `main`, then again on the branches, with the identical reading of
1 ms. The cause is the weakness described above — that probe's
`worst_allocation_burst` allocates pure garbage, retains no live set and never
calls `full_collect`, so whether the runtime collects at all during its six
seconds is a heap-state accident. It is reporting the freeze as absent, not
reporting a regression. The fix belongs in that repository.

Zero compiler warnings.

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
