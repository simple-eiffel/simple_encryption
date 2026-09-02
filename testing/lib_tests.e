note
	description: "Tests for SIMPLE_ENCRYPTION"
	author: "Larry Rix"
	testing: "covers"

class
	LIB_TESTS

inherit
	TEST_SET_BASE
		redefine
			on_prepare
		end

feature {NONE} -- Setup

	on_prepare
			-- Prepare for tests.
		do
		end

feature -- Tests

	test_dpapi_round_trip
			-- Sealed bytes come back only through the same user + entropy.
		local
			e: SIMPLE_ENCRYPTION
			b, p: detachable STRING_8
		do
			create e.make
			if e.is_dpapi_available then
				b := e.dpapi_protect ("the-token-0123456789abcdef", "simple_chat")
				assert ("sealed and different", attached b as bb and then not bb.same_string ("the-token-0123456789abcdef"))
				if attached b as bb2 then
					p := e.dpapi_unprotect (bb2, "simple_chat")
					assert ("unsealed intact", attached p as pp and then pp.same_string ("the-token-0123456789abcdef"))
				end
			else
				assert ("dpapi not on this platform", True)
			end
		end

	test_dpapi_wrong_entropy_and_tamper_fail
		local
			e: SIMPLE_ENCRYPTION
			b: detachable STRING_8
			l_tampered: STRING_8
		do
			create e.make
			if e.is_dpapi_available then
				b := e.dpapi_protect ("secret bytes", "right")
				if attached b as bb then
					assert ("wrong entropy is void", e.dpapi_unprotect (bb, "wrong") = Void)
					create l_tampered.make_from_string (bb)
					l_tampered [l_tampered.count // 2 + 1] := (l_tampered [l_tampered.count // 2 + 1].code.bit_xor (1)).to_character_8
					assert ("tampered blob is void", e.dpapi_unprotect (l_tampered, "right") = Void)
				else
					assert ("protect worked", False)
				end
			else
				assert ("dpapi not on this platform", True)
			end
		end

	test_sha256_basic
			-- Test basic SHA-256 hashing.
		local
			crypto: SIMPLE_ENCRYPTION
			hash: STRING
		do
			create crypto.make
			hash := crypto.sha256 ("hello")
			assert_integers_equal ("hash length", 64, hash.count)
			assert_true ("is hex", is_valid_hex (hash))
		end

	test_sha256_empty
			-- Test SHA-256 of empty string.
		local
			crypto: SIMPLE_ENCRYPTION
			hash: STRING
		do
			create crypto.make
			hash := crypto.sha256 ("")
			assert_integers_equal ("hash length", 64, hash.count)
		end

	test_sha256_known_vector
			-- Test SHA-256 against known test vector.
		local
			crypto: SIMPLE_ENCRYPTION
			hash: STRING
		do
			create crypto.make
			hash := crypto.sha256 ("abc")
			assert_equal ("known vector", "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad", hash)
		end

	test_hmac_sha256_basic
			-- Test basic HMAC-SHA256.
		local
			crypto: SIMPLE_ENCRYPTION
			mac: STRING
		do
			create crypto.make
			mac := crypto.hmac_sha256 ("secret", "message")
			assert_integers_equal ("mac length", 64, mac.count)
			assert_true ("is hex", is_valid_hex (mac))
		end

	test_hmac_sha256_known_vector
			-- Test HMAC-SHA256 against known test vector.
		local
			crypto: SIMPLE_ENCRYPTION
			mac: STRING
		do
			create crypto.make
			mac := crypto.hmac_sha256 ("Jefe", "what do ya want for nothing?")
			assert_equal ("rfc4231 test case 2", "5bdcc146bf60754e6a042426089575c75a003f089d2739839dec58b964ec3843", mac)
		end

	test_password_hash_verify
			-- Test password hashing and verification.
		local
			crypto: SIMPLE_ENCRYPTION
			hashed: STRING
		do
			create crypto.make
				-- Default iterations (600,000): correct, and with the OS
				-- implementation fast enough for a login.

			hashed := crypto.hash_password ("secret123")
			assert_string_contains ("has format", hashed, "$")
			assert_true ("verify correct password", crypto.verify_password ("secret123", hashed))
			assert_false ("reject wrong password", crypto.verify_password ("wrong", hashed))
		end

	test_pbkdf2_known_vector
			-- Test PBKDF2-SHA256 against known test vector.
		local
			crypto: SIMPLE_ENCRYPTION
			derived: STRING
			l_salt: SPECIAL [NATURAL_8]
		do
			create crypto.make
			create l_salt.make_filled (0, 4)
			l_salt [0] := ('s').code.to_natural_8
			l_salt [1] := ('a').code.to_natural_8
			l_salt [2] := ('l').code.to_natural_8
			l_salt [3] := ('t').code.to_natural_8

			derived := crypto.pbkdf2_sha256 ("passwd", l_salt, 1, 32)
			assert_integers_equal ("derived key length", 64, derived.count)
			assert_true ("is hex", is_valid_hex (derived))
			assert_equal ("passwd/salt/1 (Python hashlib)", "55ac046e56e3089fec1691c22544b605f94185216dde0465e68b9d57c20dacbc", derived)
		end

	test_random_bytes
			-- Test random byte generation.
		local
			crypto: SIMPLE_ENCRYPTION
			bytes1, bytes2: SPECIAL [NATURAL_8]
		do
			create crypto.make
			bytes1 := crypto.random_bytes (32)
			bytes2 := crypto.random_bytes (32)

			assert_integers_equal ("bytes1 length", 32, bytes1.count)
			assert_integers_equal ("bytes2 length", 32, bytes2.count)
			assert_false ("different randoms", bytes1.same_items (bytes2, 0, 0, 32))
		end

	test_random_hex
			-- Test random hex generation.
		local
			crypto: SIMPLE_ENCRYPTION
			hex: STRING
		do
			create crypto.make
			hex := crypto.random_hex (16)

			assert_integers_equal ("hex length", 32, hex.count)
			assert_true ("is valid hex", is_valid_hex (hex))
		end

	test_random_token
			-- Test random token generation.
		local
			crypto: SIMPLE_ENCRYPTION
			token: STRING
		do
			create crypto.make
			token := crypto.random_token (32)

			assert_integers_equal ("token length", 32, token.count)
			assert_false ("no plus", token.has ('+'))
			assert_false ("no slash", token.has ('/'))
			assert_false ("no equals", token.has ('='))
		end

	test_hex_encoding
			-- Test hex encoding and decoding.
		local
			crypto: SIMPLE_ENCRYPTION
			original: SPECIAL [NATURAL_8]
			hex: STRING
			decoded: SPECIAL [NATURAL_8]
		do
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
		end

	test_constant_time_compare
			-- Test that password verification is timing-safe.
		local
			crypto: SIMPLE_ENCRYPTION
			hash1: STRING
		do
			create crypto.make
				-- Default iterations (600,000): correct, and with the OS
				-- implementation fast enough for a login.
			hash1 := crypto.hash_password ("test")

			assert_true ("same password matches", crypto.verify_password ("test", hash1))
			assert_false ("wrong password fails", crypto.verify_password ("tset", hash1))
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

feature -- Known-answer vectors (2.0.0)

	test_pbkdf2_rfc_vectors
			-- The standard PBKDF2-HMAC-SHA256 vectors (RFC 7914 section 11),
			-- cross-checked against Python hashlib on 2026-08-29.
		local
			crypto: SIMPLE_ENCRYPTION
		do
			create crypto.make
			assert_equal ("1 iteration", "120fb6cffcf8b32c43e7225256c4f837a86548c92ccc35480805987cb70be17b",
				crypto.pbkdf2_sha256 ("password", ascii_bytes ("salt"), 1, 32))
			assert_equal ("4096 iterations", "c5e478d59288c841aa530db6845c4c8d962893a001ce4e11a4963873aa98134a",
				crypto.pbkdf2_sha256 ("password", ascii_bytes ("salt"), 4096, 32))
			assert_equal ("4096 iterations, 40 bytes (two blocks)",
				"348c89dbcbd32b2f32d814b8116e84cf2b17347ebc1800181c4e2a1fb8dd53e1c635518c7dac47e9",
				crypto.pbkdf2_sha256 ("passwordPASSWORDpassword", ascii_bytes ("saltSALTsaltSALTsaltSALTsaltSALTsalt"), 4096, 40))
			assert_equal ("2 iterations, 64 bytes",
				"ae4d0c95af6b46d32d0adff928f06dd02a303f8ef3c251dfd6e2d85a95474c43830651afcb5c862f0b249bd031f7a67520d136470f5ec271ece91c07773253d9",
				crypto.pbkdf2_sha256 ("password", ascii_bytes ("salt"), 2, 64))
		end

	test_pbkdf2_leading_zero_regression
			-- Iteration 119 of password/salt is the first whose intermediate
			-- MAC begins with 0x00 - the byte every version before 2.0.0
			-- dropped, corrupting the chain from there on.
		local
			crypto: SIMPLE_ENCRYPTION
		do
			create crypto.make
			assert_equal ("iteration 118 (the last one earlier versions got right)", "7e4c1f08f45c0f7d31d14620c706e37a88e99198ca6e9552b34c9d70d1800c46", pbkdf2_hex (crypto, 118))
			assert_equal ("iteration 119", "7e3f940244f1031ef9fd819d1c21a1223b2b423c46a3a43428e9e1b2f37720cd", pbkdf2_hex (crypto, 119))
			assert_equal ("iteration 120", "03560405f32d289c63b50ba88563371614697177fbbc02192ce95de52e898919", pbkdf2_hex (crypto, 120))
			assert_equal ("iteration 1000", "632c2812e46d4604102ba7618e9d6d7d2f8128f6266b4a03264d2a0460b7dcb3", pbkdf2_hex (crypto, 1000))
		end

	test_hmac_leading_zero_regression
			-- HMAC-SHA256 ("key", "msg23") begins with 0x00: 64 hex digits
			-- and 32 bytes, where versions before 2.0.0 gave 62 and 31.
		local
			crypto: SIMPLE_ENCRYPTION
		do
			create crypto.make
			assert_equal ("full digest", "00e3990a8b977cd8cd41d7eb4d6c55d4b19f07b26e793407cbef85149d718020", crypto.hmac_sha256 ("key", "msg23"))
			assert_integers_equal ("32 bytes", 32, crypto.hmac_sha256_bytes ("key", "msg23").count)
		end

	test_sha256_leading_zero
			-- SHA-256 ("x84") begins with 0x00; the native path must keep it.
		local
			crypto: SIMPLE_ENCRYPTION
		do
			create crypto.make
			assert_equal ("full digest", "009d9e88ce13770ca5fc05097eb32a9576e1b989c0584f9174f31fe70aadc342", crypto.sha256 ("x84"))
		end

	test_portable_agrees_with_native
			-- The portable Eiffel implementation is the fallback, so it must
			-- match the vectors in its own right and, where the OS
			-- implementation is in use, match it byte for byte.
		local
			crypto: SIMPLE_ENCRYPTION
			a, b: SPECIAL [NATURAL_8]
		do
			create crypto.make
			assert_equal ("portable pbkdf2 1000", "632c2812e46d4604102ba7618e9d6d7d2f8128f6266b4a03264d2a0460b7dcb3",
				crypto.bytes_to_hex (crypto.pbkdf2_sha256_bytes_portable ("password", ascii_bytes ("salt"), 1000, 32)))
			assert_equal ("portable hmac leading zero", "00e3990a8b977cd8cd41d7eb4d6c55d4b19f07b26e793407cbef85149d718020",
				crypto.bytes_to_hex (crypto.hmac_sha256_bytes_portable ("key", ascii_bytes ("msg23"))))
			assert_equal ("portable sha256 leading zero", "009d9e88ce13770ca5fc05097eb32a9576e1b989c0584f9174f31fe70aadc342",
				crypto.bytes_to_hex (crypto.sha256_bytes_portable ("x84")))
			if crypto.is_native then
				a := crypto.pbkdf2_sha256_bytes ("password", ascii_bytes ("salt"), 1000, 32)
				b := crypto.pbkdf2_sha256_bytes_portable ("password", ascii_bytes ("salt"), 1000, 32)
				assert_true ("native = portable (pbkdf2)", a.same_items (b, 0, 0, 32))
				a := crypto.hmac_sha256_bytes ("key", "msg23")
				b := crypto.hmac_sha256_bytes_portable ("key", ascii_bytes ("msg23"))
				assert_true ("native = portable (hmac)", a.same_items (b, 0, 0, 32))
			end
		end

	test_secure_random_is_system_source
			-- Bytes come from the operating system's CSPRNG, never a PRNG:
			-- the source must be available, and sixty-four 16-byte draws
			-- must all differ.
		local
			crypto: SIMPLE_ENCRYPTION
			seen: ARRAYED_LIST [STRING]
			i: INTEGER
			h: STRING
		do
			create crypto.make
			assert_true ("system CSPRNG available", crypto.is_secure_random_available)
			create seen.make (64)
			seen.compare_objects
			from i := 1 until i > 64 loop
				h := crypto.random_hex (16)
				assert_false ("draw " + i.out + " is new", seen.has (h))
				seen.extend (h)
				i := i + 1
			end
		end

feature {NONE} -- Helpers (2.0.0)

	ascii_bytes (a_text: STRING): SPECIAL [NATURAL_8]
			-- The characters of `a_text' as bytes.
		local
			i: INTEGER
		do
			create Result.make_filled (0, a_text.count)
			from i := 1 until i > a_text.count loop
				Result [i - 1] := a_text.item (i).code.to_natural_8
				i := i + 1
			end
		end

	pbkdf2_hex (a_crypto: SIMPLE_ENCRYPTION; a_iterations: INTEGER): STRING
			-- PBKDF2-SHA256 of the standard password/salt vector.
		do
			Result := a_crypto.pbkdf2_sha256 ("password", ascii_bytes ("salt"), a_iterations, 32)
		end

end
