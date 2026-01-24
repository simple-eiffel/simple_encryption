# S02-CLASS-CATALOG.md
## simple_encryption - Class Catalog

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. Class Hierarchy

```
SIMPLE_ENCRYPTION (standalone facade)
```

## 2. Class Description

### SIMPLE_ENCRYPTION

**Purpose:** Cryptographic wrapper providing hashing, HMAC, password hashing, and random generation.

**Creation:**
| Procedure | Description |
|-----------|-------------|
| `make` | Create encryption helper with default settings |

**Features by Category:**

#### Settings
- `pbkdf2_iterations: INTEGER` - Iteration count (default: 600,000)
- `set_pbkdf2_iterations (count)` - Set iteration count

#### SHA-256 Hashing
- `sha256`, `hash`, `digest`, `checksum (data)`: STRING - Hex hash
- `sha256_bytes (data)`: SPECIAL [NATURAL_8] - Raw hash bytes

#### HMAC-SHA256
- `hmac_sha256`, `sign`, `mac`, `authenticate (key, data)`: STRING - Hex MAC
- `hmac_sha256_bytes (key, data)`: SPECIAL [NATURAL_8] - Raw MAC bytes

#### Password Hashing (PBKDF2)
- `hash_password`, `secure_password`, `encrypt_password (password)`: STRING
- `verify_password`, `check_password`, `validate_password (password, hash)`: BOOLEAN
- `pbkdf2_sha256 (password, salt, iterations, key_length)`: STRING
- `pbkdf2_sha256_bytes (...)`: SPECIAL [NATURAL_8]

#### Random Generation
- `random_bytes`, `generate_bytes`, `secure_random (count)`: SPECIAL [NATURAL_8]
- `random_hex (count)`: STRING
- `random_token`, `generate_token`, `api_key (length)`: STRING

#### Encoding Utilities
- `bytes_to_hex`, `to_hex`, `hex_encode (bytes)`: STRING
- `hex_to_bytes`, `from_hex`, `hex_decode (hex)`: SPECIAL [NATURAL_8]

## 3. Feature Aliases

The library provides multiple names for common operations (ergonomic aliases):

| Primary | Aliases |
|---------|---------|
| `sha256` | `hash`, `digest`, `checksum` |
| `hmac_sha256` | `sign`, `mac`, `authenticate` |
| `hash_password` | `secure_password`, `encrypt_password` |
| `verify_password` | `check_password`, `validate_password` |
| `random_bytes` | `generate_bytes`, `secure_random` |
| `random_token` | `generate_token`, `api_key` |
| `bytes_to_hex` | `to_hex`, `hex_encode` |
| `hex_to_bytes` | `from_hex`, `hex_decode` |

## 4. Internal Dependencies

### From ISE EEL
- `SHA256` - SHA-256 hash implementation
- `HMAC_SHA256` - HMAC-SHA256 implementation

### From simple_* ecosystem
- `SIMPLE_BASE64` - Base64 encoding for tokens
- `SIMPLE_DATE_TIME` - Timestamp for random seeding

### From base
- `RANDOM` - Pseudo-random number generation
- `SPECIAL [NATURAL_8]` - Byte arrays
