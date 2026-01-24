# S06-BOUNDARIES.md
## simple_encryption - API Boundaries

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. Public API Surface

### 1.1 Exported Features (Public)

#### Creation
- `make`

#### Settings
- `pbkdf2_iterations: INTEGER`
- `set_pbkdf2_iterations (INTEGER)`

#### SHA-256 Hashing
- `sha256 (STRING): STRING`
- `hash (STRING): STRING` (alias)
- `digest (STRING): STRING` (alias)
- `checksum (STRING): STRING` (alias)
- `sha256_bytes (STRING): SPECIAL [NATURAL_8]`

#### HMAC-SHA256
- `hmac_sha256 (STRING, STRING): STRING`
- `sign (STRING, STRING): STRING` (alias)
- `mac (STRING, STRING): STRING` (alias)
- `authenticate (STRING, STRING): STRING` (alias)
- `hmac_sha256_bytes (STRING, STRING): SPECIAL [NATURAL_8]`

#### Password Hashing
- `hash_password (STRING): STRING`
- `secure_password (STRING): STRING` (alias)
- `encrypt_password (STRING): STRING` (alias)
- `verify_password (STRING, STRING): BOOLEAN`
- `check_password (STRING, STRING): BOOLEAN` (alias)
- `validate_password (STRING, STRING): BOOLEAN` (alias)
- `pbkdf2_sha256 (STRING, SPECIAL, INTEGER, INTEGER): STRING`
- `pbkdf2_sha256_bytes (STRING, SPECIAL, INTEGER, INTEGER): SPECIAL [NATURAL_8]`

#### Random Generation
- `random_bytes (INTEGER): SPECIAL [NATURAL_8]`
- `generate_bytes (INTEGER): SPECIAL [NATURAL_8]` (alias)
- `secure_random (INTEGER): SPECIAL [NATURAL_8]` (alias)
- `random_hex (INTEGER): STRING`
- `random_token (INTEGER): STRING`
- `generate_token (INTEGER): STRING` (alias)
- `api_key (INTEGER): STRING` (alias)

#### Encoding Utilities
- `bytes_to_hex (SPECIAL [NATURAL_8]): STRING`
- `to_hex (SPECIAL [NATURAL_8]): STRING` (alias)
- `hex_encode (SPECIAL [NATURAL_8]): STRING` (alias)
- `hex_to_bytes (STRING): SPECIAL [NATURAL_8]`
- `from_hex (STRING): SPECIAL [NATURAL_8]` (alias)
- `hex_decode (STRING): SPECIAL [NATURAL_8]` (alias)

### 1.2 Internal State
- `random_counter: INTEGER` - Counter for random seeding (not exported)

## 2. Hidden Implementation

### 2.1 Private Features (NONE export)
- `Default_pbkdf2_iterations: INTEGER = 600000`
- `hex_chars: STRING = "0123456789abcdef"`
- `hex_value (CHARACTER): INTEGER`
- `feed_string_to_sha256 (SHA256, STRING)`
- `feed_string_to_hmac (HMAC_SHA256, STRING)`
- `hmac_sha256_bytes_special (STRING, SPECIAL): SPECIAL`
- `bytes_to_string (SPECIAL): STRING`
- `constant_time_compare (STRING, STRING): BOOLEAN`

## 3. Dependency Boundaries

### 3.1 ISE EEL Dependency
- Uses: `SHA256`, `HMAC_SHA256`
- No direct exposure of EEL types in public API
- All crypto details hidden behind STRING interface

### 3.2 simple_* Dependencies
- **simple_base64:** Used internally for token generation
- **simple_datetime:** Used for random seeding

### 3.3 Base Library Dependency
- Uses: `STRING`, `SPECIAL [NATURAL_8]`, `RANDOM`
- Standard Eiffel types exposed in public API

## 4. Extension Points

### 4.1 Subclassing
- Class is not deferred
- Can be subclassed for specialized crypto needs
- Private helpers accessible via inheritance

### 4.2 Configuration
- PBKDF2 iterations configurable at runtime
- No other configuration options

## 5. Integration Patterns

### 5.1 Password Storage
```eiffel
-- Registration
crypto: SIMPLE_ENCRYPTION
create crypto.make
password_hash := crypto.hash_password (user_password)
db.store_user (username, password_hash)

-- Login
stored_hash := db.get_password_hash (username)
if crypto.verify_password (input_password, stored_hash) then
    -- Login successful
end
```

### 5.2 API Request Signing
```eiffel
-- Create signature
timestamp := dt.now.to_timestamp.out
payload := method + path + timestamp + body
signature := crypto.hmac_sha256 (api_secret, payload)

-- Send request with signature header
request.add_header ("X-Signature", signature)
request.add_header ("X-Timestamp", timestamp)
```

### 5.3 Session Token Generation
```eiffel
-- Generate session token
session_token := crypto.random_token (32)  -- 32-character URL-safe token

-- Store with session data
session_store.put (session_token, user_data)
```

### 5.4 Data Integrity Verification
```eiffel
-- Compute checksum
content := file.content
checksum := crypto.sha256 (content)

-- Verify integrity
if crypto.sha256 (downloaded_content) ~ stored_checksum then
    -- File is intact
end
```

### 5.5 Webhook Verification
```eiffel
-- Verify webhook from external service
expected_signature := crypto.hmac_sha256 (webhook_secret, request_body)
if request.header ("X-Signature") ~ expected_signature then
    -- Webhook is authentic
end
```

## 6. Type Safety

### 6.1 No Nulls
- All methods return attached types
- No Void results from public API

### 6.2 Byte Array Handling
- Raw bytes use `SPECIAL [NATURAL_8]`
- Hex encoding/decoding for string storage
- Base64 encoding for URL-safe tokens
