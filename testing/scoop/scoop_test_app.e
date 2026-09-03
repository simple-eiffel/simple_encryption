note
	description: "[
		THE FREEZE ASSAULT (2.1.1). The vector test for a defect class
		proven in simple_winhttp on 2026-09-02 and found here by audit:
		`SIMPLE_ENCRYPTION.c_senc_pbkdf2' - the one call in this library
		that is DELIBERATELY slow - was declared plain
		`external "C inline"'.

		ISE's garbage collector stops every thread of the system before
		it collects; a thread inside a plain `external "C inline"' call
		is where the runtime can neither see it nor stop it, so the
		collection WAITS for that call to return and every other
		processor waits with it, at its very next allocation.

		Key stretching is the one place in a program where slowness is
		the FEATURE. Every login on a simple_chat server spends its whole
		derivation there, and unmarked, every one of them stopped the
		request loop, the poller and the writer with it.

		Four tests, in the order the argument runs:

		1-3  THE LAW (BLOCKING_PROBE). The same wait, three ways: an
		     Eiffel sleep costs the root nothing; an UNMARKED C call
		     costs it the whole wait; the same call MARKED `blocking'
		     costs it nothing again. Test 2 asserts the freeze exists -
		     it is the mechanism, and it passes before and after the fix.

		4    THE VECTOR. A real `SIMPLE_ENCRYPTION.pbkdf2_sha256_bytes'
		     on its own processor, iterations turned up until one call
		     takes three seconds, while the root does nothing but
		     allocate. Unmarked, the root's worst single allocation was
		     the whole derivation. Marked, it is single digits.

		THE BAR IS THE LIVE SET, AND THE ASK. An allocator that is never
		asked to collect can never be caught waiting for one, so every
		burst below KEEPS part of what it allocates - the heap grows and
		the collector has real work when it runs. That alone is not
		enough: left to the runtime's own trigger this instrument is
		flaky (measured on 2026-09-02 in simple_shell, roughly one run in
		four answered a whole burst train out of an existing free list,
		never collected, and reported the freeze as ABSENT). So each
		burst also ASKS, with `MEMORY.full_collect', inside the timed
		span. What the marker changes is not whether a collection is
		wanted but whether a requested one can proceed while another
		processor is inside C.
	]"
	author: "Larry Rix"

class
	SCOOP_TEST_APP

inherit
	PRECISE_CLOCK

create
	make

feature {NONE} -- Initialization

	make
			-- Run the assault.
		do
			print ("simple_encryption freeze assault (SCOOP): a slow external must not stop the collector%N%N")
			passed := 0
			failed := 0

			run_test (agent test_an_eiffel_sleep_on_another_processor_never_stops_the_allocator,
				"an Eiffel sleep on another processor never stops the allocator")
			run_test (agent test_an_unmarked_c_call_on_another_processor_stops_the_allocator,
				"an unmarked C call on another processor stops the allocator")
			run_test (agent test_a_blocking_marked_c_call_never_stops_the_allocator,
				"a blocking-marked C call never stops the allocator")
			run_test (agent test_a_slow_derivation_never_stops_another_processors_allocator,
				"a slow PBKDF2 derivation never stops another processor's allocator")

			print ("%N========================%N")
			print ("Results: " + passed.out + " passed, " + failed.out + " failed%N")
			if failed > 0 then
				print ("TESTS FAILED%N")
				(create {EXCEPTIONS}).die (1)
			else
				print ("ALL TESTS PASSED%N")
			end
		end

feature {NONE} -- Tests: the law

	test_an_eiffel_sleep_on_another_processor_never_stops_the_allocator
			-- EXECUTION_ENVIRONMENT.sleep is marked for the runtime, so a
			-- processor asleep in it never holds the collector.
		local
			l_probe: separate BLOCKING_PROBE
			l_worst: INTEGER_64
			l_done: INTEGER
		do
			create l_probe.make
			launch_eiffel_sleeps (l_probe)
			l_worst := worst_allocation_burst (Bursts, Burst_gap_ms)
			l_done := waits_made (l_probe)
			print ("      an Eiffel sleep of " + Wait_ms.out
				+ " ms on another processor: worst allocation on the root " + l_worst.out + " ms%N")
			assert ("the probe waited", l_done = Waits)
			assert ("a marked wait leaves the root's allocator alone (" + l_worst.out + " ms)",
				l_worst <= Allocation_budget_ms)
		end

	test_an_unmarked_c_call_on_another_processor_stops_the_allocator
			-- THE MECHANISM. The same wait spent inside an unmarked external:
			-- the root's very next allocation waits for it. This is the freeze,
			-- and it is still true after the fix - which is the point. What
			-- changed in 2.1.1 is that simple_encryption no longer makes one.
		local
			l_probe: separate BLOCKING_PROBE
			l_worst: INTEGER_64
			l_done: INTEGER
		do
			create l_probe.make
			launch_unmarked_c_sleeps (l_probe)
			l_worst := worst_allocation_burst (Bursts, Burst_gap_ms)
			l_done := waits_made (l_probe)
			print ("      an UNMARKED C call of " + Wait_ms.out
				+ " ms on another processor: worst allocation on the root " + l_worst.out + " ms%N")
			assert ("the probe waited", l_done = Waits)
			assert ("an unmarked wait stops the root's allocator for very nearly that long ("
				+ l_worst.out + " ms)", l_worst >= Wait_ms // 2)
		end

	test_a_blocking_marked_c_call_never_stops_the_allocator
			-- THE FIX, in one keyword. The SAME Sleep, marked
			-- `external "C blocking inline"': the root allocates through it.
		local
			l_probe: separate BLOCKING_PROBE
			l_worst: INTEGER_64
			l_done: INTEGER
		do
			create l_probe.make
			launch_blocking_c_sleeps (l_probe)
			l_worst := worst_allocation_burst (Bursts, Burst_gap_ms)
			l_done := waits_made (l_probe)
			print ("      a BLOCKING-marked C call of " + Wait_ms.out
				+ " ms on another processor: worst allocation on the root " + l_worst.out + " ms%N")
			assert ("the probe waited", l_done = Waits)
			assert ("the marker gives the collector the thread back (" + l_worst.out + " ms)",
				l_worst <= Allocation_budget_ms)
		end

feature {NONE} -- Tests: the vector

	test_a_slow_derivation_never_stops_another_processors_allocator
			-- THE RED-THEN-GREEN. A real PBKDF2 derivation on its own
			-- processor, iterations turned up until one call takes about
			-- three seconds, while the root does nothing but allocate.
			--
			-- 2.1.0 (`c_senc_pbkdf2' unmarked): worst allocation on the root
			-- was the whole derivation. 2.1.1 (marked, and the buffers moved
			-- to the C heap so marking is legal): single digits.
			--
			-- The derived key is checked to be non-zero because the C layer
			-- zeroes its output on every failure path: an assault that
			-- measured a derivation which never happened would prove nothing.
		local
			l_hasher: separate PBKDF2_HASHER
			l_worst, l_derive_ms: INTEGER_64
			l_done: INTEGER
			l_real: BOOLEAN
		do
			create l_hasher.make
			launch_derive (l_hasher, Derivations, Assault_iterations, Key_bytes)
			l_worst := worst_allocation_burst (Bursts, Burst_gap_ms)
			l_done := keys_made (l_hasher)
			l_derive_ms := derive_elapsed (l_hasher)
			l_real := key_is_real (l_hasher)
			print ("      " + Derivations.out + " real PBKDF2 derivation(s) of "
				+ Assault_iterations.out + " iterations on another processor ("
				+ l_derive_ms.out + " ms in the library): worst allocation on the root "
				+ l_worst.out + " ms%N")
			assert ("the hasher derived every key", l_done = Derivations)
			assert ("the derivation really produced a key, not the C layer's zero-fill", l_real)
			assert ("the derivation really was a slow one (" + l_derive_ms.out + " ms)",
				l_derive_ms >= Wait_ms // 2)
			assert ("no allocation on the root waited on the derivation (" + l_worst.out + " ms)",
				l_worst <= Allocation_budget_ms)
		end

feature {NONE} -- The probe's processor (each a short, separate call)

	launch_eiffel_sleeps (a_probe: separate BLOCKING_PROBE)
			-- Start the marked sleeps; asynchronous.
		do
			a_probe.run_eiffel_sleeps (Waits, Wait_ms)
		end

	launch_unmarked_c_sleeps (a_probe: separate BLOCKING_PROBE)
			-- Start the unmarked C waits; asynchronous.
		do
			a_probe.run_unmarked_c_sleeps (Waits, Wait_ms)
		end

	launch_blocking_c_sleeps (a_probe: separate BLOCKING_PROBE)
			-- Start the marked C waits; asynchronous.
		do
			a_probe.run_blocking_c_sleeps (Waits, Wait_ms)
		end

	waits_made (a_probe: separate BLOCKING_PROBE): INTEGER
			-- How many waits the probe made. A query, so it joins the probe.
		do
			Result := a_probe.waits_done
		ensure
			non_negative: Result >= 0
		end

feature {NONE} -- The hasher's processor (each a short, separate call)

	launch_derive (a_hasher: separate PBKDF2_HASHER; a_count, a_iterations, a_key_length: INTEGER)
			-- Start the real derivations; asynchronous, and only integers cross.
		require
			positive: a_count > 0 and a_iterations > 0 and a_key_length > 0
		do
			a_hasher.derive (a_count, a_iterations, a_key_length)
		end

	keys_made (a_hasher: separate PBKDF2_HASHER): INTEGER
			-- How many keys it derived. A query, so it joins the hasher.
		do
			Result := a_hasher.keys_derived
		ensure
			non_negative: Result >= 0
		end

	derive_elapsed (a_hasher: separate PBKDF2_HASHER): INTEGER_64
			-- How long the whole run took, in milliseconds.
		do
			Result := a_hasher.elapsed_milliseconds
		ensure
			non_negative: Result >= 0
		end

	key_is_real (a_hasher: separate PBKDF2_HASHER): BOOLEAN
			-- Did the last derivation produce something other than zeros?
		do
			Result := a_hasher.last_key_is_nonzero
		end

feature {NONE} -- The root's own allocator

	worst_allocation_burst (a_bursts, a_gap_ms: INTEGER): INTEGER_64
			-- Allocate `a_bursts' times, `a_gap_ms' apart - each burst
			-- keeping part of what it allocated and then asking for a
			-- collection - and answer the longest single burst in
			-- milliseconds. Nothing here touches another processor: a burst
			-- that takes a second took it inside the runtime, waiting for a
			-- collection that cannot start.
		require
			positive: a_bursts > 0 and a_gap_ms > 0
		local
			l_env: EXECUTION_ENVIRONMENT
			l_mem: MEMORY
			l_live: ARRAYED_LIST [STRING_8]
			l_junk: ARRAYED_LIST [STRING_8]
			i, k: INTEGER
			t0, l_span: INTEGER_64
		do
			create l_env
			create l_mem
			create l_live.make (a_bursts * Burst_kept)
			from
				i := 1
			until
				i > a_bursts
			loop
				t0 := now_ms
				create l_junk.make (Burst_strings)
				from
					k := 1
				until
					k > Burst_strings
				loop
					l_junk.extend (create {STRING_8}.make_filled ('x', Burst_string_bytes))
					if k <= Burst_kept then
							-- A live set that keeps growing, so the collector has
							-- something to mark and cannot answer every burst out
							-- of a free list it already owns.
						l_live.extend (l_junk.last)
					end
					k := k + 1
				variant
					Burst_strings + 1 - k
				end
					-- ASK for a collection, inside the timed span. Left to the
					-- runtime's own trigger this probe is flaky: a burst train
					-- answered out of an existing free list never collects, and
					-- an unmarked wait then scores single digits - a false green
					-- on the very test whose job is to prove the freeze exists.
				l_mem.full_collect
				l_span := now_ms - t0
				if l_span > Result then
					Result := l_span
				end
				l_env.sleep (a_gap_ms.to_integer_64 * 1_000_000)
				i := i + 1
			variant
				a_bursts + 1 - i
			end
			check kept_them_alive: l_live.count = a_bursts * Burst_kept end
		ensure
			non_negative: Result >= 0
		end

feature {NONE} -- Test runner

	run_test (a_test: PROCEDURE; a_name: STRING_8)
			-- Run one test; any exception (contract or otherwise) fails it.
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
			if attached (create {EXCEPTION_MANAGER}).last_exception as ex and then attached ex.description as d then
				print ("        " + d.to_string_8 + "%N")
			end
			failed := failed + 1
			l_retried := True
			retry
		end

	assert (a_tag: STRING_8; a_condition: BOOLEAN)
			-- Raise unless `a_condition', so `run_test' records the failure.
		do
			if not a_condition then
				print ("        FAILED: " + a_tag + "%N")
				(create {EXCEPTIONS}).raise ("freeze assault: " + a_tag)
			end
		end

	passed, failed: INTEGER

feature -- Constants: the wait under test

	Waits: INTEGER = 1
			-- Waits the probe's processor makes.

	Wait_ms: INTEGER = 3_000
			-- How long each of them lasts, and roughly how long one
			-- `Assault_iterations' derivation takes.

feature -- Constants: the vector

	Derivations: INTEGER = 1
			-- Real derivations the hasher makes.

	Assault_iterations: INTEGER = 16_000_000
			-- Measured on this machine: BCrypt's PBKDF2-SHA256 runs about
			-- 5,000 iterations per millisecond, so 6,000,000 took 1,194 ms
			-- and 16,000,000 takes about three seconds - long enough that
			-- ONE derivation's stall is measurable on its own, and matched
			-- to the 3,000 ms the law probe waits.
			--
			-- A magnifying glass, not a straw man. simple_chat's
			-- PASSWORD_HASHER floors production at 600,000, where the same
			-- stall is proportionally smaller - about 120 ms - and lands on
			-- every single login, verification and registration.

	Key_bytes: INTEGER = 32
			-- What `hash_password' asks for.

feature -- Constants: the root's bursts

	Bursts: INTEGER = 60

	Burst_gap_ms: INTEGER = 100
			-- 60 x 100 ms = 6 s, twice the wait under test.

	Burst_strings: INTEGER = 2_000

	Burst_string_bytes: INTEGER = 1_024
			-- 2 MiB a burst: enough that the collector runs many times over.

	Burst_kept: INTEGER = 200
			-- 200 KiB of every burst is kept alive, so the heap grows and the
			-- collector has real work: an allocator that is never asked to
			-- collect can never be caught waiting for one.

feature -- Constants: the bar

	Allocation_budget_ms: INTEGER_64 = 500
			-- The bound, with margin. A frame is 16 ms; an HTTP request loop
			-- that stops for seconds drops connections. 500 ms is far under
			-- the harm and far over the noise - and the measured GREEN is
			-- single-digit, so nothing here is tuned to just barely pass.

end
