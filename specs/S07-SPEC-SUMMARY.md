# S07-SPEC-SUMMARY.md
## simple_encryption - Specification Summary

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. Library Identity

| Attribute | Value |
|-----------|-------|
| **Name** | simple_encryption |
| **Version** | 1.0 |
| **Purpose** | Cryptographic wrapper with safe defaults |
| **Facade** | SIMPLE_ENCRYPTION |
| **Classes** | 1 |

## 2. Feature Summary

| Category | Count | Features |
|----------|-------|----------|
| Settings | 2 | pbkdf2_iterations, set_pbkdf2_iterations |
| SHA-256 | 5 | sha256 (4 aliases), sha256_bytes |
| HMAC-SHA256 | 5 | hmac_sha256 (4 aliases), hmac_sha256_bytes |
| Password Hashing | 8 | hash_password (3 aliases), verify_password (3 aliases), pbkdf2_* |
| Random Generation | 7 | random_bytes (3 aliases), random_hex, random_token (3 aliases) |
| Encoding | 6 | bytes_to_hex (3 aliases), hex_to_bytes (3 aliases) |
| **Total** | **33** | |

## 3. Security Parameters

| Parameter | Value | Standard |
|-----------|-------|----------|
| Hash Algorithm | SHA-256 | FIPS 180-4 |
| MAC Algorithm | HMAC-SHA256 | RFC 2104 |
| KDF Algorithm | PBKDF2-SHA256 | RFC 2898 |
| KDF Iterations | 600,000 | OWASP 2025 |
| Salt Size | 128 bits | Industry standard |
| Key Size | 256 bits | AES-256 compatible |

## 4. Design Patterns

| Pattern | Implementation |
|---------|----------------|
| Facade | Single class hides EEL complexity |
| Alias Methods | Multiple names for ergonomics |
| Safe Defaults | 600k PBKDF2 iterations |
| Timing-Safe | Constant-time password comparison |

## 5. Contract Summary

| Contract Type | Count |
|---------------|-------|
| Preconditions | 18 |
| Postconditions | 22 |
| Class Invariants | 0 |

**Key Validations:**
- Non-empty strings for passwords/keys
- Positive counts for lengths/iterations
- Even-length for hex strings

## 6. Dependency Graph

```
simple_encryption
    |
    +-- eel (ISE Encryption Library)
    |       |
    |       +-- SHA256
    |       +-- HMAC_SHA256
    |
    +-- simple_base64 (token encoding)
    |
    +-- simple_datetime (random seeding)
    |
    +-- base (ISE standard library)
            |
            +-- RANDOM
            +-- SPECIAL [NATURAL_8]
            +-- STRING
```

## 7. Password Hash Format

```
salt$iterations$hash

Example:
a1b2c3d4e5f6g7h8i9j0k1l2m3n4o5p6$600000$fedcba9876543210...

Where:
- salt: 32 hex chars (16 bytes)
- iterations: integer (default 600000)
- hash: 64 hex chars (32 bytes)
```

## 8. Usage Example

```eiffel
class APPLICATION
feature
    main
        local
            crypto: SIMPLE_ENCRYPTION
            password_hash, signature, token: STRING
        do
            create crypto.make

            -- Hash password for storage
            password_hash := crypto.hash_password ("user_secret_123")
            print ("Stored: " + password_hash + "%N")

            -- Verify password on login
            if crypto.verify_password ("user_secret_123", password_hash) then
                print ("Login successful%N")
            end

            -- Sign API request
            signature := crypto.sign ("my_api_key", "GET/api/users1234567890")
            print ("Signature: " + signature + "%N")

            -- Generate session token
            token := crypto.random_token (32)
            print ("Token: " + token + "%N")

            -- Compute file checksum
            print ("SHA256: " + crypto.sha256 ("file content") + "%N")
        end
end
```

## 9. Quality Metrics

| Metric | Value |
|--------|-------|
| Void Safety | Full |
| SCOOP Ready | Yes |
| Contract Coverage | Comprehensive |
| API Simplicity | High (single class) |
| Security Compliance | OWASP 2025 |

## 10. Limitations

| Limitation | Impact | Workaround |
|------------|--------|------------|
| No AES encryption | Cannot encrypt data | Use EEL directly |
| PRNG not CSPRNG | Predictable under attack | Platform CSPRNG |
| No bcrypt/Argon2 | GPU-vulnerable passwords | Higher iterations |
| ASCII only | Unicode may fail | UTF-8 encode first |
