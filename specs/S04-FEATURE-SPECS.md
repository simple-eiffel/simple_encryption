# S04-FEATURE-SPECS.md
## simple_encryption - Feature Specifications

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. SHA-256 Hashing

### 1.1 sha256 / hash / digest / checksum

**Signature:** `(a_data: STRING): STRING`
**Purpose:** Compute SHA-256 hash of data
**Output:** 64-character lowercase hex string

**Implementation:**
1. Create SHA256 hasher
2. Feed string data via `sink_string`
3. Finalize and extract 32-byte digest
4. Convert to hex string

**Example:**
```eiffel
hash := crypto.sha256 ("Hello, World!")
-- Returns: "dffd6021bb2bd5b0af676290809ec3a53191dd81c7f70a4b28688a362182986f"
```

### 1.2 sha256_bytes

**Signature:** `(a_data: STRING): SPECIAL [NATURAL_8]`
**Purpose:** Compute SHA-256 as raw bytes
**Output:** 32-byte array

---

## 2. HMAC-SHA256

### 2.1 hmac_sha256 / sign / mac / authenticate

**Signature:** `(a_key, a_data: STRING): STRING`
**Purpose:** Compute HMAC-SHA256 message authentication code
**Output:** 64-character lowercase hex string

**Implementation:**
1. Create HMAC_SHA256 with ASCII key
2. Feed data bytes via `byte_sink`
3. Finish and extract MAC
4. Convert to hex string

**Use Cases:**
- API request signing
- Message authentication
- Webhook verification

### 2.2 hmac_sha256_bytes

**Signature:** `(a_key, a_data: STRING): SPECIAL [NATURAL_8]`
**Purpose:** Compute HMAC-SHA256 as raw bytes

---

## 3. Password Hashing (PBKDF2)

### 3.1 hash_password / secure_password / encrypt_password

**Signature:** `(a_password: STRING): STRING`
**Purpose:** Securely hash a password for storage
**Output:** Combined string `salt$iterations$hash`

**Implementation:**
1. Generate 16 random bytes for salt
2. Apply PBKDF2-SHA256 with configured iterations
3. Derive 32-byte key
4. Format: `{salt_hex}${iterations}${hash_hex}`

**Security Properties:**
- 128-bit random salt prevents rainbow tables
- 600,000 iterations (OWASP 2025 recommendation)
- Timing-safe verification

**Example:**
```eiffel
stored := crypto.hash_password ("mysecret123")
-- Returns: "a1b2c3d4e5f6...89ab$600000$fedcba9876...1234"
```

### 3.2 verify_password / check_password / validate_password

**Signature:** `(a_password, a_stored_hash: STRING): BOOLEAN`
**Purpose:** Verify password against stored hash
**Output:** True if password matches

**Implementation:**
1. Parse stored hash into salt, iterations, expected hash
2. Recompute hash with same parameters
3. Compare using constant-time algorithm

**Security:**
- Constant-time comparison prevents timing attacks
- Returns False for malformed stored hash

### 3.3 pbkdf2_sha256

**Signature:** `(a_password: STRING; a_salt: SPECIAL [NATURAL_8]; a_iterations, a_key_length: INTEGER): STRING`
**Purpose:** Raw PBKDF2 key derivation
**Output:** Hex-encoded derived key

**Algorithm (RFC 2898):**
```
DK = T1 || T2 || ... || Tn
Ti = F(Password, Salt, c, i)
F = U1 xor U2 xor ... xor Uc
U1 = PRF(Password, Salt || INT(i))
Uj = PRF(Password, U(j-1))
```

### 3.4 pbkdf2_sha256_bytes

**Signature:** `(...): SPECIAL [NATURAL_8]`
**Purpose:** Raw PBKDF2 returning bytes

---

## 4. Random Generation

### 4.1 random_bytes / generate_bytes / secure_random

**Signature:** `(a_count: INTEGER): SPECIAL [NATURAL_8]`
**Purpose:** Generate random bytes
**Output:** Array of `a_count` random bytes

**Implementation:**
- Uses Eiffel RANDOM class
- Seeded with timestamp + counter for variability
- Skips first 10 values for better randomness

**Warning:** Not cryptographically secure (uses PRNG, not CSPRNG)

### 4.2 random_hex

**Signature:** `(a_count: INTEGER): STRING`
**Purpose:** Generate random bytes as hex string
**Output:** `a_count * 2` character hex string

### 4.3 random_token / generate_token / api_key

**Signature:** `(a_length: INTEGER): STRING`
**Purpose:** Generate URL-safe random token
**Output:** `a_length` character Base64-URL string

**Implementation:**
1. Generate sufficient random bytes
2. Base64 encode
3. Replace `+` with `-`, `/` with `_`
4. Remove padding (`=`)
5. Truncate to requested length

**Use Cases:**
- API keys
- Session tokens
- Password reset tokens

---

## 5. Encoding Utilities

### 5.1 bytes_to_hex / to_hex / hex_encode

**Signature:** `(a_bytes: SPECIAL [NATURAL_8]): STRING`
**Purpose:** Convert bytes to lowercase hex string
**Output:** `a_bytes.count * 2` character string

### 5.2 hex_to_bytes / from_hex / hex_decode

**Signature:** `(a_hex: STRING): SPECIAL [NATURAL_8]`
**Purpose:** Convert hex string to bytes
**Validation:** Requires even-length input

---

## 6. Implementation Details

### 6.1 Constants

| Constant | Value | Description |
|----------|-------|-------------|
| `Default_pbkdf2_iterations` | 600,000 | OWASP 2025 recommendation |
| `hex_chars` | "0123456789abcdef" | Hex digit lookup |

### 6.2 Private Helpers

| Method | Purpose |
|--------|---------|
| `feed_string_to_sha256` | Feed string to SHA256 hasher |
| `feed_string_to_hmac` | Feed string to HMAC |
| `hmac_sha256_bytes_special` | HMAC for PBKDF2 inner loop |
| `bytes_to_string` | Convert bytes for Base64 |
| `constant_time_compare` | Timing-safe string comparison |
| `hex_value` | Hex character to integer |

### 6.3 Timing-Safe Comparison

```eiffel
constant_time_compare (a, b: STRING): BOOLEAN
    -- Compare strings in constant time to prevent timing attacks
    local
        i, l_diff: INTEGER
    do
        if a.count = b.count then
            from i := 1 until i > a.count loop
                l_diff := l_diff.bit_or (a.item(i).code.bit_xor (b.item(i).code))
                i := i + 1
            end
            Result := l_diff = 0
        end
    end
```
