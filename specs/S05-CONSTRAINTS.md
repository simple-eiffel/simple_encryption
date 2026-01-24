# S05-CONSTRAINTS.md
## simple_encryption - Constraints and Limitations

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. Algorithm Constraints

### 1.1 Hash Algorithms
- **Available:** SHA-256 only
- **Not Available:** SHA-1, SHA-384, SHA-512, SHA-3, MD5
- **Rationale:** SHA-256 is sufficient for most use cases

### 1.2 Encryption Algorithms
- **Not Implemented:** AES, RSA, or any encryption
- **Rationale:** Current version focuses on hashing/PBKDF2
- **Future:** AES-256-GCM planned per research

### 1.3 Password Hashing
- **Available:** PBKDF2-SHA256
- **Not Available:** bcrypt, scrypt, Argon2
- **Warning:** PBKDF2 is vulnerable to GPU attacks compared to Argon2

## 2. Random Number Constraints

### 2.1 Not Cryptographically Secure
- **Constraint:** Uses Eiffel RANDOM (PRNG)
- **Risk:** Predictable under adversarial conditions
- **Mitigation:** Seeded with timestamp + counter
- **Recommendation:** Use platform CSPRNG for high-security applications

### 2.2 Seeding
- **Constraint:** Seed based on current timestamp
- **Impact:** Multiple instances created in same second may correlate
- **Mitigation:** Counter added to seed

## 3. Input Constraints

### 3.1 String Encoding
- **Constraint:** ASCII assumed for keys and data
- **Impact:** Unicode strings may not hash correctly
- **Workaround:** Use UTF-8 encoding before hashing

### 3.2 Empty Data
- **Constraint:** `sha256` handles empty strings
- **Behavior:** Returns hash of empty string
- **Note:** `hash_password` requires non-empty password

### 3.3 Hex String Validation
- **Constraint:** `hex_to_bytes` requires even-length hex string
- **Behavior:** No validation of hex characters (0-9, a-f)
- **Risk:** Invalid hex silently produces wrong bytes

## 4. Output Constraints

### 4.1 Fixed Output Sizes
| Operation | Output Size |
|-----------|-------------|
| SHA-256 | 32 bytes (64 hex chars) |
| HMAC-SHA256 | 32 bytes (64 hex chars) |
| Password hash | Variable (salt$iter$hash) |

### 4.2 Encoding
- **Hex:** Always lowercase
- **Base64:** URL-safe variant for tokens

## 5. Performance Constraints

### 5.1 PBKDF2 Iterations
- **Default:** 600,000 iterations
- **Impact:** ~0.5-1 second per password hash
- **Tuning:** Can reduce via `set_pbkdf2_iterations`
- **Warning:** Fewer iterations = weaker security

### 5.2 Large Data
- **Constraint:** Entire input loaded to memory
- **Impact:** Very large strings may cause memory issues
- **Recommendation:** Stream processing not supported

## 6. Security Constraints

### 6.1 Key Management
- **Constraint:** Library does not manage key storage
- **Responsibility:** Application must securely store keys

### 6.2 Memory Security
- **Constraint:** No memory wiping after use
- **Risk:** Sensitive data may remain in memory
- **Mitigation:** GC will eventually reclaim

### 6.3 Side Channel Attacks
- **Mitigation:** Constant-time comparison for passwords
- **Remaining Risk:** Other timing leaks possible

## 7. Feature Gaps (vs Research Recommendations)

| Feature | Status | Notes |
|---------|--------|-------|
| SHA-256 hashing | Implemented | |
| HMAC-SHA256 | Implemented | |
| PBKDF2 password hashing | Implemented | 600k iterations |
| Random bytes | Implemented | PRNG, not CSPRNG |
| Random tokens | Implemented | URL-safe Base64 |
| Hex encoding | Implemented | |
| AES-256-GCM encryption | NOT Implemented | Planned |
| Auto IV/nonce handling | NOT Implemented | Planned |
| File encryption | NOT Implemented | Planned |
| bcrypt/Argon2 | NOT Implemented | PBKDF2 only |
| CSPRNG | NOT Implemented | Uses PRNG |

## 8. Recommendations

### For High-Security Applications
1. Do not rely solely on `random_bytes` for cryptographic keys
2. Consider increasing PBKDF2 iterations for sensitive passwords
3. Implement additional input validation for hex strings
4. Store password hashes, never raw passwords

### For General Use
1. Library is suitable for:
   - API request signing (HMAC)
   - Password storage (PBKDF2)
   - Session token generation
   - Data integrity checking (SHA-256)

2. Library is NOT suitable for:
   - Encrypting sensitive data (no AES yet)
   - Cryptographic key generation (PRNG weakness)
   - High-performance bulk hashing
