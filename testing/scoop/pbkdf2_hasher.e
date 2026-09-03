note
	description: "[
		A processor that does nothing but run the REAL key derivation -
		`SIMPLE_ENCRYPTION.pbkdf2_sha256_bytes' - while another processor
		allocates.

		PBKDF2 is DELIBERATELY slow: the cost per guess is the whole
		security value, and simple_chat's `PASSWORD_HASHER' floors it at
		600,000 iterations. Before 2.1.1 `c_senc_pbkdf2' was a plain
		`external "C inline"' call, so ISE's collector could not begin
		while a derivation ran and every OTHER processor stopped at its
		next allocation for the whole of it - once per login, per
		verification, per registration.

		`Assault_iterations' is deliberately far above production so ONE
		call is a measurable three seconds. That is a magnifying glass,
		not a straw man: at 600,000 iterations the stall is proportionally
		smaller but it is the same stall, and it lands on every login.
	]"
	author: "Larry Rix"

class
	PBKDF2_HASHER

create
	make

feature {NONE} -- Initialization

	make
			-- A hasher that has derived nothing yet.
		do
			create crypto.make
			create last_key.make_empty (0)
		ensure
			nothing_derived: keys_derived = 0
		end

feature -- Access

	crypto: SIMPLE_ENCRYPTION
			-- The real library class under assault.

	keys_derived: INTEGER
			-- Derivations completed so far.

	elapsed_milliseconds: INTEGER_64
			-- How long the whole run took, wall clock.

	last_key: SPECIAL [NATURAL_8]
			-- The bytes the last derivation produced.

	last_key_is_nonzero: BOOLEAN
			-- Did the last derivation produce something other than zeros?
			-- The C layer zeroes its output on every failure path, so an
			-- all-zero key means the derivation did not really happen.
		local
			i: INTEGER
		do
			from
				i := 0
			until
				i >= last_key.count or Result
			loop
				Result := last_key [i] /= 0
				i := i + 1
			variant
				last_key.count - i
			end
		end

feature -- Basic operations

	derive (a_count, a_iterations, a_key_length: INTEGER)
			-- Run the real derivation `a_count' times at `a_iterations'.
		require
			positive: a_count > 0 and a_iterations > 0 and a_key_length > 0
		local
			i: INTEGER
			l_clock: PRECISE_CLOCK
			l_salt: SPECIAL [NATURAL_8]
			t0: INTEGER_64
		do
			create l_clock
			create l_salt.make_filled (0, 16)
			from
				i := 0
			until
				i >= l_salt.count
			loop
				l_salt [i] := (i + 1).to_natural_8
				i := i + 1
			variant
				l_salt.count - i
			end
			t0 := l_clock.now_ms
			from
				i := 1
			until
				i > a_count
			loop
				last_key := crypto.pbkdf2_sha256_bytes ("correct horse battery staple", l_salt, a_iterations, a_key_length)
				keys_derived := keys_derived + 1
				i := i + 1
			variant
				a_count + 1 - i
			end
			elapsed_milliseconds := l_clock.now_ms - t0
		ensure
			done: keys_derived = old keys_derived + a_count
			timed: elapsed_milliseconds >= 0
		end

invariant
	non_negative: keys_derived >= 0 and elapsed_milliseconds >= 0

end
