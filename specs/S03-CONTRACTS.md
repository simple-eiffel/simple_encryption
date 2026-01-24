# S03-CONTRACTS.md
## simple_encryption - Contracts Specification

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. Settings Contracts

### set_pbkdf2_iterations
```eiffel
require
    positive: a_count > 0
ensure
    set: pbkdf2_iterations = a_count
```

## 2. SHA-256 Hashing Contracts

### sha256 / hash / digest / checksum
```eiffel
require
    data_not_void: a_data /= Void
ensure
    result_not_void: Result /= Void
    result_length: Result.count = 64  -- 32 bytes * 2 hex chars
```

### sha256_bytes
```eiffel
require
    data_not_void: a_data /= Void
ensure
    result_not_void: Result /= Void
    result_length: Result.count = 32  -- 256 bits
```

## 3. HMAC-SHA256 Contracts

### hmac_sha256 / sign / mac / authenticate
```eiffel
require
    key_not_void: a_key /= Void
    data_not_void: a_data /= Void
ensure
    result_not_void: Result /= Void
    result_length: Result.count = 64  -- 32 bytes * 2 hex chars
```

### hmac_sha256_bytes
```eiffel
require
    key_not_void: a_key /= Void
    data_not_void: a_data /= Void
ensure
    result_not_void: Result /= Void
```

## 4. Password Hashing Contracts

### hash_password / secure_password / encrypt_password
```eiffel
require
    password_not_empty: not a_password.is_empty
ensure
    result_not_void: Result /= Void
    has_salt: Result.has ('$')  -- Format: salt$iterations$hash
```

### verify_password / check_password / validate_password
```eiffel
require
    password_not_empty: not a_password.is_empty
    hash_not_empty: not a_stored_hash.is_empty
```

### pbkdf2_sha256
```eiffel
require
    password_not_empty: not a_password.is_empty
    salt_not_void: a_salt /= Void
    iterations_positive: a_iterations > 0
    key_length_positive: a_key_length > 0
ensure
    result_not_void: Result /= Void
    result_length: Result.count = a_key_length * 2  -- hex encoding
```

### pbkdf2_sha256_bytes
```eiffel
require
    password_not_empty: not a_password.is_empty
    salt_not_void: a_salt /= Void
    iterations_positive: a_iterations > 0
    key_length_positive: a_key_length > 0
ensure
    result_not_void: Result /= Void
    result_length: Result.count = a_key_length
```

## 5. Random Generation Contracts

### random_bytes / generate_bytes / secure_random
```eiffel
require
    count_positive: a_count > 0
ensure
    result_not_void: Result /= Void
    result_length: Result.count = a_count
```

### random_hex
```eiffel
require
    count_positive: a_count > 0
ensure
    result_not_void: Result /= Void
    result_length: Result.count = a_count * 2  -- hex encoding
```

### random_token / generate_token / api_key
```eiffel
require
    length_positive: a_length > 0
ensure
    result_not_void: Result /= Void
    result_length: Result.count = a_length
```

## 6. Encoding Utility Contracts

### bytes_to_hex / to_hex / hex_encode
```eiffel
require
    bytes_not_void: a_bytes /= Void
ensure
    result_not_void: Result /= Void
    result_length: Result.count = a_bytes.count * 2
```

### hex_to_bytes / from_hex / hex_decode
```eiffel
require
    hex_not_void: a_hex /= Void
    even_length: a_hex.count \\ 2 = 0
ensure
    result_not_void: Result /= Void
    result_length: Result.count = a_hex.count // 2
```

## 7. Contract Design Principles

1. **Non-empty Input:** Passwords, keys, and data must be non-empty where meaningful
2. **Positive Counts:** All length/count/iteration parameters must be positive
3. **Result Guarantees:** All methods guarantee non-void results
4. **Length Predictability:** Output lengths are predictable and documented
5. **Format Validation:** Hex strings must have even length

## 8. Security-Related Invariants

While not explicitly in class invariants:
- PBKDF2 iterations default to 600,000 (OWASP 2025)
- Salt is always 16 bytes (128 bits)
- Hash output is always 32 bytes (256 bits)
- Timing-safe comparison used for password verification
