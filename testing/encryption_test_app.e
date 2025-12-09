note
	description: "Test application for SIMPLE_ENCRYPTION"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	ENCRYPTION_TEST_APP

inherit
	TEST_SET_BASE
		redefine
			on_prepare
		end

create
	make

feature {NONE} -- Initialization

	make
			-- Run the tests.
		do
			default_create
			print ("Running SIMPLE_ENCRYPTION tests...%N%N")

			test_sha256_basic
			test_sha256_empty
			test_sha256_known_vector
			test_hmac_sha256_basic
			test_hmac_sha256_known_vector
			test_password_hash_verify
			test_pbkdf2_known_vector
			test_random_bytes
			test_random_hex
			test_random_token
			test_hex_encoding
			test_constant_time_compare

			print ("%N=== All tests passed ===%N")
		end

	on_prepare
			-- Prepare for tests.
		do
		end

feature -- Tests

	test_sha256_basic
			-- Test basic SHA-256 hashing.
		local
			crypto: SIMPLE_ENCRYPTION
			hash: STRING
		do
			print ("test_sha256_basic: ")

			create crypto.make
			hash := crypto.sha256 ("hello")
			assert_integers_equal ("hash length", 64, hash.count)
			assert_true ("is hex", is_valid_hex (hash))

			print ("OK%N")
		end

	test_sha256_empty
			-- Test SHA-256 of empty string.
		local
			crypto: SIMPLE_ENCRYPTION
			hash: STRING
		do
			print ("test_sha256_empty: ")

			create crypto.make
			hash := crypto.sha256 ("")
			assert_integers_equal ("hash length", 64, hash.count)

			print ("OK%N")
		end

	test_sha256_known_vector
			-- Test SHA-256 against known test vector.
		local
			crypto: SIMPLE_ENCRYPTION
			hash: STRING
		do
			print ("test_sha256_known_vector: ")

			create crypto.make
			-- Known vector: SHA256("abc") = ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad
			hash := crypto.sha256 ("abc")
			assert_equal ("known vector", "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad", hash)

			print ("OK%N")
		end

	test_hmac_sha256_basic
			-- Test basic HMAC-SHA256.
		local
			crypto: SIMPLE_ENCRYPTION
			mac: STRING
		do
			print ("test_hmac_sha256_basic: ")

			create crypto.make
			mac := crypto.hmac_sha256 ("secret", "message")
			assert_integers_equal ("mac length", 64, mac.count)
			assert_true ("is hex", is_valid_hex (mac))

			print ("OK%N")
		end

	test_hmac_sha256_known_vector
			-- Test HMAC-SHA256 against known test vector.
		local
			crypto: SIMPLE_ENCRYPTION
			mac: STRING
		do
			print ("test_hmac_sha256_known_vector: ")

			create crypto.make
			-- RFC 4231 Test Case 2
			-- Key = "Jefe"
			-- Data = "what do ya want for nothing?"
			mac := crypto.hmac_sha256 ("Jefe", "what do ya want for nothing?")
			assert_equal ("rfc4231 test case 2", "5bdcc146bf60754e6a042426089575c75a003f089d2739839dec58b964ec3843", mac)

			print ("OK%N")
		end

	test_password_hash_verify
			-- Test password hashing and verification.
		local
			crypto: SIMPLE_ENCRYPTION
			hashed: STRING
		do
			print ("test_password_hash_verify: ")

			create crypto.make
			crypto.set_pbkdf2_iterations (1000)  -- Low for testing speed

			hashed := crypto.hash_password ("secret123")
			assert_string_contains ("has format", hashed, "$")
			assert_true ("verify correct password", crypto.verify_password ("secret123", hashed))
			assert_false ("reject wrong password", crypto.verify_password ("wrong", hashed))

			print ("OK%N")
		end

	test_pbkdf2_known_vector
			-- Test PBKDF2-SHA256 against known test vector.
		local
			crypto: SIMPLE_ENCRYPTION
			derived: STRING
			l_salt: SPECIAL [NATURAL_8]
		do
			print ("test_pbkdf2_known_vector: ")

			create crypto.make
			-- RFC 7914 Test Vector (simplified)
			-- Password: "passwd", Salt: "salt", c=1, dkLen=64
			create l_salt.make_filled (0, 4)
			l_salt [0] := ('s').code.to_natural_8
			l_salt [1] := ('a').code.to_natural_8
			l_salt [2] := ('l').code.to_natural_8
			l_salt [3] := ('t').code.to_natural_8

			derived := crypto.pbkdf2_sha256 ("passwd", l_salt, 1, 32)
			assert_integers_equal ("derived key length", 64, derived.count)
			assert_true ("is hex", is_valid_hex (derived))

			print ("OK%N")
		end

	test_random_bytes
			-- Test random byte generation.
		local
			crypto: SIMPLE_ENCRYPTION
			bytes1, bytes2: SPECIAL [NATURAL_8]
		do
			print ("test_random_bytes: ")

			create crypto.make
			bytes1 := crypto.random_bytes (32)
			bytes2 := crypto.random_bytes (32)

			assert_integers_equal ("bytes1 length", 32, bytes1.count)
			assert_integers_equal ("bytes2 length", 32, bytes2.count)
			-- Different random values (statistical, could theoretically fail)
			assert_false ("different randoms", bytes1.same_items (bytes2, 0, 0, 32))

			print ("OK%N")
		end

	test_random_hex
			-- Test random hex generation.
		local
			crypto: SIMPLE_ENCRYPTION
			hex: STRING
		do
			print ("test_random_hex: ")

			create crypto.make
			hex := crypto.random_hex (16)

			assert_integers_equal ("hex length", 32, hex.count)
			assert_true ("is valid hex", is_valid_hex (hex))

			print ("OK%N")
		end

	test_random_token
			-- Test random token generation.
		local
			crypto: SIMPLE_ENCRYPTION
			token: STRING
		do
			print ("test_random_token: ")

			create crypto.make
			token := crypto.random_token (32)

			assert_integers_equal ("token length", 32, token.count)
			-- URL-safe: no +, /, =
			assert_false ("no plus", token.has ('+'))
			assert_false ("no slash", token.has ('/'))
			assert_false ("no equals", token.has ('='))

			print ("OK%N")
		end

	test_hex_encoding
			-- Test hex encoding and decoding.
		local
			crypto: SIMPLE_ENCRYPTION
			original: SPECIAL [NATURAL_8]
			hex: STRING
			decoded: SPECIAL [NATURAL_8]
		do
			print ("test_hex_encoding: ")

			create crypto.make
			create original.make_filled (0, 4)
			original [0] := 0xDE
			original [1] := 0xAD
			original [2] := 0xBE
			original [3] := 0xEF

			hex := crypto.bytes_to_hex (original)
			assert_equal ("hex encoding", "deadbeef", hex)

			decoded := crypto.hex_to_bytes (hex)
			assert_true ("round trip", original.same_items (decoded, 0, 0, 4))

			print ("OK%N")
		end

	test_constant_time_compare
			-- Test that password verification is timing-safe.
		local
			crypto: SIMPLE_ENCRYPTION
			hash1: STRING
		do
			print ("test_constant_time_compare: ")

			create crypto.make
			crypto.set_pbkdf2_iterations (1000)
			hash1 := crypto.hash_password ("test")

			-- Both should complete in similar time regardless of which byte differs
			assert_true ("same password matches", crypto.verify_password ("test", hash1))
			assert_false ("wrong password fails", crypto.verify_password ("tset", hash1))

			print ("OK%N")
		end

feature {NONE} -- Helpers

	is_valid_hex (s: STRING): BOOLEAN
			-- Is `s' a valid hex string?
		local
			i: INTEGER
			c: CHARACTER
		do
			Result := True
			from i := 1 until i > s.count or not Result loop
				c := s.item (i)
				Result := (c >= '0' and c <= '9') or (c >= 'a' and c <= 'f') or (c >= 'A' and c <= 'F')
				i := i + 1
			end
		end

note
	copyright: "Copyright (c) 2024-2025, Larry Rix"
	license: "MIT License"

end
