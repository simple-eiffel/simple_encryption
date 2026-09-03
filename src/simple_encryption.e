note
	description: "[
		Simple encryption and hashing: SHA-256, HMAC-SHA256, PBKDF2-SHA256
		password storage, and a cryptographically secure random source.

		Two implementations sit behind one interface. On Windows the work
		is done by the operating system's Cryptography API: Next Generation
		(bcrypt.dll) - fast, maintained by Microsoft, nothing to ship. Where
		that is absent the portable Eiffel implementation over ISE's EEL
		library is used. The test suite holds both to the same known-answer
		vectors and cross-checks them against each other.
	]"
	security: "[
		2.0.0 (2026-08-29) corrected three defects present since the first
		release. (1) PBKDF2-SHA256 diverged from RFC 8018 whenever an
		intermediate MAC began with a zero byte - about one iteration in
		256, so from iteration 119 on the standard "password"/"salt" vector
		- because EEL returns a MAC as a big integer whose `as_bytes' omits
		leading zeros. (2) For the same reason HMAC-SHA256 returned 31
		bytes one time in 256. (3) `secure_random' was a linear
		congruential generator seeded from the clock. Password hashes
		written by earlier versions are not PBKDF2 and do not verify under
		this version; they must be re-created. Details in CHANGELOG.md.
	]"
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

feature -- Status report

	is_native: BOOLEAN
			-- Is the operating system's cryptography (Windows CNG) in use
			-- for hashing, HMAC and PBKDF2?
		do
			Result := c_senc_has_native = 1
		end

	is_secure_random_available: BOOLEAN
			-- Can `secure_random' draw from an operating-system CSPRNG
			-- (Windows CNG, or /dev/urandom elsewhere)?
		local
			l_probe: SPECIAL [NATURAL_8]
		do
			create l_probe.make_filled (0, 1)
			Result := c_senc_random (l_probe.base_address, 1) = 1
		end

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
		do
			Result := bytes_to_hex (sha256_bytes (a_data))
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = 64
		end

	sha256_bytes (a_data: STRING): SPECIAL [NATURAL_8]
			-- Compute SHA-256 hash of `a_data' as raw bytes.
		require
			data_not_void: a_data /= Void
		do
			create Result.make_filled (0, 32)
			if not is_native or else c_senc_sha256 (a_data.area.base_address, a_data.count, Result.base_address) /= 1 then
				Result := sha256_bytes_portable (a_data)
			end
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
		do
			Result := bytes_to_hex (hmac_sha256_bytes (a_key, a_data))
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = 64
		end

	hmac_sha256_bytes (a_key, a_data: STRING): SPECIAL [NATURAL_8]
			-- Compute HMAC-SHA256 of `a_data' with `a_key' as raw bytes.
		require
			key_not_void: a_key /= Void
			data_not_void: a_data /= Void
		do
			Result := hmac_of_bytes (a_key, string_bytes (a_data))
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = 32
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
				if l_parts.i_th (2).is_integer and then l_salt.count \\ 2 = 0 then
					l_iterations := l_parts.i_th (2).to_integer
					l_stored := l_parts.i_th (3)
					if l_iterations > 0 then
						l_computed := pbkdf2_sha256 (a_password, hex_to_bytes (l_salt), l_iterations, 32)
						Result := constant_time_compare (l_stored, l_computed)
					end
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
		do
			Result := bytes_to_hex (pbkdf2_sha256_bytes (a_password, a_salt, a_iterations, a_key_length))
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = a_key_length * 2
		end

	pbkdf2_sha256_bytes (a_password: STRING; a_salt: SPECIAL [NATURAL_8]; a_iterations, a_key_length: INTEGER): SPECIAL [NATURAL_8]
			-- Derive key from password using PBKDF2-SHA256 (RFC 8018).
			-- Returns raw bytes.
			--
			-- EVERY BUFFER CROSSES ON THE C HEAP, and that is load-bearing.
			-- `c_senc_pbkdf2' is marked `blocking' (2.1.1) because a
			-- derivation is deliberately slow and an unmarked slow external
			-- stops ISE's collector - and with it every other processor - for
			-- its whole duration. The marker LETS a collection run while the
			-- C code is still working, and a collection may MOVE an Eiffel
			-- object. This routine used to hand C the addresses of three
			-- Eiffel-collected areas (`a_password.area', `a_salt' and the
			-- `Result' SPECIAL); those addresses were safe only ACCIDENTALLY,
			-- because the unmarked call made a collection impossible. Marking
			-- the call without moving the buffers would have traded a freeze
			-- for memory corruption. So the password and salt are copied into
			-- MANAGED_POINTERs on the C heap, the key is derived into a
			-- third, and the bytes are copied back afterwards - the same
			-- shape `dpapi_protect' already used.
			--
			-- The copies cost microseconds against a KDF measured in
			-- hundreds of milliseconds, and the C-heap password copy is
			-- wiped before it is released.
		require
			password_not_empty: not a_password.is_empty
			salt_not_void: a_salt /= Void
			iterations_positive: a_iterations > 0
			key_length_positive: a_key_length > 0
		local
			l_pw, l_salt, l_key: MANAGED_POINTER
			l_ok: BOOLEAN
			i: INTEGER
		do
			create Result.make_filled (0, a_key_length)
			if is_native then
				create l_pw.make (a_password.count.max (1))
				from
					i := 0
				until
					i >= a_password.count
				loop
					l_pw.put_natural_8 (a_password.item (i + 1).code.to_natural_8, i)
					i := i + 1
				variant
					a_password.count - i
				end
				create l_salt.make (a_salt.count.max (1))
				from
					i := 0
				until
					i >= a_salt.count
				loop
					l_salt.put_natural_8 (a_salt [i], i)
					i := i + 1
				variant
					a_salt.count - i
				end
				create l_key.make (a_key_length)
				l_ok := c_senc_pbkdf2 (l_pw.item, a_password.count,
					l_salt.item, a_salt.count, a_iterations.to_natural_64, l_key.item, a_key_length) = 1
				if l_ok then
					from
						i := 0
					until
						i >= a_key_length
					loop
						Result [i] := l_key.read_natural_8 (i)
						i := i + 1
					variant
						a_key_length - i
					end
				end
					-- Never leave a password lying on the C heap for the
					-- allocator to hand to the next caller.
				from
					i := 0
				until
					i >= l_pw.count
				loop
					l_pw.put_natural_8 (0, i)
					i := i + 1
				variant
					l_pw.count - i
				end
			end
			if not l_ok then
				Result := pbkdf2_sha256_bytes_portable (a_password, a_salt, a_iterations, a_key_length)
			end
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = a_key_length
		end

feature -- Random Generation

	random_bytes,
	generate_bytes,
	secure_random (a_count: INTEGER): SPECIAL [NATURAL_8]
			-- `a_count' bytes from the operating system's CSPRNG: Windows
			-- CNG (BCryptGenRandom) or /dev/urandom. There is no fallback
			-- to a pseudo-random generator: if the system source cannot be
			-- read, this raises rather than return predictable bytes.
		require
			count_positive: a_count > 0
			source_available: is_secure_random_available
		do
			create Result.make_filled (0, a_count)
			if c_senc_random (Result.base_address, a_count) /= 1 then
				(create {EXCEPTIONS}).raise ("SIMPLE_ENCRYPTION: secure random source unavailable")
			end
		ensure
			result_not_void: Result /= Void
			result_length: Result.count = a_count
		end

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

feature -- Portable implementation

	sha256_bytes_portable (a_data: STRING): SPECIAL [NATURAL_8]
			-- SHA-256 of `a_data' by the Eiffel (EEL) implementation.
		require
			data_not_void: a_data /= Void
		local
			l_sha: SHA256
		do
			create l_sha.make
			if not a_data.is_empty then
				l_sha.sink_string (a_data)
			end
			create Result.make_filled (0, 32)
			l_sha.do_final (Result, 0)
		ensure
			result_length: Result.count = 32
		end

	hmac_sha256_bytes_portable (a_key: STRING; a_data: SPECIAL [NATURAL_8]): SPECIAL [NATURAL_8]
			-- HMAC-SHA256 of `a_data' under `a_key' by the Eiffel (EEL)
			-- implementation. Always 32 bytes: see `padded_to_32'.
		require
			key_not_void: a_key /= Void
			data_not_void: a_data /= Void
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
			Result := padded_to_32 (l_hmac.hmac.as_bytes)
		ensure
			result_length: Result.count = 32
		end

	pbkdf2_sha256_bytes_portable (a_password: STRING; a_salt: SPECIAL [NATURAL_8]; a_iterations, a_key_length: INTEGER): SPECIAL [NATURAL_8]
			-- PBKDF2-HMAC-SHA256 (RFC 8018 section 5.2) by the Eiffel
			-- implementation: T_i = U_1 xor ... xor U_c, U_1 = PRF (P, S || INT (i)),
			-- U_j = PRF (P, U_{j-1}).
		require
			password_not_empty: not a_password.is_empty
			salt_not_void: a_salt /= Void
			iterations_positive: a_iterations > 0
			key_length_positive: a_key_length > 0
		local
			l_block_count, i, j, k, l_copy_len, l_offset: INTEGER
			l_block, l_u, l_salt_plus_int: SPECIAL [NATURAL_8]
		do
			create Result.make_filled (0, a_key_length)
			l_block_count := (a_key_length + 31) // 32
			from i := 1 until i > l_block_count loop
					-- S || INT (i), big-endian
				create l_salt_plus_int.make_filled (0, a_salt.count + 4)
				l_salt_plus_int.copy_data (a_salt, 0, 0, a_salt.count)
				l_salt_plus_int [a_salt.count] := ((i |>> 24) & 0xFF).to_natural_8
				l_salt_plus_int [a_salt.count + 1] := ((i |>> 16) & 0xFF).to_natural_8
				l_salt_plus_int [a_salt.count + 2] := ((i |>> 8) & 0xFF).to_natural_8
				l_salt_plus_int [a_salt.count + 3] := (i & 0xFF).to_natural_8
				l_u := hmac_sha256_bytes_portable (a_password, l_salt_plus_int)
				create l_block.make_filled (0, 32)
				l_block.copy_data (l_u, 0, 0, 32)
				from j := 2 until j > a_iterations loop
					l_u := hmac_sha256_bytes_portable (a_password, l_u)
					from k := 0 until k >= 32 loop
						l_block [k] := l_block [k].bit_xor (l_u [k])
						k := k + 1
					end
					j := j + 1
				end
				l_offset := (i - 1) * 32
				l_copy_len := (a_key_length - l_offset).min (32)
				Result.copy_data (l_block, 0, l_offset, l_copy_len)
				i := i + 1
			end
		ensure
			result_length: Result.count = a_key_length
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
				Result.append_character (hex_chars.item ((l_byte |>> 4).to_integer_32 + 1))
				Result.append_character (hex_chars.item ((l_byte & 0x0F).to_integer_32 + 1))
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
			-- Default iteration count for PBKDF2 (OWASP recommendation for PBKDF2-HMAC-SHA256)

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

	hmac_of_bytes (a_key: STRING; a_data: SPECIAL [NATURAL_8]): SPECIAL [NATURAL_8]
			-- HMAC-SHA256 of `a_data' under `a_key': the operating system's
			-- implementation where available, the portable one otherwise.
		do
			create Result.make_filled (0, 32)
			if not is_native or else c_senc_hmac (a_key.area.base_address, a_key.count,
				a_data.base_address, a_data.count, Result.base_address) /= 1
			then
				Result := hmac_sha256_bytes_portable (a_key, a_data)
			end
		ensure
			result_length: Result.count = 32
		end

	padded_to_32 (a_bytes: SPECIAL [NATURAL_8]): SPECIAL [NATURAL_8]
			-- `a_bytes' as a 32-byte big-endian value. EEL hands a MAC back
			-- as a big integer, and `as_bytes' on a number omits leading
			-- zero bytes - the defect fixed in 2.0.0. Put them back.
		require
			at_most_32: a_bytes.count <= 32
		do
			create Result.make_filled (0, 32)
			Result.copy_data (a_bytes, 0, 32 - a_bytes.count, a_bytes.count)
		ensure
			result_length: Result.count = 32
		end

	string_bytes (a_text: STRING): SPECIAL [NATURAL_8]
			-- The 8-bit characters of `a_text' as bytes.
		local
			i: INTEGER
		do
			create Result.make_filled (0, a_text.count)
			from i := 1 until i > a_text.count loop
				Result [i - 1] := a_text.item (i).code.to_natural_8
				i := i + 1
			end
		ensure
			result_length: Result.count = a_text.count
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

feature -- DPAPI (Windows per-user data protection)

	is_dpapi_available: BOOLEAN
			-- Can this platform seal data to the current user (DPAPI)?
		do
			Result := c_senc_dpapi_available = 1
		end

	dpapi_protect (a_plain: READABLE_STRING_8; a_entropy: READABLE_STRING_8): detachable STRING_8
			-- `a_plain' (bytes) sealed to the CURRENT WINDOWS USER on this
			-- machine: only the same user on the same machine unseals it.
			-- `a_entropy' (may be empty) binds the blob further; present the
			-- same entropy to `dpapi_unprotect'. Void on any failure -
			-- nothing partial is ever returned.
		require
			something_to_protect: not a_plain.is_empty
		local
			l_in, l_ent, l_out: MANAGED_POINTER
			n: INTEGER
		do
			if is_dpapi_available then
				l_in := buffer_of (a_plain)
				l_ent := buffer_of (a_entropy)
				create l_out.make (a_plain.count + Dpapi_overhead)
				n := c_senc_dpapi_protect (l_in.item, a_plain.count, l_ent.item, a_entropy.count, l_out.item, l_out.count)
				if n > 0 then
					Result := bytes_string (l_out, n)
				end
			end
		ensure
			sealed_or_void: attached Result implies not Result.is_empty
			never_the_plain_bytes: attached Result implies not Result.same_string (a_plain)
			nothing_off_windows: not is_dpapi_available implies Result = Void
		end

	dpapi_unprotect (a_blob: READABLE_STRING_8; a_entropy: READABLE_STRING_8): detachable STRING_8
			-- The bytes `dpapi_protect' sealed into `a_blob', when the caller
			-- is the same Windows user on the same machine and `a_entropy'
			-- matches; Void otherwise (a tampered blob, foreign user, wrong
			-- entropy - all just Void, never an exception).
		require
			something_to_unseal: not a_blob.is_empty
		local
			l_in, l_ent, l_out: MANAGED_POINTER
			n: INTEGER
		do
			if is_dpapi_available then
				l_in := buffer_of (a_blob)
				l_ent := buffer_of (a_entropy)
				create l_out.make (a_blob.count.max (1))
				n := c_senc_dpapi_unprotect (l_in.item, a_blob.count, l_ent.item, a_entropy.count, l_out.item, l_out.count)
				if n > 0 then
					Result := bytes_string (l_out, n)
				end
			end
		ensure
			unsealed_or_void: attached Result implies not Result.is_empty
			nothing_off_windows: not is_dpapi_available implies Result = Void
		end

	Dpapi_overhead: INTEGER = 1024
			-- Room DPAPI's envelope adds beyond the plaintext (generous).

feature {NONE} -- DPAPI buffers

	buffer_of (a_bytes: READABLE_STRING_8): MANAGED_POINTER
			-- `a_bytes' copied into native memory (one byte spare for empties).
		local
			i: INTEGER
		do
			create Result.make (a_bytes.count.max (1))
			from i := 1 until i > a_bytes.count loop
				Result.put_natural_8 (a_bytes.code (i).to_natural_8, i - 1)
				i := i + 1
			end
		ensure
			sized: Result.count >= a_bytes.count
		end

	bytes_string (a_buffer: MANAGED_POINTER; a_count: INTEGER): STRING_8
			-- The first `a_count' bytes of `a_buffer' as a STRING_8.
		require
			in_range: a_count > 0 and a_count <= a_buffer.count
		local
			i: INTEGER
		do
			create Result.make (a_count)
			from i := 0 until i >= a_count loop
				Result.append_code (a_buffer.read_natural_8 (i))
				i := i + 1
			end
		ensure
			sized: Result.count = a_count
		end

feature {NONE} -- Externals (simple_encryption.h)

	c_senc_dpapi_available: INTEGER
		external
			"C inline use %"simple_encryption.h%""
		alias
			"return senc_dpapi_available();"
		end

	c_senc_dpapi_protect (a_in: POINTER; a_inlen: INTEGER; a_ent: POINTER; a_entlen: INTEGER; a_out: POINTER; a_outcap: INTEGER): INTEGER
		external
			"C inline use %"simple_encryption.h%""
		alias
			"return senc_dpapi_protect((const unsigned char*)$a_in, (int)$a_inlen, (const unsigned char*)$a_ent, (int)$a_entlen, (unsigned char*)$a_out, (int)$a_outcap);"
		end

	c_senc_dpapi_unprotect (a_in: POINTER; a_inlen: INTEGER; a_ent: POINTER; a_entlen: INTEGER; a_out: POINTER; a_outcap: INTEGER): INTEGER
		external
			"C inline use %"simple_encryption.h%""
		alias
			"return senc_dpapi_unprotect((const unsigned char*)$a_in, (int)$a_inlen, (const unsigned char*)$a_ent, (int)$a_entlen, (unsigned char*)$a_out, (int)$a_outcap);"
		end

	c_senc_has_native: INTEGER
		external
			"C inline use %"simple_encryption.h%""
		alias
			"return senc_has_native();"
		end

	c_senc_random (a_buf: POINTER; a_n: INTEGER): INTEGER
		external
			"C inline use %"simple_encryption.h%""
		alias
			"return senc_random((unsigned char*)$a_buf, (int)$a_n);"
		end

	c_senc_sha256 (a_data: POINTER; a_len: INTEGER; a_out: POINTER): INTEGER
			-- Deliberately NOT `blocking', and its callers deliberately still
			-- pass `base_address' of Eiffel areas. One SHA-256 pass over a
			-- message is microseconds - there is no stall worth reclaiming -
			-- and leaving the call unmarked is exactly what keeps those raw
			-- addresses safe: no collection can begin while the thread is
			-- inside it. The rule for this library: an external that hands C
			-- an Eiffel address must NOT be marked, and an external that is
			-- marked must hand C nothing but the C heap. `c_senc_hmac' and
			-- `c_senc_random' are unmarked for the same reason.
		external
			"C inline use %"simple_encryption.h%""
		alias
			"return senc_sha256((const unsigned char*)$a_data, (int)$a_len, (unsigned char*)$a_out);"
		end

	c_senc_hmac (a_key: POINTER; a_keylen: INTEGER; a_data: POINTER; a_len: INTEGER; a_out: POINTER): INTEGER
		external
			"C inline use %"simple_encryption.h%""
		alias
			"return senc_hmac_sha256((const unsigned char*)$a_key, (int)$a_keylen, (const unsigned char*)$a_data, (int)$a_len, (unsigned char*)$a_out);"
		end

	c_senc_pbkdf2 (a_pw: POINTER; a_pwlen: INTEGER; a_salt: POINTER; a_saltlen: INTEGER; a_iterations: NATURAL_64; a_out: POINTER; a_outlen: INTEGER): INTEGER
			-- Key stretching: DELIBERATELY slow, 0.1-2 s at production
			-- iteration counts and the only call in this library whose
			-- slowness is the point.
			--
			-- `blocking' (2.1.1) because ISE's collector stops every thread
			-- of the system before it collects and cannot stop a thread
			-- inside an unmarked external: the collection waits out the whole
			-- derivation, and every other processor waits with it at its next
			-- allocation. On a simple_chat server that is once per login.
			--
			-- SAFE ONLY BECAUSE THE BUFFERS MOVED. `pbkdf2_sha256_bytes'
			-- passes three MANAGED_POINTERs - the C heap - where it used to
			-- pass `base_address' of the password's area, the salt SPECIAL
			-- and the result SPECIAL. Those are Eiffel-collected, and the
			-- collection this marker permits may move them. The marker and
			-- the copy are one change; neither is correct without the other.
		external
			"C blocking inline use %"simple_encryption.h%""
		alias
			"return senc_pbkdf2_sha256((const unsigned char*)$a_pw, (int)$a_pwlen, (const unsigned char*)$a_salt, (int)$a_saltlen, (unsigned long long)$a_iterations, (unsigned char*)$a_out, (int)$a_outlen);"
		end

note
	copyright: "Copyright (c) 2024-2026, Larry Rix"
	license: "MIT License"

end
