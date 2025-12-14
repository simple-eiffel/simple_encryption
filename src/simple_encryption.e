note
	description: "Simple encryption and hashing wrapper for ISE EEL"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_ENCRYPTION

create
	make

feature {NONE} -- Initialization

	make
			-- Create encryption helper.
		do
			pbkdf2_iterations := Default_pbkdf2_iterations
		end

feature -- Access

	pbkdf2_iterations: INTEGER
			-- Number of iterations for PBKDF2 (default: 600,000)

feature -- Settings

	set_pbkdf2_iterations (a_count: INTEGER)
			-- Set PBKDF2 iteration count.
		require
			positive: a_count > 0
		do
			pbkdf2_iterations := a_count
		ensure
			set: pbkdf2_iterations = a_count
		end

feature -- SHA-256 Hashing

	sha256,
	hash,
	digest,
	checksum (a_data: STRING): STRING
			-- Compute SHA-256 hash of `a_data' as hex string.
		require
			data_not_void: a_data /= Void
		local
			l_sha: SHA256
			l_output: SPECIAL [NATURAL_8]
			i: INTEGER
		do
			create l_sha.make
			feed_string_to_sha256 (l_sha, a_data)
			create l_output.make_filled (0, 32)
			l_sha.do_final (l_output, 0)
			Result := bytes_to_hex (l_output)
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = 64
		end

	sha256_bytes (a_data: STRING): SPECIAL [NATURAL_8]
			-- Compute SHA-256 hash of `a_data' as raw bytes.
		require
			data_not_void: a_data /= Void
		local
			l_sha: SHA256
		do
			create l_sha.make
			feed_string_to_sha256 (l_sha, a_data)
			create Result.make_filled (0, 32)
			l_sha.do_final (Result, 0)
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = 32
		end

feature -- HMAC-SHA256

	hmac_sha256,
	sign,
	mac,
	authenticate (a_key, a_data: STRING): STRING
			-- Compute HMAC-SHA256 of `a_data' with `a_key' as hex string.
		require
			key_not_void: a_key /= Void
			data_not_void: a_data /= Void
		local
			l_hmac: HMAC_SHA256
			l_bytes: SPECIAL [NATURAL_8]
		do
			create l_hmac.make_ascii_key (a_key)
			feed_string_to_hmac (l_hmac, a_data)
			l_hmac.finish
			l_bytes := l_hmac.hmac.as_bytes
			Result := bytes_to_hex (l_bytes)
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = 64
		end

	hmac_sha256_bytes (a_key, a_data: STRING): SPECIAL [NATURAL_8]
			-- Compute HMAC-SHA256 of `a_data' with `a_key' as raw bytes.
		require
			key_not_void: a_key /= Void
			data_not_void: a_data /= Void
		local
			l_hmac: HMAC_SHA256
		do
			create l_hmac.make_ascii_key (a_key)
			feed_string_to_hmac (l_hmac, a_data)
			l_hmac.finish
			Result := l_hmac.hmac.as_bytes
		ensure
			result_not_void: Result /= Void
		end

feature -- Password Hashing (PBKDF2)

	hash_password,
	secure_password,
	encrypt_password (a_password: STRING): STRING
			-- Hash password using PBKDF2-SHA256 with random salt.
			-- Returns: salt$iterations$hash (all hex-encoded)
		require
			password_not_empty: not a_password.is_empty
		local
			l_salt: STRING
			l_hash: STRING
		do
			l_salt := random_hex (16)  -- 16 bytes = 128 bits
			l_hash := pbkdf2_sha256 (a_password, hex_to_bytes (l_salt), pbkdf2_iterations, 32)
			Result := l_salt + "$" + pbkdf2_iterations.out + "$" + l_hash
		ensure
			result_not_void: Result /= Void
			has_salt: Result.has ('$')
		end

	verify_password,
	check_password,
	validate_password (a_password, a_stored_hash: STRING): BOOLEAN
			-- Verify password against stored hash from `hash_password'.
		require
			password_not_empty: not a_password.is_empty
			hash_not_empty: not a_stored_hash.is_empty
		local
			l_parts: LIST [STRING]
			l_salt: STRING
			l_iterations: INTEGER
			l_stored: STRING
			l_computed: STRING
		do
			l_parts := a_stored_hash.split ('$')
			if l_parts.count = 3 then
				l_salt := l_parts.i_th (1)
				if l_parts.i_th (2).is_integer then
					l_iterations := l_parts.i_th (2).to_integer
					l_stored := l_parts.i_th (3)
					l_computed := pbkdf2_sha256 (a_password, hex_to_bytes (l_salt), l_iterations, 32)
					Result := constant_time_compare (l_stored, l_computed)
				end
			end
		end

	pbkdf2_sha256 (a_password: STRING; a_salt: SPECIAL [NATURAL_8]; a_iterations, a_key_length: INTEGER): STRING
			-- Derive key from password using PBKDF2-SHA256.
			-- Returns hex-encoded key.
		require
			password_not_empty: not a_password.is_empty
			salt_not_void: a_salt /= Void
			iterations_positive: a_iterations > 0
			key_length_positive: a_key_length > 0
		local
			l_result: SPECIAL [NATURAL_8]
		do
			l_result := pbkdf2_sha256_bytes (a_password, a_salt, a_iterations, a_key_length)
			Result := bytes_to_hex (l_result)
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = a_key_length * 2
		end

	pbkdf2_sha256_bytes (a_password: STRING; a_salt: SPECIAL [NATURAL_8]; a_iterations, a_key_length: INTEGER): SPECIAL [NATURAL_8]
			-- Derive key from password using PBKDF2-SHA256.
			-- Returns raw bytes.
		require
			password_not_empty: not a_password.is_empty
			salt_not_void: a_salt /= Void
			iterations_positive: a_iterations > 0
			key_length_positive: a_key_length > 0
		local
			l_block_count, i, j, k, l_copy_len, l_offset: INTEGER
			l_block: SPECIAL [NATURAL_8]
			l_u: SPECIAL [NATURAL_8]
			l_salt_plus_int: SPECIAL [NATURAL_8]
		do
			create Result.make_filled (0, a_key_length)
			l_block_count := (a_key_length + 31) // 32  -- ceiling division

			from i := 1 until i > l_block_count loop
				-- Create salt || INT(i) for first iteration
				create l_salt_plus_int.make_filled (0, a_salt.count + 4)
				l_salt_plus_int.copy_data (a_salt, 0, 0, a_salt.count)
				l_salt_plus_int [a_salt.count] := ((i |>> 24) & 0xFF).to_natural_8
				l_salt_plus_int [a_salt.count + 1] := ((i |>> 16) & 0xFF).to_natural_8
				l_salt_plus_int [a_salt.count + 2] := ((i |>> 8) & 0xFF).to_natural_8
				l_salt_plus_int [a_salt.count + 3] := (i & 0xFF).to_natural_8

				-- U1 = PRF(Password, Salt || INT(i))
				l_u := hmac_sha256_bytes_special (a_password, l_salt_plus_int)
				create l_block.make_filled (0, 32)
				-- Copy only what's available from l_u (should be 32 bytes for SHA256)
				l_block.copy_data (l_u, 0, 0, l_u.count.min (32))

				-- U2...Uc
				from j := 2 until j > a_iterations loop
					l_u := hmac_sha256_bytes_special (a_password, l_u)
					from k := 0 until k >= l_u.count.min (32) loop
						l_block [k] := l_block [k].bit_xor (l_u [k])
						k := k + 1
					end
					j := j + 1
				end

				-- Copy block to result
				l_offset := (i - 1) * 32
				l_copy_len := (a_key_length - l_offset).min (32)
				from k := 0 until k >= l_copy_len loop
					Result [l_offset + k] := l_block [k]
					k := k + 1
				end

				i := i + 1
			end
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = a_key_length
		end

feature -- Random Generation

	random_bytes,
	generate_bytes,
	secure_random (a_count: INTEGER): SPECIAL [NATURAL_8]
			-- Generate `a_count' random bytes.
			-- Note: Uses RANDOM for portable randomness. Not cryptographically secure.
		require
			count_positive: a_count > 0
		local
			l_random: RANDOM
			i: INTEGER
			l_seed: INTEGER
		do
			create Result.make_filled (0, a_count)
			-- Combine multiple entropy sources for better seeding
			l_seed := (create {SIMPLE_DATE_TIME}.make_now).to_timestamp.to_integer
			l_seed := l_seed.bit_xor (random_counter)
			random_counter := random_counter + 1
			create l_random.set_seed (l_seed)
			-- Skip a few values for better randomness
			from i := 1 until i > 10 loop
				l_random.forth
				i := i + 1
			end
			from i := 0 until i >= a_count loop
				l_random.forth
				Result [i] := (l_random.item \\ 256).to_natural_8
				i := i + 1
			end
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = a_count
		end

	random_counter: INTEGER
			-- Counter to improve randomness between calls

	random_hex (a_count: INTEGER): STRING
			-- Generate `a_count' random bytes as hex string.
		require
			count_positive: a_count > 0
		do
			Result := bytes_to_hex (random_bytes (a_count))
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = a_count * 2
		end

	random_token,
	generate_token,
	api_key (a_length: INTEGER): STRING
			-- Generate URL-safe random token of `a_length' characters.
		require
			length_positive: a_length > 0
		local
			l_bytes: SPECIAL [NATURAL_8]
			l_base64: SIMPLE_BASE64
			i: INTEGER
		do
			l_bytes := random_bytes ((a_length * 3 + 3) // 4)
			create l_base64.make
			Result := l_base64.encode (bytes_to_string (l_bytes))
			-- Make URL-safe
			Result.replace_substring_all ("+", "-")
			Result.replace_substring_all ("/", "_")
			Result.replace_substring_all ("=", "")
			-- Truncate to requested length
			if Result.count > a_length then
				Result := Result.substring (1, a_length)
			end
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = a_length
		end

feature -- Encoding Utilities

	bytes_to_hex,
	to_hex,
	hex_encode (a_bytes: SPECIAL [NATURAL_8]): STRING
			-- Convert bytes to lowercase hex string.
		require
			bytes_not_void: a_bytes /= Void
		local
			i: INTEGER
			l_byte: NATURAL_8
		do
			create Result.make (a_bytes.count * 2)
			from i := 0 until i >= a_bytes.count loop
				l_byte := a_bytes [i]
				Result.append (hex_chars.item ((l_byte |>> 4).to_integer_32 + 1).out)
				Result.append (hex_chars.item ((l_byte & 0x0F).to_integer_32 + 1).out)
				i := i + 1
			end
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = a_bytes.count * 2
		end

	hex_to_bytes,
	from_hex,
	hex_decode (a_hex: STRING): SPECIAL [NATURAL_8]
			-- Convert hex string to bytes.
		require
			hex_not_void: a_hex /= Void
			even_length: a_hex.count \\ 2 = 0
		local
			i: INTEGER
			l_high, l_low: INTEGER
		do
			create Result.make_filled (0, a_hex.count // 2)
			from i := 1 until i > a_hex.count loop
				l_high := hex_value (a_hex.item (i))
				l_low := hex_value (a_hex.item (i + 1))
				Result [(i - 1) // 2] := ((l_high |<< 4) + l_low).to_natural_8
				i := i + 2
			end
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = a_hex.count // 2
		end

feature {NONE} -- Implementation

	Default_pbkdf2_iterations: INTEGER = 600000
			-- Default iteration count for PBKDF2 (OWASP 2025 recommendation)

	hex_chars: STRING = "0123456789abcdef"
			-- Hex digit characters

	hex_value (c: CHARACTER): INTEGER
			-- Numeric value of hex character.
		do
			if c >= '0' and c <= '9' then
				Result := c.code - ('0').code
			elseif c >= 'a' and c <= 'f' then
				Result := c.code - ('a').code + 10
			elseif c >= 'A' and c <= 'F' then
				Result := c.code - ('A').code + 10
			end
		end

	feed_string_to_sha256 (a_sha: SHA256; a_data: STRING)
			-- Feed string data to SHA256 hash.
		do
			if not a_data.is_empty then
				a_sha.sink_string (a_data)
			end
			-- Empty string: just finalize without feeding any data
		end

	feed_string_to_hmac (a_hmac: HMAC_SHA256; a_data: STRING)
			-- Feed string data to HMAC.
		local
			i: INTEGER
		do
			from i := 1 until i > a_data.count loop
				a_hmac.byte_sink (a_data.item (i).code.to_natural_8)
				i := i + 1
			end
		end

	hmac_sha256_bytes_special (a_key: STRING; a_data: SPECIAL [NATURAL_8]): SPECIAL [NATURAL_8]
			-- Compute HMAC-SHA256 of bytes with string key.
		local
			l_hmac: HMAC_SHA256
			i: INTEGER
		do
			create l_hmac.make_ascii_key (a_key)
			from i := 0 until i >= a_data.count loop
				l_hmac.byte_sink (a_data [i])
				i := i + 1
			end
			l_hmac.finish
			Result := l_hmac.hmac.as_bytes
		end

	bytes_to_string (a_bytes: SPECIAL [NATURAL_8]): STRING
			-- Convert bytes to string (for Base64 encoding).
		local
			i: INTEGER
		do
			create Result.make (a_bytes.count)
			from i := 0 until i >= a_bytes.count loop
				Result.append_character (a_bytes [i].to_character_8)
				i := i + 1
			end
		end

	constant_time_compare (a, b: STRING): BOOLEAN
			-- Compare strings in constant time to prevent timing attacks.
		local
			i: INTEGER
			l_diff: INTEGER
		do
			if a.count = b.count then
				l_diff := 0
				from i := 1 until i > a.count loop
					l_diff := l_diff.bit_or (a.item (i).code.bit_xor (b.item (i).code))
					i := i + 1
				end
				Result := l_diff = 0
			end
		end

note
	copyright: "Copyright (c) 2024-2025, Larry Rix"
	license: "MIT License"

end
