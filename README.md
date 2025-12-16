# SIMPLE_ENCRYPTION

Simple encryption and hashing wrapper for ISE EEL library with secure password hashing.

## Features

- SHA-256 hashing
- HMAC-SHA256 message authentication
- PBKDF2-SHA256 password hashing (OWASP 2025 compliant)
- Secure password verification
- Random token generation
- Hex encoding utilities

## Installation

Add to your ECF file:

```xml
<library name="simple_encryption" location="$SIMPLE_ENCRYPTION/simple_encryption.ecf"/>
```

Set the environment variable:
```
SIMPLE_ENCRYPTION=/path/to/simple_encryption
```

## Quick Start (Zero-Configuration)

Use `SIMPLE_ENCRYPTION_QUICK` for the simplest possible crypto operations:

```eiffel
local
    crypto: SIMPLE_ENCRYPTION_QUICK
    hash, stored_hash, token, signature: STRING
do
    create crypto.make

    -- Hash a password for storage (uses PBKDF2 with random salt)
    stored_hash := crypto.hash_password ("user-password")

    -- Verify password against stored hash
    if crypto.verify_password ("user-password", stored_hash) then
        print ("Login successful!")
    end

    -- Quick SHA-256 hash
    hash := crypto.hash ("Hello, World!")
    -- Also available as: crypto.checksum ("data")

    -- Generate random token (32 hex characters)
    token := crypto.random_token (32)

    -- Generate random alphanumeric string (good for temp passwords)
    print (crypto.random_string (8))  -- e.g., "Kp7nXm2Q"

    -- HMAC signature for API requests
    signature := crypto.sign ("secret-key", "data-to-sign")

    -- Verify HMAC signature
    if crypto.verify_signature ("secret-key", "data-to-sign", signature) then
        print ("Signature valid!")
    end
end
```

## Standard API (Full Control)

Use `SIMPLE_ENCRYPTION` for complete control:

```eiffel
local
    enc: SIMPLE_ENCRYPTION
    hash, stored, token: STRING
do
    create enc.make

    -- SHA-256 hash
    hash := enc.sha256 ("Hello, World!")
    print ("SHA-256: " + hash + "%N")

    -- HMAC-SHA256
    hash := enc.hmac_sha256 ("secret_key", "message")

    -- Hash a password (returns: salt$iterations$hash)
    stored := enc.hash_password ("user_password")

    -- Verify password
    if enc.verify_password ("user_password", stored) then
        print ("Password verified%N")
    end

    -- Generate random token
    token := enc.random_token (32)
end
```

## API Overview

### SIMPLE_ENCRYPTION

| Feature | Description |
|---------|-------------|
| `sha256 (data)` | SHA-256 hash as hex string |
| `sha256_bytes (data)` | SHA-256 hash as bytes |
| `hmac_sha256 (key, data)` | HMAC-SHA256 as hex |
| `hash_password (password)` | Secure password hash |
| `verify_password (password, stored)` | Verify password |
| `pbkdf2_sha256 (password, salt, iterations, length)` | Key derivation |
| `random_bytes (count)` | Random bytes |
| `random_hex (count)` | Random hex string |
| `random_token (length)` | URL-safe random token |
| `bytes_to_hex (bytes)` | Convert to hex |
| `hex_to_bytes (hex)` | Convert from hex |

## Documentation

- [API Documentation](https://simple-eiffel.github.io/simple_encryption/)

## Security Notes

- PBKDF2 uses 600,000 iterations by default (OWASP 2025 recommendation)
- Password verification uses constant-time comparison
- Random generation uses time-based seeding (not cryptographically secure)

## Dependencies

- simple_base64

## License

MIT License - see LICENSE file for details.

## Author

Larry Rix
