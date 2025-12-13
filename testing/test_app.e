note
	description: "Test application for SIMPLE_ENCRYPTION"
	author: "Larry Rix"

class
	TEST_APP

create
	make

feature {NONE} -- Initialization

	make
			-- Run the tests.
		do
			create tests
			print ("Running SIMPLE_ENCRYPTION tests...%N%N")

			passed := 0
			failed := 0

			run_test (agent tests.test_sha256_basic, "test_sha256_basic")
			run_test (agent tests.test_sha256_empty, "test_sha256_empty")
			run_test (agent tests.test_sha256_known_vector, "test_sha256_known_vector")
			run_test (agent tests.test_hmac_sha256_basic, "test_hmac_sha256_basic")
			run_test (agent tests.test_hmac_sha256_known_vector, "test_hmac_sha256_known_vector")
			run_test (agent tests.test_password_hash_verify, "test_password_hash_verify")
			run_test (agent tests.test_pbkdf2_known_vector, "test_pbkdf2_known_vector")
			run_test (agent tests.test_random_bytes, "test_random_bytes")
			run_test (agent tests.test_random_hex, "test_random_hex")
			run_test (agent tests.test_random_token, "test_random_token")
			run_test (agent tests.test_hex_encoding, "test_hex_encoding")
			run_test (agent tests.test_constant_time_compare, "test_constant_time_compare")

			print ("%N========================%N")
			print ("Results: " + passed.out + " passed, " + failed.out + " failed%N")

			if failed > 0 then
				print ("TESTS FAILED%N")
			else
				print ("ALL TESTS PASSED%N")
			end
		end

feature {NONE} -- Implementation

	tests: LIB_TESTS

	passed: INTEGER
	failed: INTEGER

	run_test (a_test: PROCEDURE; a_name: STRING)
			-- Run a single test and update counters.
		local
			l_retried: BOOLEAN
		do
			if not l_retried then
				a_test.call (Void)
				print ("  PASS: " + a_name + "%N")
				passed := passed + 1
			end
		rescue
			print ("  FAIL: " + a_name + "%N")
			failed := failed + 1
			l_retried := True
			retry
		end

end
