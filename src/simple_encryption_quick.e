note
	description: "[
		Zero-configuration encryption facade for beginners.

		One-liner crypto operations - no security knowledge required.
		For full control, use SIMPLE_ENCRYPTION directly.

		Quick Start Examples:
			create crypto.make

			-- Hash a password for storage
			hash := crypto.hash_password ("user-password")

			-- Verify password against stored hash
			if crypto.verify_password ("user-password", stored_hash) then
				print ("Login successful!")
			end

			-- Quick SHA-256 hash
			checksum := crypto.hash ("Hello, World!")

			-- Generate random token
			token := crypto.random_token (32)

			-- HMAC for API signatures
			signature := crypto.sign ("secret-key", "data-to-sign")
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_ENCRYPTION_QUICK

create
	make

feature {NONE} -- Initialization

	make
			-- Create quick encryption facade.
		do
			create crypto.make
			create logger.make ("encryption_quick")
		ensure
			crypto_exists: crypto /= Void
		end

feature -- Password Hashing (Use for user passwords)

	hash_password (a_password: STRING): STRING
			-- Hash password for secure storage.
			-- Uses PBKDF2 with random salt - safe for database storage.
			-- Returns: "salt:hash" format string.
		require
			password_not_empty: not a_password.is_empty
		local
			l_salt, l_hash: STRING
		do
			logger.debug_log ("Hashing password")
			l_salt := random_hex (32)  -- 16 bytes = 32 hex chars
			l_hash := crypto.pbkdf2_sha256 (a_password, l_salt)
			Result := l_salt + ":" + l_hash
			logger.debug_log ("Password hashed successfully")
		ensure
			result_not_empty: not Result.is_empty
			has_separator: Result.has (':')
		end

	verify_password (a_password: STRING; a_stored_hash: STRING): BOOLEAN
			-- Verify password against stored hash.
			-- Use for login authentication.
		require
			password_not_empty: not a_password.is_empty
			hash_not_empty: not a_stored_hash.is_empty
			hash_has_salt: a_stored_hash.has (':')
		local
			l_parts: LIST [STRING]
			l_salt, l_expected_hash, l_actual_hash: STRING
		do
			logger.debug_log ("Verifying password")
			l_parts := a_stored_hash.split (':')
			if l_parts.count >= 2 then
				l_salt := l_parts.first
				l_expected_hash := l_parts.last
				l_actual_hash := crypto.pbkdf2_sha256 (a_password, l_salt)
				Result := constant_time_compare (l_expected_hash, l_actual_hash)
			end
			if Result then
				logger.debug_log ("Password verified successfully")
			else
				logger.debug_log ("Password verification failed")
			end
		end

feature -- Quick Hashing

	hash (a_data: STRING): STRING
			-- Compute SHA-256 hash of data.
			-- Returns 64-character hex string.
		require
			data_not_empty: not a_data.is_empty
		do
			Result := crypto.sha256 (a_data)
		ensure
			result_64_chars: Result.count = 64
		end

	checksum (a_data: STRING): STRING
			-- Alias for hash - compute SHA-256 checksum.
		require
			data_not_empty: not a_data.is_empty
		do
			Result := hash (a_data)
		ensure
			result_64_chars: Result.count = 64
		end

feature -- HMAC Signatures

	sign (a_key, a_data: STRING): STRING
			-- Create HMAC-SHA256 signature.
			-- Use for API request signing, webhooks, etc.
		require
			key_not_empty: not a_key.is_empty
			data_not_empty: not a_data.is_empty
		do
			Result := crypto.hmac_sha256 (a_key, a_data)
		ensure
			result_64_chars: Result.count = 64
		end

	verify_signature (a_key, a_data, a_signature: STRING): BOOLEAN
			-- Verify HMAC-SHA256 signature.
		require
			key_not_empty: not a_key.is_empty
			data_not_empty: not a_data.is_empty
			signature_not_empty: not a_signature.is_empty
		local
			l_expected: STRING
		do
			l_expected := sign (a_key, a_data)
			Result := constant_time_compare (l_expected, a_signature)
		end

feature -- Random Generation

	random_token (a_length: INTEGER): STRING
			-- Generate cryptographically secure random token.
			-- Returns hex string of specified length.
		require
			positive_length: a_length > 0
		do
			Result := random_hex (a_length)
		ensure
			correct_length: Result.count = a_length
		end

	random_bytes (a_count: INTEGER): STRING
			-- Generate random bytes as hex string.
			-- Returns 2*count hex characters.
		require
			positive_count: a_count > 0
		do
			Result := random_hex (a_count * 2)
		ensure
			correct_length: Result.count = a_count * 2
		end

	random_string (a_length: INTEGER): STRING
			-- Generate random alphanumeric string.
			-- Good for temporary passwords, verification codes.
		require
			positive_length: a_length > 0
		local
			l_chars: STRING
			l_random: RANDOM
			i: INTEGER
		do
			l_chars := "ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz23456789"  -- No confusing chars
			create l_random.set_seed (generate_seed)
			create Result.make (a_length)
			from i := 1 until i > a_length loop
				l_random.forth
				Result.append_character (l_chars.item ((l_random.item \\ l_chars.count) + 1))
				i := i + 1
			end
		ensure
			correct_length: Result.count = a_length
		end

feature -- Utility

	hex_to_bytes (a_hex: STRING): STRING
			-- Convert hex string to byte string.
		require
			hex_not_empty: not a_hex.is_empty
			even_length: a_hex.count \\ 2 = 0
		local
			i: INTEGER
		do
			create Result.make (a_hex.count // 2)
			from i := 1 until i > a_hex.count loop
				Result.append_character ((hex_char_to_int (a_hex.item (i)) * 16 + hex_char_to_int (a_hex.item (i + 1))).to_character_8)
				i := i + 2
			end
		end

	bytes_to_hex (a_bytes: STRING): STRING
			-- Convert byte string to hex string.
		require
			bytes_not_void: a_bytes /= Void
		local
			i: INTEGER
			c: CHARACTER
		do
			create Result.make (a_bytes.count * 2)
			from i := 1 until i > a_bytes.count loop
				c := a_bytes.item (i)
				Result.append (c.code.to_hex_string.substring (7, 8).as_lower)
				i := i + 1
			end
		ensure
			result_exists: Result /= Void
		end

feature -- Advanced Access

	crypto: SIMPLE_ENCRYPTION
			-- Access underlying encryption for advanced operations.

feature {NONE} -- Implementation

	logger: SIMPLE_LOGGER
			-- Logger for debugging.

	constant_time_compare (a, b: STRING): BOOLEAN
			-- Compare strings in constant time to prevent timing attacks.
		local
			l_result: INTEGER
			i: INTEGER
		do
			if a.count /= b.count then
				Result := False
			else
				from i := 1 until i > a.count loop
					l_result := l_result.bit_or (a.item (i).code.bit_xor (b.item (i).code))
					i := i + 1
				end
				Result := l_result = 0
			end
		end

	random_hex (a_length: INTEGER): STRING
			-- Generate random hex string.
		local
			l_random: RANDOM
			i: INTEGER
			l_chars: STRING
		do
			l_chars := "0123456789abcdef"
			create l_random.set_seed (generate_seed)
			create Result.make (a_length)
			from i := 1 until i > a_length loop
				l_random.forth
				Result.append_character (l_chars.item ((l_random.item \\ 16) + 1))
				i := i + 1
			end
		end

	generate_seed: INTEGER
			-- Generate seed from current time and process info.
		local
			l_dt: SIMPLE_DATE_TIME
		do
			create l_dt.make_now
			Result := l_dt.to_timestamp.to_integer_32.bit_xor (l_dt.millisecond)
		end

	hex_char_to_int (c: CHARACTER): INTEGER
			-- Convert hex character to integer.
		do
			inspect c
			when '0' .. '9' then
				Result := c.code - ('0').code
			when 'a' .. 'f' then
				Result := c.code - ('a').code + 10
			when 'A' .. 'F' then
				Result := c.code - ('A').code + 10
			else
				Result := 0
			end
		end

invariant
	crypto_exists: crypto /= Void
	logger_exists: logger /= Void

end
