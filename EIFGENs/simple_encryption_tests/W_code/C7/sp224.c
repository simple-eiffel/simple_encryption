/*
 * Code for class SPECIAL_NUMBER_THEORETIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F224_4201(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F224_4202(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F224_4203(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F224_4204(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F224_4205(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F224_4206(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F224_4207(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F224_4208(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F224_4209(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit224(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SPECIAL_NUMBER_THEORETIC}.gcdext_div2 */
EIF_TYPED_VALUE F224_4201 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "gcdext_div2";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_TYPED_VALUE uu4_4x = {{0}, SK_UINT32};
#define uu4_4 uu4_4x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 223, Current, 6, 4, 7160);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(223, Current, 7160);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d1_a /= 0 or d0_a /= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(arg4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(5, 0xF80001F0, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(2,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(6, 0xF80001F0, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(3,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	loc3 = (EIF_NATURAL_32) arg3;
	RTHOOK(5);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	loc4 = (EIF_NATURAL_32) arg4;
	RTHOOK(6);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1023, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tb1 = eif_bit_test(EIF_NATURAL_32,tu4_1,ui4_1);
	if (tb1) {
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		if (RTAL & CK_LOOP) {
			RTHOOK(8);
			RTCT("d1 /= 0 or d0 /= 0", EX_LINV);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		for (;;) {
			RTHOOK(9);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1023, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tb1 = eif_bit_test(EIF_NATURAL_32,loc3,ui4_1);
			if (tb1) break;
			RTHOOK(10);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc3,ui4_1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tu4_2 = eif_bit_shift_right(loc4,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc3 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(11);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc4,ui4_1);
			loc4 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(12);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
			if (RTAL & CK_LOOP) {
				RTHOOK(8);
				RTCT("d1 /= 0 or d0 /= 0", EX_LINV);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
					RTCK;
				} else {
					RTCF;
				}
			}
		}
		RTHOOK(13);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(15);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc1,ui4_1);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(16);
			tb2 = '\01';
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			if (!(EIF_BOOLEAN) (tu4_1 > loc3)) {
				tb3 = '\0';
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == loc3)) {
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
					tb3 = (EIF_BOOLEAN) (tu4_1 >= loc4);
				}
				tb2 = tb3;
			}
			if (tb2) {
				RTHOOK(17);
				ur1 = RTCCL(loc5);
				ur2 = RTCCL(loc6);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				uu4_1 = tu4_1;
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
				uu4_2 = tu4_2;
				uu4_3 = loc3;
				uu4_4 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
				RTHOOK(18);
				RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				tu4_1 = eif_bit_or(loc1,uu4_1);
				loc1 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(19);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tu4_1 = eif_bit_shift_left(loc3,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = eif_bit_shift_right(loc4,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc4 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(20);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_right(loc3,ui4_1);
			loc3 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(21);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2--;
		}
		RTHOOK(22);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		Result = (EIF_NATURAL_32) loc1;
	} else {
		RTHOOK(23);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(24);
			tb2 = '\0';
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			if ((EIF_BOOLEAN) (tu4_1 <= loc3)) {
				tb3 = '\01';
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				if (!(EIF_BOOLEAN)(tu4_1 != loc3)) {
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
					tb3 = (EIF_BOOLEAN) (tu4_1 < loc4);
				}
				tb2 = tb3;
			}
			if (tb2) break;
			RTHOOK(25);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc3,ui4_1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tu4_2 = eif_bit_shift_right(loc4,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc3 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(26);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc4,ui4_1);
			loc4 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(27);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(28);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(29);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(30);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tu4_1 = eif_bit_shift_left(loc3,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = eif_bit_shift_right(loc4,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc4 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(31);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_right(loc3,ui4_1);
			loc3 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(32);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc1,ui4_1);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(33);
			tb3 = '\01';
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			if (!(EIF_BOOLEAN) (tu4_1 > loc3)) {
				tb4 = '\0';
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == loc3)) {
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
					tb4 = (EIF_BOOLEAN) (tu4_1 >= loc4);
				}
				tb3 = tb4;
			}
			if (tb3) {
				RTHOOK(34);
				ur1 = RTCCL(loc5);
				ur2 = RTCCL(loc6);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				uu4_1 = tu4_1;
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
				uu4_2 = tu4_2;
				uu4_3 = loc3;
				uu4_4 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
				RTHOOK(35);
				RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				tu4_1 = eif_bit_or(loc1,uu4_1);
				loc1 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(36);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2--;
		}
		RTHOOK(37);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		Result = (EIF_NATURAL_32) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef uu4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_NUMBER_THEORETIC}.basic_gcdext */
EIF_TYPED_VALUE F224_4202 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x, EIF_TYPED_VALUE arg11x)
{
	GTCX
	char *l_feature_name = "basic_gcdext";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_r
#define arg10 arg10x.it_i4
#define arg11 arg11x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ur6x = {{0}, SK_REF};
#define ur6 ur6x.it_r
	EIF_TYPED_VALUE ur7x = {{0}, SK_REF};
#define ur7 ur7x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ui4_7x = {{0}, SK_INT32};
#define ui4_7 ui4_7x.it_i4
	EIF_TYPED_VALUE ui4_8x = {{0}, SK_INT32};
#define ui4_8 ui4_8x.it_i4
	EIF_TYPED_VALUE ui4_9x = {{0}, SK_INT32};
#define ui4_9 ui4_9x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg11x.type & SK_HEAD) == SK_REF) arg11x.it_i4 = * (EIF_INTEGER_32 *) arg11x.it_r;
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_i4 = * (EIF_INTEGER_32 *) arg10x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(16);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg6);
	RTLR(4,arg9);
	RTLR(5,loc1);
	RTLR(6,Current);
	RTLR(7,tr1);
	RTLR(8,loc3);
	RTLR(9,ur1);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLR(12,ur4);
	RTLR(13,ur5);
	RTLR(14,ur6);
	RTLR(15,ur7);
	RTLIU(16);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU(SK_INT32,&arg11);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 223, Current, 4, 11, 7161);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(223, Current, 7161);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 223, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 223, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg5, 223, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg6, 223, l_feature_name, 6, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg9, 223, l_feature_name, 9, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op1_count >= op2_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg8 >= arg11), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target.valid_index (target_offset)", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("target.valid_index (target_offset + op1_count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg8) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("cofactor.valid_index (cofactor_offset)", EX_PRE);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("cofactor.valid_index (cofactor_offset + op1_count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg8) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("op1.valid_index (op1_offset)", EX_PRE);
		ui4_1 = arg7;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg6))(arg6, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(7);
		RTCT("op1.valid_index (op1_offset + op1_count - 0)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 + arg8) - ((EIF_INTEGER_32) 0L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg6))(arg6, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(8);
		RTCT("op1 [op1_offset + op1_count - 1] /= 0", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 + arg8) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
		RTTE((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(9);
		RTCT("op2.valid_index (op2_offset)", EX_PRE);
		ui4_1 = arg10;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg9))(arg9, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(10);
		RTCT("op2.valid_index (op2_offset + op2_count - 0)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg10 + arg11) - ((EIF_INTEGER_32) 0L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg9))(arg9, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(11);
		RTCT("op2 [op2_offset + op2_count - 1] /= 0", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg10 + arg11) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg9))(arg9, ui4_1x)).it_n4);
		RTTE((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(12);
		RTCT("op2_count >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg11 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(13);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = (EIF_INTEGER_32) (arg8 + ((EIF_INTEGER_32) 1L));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(13,1);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(14);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(15);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = (EIF_INTEGER_32) (arg8 + ((EIF_INTEGER_32) 1L));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(15,1);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(16);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(17);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = arg4;
	ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg8) - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", arg3))(arg3, uu4_1x, ui4_1x, ui4_2x);
	RTHOOK(18);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = loc4;
	ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + arg8) - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", loc3))(loc3, uu4_1x, ui4_1x, ui4_2x);
	RTHOOK(19);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ui4_1 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg3))(arg3, uu4_1x, ui4_1x);
	RTHOOK(20);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = loc4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc3))(loc3, uu4_1x, ui4_1x);
	RTHOOK(21);
	if ((EIF_BOOLEAN) (arg8 > arg11)) {
		RTHOOK(22);
		ur1 = loc1;
		ui4_1 = loc2;
		ur2 = arg6;
		ui4_2 = arg7;
		ur3 = arg6;
		ui4_3 = arg7;
		ui4_4 = arg8;
		ur4 = arg9;
		ui4_5 = arg10;
		ui4_6 = arg11;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
		RTHOOK(23);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg3))(arg3, uu4_1x, ui4_1x);
		RTHOOK(24);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ui4_1 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc3))(loc3, uu4_1x, ui4_1x);
		RTHOOK(25);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ur1 = arg1;
		ui4_1 = arg2;
		ur2 = arg3;
		ui4_2 = arg4;
		ur3 = RTCCL(arg5);
		ur4 = arg9;
		ui4_3 = arg10;
		ui4_4 = arg11;
		ur5 = arg6;
		ui4_5 = arg7;
		ui4_6 = arg8;
		ui4_7 = ((EIF_INTEGER_32) -1L);
		ur6 = loc3;
		ui4_8 = loc4;
		ur7 = loc1;
		ui4_9 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3433, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ur4x, ui4_3x, ui4_4x, ur5x, ui4_5x, ui4_6x, ui4_7x, ur6x, ui4_8x, ur7x, ui4_9x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(26);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ur1 = arg1;
		ui4_1 = arg2;
		ur2 = arg3;
		ui4_2 = arg4;
		ur3 = RTCCL(arg5);
		ur4 = arg6;
		ui4_3 = arg7;
		ui4_4 = arg8;
		ur5 = arg9;
		ui4_5 = arg10;
		ui4_6 = arg11;
		ui4_7 = ((EIF_INTEGER_32) 1L);
		ur6 = loc3;
		ui4_8 = loc4;
		ur7 = loc1;
		ui4_9 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3433, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ur4x, ui4_3x, ui4_4x, ur5x, ui4_5x, ui4_6x, ui4_7x, ur6x, ui4_8x, ur7x, ui4_9x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ur6
#undef ur7
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ui4_7
#undef ui4_8
#undef ui4_9
#undef uu4_1
#undef arg11
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_NUMBER_THEORETIC}.basic_gcdext_arranged */
EIF_TYPED_VALUE F224_4203 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x, EIF_TYPED_VALUE arg11x, EIF_TYPED_VALUE arg12x, EIF_TYPED_VALUE arg13x, EIF_TYPED_VALUE arg14x, EIF_TYPED_VALUE arg15x, EIF_TYPED_VALUE arg16x)
{
	GTCX
	char *l_feature_name = "basic_gcdext_arranged";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc11 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc14 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc15 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc16 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc17 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc18 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc19 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc20 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc21 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc22 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc25 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc26 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc27 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc28 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc29 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc30 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc31 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc32 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc33 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc34 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc35 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc36 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc37 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc38 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc39 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc40 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc41 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc42 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc43 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc44 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc45 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc46 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc47 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc48 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc49 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc50 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc51 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc52 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc53 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc54 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc55 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc56 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_r
#define arg10 arg10x.it_i4
#define arg11 arg11x.it_i4
#define arg12 arg12x.it_i4
#define arg13 arg13x.it_r
#define arg14 arg14x.it_i4
#define arg15 arg15x.it_r
#define arg16 arg16x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_TYPED_VALUE uu4_4x = {{0}, SK_UINT32};
#define uu4_4 uu4_4x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg16x.type & SK_HEAD) == SK_REF) arg16x.it_i4 = * (EIF_INTEGER_32 *) arg16x.it_r;
	if ((arg14x.type & SK_HEAD) == SK_REF) arg14x.it_i4 = * (EIF_INTEGER_32 *) arg14x.it_r;
	if ((arg12x.type & SK_HEAD) == SK_REF) arg12x.it_i4 = * (EIF_INTEGER_32 *) arg12x.it_r;
	if ((arg11x.type & SK_HEAD) == SK_REF) arg11x.it_i4 = * (EIF_INTEGER_32 *) arg11x.it_r;
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_i4 = * (EIF_INTEGER_32 *) arg10x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(30);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg6);
	RTLR(4,arg9);
	RTLR(5,arg13);
	RTLR(6,arg15);
	RTLR(7,loc56);
	RTLR(8,Current);
	RTLR(9,tr1);
	RTLR(10,loc38);
	RTLR(11,loc40);
	RTLR(12,loc42);
	RTLR(13,loc44);
	RTLR(14,loc46);
	RTLR(15,loc7);
	RTLR(16,loc5);
	RTLR(17,ur1);
	RTLR(18,loc23);
	RTLR(19,loc24);
	RTLR(20,loc25);
	RTLR(21,loc26);
	RTLR(22,loc29);
	RTLR(23,loc30);
	RTLR(24,loc27);
	RTLR(25,loc28);
	RTLR(26,ur2);
	RTLR(27,ur3);
	RTLR(28,ur4);
	RTLR(29,loc48);
	RTLIU(30);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU(SK_INT32,&arg11);
	RTLU(SK_INT32,&arg12);
	RTLU(SK_REF,&arg13);
	RTLU(SK_INT32,&arg14);
	RTLU(SK_REF,&arg15);
	RTLU(SK_INT32,&arg16);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_UINT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_BOOL, &loc13);
	RTLU(SK_BOOL, &loc14);
	RTLU(SK_UINT32, &loc15);
	RTLU(SK_UINT32, &loc16);
	RTLU(SK_UINT32, &loc17);
	RTLU(SK_UINT32, &loc18);
	RTLU(SK_UINT32, &loc19);
	RTLU(SK_UINT32, &loc20);
	RTLU(SK_UINT32, &loc21);
	RTLU(SK_UINT32, &loc22);
	RTLU(SK_REF, &loc23);
	RTLU(SK_REF, &loc24);
	RTLU(SK_REF, &loc25);
	RTLU(SK_REF, &loc26);
	RTLU(SK_REF, &loc27);
	RTLU(SK_REF, &loc28);
	RTLU(SK_REF, &loc29);
	RTLU(SK_REF, &loc30);
	RTLU(SK_INT32, &loc31);
	RTLU(SK_UINT32, &loc32);
	RTLU(SK_UINT32, &loc33);
	RTLU(SK_INT32, &loc34);
	RTLU(SK_INT32, &loc35);
	RTLU(SK_INT32, &loc36);
	RTLU(SK_UINT32, &loc37);
	RTLU(SK_REF, &loc38);
	RTLU(SK_INT32, &loc39);
	RTLU(SK_REF, &loc40);
	RTLU(SK_INT32, &loc41);
	RTLU(SK_REF, &loc42);
	RTLU(SK_INT32, &loc43);
	RTLU(SK_REF, &loc44);
	RTLU(SK_INT32, &loc45);
	RTLU(SK_REF, &loc46);
	RTLU(SK_INT32, &loc47);
	RTLU(SK_REF, &loc48);
	RTLU(SK_INT32, &loc49);
	RTLU(SK_INT32, &loc50);
	RTLU(SK_INT32, &loc51);
	RTLU(SK_INT32, &loc52);
	RTLU(SK_UINT32, &loc53);
	RTLU(SK_UINT32, &loc54);
	RTLU(SK_UINT32, &loc55);
	RTLU(SK_REF, &loc56);
	
	RTEAA(l_feature_name, 223, Current, 56, 16, 7162);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(223, Current, 7162);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 223, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 223, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg5, 223, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg6, 223, l_feature_name, 6, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg9, 223, l_feature_name, 9, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg13, 223, l_feature_name, 13, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg15, 223, l_feature_name, 15, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(56, 0xF80001F0, 0, 0); /* loc56 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(1,1);
	loc56 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(38, 0xF800026B, 0, 0); /* loc38 */
	loc38 = (EIF_REFERENCE) arg3;
	RTHOOK(3);
	RTDBGAL(39, 0x10000000, 1, 0); /* loc39 */
	loc39 = (EIF_INTEGER_32) arg4;
	RTHOOK(4);
	RTDBGAL(40, 0xF800026B, 0, 0); /* loc40 */
	loc40 = (EIF_REFERENCE) arg6;
	RTHOOK(5);
	RTDBGAL(41, 0x10000000, 1, 0); /* loc41 */
	loc41 = (EIF_INTEGER_32) arg7;
	RTHOOK(6);
	RTDBGAL(50, 0x10000000, 1, 0); /* loc50 */
	loc50 = (EIF_INTEGER_32) arg8;
	RTHOOK(7);
	RTDBGAL(42, 0xF800026B, 0, 0); /* loc42 */
	loc42 = (EIF_REFERENCE) arg9;
	RTHOOK(8);
	RTDBGAL(43, 0x10000000, 1, 0); /* loc43 */
	loc43 = (EIF_INTEGER_32) arg10;
	RTHOOK(9);
	RTDBGAL(44, 0xF800026B, 0, 0); /* loc44 */
	loc44 = (EIF_REFERENCE) arg15;
	RTHOOK(10);
	RTDBGAL(45, 0x10000000, 1, 0); /* loc45 */
	loc45 = (EIF_INTEGER_32) arg16;
	RTHOOK(11);
	RTDBGAL(46, 0xF800026B, 0, 0); /* loc46 */
	loc46 = (EIF_REFERENCE) arg13;
	RTHOOK(12);
	RTDBGAL(47, 0x10000000, 1, 0); /* loc47 */
	loc47 = (EIF_INTEGER_32) arg14;
	RTHOOK(13);
	RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
	loc34 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(14);
	RTDBGAL(31, 0x10000000, 1, 0); /* loc31 */
	loc31 = (EIF_INTEGER_32) arg12;
	RTHOOK(15);
	RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
	loc12 = (EIF_INTEGER_32) arg11;
	RTHOOK(16);
	RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
	loc7 = (EIF_REFERENCE) loc38;
	RTHOOK(17);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	loc8 = (EIF_INTEGER_32) loc39;
	RTHOOK(18);
	RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = (EIF_INTEGER_32) (loc50 + ((EIF_INTEGER_32) 1L));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(18,1);
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(19);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(20);
	RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
	loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc50 > ((EIF_INTEGER_32) 17L));
	for (;;) {
		RTHOOK(21);
		if (loc13) break;
		RTHOOK(22);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12 = (EIF_INTEGER_32) loc50;
		RTHOOK(23);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		ur1 = loc42;
		ui4_1 = loc43;
		ui4_2 = loc12;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc12 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(24);
		if ((EIF_BOOLEAN) (loc12 <= ((EIF_INTEGER_32) 1L))) {
			RTHOOK(25);
			RTDBGAL(13, 0x04000000, 1, 0); /* loc13 */
			loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(26);
			if (loc9) {
				RTHOOK(27);
				RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
				ui4_1 = (EIF_INTEGER_32) (loc50 - ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc40))(loc40, ui4_1x)).it_n4);
				loc15 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(28);
				RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
				ui4_1 = (EIF_INTEGER_32) (loc50 - ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc42))(loc42, ui4_1x)).it_n4);
				loc16 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(29);
				RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
				ui4_1 = (EIF_INTEGER_32) (loc50 - ((EIF_INTEGER_32) 2L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc40))(loc40, ui4_1x)).it_n4);
				loc17 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(30);
				RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
				ui4_1 = (EIF_INTEGER_32) (loc50 - ((EIF_INTEGER_32) 2L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc42))(loc42, ui4_1x)).it_n4);
				loc18 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(31);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				uu4_1 = loc15;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
				loc10 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(32);
				if ((EIF_BOOLEAN)(loc10 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(33);
					RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
					ui4_1 = loc10;
					tu4_1 = eif_bit_shift_left(loc15,ui4_1);
					ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - loc10);
					tu4_2 = eif_bit_shift_right(loc17,ui4_1);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_or(tu4_1,uu4_1);
					loc15 = (EIF_NATURAL_32) tu4_3;
					RTHOOK(34);
					RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
					ui4_1 = loc10;
					tu4_1 = eif_bit_shift_left(loc16,ui4_1);
					ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - loc10);
					tu4_2 = eif_bit_shift_right(loc18,ui4_1);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_or(tu4_1,uu4_1);
					loc16 = (EIF_NATURAL_32) tu4_3;
					RTHOOK(35);
					RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
					ui4_1 = loc10;
					tu4_1 = eif_bit_shift_left(loc18,ui4_1);
					loc18 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(36);
					RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
					ui4_1 = loc10;
					tu4_1 = eif_bit_shift_left(loc17,ui4_1);
					loc17 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(37);
					if ((EIF_BOOLEAN) (loc50 >= ((EIF_INTEGER_32) 3L))) {
						RTHOOK(38);
						RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc41 + loc50) - ((EIF_INTEGER_32) 3L));
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc40))(loc40, ui4_1x)).it_n4);
						ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - loc10);
						tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
						uu4_1 = tu4_2;
						tu4_1 = eif_bit_or(loc17,uu4_1);
						loc17 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(39);
						RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc43 + loc50) - ((EIF_INTEGER_32) 3L));
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc42))(loc42, ui4_1x)).it_n4);
						ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - loc10);
						tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
						uu4_1 = tu4_2;
						tu4_1 = eif_bit_or(loc18,uu4_1);
						loc18 = (EIF_NATURAL_32) tu4_1;
					}
				}
				RTHOOK(40);
				RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
				loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(41);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(42);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(43);
				RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
				loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(44);
				RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
				loc11 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(45);
				RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
				loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(46);
				RTDBGAL(23, 0xF80001F0, 0, 0); /* loc23 */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLN(typres0.id);
				}
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
				RTNHOOK(46,1);
				loc23 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(47);
				RTDBGAL(24, 0xF80001F0, 0, 0); /* loc24 */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLN(typres0.id);
				}
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
				RTNHOOK(47,1);
				loc24 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(48);
				RTDBGAL(25, 0xF80001F0, 0, 0); /* loc25 */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLN(typres0.id);
				}
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
				RTNHOOK(48,1);
				loc25 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(49);
				RTDBGAL(26, 0xF80001F0, 0, 0); /* loc26 */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLN(typres0.id);
				}
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
				RTNHOOK(49,1);
				loc26 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(50);
				RTDBGAL(29, 0xF80001F0, 0, 0); /* loc29 */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLN(typres0.id);
				}
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
				RTNHOOK(50,1);
				loc29 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(51);
				RTDBGAL(30, 0xF80001F0, 0, 0); /* loc30 */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLN(typres0.id);
				}
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
				RTNHOOK(51,1);
				loc30 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(52);
				RTDBGAL(27, 0xF80001F0, 0, 0); /* loc27 */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLN(typres0.id);
				}
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
				RTNHOOK(52,1);
				loc27 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(53);
				RTDBGAL(28, 0xF80001F0, 0, 0); /* loc28 */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLN(typres0.id);
				}
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
				RTNHOOK(53,1);
				loc28 = (EIF_REFERENCE) RTCCL(tr1);
				for (;;) {
					RTHOOK(54);
					if (loc14) break;
					RTHOOK(55);
					ur1 = RTCCL(loc25);
					ur2 = RTCCL(loc26);
					uu4_1 = loc16;
					uu4_2 = loc18;
					uu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					uu4_4 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
					RTHOOK(56);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc25))(loc25)).it_n4);
					if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(57);
						RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
						loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						RTHOOK(58);
						ur1 = RTCCL(loc23);
						ur2 = RTCCL(loc24);
						uu4_1 = loc15;
						uu4_2 = loc17;
						uu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
						uu4_4 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1957, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
						RTHOOK(59);
						RTDBGAL(21, 0x38000000, 1, 0); /* loc21 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc23))(loc23)).it_n4);
						uu4_1 = tu4_1;
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc24))(loc24)).it_n4);
						uu4_2 = tu4_2;
						tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc25))(loc25)).it_n4);
						uu4_3 = tu4_3;
						tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc26))(loc26)).it_n4);
						uu4_4 = tu4_4;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3431, dtype))(Current, uu4_1x, uu4_2x, uu4_3x, uu4_4x)).it_n4);
						loc21 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(60);
						ur1 = RTCCL(loc25);
						ur2 = RTCCL(loc26);
						uu4_1 = loc16;
						uu4_2 = loc18;
						uu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
						uu4_4 = loc4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1957, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
						RTHOOK(61);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc25))(loc25)).it_n4);
						if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
							RTHOOK(62);
							RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
							loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						} else {
							RTHOOK(63);
							ur1 = RTCCL(loc23);
							ur2 = RTCCL(loc24);
							uu4_1 = loc15;
							uu4_2 = loc17;
							uu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
							uu4_4 = loc2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
							RTHOOK(64);
							RTDBGAL(22, 0x38000000, 1, 0); /* loc22 */
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc23))(loc23)).it_n4);
							uu4_1 = tu4_1;
							tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc24))(loc24)).it_n4);
							uu4_2 = tu4_2;
							tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc25))(loc25)).it_n4);
							uu4_3 = tu4_3;
							tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc26))(loc26)).it_n4);
							uu4_4 = tu4_4;
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3431, dtype))(Current, uu4_1x, uu4_2x, uu4_3x, uu4_4x)).it_n4);
							loc22 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(65);
							if ((EIF_BOOLEAN)(loc21 != loc22)) {
								RTHOOK(66);
								RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
								loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							} else {
								RTHOOK(67);
								RTDBGAL(19, 0x38000000, 1, 0); /* loc19 */
								loc19 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc1 + (EIF_NATURAL_32) (loc21 * loc3));
								RTHOOK(68);
								RTDBGAL(20, 0x38000000, 1, 0); /* loc20 */
								loc20 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc2 + (EIF_NATURAL_32) (loc21 * loc4));
								RTHOOK(69);
								RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
								loc1 = (EIF_NATURAL_32) loc3;
								RTHOOK(70);
								RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
								loc3 = (EIF_NATURAL_32) loc19;
								RTHOOK(71);
								RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
								loc2 = (EIF_NATURAL_32) loc4;
								RTHOOK(72);
								RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
								loc4 = (EIF_NATURAL_32) loc20;
								RTHOOK(73);
								ur1 = RTCCL(loc27);
								ur2 = RTCCL(loc28);
								uu4_1 = loc21;
								uu4_2 = loc18;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
								RTHOOK(74);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc27))(loc27)).it_n4);
								uu4_1 = (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) (loc21 * loc16));
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc27))(loc27, uu4_1x);
								RTHOOK(75);
								ur1 = RTCCL(loc29);
								ur2 = RTCCL(loc30);
								uu4_1 = loc15;
								uu4_2 = loc17;
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc27))(loc27)).it_n4);
								uu4_3 = tu4_1;
								tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc28))(loc28)).it_n4);
								uu4_4 = tu4_2;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
								RTHOOK(76);
								RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
								loc15 = (EIF_NATURAL_32) loc16;
								RTHOOK(77);
								RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
								loc17 = (EIF_NATURAL_32) loc18;
								RTHOOK(78);
								RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc29))(loc29)).it_n4);
								loc16 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(79);
								RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc30))(loc30)).it_n4);
								loc18 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(80);
								RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
								tu4_1 = eif_bit_not(loc11);
								loc11 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(81);
								ur1 = RTCCL(loc25);
								ur2 = RTCCL(loc26);
								uu4_1 = loc16;
								uu4_2 = loc18;
								uu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								uu4_4 = loc3;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1957, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
								RTHOOK(82);
								ur1 = RTCCL(loc23);
								ur2 = RTCCL(loc24);
								uu4_1 = loc15;
								uu4_2 = loc17;
								uu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								uu4_4 = loc1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
								RTHOOK(83);
								RTDBGAL(21, 0x38000000, 1, 0); /* loc21 */
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc23))(loc23)).it_n4);
								uu4_1 = tu4_1;
								tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc24))(loc24)).it_n4);
								uu4_2 = tu4_2;
								tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc25))(loc25)).it_n4);
								uu4_3 = tu4_3;
								tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc26))(loc26)).it_n4);
								uu4_4 = tu4_4;
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3431, dtype))(Current, uu4_1x, uu4_2x, uu4_3x, uu4_4x)).it_n4);
								loc21 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(84);
								ur1 = RTCCL(loc25);
								ur2 = RTCCL(loc26);
								uu4_1 = loc16;
								uu4_2 = loc18;
								uu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								uu4_4 = loc4;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
								RTHOOK(85);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc25))(loc25)).it_n4);
								if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
									RTHOOK(86);
									RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
									loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								} else {
									RTHOOK(87);
									ur1 = RTCCL(loc23);
									ur2 = RTCCL(loc24);
									uu4_1 = loc15;
									uu4_2 = loc17;
									uu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
									uu4_4 = loc2;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1957, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
									RTHOOK(88);
									RTDBGAL(22, 0x38000000, 1, 0); /* loc22 */
									tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc23))(loc23)).it_n4);
									uu4_1 = tu4_1;
									tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc24))(loc24)).it_n4);
									uu4_2 = tu4_2;
									tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc25))(loc25)).it_n4);
									uu4_3 = tu4_3;
									tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc26))(loc26)).it_n4);
									uu4_4 = tu4_4;
									tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3431, dtype))(Current, uu4_1x, uu4_2x, uu4_3x, uu4_4x)).it_n4);
									loc22 = (EIF_NATURAL_32) tu4_1;
									RTHOOK(89);
									if ((EIF_BOOLEAN)(loc21 != loc22)) {
										RTHOOK(90);
										RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
										loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									} else {
										RTHOOK(91);
										RTDBGAL(19, 0x38000000, 1, 0); /* loc19 */
										loc19 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc1 + (EIF_NATURAL_32) (loc21 * loc3));
										RTHOOK(92);
										RTDBGAL(20, 0x38000000, 1, 0); /* loc20 */
										loc20 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc2 + (EIF_NATURAL_32) (loc21 * loc4));
										RTHOOK(93);
										RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
										loc1 = (EIF_NATURAL_32) loc3;
										RTHOOK(94);
										RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
										loc3 = (EIF_NATURAL_32) loc19;
										RTHOOK(95);
										RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
										loc2 = (EIF_NATURAL_32) loc4;
										RTHOOK(96);
										RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
										loc4 = (EIF_NATURAL_32) loc20;
										RTHOOK(97);
										ur1 = RTCCL(loc27);
										ur2 = RTCCL(loc28);
										uu4_1 = loc21;
										uu4_2 = loc18;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
										RTHOOK(98);
										tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc27))(loc27)).it_n4);
										uu4_1 = (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) (loc21 * loc16));
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc27))(loc27, uu4_1x);
										RTHOOK(99);
										ur1 = RTCCL(loc29);
										ur2 = RTCCL(loc30);
										uu4_1 = loc15;
										uu4_2 = loc17;
										tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc27))(loc27)).it_n4);
										uu4_3 = tu4_1;
										tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc28))(loc28)).it_n4);
										uu4_4 = tu4_2;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
										RTHOOK(100);
										RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
										loc15 = (EIF_NATURAL_32) loc16;
										RTHOOK(101);
										RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
										loc17 = (EIF_NATURAL_32) loc18;
										RTHOOK(102);
										RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
										tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc29))(loc29)).it_n4);
										loc16 = (EIF_NATURAL_32) tu4_1;
										RTHOOK(103);
										RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
										tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc30))(loc30)).it_n4);
										loc18 = (EIF_NATURAL_32) tu4_1;
										RTHOOK(104);
										RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
										tu4_1 = eif_bit_not(loc11);
										loc11 = (EIF_NATURAL_32) tu4_1;
									}
								}
							}
						}
					}
				}
				RTHOOK(105);
				if ((EIF_BOOLEAN)(loc11 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(106);
					RTDBGAL(31, 0x10000000, 1, 0); /* loc31 */
					loc31 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc31;
				}
			} else {
				RTHOOK(107);
				RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc41 + loc50) - ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc40))(loc40, ui4_1x)).it_n4);
				loc15 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(108);
				RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc43 + loc50) - ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc42))(loc42, ui4_1x)).it_n4);
				loc16 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(109);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				uu4_1 = loc15;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
				loc10 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(110);
				if ((EIF_BOOLEAN)(loc10 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(111);
					RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
					ui4_1 = loc10;
					tu4_1 = eif_bit_shift_left(loc15,ui4_1);
					ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc41 + loc50) - ((EIF_INTEGER_32) 2L));
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc40))(loc40, ui4_1x)).it_n4);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					ui4_1 = (EIF_INTEGER_32) (ti4_1 - loc10);
					tu4_3 = eif_bit_shift_right(tu4_2,ui4_1);
					uu4_1 = tu4_3;
					tu4_2 = eif_bit_or(tu4_1,uu4_1);
					loc15 = (EIF_NATURAL_32) tu4_2;
					RTHOOK(112);
					RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
					ui4_1 = loc10;
					tu4_1 = eif_bit_shift_left(loc16,ui4_1);
					ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc43 + loc50) - ((EIF_INTEGER_32) 2L));
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc42))(loc42, ui4_1x)).it_n4);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					ui4_1 = (EIF_INTEGER_32) (ti4_1 - loc10);
					tu4_3 = eif_bit_shift_right(tu4_2,ui4_1);
					uu4_1 = tu4_3;
					tu4_2 = eif_bit_or(tu4_1,uu4_1);
					loc16 = (EIF_NATURAL_32) tu4_2;
				}
				RTHOOK(113);
				RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
				loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(114);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(115);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(116);
				RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
				loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(117);
				RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
				loc11 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(118);
				RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
				loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				for (;;) {
					RTHOOK(119);
					if (loc14) break;
					RTHOOK(120);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_NATURAL_32) (loc16 - loc3) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)((EIF_NATURAL_32) (loc16 + loc4) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
						RTHOOK(121);
						RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
						loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						RTHOOK(122);
						RTDBGAL(32, 0x38000000, 1, 0); /* loc32 */
						loc32 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc15 + loc1) / (EIF_NATURAL_32) (loc16 - loc3));
						RTHOOK(123);
						if ((EIF_BOOLEAN)(loc32 != (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc15 - loc2) / (EIF_NATURAL_32) (loc16 + loc4)))) {
							RTHOOK(124);
							RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
							loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						} else {
							RTHOOK(125);
							RTDBGAL(33, 0x38000000, 1, 0); /* loc33 */
							loc33 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc1 + (EIF_NATURAL_32) (loc32 * loc3));
							RTHOOK(126);
							RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
							loc1 = (EIF_NATURAL_32) loc3;
							RTHOOK(127);
							RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
							loc3 = (EIF_NATURAL_32) loc33;
							RTHOOK(128);
							RTDBGAL(33, 0x38000000, 1, 0); /* loc33 */
							loc33 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc2 + (EIF_NATURAL_32) (loc32 * loc4));
							RTHOOK(129);
							RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
							loc2 = (EIF_NATURAL_32) loc4;
							RTHOOK(130);
							RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
							loc4 = (EIF_NATURAL_32) loc33;
							RTHOOK(131);
							RTDBGAL(33, 0x38000000, 1, 0); /* loc33 */
							loc33 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc15 - (EIF_NATURAL_32) (loc32 * loc16));
							RTHOOK(132);
							RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
							loc15 = (EIF_NATURAL_32) loc16;
							RTHOOK(133);
							RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
							loc16 = (EIF_NATURAL_32) loc33;
							RTHOOK(134);
							RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
							tu4_1 = eif_bit_not(loc11);
							loc11 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(135);
							if ((EIF_BOOLEAN)((EIF_NATURAL_32) (loc16 - loc4) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
								RTHOOK(136);
								RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
								loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							} else {
								RTHOOK(137);
								RTDBGAL(32, 0x38000000, 1, 0); /* loc32 */
								loc32 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc15 - loc1) / (EIF_NATURAL_32) (loc16 + loc3));
								RTHOOK(138);
								if ((EIF_BOOLEAN)(loc32 != (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc15 + loc2) / (EIF_NATURAL_32) (loc16 - loc4)))) {
									RTHOOK(139);
									RTDBGAL(14, 0x04000000, 1, 0); /* loc14 */
									loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								} else {
									RTHOOK(140);
									RTDBGAL(33, 0x38000000, 1, 0); /* loc33 */
									loc33 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc1 + (EIF_NATURAL_32) (loc32 * loc3));
									RTHOOK(141);
									RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
									loc1 = (EIF_NATURAL_32) loc3;
									RTHOOK(142);
									RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
									loc3 = (EIF_NATURAL_32) loc33;
									RTHOOK(143);
									RTDBGAL(33, 0x38000000, 1, 0); /* loc33 */
									loc33 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc2 + (EIF_NATURAL_32) (loc32 * loc4));
									RTHOOK(144);
									RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
									loc2 = (EIF_NATURAL_32) loc4;
									RTHOOK(145);
									RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
									loc4 = (EIF_NATURAL_32) loc33;
									RTHOOK(146);
									RTDBGAL(33, 0x38000000, 1, 0); /* loc33 */
									loc33 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc15 - (EIF_NATURAL_32) (loc32 * loc16));
									RTHOOK(147);
									RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
									loc15 = (EIF_NATURAL_32) loc16;
									RTHOOK(148);
									RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
									loc16 = (EIF_NATURAL_32) loc33;
									RTHOOK(149);
									RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
									tu4_1 = eif_bit_not(loc11);
									loc11 = (EIF_NATURAL_32) tu4_1;
								}
							}
						}
					}
				}
				RTHOOK(150);
				if ((EIF_BOOLEAN)(loc11 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(151);
					RTDBGAL(31, 0x10000000, 1, 0); /* loc31 */
					loc31 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc31;
				}
			}
			RTHOOK(152);
			if ((EIF_BOOLEAN)(loc2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(153);
				ur1 = loc5;
				ui4_1 = loc6;
				ur2 = loc40;
				ui4_2 = loc41;
				ur3 = loc40;
				ui4_3 = loc41;
				ui4_4 = loc50;
				ur4 = loc42;
				ui4_5 = loc43;
				ui4_6 = loc12;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
				RTHOOK(154);
				ur1 = loc38;
				ui4_1 = loc39;
				ui4_2 = loc45;
				ui4_3 = loc34;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc44))(loc44, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(155);
				RTDBGAL(35, 0x10000000, 1, 0); /* loc35 */
				loc35 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc50 - loc12) + ((EIF_INTEGER_32) 1L));
				RTHOOK(156);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				ui4_1 = (EIF_INTEGER_32) (loc47 + loc34);
				ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc47 + loc34) + loc35) - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", loc46))(loc46, uu4_1x, ui4_1x, ui4_2x);
				RTHOOK(157);
				RTDBGAL(36, 0x10000000, 1, 0); /* loc36 */
				loc36 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					RTHOOK(158);
					if ((EIF_BOOLEAN) (loc36 >= loc35)) break;
					RTHOOK(159);
					ur1 = loc44;
					ui4_1 = (EIF_INTEGER_32) (loc45 + loc36);
					ur2 = loc46;
					ui4_2 = loc47;
					ui4_3 = loc34;
					ui4_4 = (EIF_INTEGER_32) (loc6 + loc36);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc5))(loc5, ui4_4x)).it_n4);
					uu4_1 = tu4_1;
					ur3 = RTCCL(loc56);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
					RTHOOK(160);
					RTDBGAL(37, 0x38000000, 1, 0); /* loc37 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
					loc37 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(161);
					uu4_1 = loc37;
					ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc45 + loc34) + loc36);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc44))(loc44, uu4_1x, ui4_1x);
					RTHOOK(162);
					RTDBGAL(36, 0x10000000, 1, 0); /* loc36 */
					loc36++;
				}
				RTHOOK(163);
				RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
				loc34 += loc35;
				RTHOOK(164);
				RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc45 + loc34) - ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc44))(loc44, ui4_1x)).it_n4);
				ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
				loc34 -= ti4_1;
				RTHOOK(165);
				RTDBGAL(31, 0x10000000, 1, 0); /* loc31 */
				loc31 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc31;
				RTHOOK(166);
				RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
				loc48 = (EIF_REFERENCE) loc38;
				RTHOOK(167);
				RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
				loc49 = (EIF_INTEGER_32) loc39;
				RTHOOK(168);
				RTDBGAL(38, 0xF800026B, 0, 0); /* loc38 */
				loc38 = (EIF_REFERENCE) loc46;
				RTHOOK(169);
				RTDBGAL(39, 0x10000000, 1, 0); /* loc39 */
				loc39 = (EIF_INTEGER_32) loc47;
				RTHOOK(170);
				RTDBGAL(46, 0xF800026B, 0, 0); /* loc46 */
				loc46 = (EIF_REFERENCE) loc48;
				RTHOOK(171);
				RTDBGAL(47, 0x10000000, 1, 0); /* loc47 */
				loc47 = (EIF_INTEGER_32) loc49;
				RTHOOK(172);
				RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
				loc48 = (EIF_REFERENCE) loc46;
				RTHOOK(173);
				RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
				loc49 = (EIF_INTEGER_32) loc47;
				RTHOOK(174);
				RTDBGAL(46, 0xF800026B, 0, 0); /* loc46 */
				loc46 = (EIF_REFERENCE) loc44;
				RTHOOK(175);
				RTDBGAL(47, 0x10000000, 1, 0); /* loc47 */
				loc47 = (EIF_INTEGER_32) loc45;
				RTHOOK(176);
				RTDBGAL(44, 0xF800026B, 0, 0); /* loc44 */
				loc44 = (EIF_REFERENCE) loc48;
				RTHOOK(177);
				RTDBGAL(45, 0x10000000, 1, 0); /* loc45 */
				loc45 = (EIF_INTEGER_32) loc49;
				RTHOOK(178);
				RTDBGAL(50, 0x10000000, 1, 0); /* loc50 */
				loc50 = (EIF_INTEGER_32) loc12;
				RTHOOK(179);
				RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
				loc48 = (EIF_REFERENCE) loc40;
				RTHOOK(180);
				RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
				loc49 = (EIF_INTEGER_32) loc41;
				RTHOOK(181);
				RTDBGAL(40, 0xF800026B, 0, 0); /* loc40 */
				loc40 = (EIF_REFERENCE) loc42;
				RTHOOK(182);
				RTDBGAL(41, 0x10000000, 1, 0); /* loc41 */
				loc41 = (EIF_INTEGER_32) loc43;
				RTHOOK(183);
				RTDBGAL(42, 0xF800026B, 0, 0); /* loc42 */
				loc42 = (EIF_REFERENCE) loc48;
				RTHOOK(184);
				RTDBGAL(43, 0x10000000, 1, 0); /* loc43 */
				loc43 = (EIF_INTEGER_32) loc49;
			} else {
				RTHOOK(185);
				if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(186);
					ur1 = loc42;
					ui4_1 = loc43;
					ui4_2 = loc45;
					ui4_3 = loc50;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc44))(loc44, ur1x, ui4_1x, ui4_2x, ui4_3x);
					RTHOOK(187);
					ur1 = loc40;
					ui4_1 = loc41;
					ui4_2 = loc6;
					ui4_3 = loc50;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc5))(loc5, ur1x, ui4_1x, ui4_2x, ui4_3x);
					RTHOOK(188);
					ur1 = loc5;
					ui4_1 = loc6;
					ur2 = loc42;
					ui4_2 = loc43;
					ui4_3 = loc50;
					uu4_1 = loc4;
					ur3 = RTCCL(loc56);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1077, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
					RTHOOK(189);
					RTDBGAL(53, 0x38000000, 1, 0); /* loc53 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
					loc53 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(190);
					RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
					loc48 = (EIF_REFERENCE) loc44;
					RTHOOK(191);
					RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
					loc49 = (EIF_INTEGER_32) loc45;
					RTHOOK(192);
					RTDBGAL(44, 0xF800026B, 0, 0); /* loc44 */
					loc44 = (EIF_REFERENCE) loc40;
					RTHOOK(193);
					RTDBGAL(45, 0x10000000, 1, 0); /* loc45 */
					loc45 = (EIF_INTEGER_32) loc41;
					RTHOOK(194);
					RTDBGAL(40, 0xF800026B, 0, 0); /* loc40 */
					loc40 = (EIF_REFERENCE) loc48;
					RTHOOK(195);
					RTDBGAL(41, 0x10000000, 1, 0); /* loc41 */
					loc41 = (EIF_INTEGER_32) loc49;
					RTHOOK(196);
					RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
					loc48 = (EIF_REFERENCE) loc5;
					RTHOOK(197);
					RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
					loc49 = (EIF_INTEGER_32) loc6;
					RTHOOK(198);
					RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
					loc5 = (EIF_REFERENCE) loc42;
					RTHOOK(199);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) loc43;
					RTHOOK(200);
					RTDBGAL(42, 0xF800026B, 0, 0); /* loc42 */
					loc42 = (EIF_REFERENCE) loc48;
					RTHOOK(201);
					RTDBGAL(43, 0x10000000, 1, 0); /* loc43 */
					loc43 = (EIF_INTEGER_32) loc49;
					RTHOOK(202);
					ur1 = loc46;
					ui4_1 = loc47;
					ui4_2 = loc45;
					ui4_3 = loc34;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc44))(loc44, ur1x, ui4_1x, ui4_2x, ui4_3x);
					RTHOOK(203);
					RTDBGAL(51, 0x10000000, 1, 0); /* loc51 */
					loc51 = (EIF_INTEGER_32) loc34;
					RTHOOK(204);
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					ui4_1 = (EIF_INTEGER_32) (loc45 + loc34);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc44))(loc44, uu4_1x, ui4_1x);
					RTHOOK(205);
					ur1 = loc38;
					ui4_1 = loc39;
					ui4_2 = loc6;
					ui4_3 = loc34;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc5))(loc5, ur1x, ui4_1x, ui4_2x, ui4_3x);
					RTHOOK(206);
					ur1 = loc5;
					ui4_1 = loc6;
					ur2 = loc46;
					ui4_2 = loc47;
					ui4_3 = loc34;
					uu4_1 = loc4;
					ur3 = RTCCL(loc56);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
					RTHOOK(207);
					RTDBGAL(37, 0x38000000, 1, 0); /* loc37 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
					loc37 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(208);
					uu4_1 = loc37;
					ui4_1 = (EIF_INTEGER_32) (loc6 + loc34);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc5))(loc5, uu4_1x, ui4_1x);
					RTHOOK(209);
					RTDBGAL(52, 0x10000000, 1, 0); /* loc52 */
					ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(loc37 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
					loc52 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc34 + ti4_1);
					RTHOOK(210);
					RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
					loc48 = (EIF_REFERENCE) loc44;
					RTHOOK(211);
					RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
					loc49 = (EIF_INTEGER_32) loc45;
					RTHOOK(212);
					RTDBGAL(44, 0xF800026B, 0, 0); /* loc44 */
					loc44 = (EIF_REFERENCE) loc38;
					RTHOOK(213);
					RTDBGAL(45, 0x10000000, 1, 0); /* loc45 */
					loc45 = (EIF_INTEGER_32) loc39;
					RTHOOK(214);
					RTDBGAL(38, 0xF800026B, 0, 0); /* loc38 */
					loc38 = (EIF_REFERENCE) loc48;
					RTHOOK(215);
					RTDBGAL(39, 0x10000000, 1, 0); /* loc39 */
					loc39 = (EIF_INTEGER_32) loc49;
					RTHOOK(216);
					RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
					loc48 = (EIF_REFERENCE) loc5;
					RTHOOK(217);
					RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
					loc49 = (EIF_INTEGER_32) loc6;
					RTHOOK(218);
					RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
					loc5 = (EIF_REFERENCE) loc46;
					RTHOOK(219);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) loc47;
					RTHOOK(220);
					RTDBGAL(46, 0xF800026B, 0, 0); /* loc46 */
					loc46 = (EIF_REFERENCE) loc48;
					RTHOOK(221);
					RTDBGAL(47, 0x10000000, 1, 0); /* loc47 */
					loc47 = (EIF_INTEGER_32) loc49;
					RTHOOK(222);
					RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
					ui4_1 = loc51;
					ti4_1 = eif_max_int32 (loc52,ui4_1);
					loc34 = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(223);
					if ((EIF_BOOLEAN)(loc11 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(224);
						ur1 = loc44;
						ui4_1 = loc45;
						ur2 = loc42;
						ui4_2 = loc43;
						ui4_3 = loc50;
						uu4_1 = loc2;
						ur3 = RTCCL(loc56);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
						RTHOOK(225);
						RTDBGAL(53, 0x38000000, 1, 0); /* loc53 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
						loc53 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(226);
						ur1 = loc44;
						ui4_1 = loc45;
						ur2 = loc40;
						ui4_2 = loc41;
						ui4_3 = loc50;
						uu4_1 = loc1;
						ur3 = RTCCL(loc56);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1077, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
						RTHOOK(227);
						RTDBGAL(53, 0x38000000, 1, 0); /* loc53 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
						loc53 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(228);
						ur1 = loc5;
						ui4_1 = loc6;
						ur2 = loc40;
						ui4_2 = loc41;
						ui4_3 = loc50;
						uu4_1 = loc3;
						ur3 = RTCCL(loc56);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
						RTHOOK(229);
						RTDBGAL(53, 0x38000000, 1, 0); /* loc53 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
						loc53 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(230);
						ur1 = loc5;
						ui4_1 = loc6;
						ur2 = loc42;
						ui4_2 = loc43;
						ui4_3 = loc50;
						uu4_1 = loc4;
						ur3 = RTCCL(loc56);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1077, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
						RTHOOK(231);
						RTDBGAL(53, 0x38000000, 1, 0); /* loc53 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
						loc53 = (EIF_NATURAL_32) tu4_1;
					} else {
						RTHOOK(232);
						ur1 = loc44;
						ui4_1 = loc45;
						ur2 = loc40;
						ui4_2 = loc41;
						ui4_3 = loc50;
						uu4_1 = loc1;
						ur3 = RTCCL(loc56);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
						RTHOOK(233);
						RTDBGAL(53, 0x38000000, 1, 0); /* loc53 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
						loc53 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(234);
						ur1 = loc44;
						ui4_1 = loc45;
						ur2 = loc42;
						ui4_2 = loc43;
						ui4_3 = loc50;
						uu4_1 = loc2;
						ur3 = RTCCL(loc56);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1077, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
						RTHOOK(235);
						RTDBGAL(53, 0x38000000, 1, 0); /* loc53 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
						loc53 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(236);
						ur1 = loc5;
						ui4_1 = loc6;
						ur2 = loc42;
						ui4_2 = loc43;
						ui4_3 = loc50;
						uu4_1 = loc4;
						ur3 = RTCCL(loc56);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
						RTHOOK(237);
						RTDBGAL(53, 0x38000000, 1, 0); /* loc53 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
						loc53 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(238);
						ur1 = loc5;
						ui4_1 = loc6;
						ur2 = loc40;
						ui4_2 = loc41;
						ui4_3 = loc50;
						uu4_1 = loc3;
						ur3 = RTCCL(loc56);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1077, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
						RTHOOK(239);
						RTDBGAL(53, 0x38000000, 1, 0); /* loc53 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
						loc53 = (EIF_NATURAL_32) tu4_1;
					}
					RTHOOK(240);
					RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
					loc48 = (EIF_REFERENCE) loc44;
					RTHOOK(241);
					RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
					loc49 = (EIF_INTEGER_32) loc45;
					RTHOOK(242);
					RTDBGAL(44, 0xF800026B, 0, 0); /* loc44 */
					loc44 = (EIF_REFERENCE) loc40;
					RTHOOK(243);
					RTDBGAL(45, 0x10000000, 1, 0); /* loc45 */
					loc45 = (EIF_INTEGER_32) loc41;
					RTHOOK(244);
					RTDBGAL(40, 0xF800026B, 0, 0); /* loc40 */
					loc40 = (EIF_REFERENCE) loc48;
					RTHOOK(245);
					RTDBGAL(41, 0x10000000, 1, 0); /* loc41 */
					loc41 = (EIF_INTEGER_32) loc49;
					RTHOOK(246);
					RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
					loc48 = (EIF_REFERENCE) loc5;
					RTHOOK(247);
					RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
					loc49 = (EIF_INTEGER_32) loc6;
					RTHOOK(248);
					RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
					loc5 = (EIF_REFERENCE) loc42;
					RTHOOK(249);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) loc43;
					RTHOOK(250);
					RTDBGAL(42, 0xF800026B, 0, 0); /* loc42 */
					loc42 = (EIF_REFERENCE) loc48;
					RTHOOK(251);
					RTDBGAL(43, 0x10000000, 1, 0); /* loc43 */
					loc43 = (EIF_INTEGER_32) loc49;
					RTHOOK(252);
					ur1 = loc44;
					ui4_1 = loc45;
					ur2 = loc38;
					ui4_2 = loc39;
					ui4_3 = loc34;
					uu4_1 = loc1;
					ur3 = RTCCL(loc56);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
					RTHOOK(253);
					RTDBGAL(54, 0x38000000, 1, 0); /* loc54 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
					loc54 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(254);
					ur1 = loc44;
					ui4_1 = loc45;
					ur2 = loc46;
					ui4_2 = loc47;
					ui4_3 = loc34;
					uu4_1 = loc2;
					ur3 = RTCCL(loc56);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
					RTHOOK(255);
					RTDBGAL(55, 0x38000000, 1, 0); /* loc55 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
					loc55 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(256);
					RTDBGAL(37, 0x38000000, 1, 0); /* loc37 */
					loc37 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc54 + loc55);
					RTHOOK(257);
					uu4_1 = loc37;
					ui4_1 = (EIF_INTEGER_32) (loc45 + loc34);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc44))(loc44, uu4_1x, ui4_1x);
					RTHOOK(258);
					RTDBGAL(51, 0x10000000, 1, 0); /* loc51 */
					ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(loc37 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
					loc51 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc34 + ti4_1);
					RTHOOK(259);
					if ((EIF_BOOLEAN) (loc37 < loc54)) {
						RTHOOK(260);
						uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
						ui4_1 = (EIF_INTEGER_32) (loc45 + loc51);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc44))(loc44, uu4_1x, ui4_1x);
						RTHOOK(261);
						uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
						ui4_1 = (EIF_INTEGER_32) (loc6 + loc51);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc5))(loc5, uu4_1x, ui4_1x);
						RTHOOK(262);
						RTDBGAL(51, 0x10000000, 1, 0); /* loc51 */
						loc51++;
					}
					RTHOOK(263);
					ur1 = loc5;
					ui4_1 = loc6;
					ur2 = loc46;
					ui4_2 = loc47;
					ui4_3 = loc34;
					uu4_1 = loc4;
					ur3 = RTCCL(loc56);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
					RTHOOK(264);
					RTDBGAL(54, 0x38000000, 1, 0); /* loc54 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
					loc54 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(265);
					ur1 = loc5;
					ui4_1 = loc6;
					ur2 = loc38;
					ui4_2 = loc39;
					ui4_3 = loc34;
					uu4_1 = loc3;
					ur3 = RTCCL(loc56);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
					RTHOOK(266);
					RTDBGAL(55, 0x38000000, 1, 0); /* loc55 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
					loc55 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(267);
					RTDBGAL(37, 0x38000000, 1, 0); /* loc37 */
					loc37 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc54 + loc55);
					RTHOOK(268);
					uu4_1 = loc37;
					ui4_1 = (EIF_INTEGER_32) (loc6 + loc34);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc5))(loc5, uu4_1x, ui4_1x);
					RTHOOK(269);
					RTDBGAL(52, 0x10000000, 1, 0); /* loc52 */
					ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(loc37 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
					loc52 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc34 + ti4_1);
					RTHOOK(270);
					if ((EIF_BOOLEAN) (loc37 < loc54)) {
						RTHOOK(271);
						uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
						ui4_1 = (EIF_INTEGER_32) (loc6 + loc52);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc5))(loc5, uu4_1x, ui4_1x);
						RTHOOK(272);
						if ((EIF_BOOLEAN) (loc52 >= loc51)) {
							RTHOOK(273);
							uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
							ui4_1 = (EIF_INTEGER_32) (loc45 + loc52);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc44))(loc44, uu4_1x, ui4_1x);
						}
						RTHOOK(274);
						RTDBGAL(52, 0x10000000, 1, 0); /* loc52 */
						loc52++;
					}
					RTHOOK(275);
					RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
					loc48 = (EIF_REFERENCE) loc44;
					RTHOOK(276);
					RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
					loc49 = (EIF_INTEGER_32) loc45;
					RTHOOK(277);
					RTDBGAL(44, 0xF800026B, 0, 0); /* loc44 */
					loc44 = (EIF_REFERENCE) loc38;
					RTHOOK(278);
					RTDBGAL(45, 0x10000000, 1, 0); /* loc45 */
					loc45 = (EIF_INTEGER_32) loc39;
					RTHOOK(279);
					RTDBGAL(38, 0xF800026B, 0, 0); /* loc38 */
					loc38 = (EIF_REFERENCE) loc48;
					RTHOOK(280);
					RTDBGAL(39, 0x10000000, 1, 0); /* loc39 */
					loc39 = (EIF_INTEGER_32) loc49;
					RTHOOK(281);
					RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
					loc48 = (EIF_REFERENCE) loc5;
					RTHOOK(282);
					RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
					loc49 = (EIF_INTEGER_32) loc6;
					RTHOOK(283);
					RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
					loc5 = (EIF_REFERENCE) loc46;
					RTHOOK(284);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) loc47;
					RTHOOK(285);
					RTDBGAL(46, 0xF800026B, 0, 0); /* loc46 */
					loc46 = (EIF_REFERENCE) loc48;
					RTHOOK(286);
					RTDBGAL(47, 0x10000000, 1, 0); /* loc47 */
					loc47 = (EIF_INTEGER_32) loc49;
					RTHOOK(287);
					RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
					ui4_1 = loc51;
					ti4_1 = eif_max_int32 (loc52,ui4_1);
					loc34 = (EIF_INTEGER_32) ti4_1;
				}
				RTHOOK(288);
				RTDBGAL(50, 0x10000000, 1, 0); /* loc50 */
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc41 + loc50) - ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc40))(loc40, ui4_1x)).it_n4);
				ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
				loc50 -= ti4_1;
			}
		}
	}
	RTHOOK(289);
	if ((EIF_BOOLEAN)(loc12 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(290);
		if ((EIF_BOOLEAN)(arg1 != loc40)) {
			RTHOOK(291);
			ur1 = loc40;
			ui4_1 = loc41;
			ui4_2 = arg2;
			ui4_3 = loc50;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
		RTHOOK(292);
		RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
		ur1 = loc38;
		ui4_1 = loc39;
		ui4_2 = loc34;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc34 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(293);
		if ((EIF_BOOLEAN)(loc7 != loc38)) {
			RTHOOK(294);
			ur1 = loc38;
			ui4_1 = loc39;
			ui4_2 = loc8;
			ui4_3 = loc34;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
		RTHOOK(295);
		if ((EIF_BOOLEAN) (loc31 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(296);
			
			eif_put_integer_32_item(RTCW(arg5),1,loc34);
		} else {
			RTHOOK(297);
			
			eif_put_integer_32_item(RTCW(arg5),1,(EIF_INTEGER_32) -loc34);
		}
		RTHOOK(298);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) loc50;
	} else {
		RTHOOK(299);
		RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
		ui4_1 = loc43;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc42))(loc42, ui4_1x)).it_n4);
		loc18 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(300);
		RTDBGAL(33, 0x38000000, 1, 0); /* loc33 */
		ur1 = loc5;
		ui4_1 = loc6;
		ur2 = loc40;
		ui4_2 = loc41;
		ui4_3 = loc50;
		uu4_1 = loc18;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1954, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x)).it_n4);
		loc33 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(301);
		ur1 = loc38;
		ui4_1 = loc39;
		ui4_2 = loc45;
		ui4_3 = loc34;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc44))(loc44, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(302);
		RTDBGAL(35, 0x10000000, 1, 0); /* loc35 */
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc50) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc5))(loc5, ui4_1x)).it_n4);
		ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
		loc35 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc50 - ti4_1);
		RTHOOK(303);
		if ((EIF_BOOLEAN) (loc34 < loc35)) {
			RTHOOK(304);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = (EIF_INTEGER_32) (loc45 + loc34);
			ui4_2 = (EIF_INTEGER_32) (loc35 - loc34);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", loc44))(loc44, uu4_1x, ui4_1x, ui4_2x);
			RTHOOK(305);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = (EIF_INTEGER_32) (loc47 + loc34);
			ui4_2 = loc35;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", loc46))(loc46, uu4_1x, ui4_1x, ui4_2x);
			RTHOOK(306);
			RTDBGAL(36, 0x10000000, 1, 0); /* loc36 */
			loc36 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				RTHOOK(307);
				if ((EIF_BOOLEAN) (loc36 >= loc34)) break;
				RTHOOK(308);
				ur1 = loc44;
				ui4_1 = (EIF_INTEGER_32) (loc45 + loc36);
				ur2 = loc5;
				ui4_2 = loc6;
				ui4_3 = loc35;
				ui4_4 = (EIF_INTEGER_32) (loc47 + loc36);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc46))(loc46, ui4_4x)).it_n4);
				uu4_1 = tu4_1;
				ur3 = RTCCL(loc56);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
				RTHOOK(309);
				RTDBGAL(37, 0x38000000, 1, 0); /* loc37 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
				loc37 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(310);
				uu4_1 = loc37;
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc45 + loc35) + loc36);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc44))(loc44, uu4_1x, ui4_1x);
				RTHOOK(311);
				RTDBGAL(36, 0x10000000, 1, 0); /* loc36 */
				loc36++;
			}
		} else {
			RTHOOK(312);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = (EIF_INTEGER_32) (loc47 + loc34);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc47 + loc34) + loc35) - ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", loc46))(loc46, uu4_1x, ui4_1x, ui4_2x);
			RTHOOK(313);
			RTDBGAL(36, 0x10000000, 1, 0); /* loc36 */
			loc36 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				RTHOOK(314);
				if ((EIF_BOOLEAN) (loc36 >= loc35)) break;
				RTHOOK(315);
				ur1 = loc44;
				ui4_1 = (EIF_INTEGER_32) (loc45 + loc36);
				ur2 = loc46;
				ui4_2 = loc47;
				ui4_3 = loc34;
				ui4_4 = (EIF_INTEGER_32) (loc6 + loc36);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc5))(loc5, ui4_4x)).it_n4);
				uu4_1 = tu4_1;
				ur3 = RTCCL(loc56);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
				RTHOOK(316);
				RTDBGAL(37, 0x38000000, 1, 0); /* loc37 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
				loc37 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(317);
				uu4_1 = loc37;
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc45 + loc34) + loc36);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc44))(loc44, uu4_1x, ui4_1x);
				RTHOOK(318);
				RTDBGAL(36, 0x10000000, 1, 0); /* loc36 */
				loc36++;
			}
		}
		RTHOOK(319);
		RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
		loc34 += loc35;
		RTHOOK(320);
		RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc45 + loc34) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc44))(loc44, ui4_1x)).it_n4);
		ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
		loc34 -= ti4_1;
		RTHOOK(321);
		RTDBGAL(31, 0x10000000, 1, 0); /* loc31 */
		loc31 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc31;
		RTHOOK(322);
		RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
		loc48 = (EIF_REFERENCE) loc38;
		RTHOOK(323);
		RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
		loc49 = (EIF_INTEGER_32) loc39;
		RTHOOK(324);
		RTDBGAL(38, 0xF800026B, 0, 0); /* loc38 */
		loc38 = (EIF_REFERENCE) loc46;
		RTHOOK(325);
		RTDBGAL(39, 0x10000000, 1, 0); /* loc39 */
		loc39 = (EIF_INTEGER_32) loc47;
		RTHOOK(326);
		RTDBGAL(46, 0xF800026B, 0, 0); /* loc46 */
		loc46 = (EIF_REFERENCE) loc48;
		RTHOOK(327);
		RTDBGAL(47, 0x10000000, 1, 0); /* loc47 */
		loc47 = (EIF_INTEGER_32) loc49;
		RTHOOK(328);
		RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
		loc48 = (EIF_REFERENCE) loc46;
		RTHOOK(329);
		RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
		loc49 = (EIF_INTEGER_32) loc47;
		RTHOOK(330);
		RTDBGAL(46, 0xF800026B, 0, 0); /* loc46 */
		loc46 = (EIF_REFERENCE) loc44;
		RTHOOK(331);
		RTDBGAL(47, 0x10000000, 1, 0); /* loc47 */
		loc47 = (EIF_INTEGER_32) loc45;
		RTHOOK(332);
		RTDBGAL(44, 0xF800026B, 0, 0); /* loc44 */
		loc44 = (EIF_REFERENCE) loc48;
		RTHOOK(333);
		RTDBGAL(45, 0x10000000, 1, 0); /* loc45 */
		loc45 = (EIF_INTEGER_32) loc49;
		RTHOOK(334);
		RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
		loc17 = (EIF_NATURAL_32) loc18;
		RTHOOK(335);
		RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
		loc18 = (EIF_NATURAL_32) loc33;
		for (;;) {
			RTHOOK(336);
			if ((EIF_BOOLEAN)(loc18 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(337);
			RTDBGAL(32, 0x38000000, 1, 0); /* loc32 */
			loc32 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc17 / loc18);
			RTHOOK(338);
			RTDBGAL(33, 0x38000000, 1, 0); /* loc33 */
			loc33 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc17 - (EIF_NATURAL_32) (loc32 * loc18));
			RTHOOK(339);
			ur1 = loc38;
			ui4_1 = loc39;
			ui4_2 = loc45;
			ui4_3 = loc34;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc44))(loc44, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(340);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = (EIF_INTEGER_32) (loc47 + loc34);
			ui4_2 = (EIF_INTEGER_32) (loc47 + loc34);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", loc46))(loc46, uu4_1x, ui4_1x, ui4_2x);
			RTHOOK(341);
			ur1 = loc44;
			ui4_1 = loc45;
			ur2 = loc46;
			ui4_2 = loc47;
			ui4_3 = loc34;
			uu4_1 = loc32;
			ur3 = RTCCL(loc56);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(342);
			RTDBGAL(37, 0x38000000, 1, 0); /* loc37 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc56))(loc56)).it_n4);
			loc37 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(343);
			uu4_1 = loc37;
			ui4_1 = (EIF_INTEGER_32) (loc45 + loc34);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc44))(loc44, uu4_1x, ui4_1x);
			RTHOOK(344);
			RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
			loc34++;
			RTHOOK(345);
			RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc45 + loc34) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc44))(loc44, ui4_1x)).it_n4);
			ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
			loc34 -= ti4_1;
			RTHOOK(346);
			RTDBGAL(31, 0x10000000, 1, 0); /* loc31 */
			loc31 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc31;
			RTHOOK(347);
			RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
			loc48 = (EIF_REFERENCE) loc38;
			RTHOOK(348);
			RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
			loc49 = (EIF_INTEGER_32) loc39;
			RTHOOK(349);
			RTDBGAL(38, 0xF800026B, 0, 0); /* loc38 */
			loc38 = (EIF_REFERENCE) loc46;
			RTHOOK(350);
			RTDBGAL(39, 0x10000000, 1, 0); /* loc39 */
			loc39 = (EIF_INTEGER_32) loc47;
			RTHOOK(351);
			RTDBGAL(46, 0xF800026B, 0, 0); /* loc46 */
			loc46 = (EIF_REFERENCE) loc48;
			RTHOOK(352);
			RTDBGAL(47, 0x10000000, 1, 0); /* loc47 */
			loc47 = (EIF_INTEGER_32) loc49;
			RTHOOK(353);
			RTDBGAL(48, 0xF800026B, 0, 0); /* loc48 */
			loc48 = (EIF_REFERENCE) loc46;
			RTHOOK(354);
			RTDBGAL(49, 0x10000000, 1, 0); /* loc49 */
			loc49 = (EIF_INTEGER_32) loc47;
			RTHOOK(355);
			RTDBGAL(46, 0xF800026B, 0, 0); /* loc46 */
			loc46 = (EIF_REFERENCE) loc44;
			RTHOOK(356);
			RTDBGAL(47, 0x10000000, 1, 0); /* loc47 */
			loc47 = (EIF_INTEGER_32) loc45;
			RTHOOK(357);
			RTDBGAL(44, 0xF800026B, 0, 0); /* loc44 */
			loc44 = (EIF_REFERENCE) loc48;
			RTHOOK(358);
			RTDBGAL(45, 0x10000000, 1, 0); /* loc45 */
			loc45 = (EIF_INTEGER_32) loc49;
			RTHOOK(359);
			RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
			loc17 = (EIF_NATURAL_32) loc18;
			RTHOOK(360);
			RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
			loc18 = (EIF_NATURAL_32) loc33;
		}
		RTHOOK(361);
		uu4_1 = loc17;
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(362);
		RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
		ur1 = loc38;
		ui4_1 = loc39;
		ui4_2 = loc34;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc34 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(363);
		if ((EIF_BOOLEAN)(loc7 != loc38)) {
			RTHOOK(364);
			ur1 = loc38;
			ui4_1 = loc39;
			ui4_2 = loc8;
			ui4_3 = loc34;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
		RTHOOK(365);
		if ((EIF_BOOLEAN) (loc31 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(366);
			
			eif_put_integer_32_item(RTCW(arg5),1,loc34);
		} else {
			RTHOOK(367);
			
			eif_put_integer_32_item(RTCW(arg5),1,(EIF_INTEGER_32) -loc34);
		}
		RTHOOK(368);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(369);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(74);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef uu4_4
#undef arg16
#undef arg15
#undef arg14
#undef arg13
#undef arg12
#undef arg11
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_NUMBER_THEORETIC}.gcdext */
EIF_TYPED_VALUE F224_4204 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x, EIF_TYPED_VALUE arg11x)
{
	GTCX
	char *l_feature_name = "gcdext";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_r
#define arg10 arg10x.it_i4
#define arg11 arg11x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg11x.type & SK_HEAD) == SK_REF) arg11x.it_i4 = * (EIF_INTEGER_32 *) arg11x.it_r;
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_i4 = * (EIF_INTEGER_32 *) arg10x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg6);
	RTLR(4,arg9);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);
	RTLR(8,ur4);
	RTLR(9,ur5);
	RTLR(10,Current);
	RTLIU(11);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU(SK_INT32,&arg11);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 223, Current, 1, 11, 7163);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(223, Current, 7163);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 223, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 223, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg5, 223, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 223, l_feature_name, 6, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg9, 223, l_feature_name, 9, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op1_count >= op2_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg8 >= arg11), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("op2_count >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg11 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("op1.valid_index (op1_offset)", EX_PRE);
		ui4_1 = arg7;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg6))(arg6, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("op1.valid_index (op1_offset + op1_count - 0)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 + arg8) - ((EIF_INTEGER_32) 0L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg6))(arg6, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("op1 [op1_offset + op1_count - 1] /= 0", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 + arg8) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
		RTTE((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("op2.valid_index (op2_offset)", EX_PRE);
		ui4_1 = arg10;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg9))(arg9, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(7);
		RTCT("op2.valid_index (op2_offset + op2_count - 0)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg10 + arg11) - ((EIF_INTEGER_32) 0L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg9))(arg9, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(8);
		RTCT("op1 [op1_offset + op1_count - 1] /= 0", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 + arg8) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
		RTTE((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(9);
		RTCT("target.valid_index (target_offset)", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(10);
		RTCT("target.valid_index (target_offset + op1_count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg8) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(11);
		RTCT("cofactor.valid_index (cofactor_offset)", EX_PRE);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(12);
		RTCT("cofactor.valid_index (cofactor_offset + op1_count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg8) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(13);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg11;
	RTHOOK(14);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ur1 = arg1;
	ui4_1 = arg2;
	ur2 = arg3;
	ui4_2 = arg4;
	ur3 = RTCCL(arg5);
	ur4 = arg6;
	ui4_3 = arg7;
	ui4_4 = arg8;
	ur5 = arg9;
	ui4_5 = arg10;
	ui4_6 = arg11;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3432, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ur4x, ui4_3x, ui4_4x, ur5x, ui4_5x, ui4_6x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef arg11
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_NUMBER_THEORETIC}.modexact_1c_odd */
EIF_TYPED_VALUE F224_4205 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "modexact_1c_odd";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_n4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_n4 = * (EIF_NATURAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc7);
	RTLR(5,loc2);
	RTLR(6,loc5);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_UINT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	
	RTEAA(l_feature_name, 223, Current, 8, 5, 7164);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(223, Current, 7164);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 223, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op1_count >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d.bit_test (0)", EX_PRE);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tb1 = eif_bit_test(EIF_NATURAL_32,arg4,ui4_1);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(3, 0xF80001F0, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(7, 0xF80001F0, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = arg5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(4,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(2, 0xF80001F0, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(5,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(5, 0xF80001F0, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(6,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(8);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = arg2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
		if ((EIF_BOOLEAN) (loc1 > tu4_1)) {
			RTHOOK(10);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (loc1 - tu4_1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
			RTHOOK(11);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 % arg4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc2))(loc2, uu4_1x);
			RTHOOK(12);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
			if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(13);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
				uu4_1 = (EIF_NATURAL_32) (arg4 - tu4_1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc2))(loc2, uu4_1x);
			}
		} else {
			RTHOOK(14);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 - loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
			RTHOOK(15);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 % arg4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc2))(loc2, uu4_1x);
		}
		RTHOOK(16);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(17);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		uu4_1 = arg4;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1042, dtype))(Current, uu4_1x)).it_n4);
		loc4 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(18);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		loc6 = (EIF_NATURAL_32) arg4;
		RTHOOK(19);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(20);
			if ((EIF_BOOLEAN) (loc8 >= (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L)))) break;
			RTHOOK(21);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = (EIF_INTEGER_32) (arg2 + loc8);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(22);
			ur1 = RTCCL(loc7);
			ur2 = RTCCL(loc3);
			uu4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			uu4_2 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3438, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
			RTHOOK(23);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 * loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
			RTHOOK(24);
			ur1 = RTCCL(loc2);
			ur2 = RTCCL(loc5);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
			uu4_1 = tu4_1;
			uu4_2 = loc6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
			RTHOOK(25);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 + tu4_2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc7))(loc7, uu4_1x);
			RTHOOK(26);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8++;
		}
		RTHOOK(27);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc8);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(28);
		if ((EIF_BOOLEAN) (loc1 <= arg4)) {
			RTHOOK(29);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 - loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
			RTHOOK(30);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			if ((EIF_BOOLEAN) (tu4_1 < loc1)) {
				RTHOOK(31);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
				uu4_1 = (EIF_NATURAL_32) (tu4_1 + arg4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
			}
			RTHOOK(32);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
			Result = (EIF_NATURAL_32) tu4_1;
		} else {
			RTHOOK(33);
			ur1 = RTCCL(loc7);
			ur2 = RTCCL(loc3);
			uu4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			uu4_2 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3438, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
			RTHOOK(34);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 * loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
			RTHOOK(35);
			ur1 = RTCCL(loc2);
			ur2 = RTCCL(loc5);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
			uu4_1 = tu4_1;
			uu4_2 = loc6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
			RTHOOK(36);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 + tu4_2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc7))(loc7, uu4_1x);
			RTHOOK(37);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			Result = (EIF_NATURAL_32) tu4_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(38);
		RTCT("orig_c < d implies Result < d", EX_POST);
		if ((!((EIF_BOOLEAN) (arg5 < arg4)) || ((EIF_BOOLEAN) (Result < arg4)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(39);
		RTCT("orig_c >= d implies Result <= d", EX_POST);
		if ((!((EIF_BOOLEAN) (arg5 >= arg4)) || ((EIF_BOOLEAN) (Result <= arg4)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(40);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_NUMBER_THEORETIC}.preinv_mod_1 */
EIF_TYPED_VALUE F224_4206 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "preinv_mod_1";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_n4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_TYPED_VALUE uu4_4x = {{0}, SK_UINT32};
#define uu4_4 uu4_4x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_n4 = * (EIF_NATURAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_UINT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 223, Current, 4, 5, 7165);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(223, Current, 7165);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 223, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("un >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d.bit_test (31)", EX_PRE);
		ui4_1 = ((EIF_INTEGER_32) 31L);
		tb1 = eif_bit_test(EIF_NATURAL_32,arg4,ui4_1);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(3, 0xF80001F0, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg3) - ((EIF_INTEGER_32) 1L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0xF80001F0, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
	if ((EIF_BOOLEAN) (tu4_1 >= arg4)) {
		RTHOOK(6);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 - arg4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
	}
	RTHOOK(7);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 2L));
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(9);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		ur1 = RTCCL(loc4);
		ur2 = RTCCL(loc3);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = tu4_1;
		uu4_2 = loc2;
		uu4_3 = arg4;
		uu4_4 = arg5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1955, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
		RTHOOK(11);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	RTHOOK(12);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef uu4_4
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_NUMBER_THEORETIC}.redc_basecase */
void F224_4207 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "redc_basecase";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_n4
#define arg7 arg7x.it_r
#define arg8 arg8x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_n4 = * (EIF_NATURAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg7);
	RTLR(3,loc6);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLR(9,ur4);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_UINT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 223, Current, 6, 8, 7166);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(223, Current, 7166);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 223, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 223, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg7, 223, l_feature_name, 7, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(6, 0xF80001F0, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(1,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) arg8;
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc3 >= arg5)) break;
		RTHOOK(5);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = loc4;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg7))(arg7, ui4_1x)).it_n4);
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 * arg6);
		RTHOOK(6);
		ur1 = arg7;
		ui4_1 = loc4;
		ur2 = arg3;
		ui4_2 = arg4;
		ui4_3 = arg5;
		uu4_1 = loc2;
		ur3 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
		RTHOOK(7);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg7))(arg7, uu4_1x, ui4_1x);
		RTHOOK(8);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4++;
		RTHOOK(9);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTHOOK(10);
	ur1 = arg1;
	ui4_1 = arg2;
	ur2 = arg7;
	ui4_2 = loc4;
	ur3 = arg7;
	ui4_3 = (EIF_INTEGER_32) (loc4 - arg5);
	ui4_4 = arg5;
	ur4 = RTCCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
	RTHOOK(11);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(13);
		ur1 = arg1;
		ui4_1 = arg2;
		ur2 = arg1;
		ui4_2 = arg2;
		ur3 = arg3;
		ui4_3 = arg4;
		ui4_4 = arg5;
		ur4 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(14);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
		loc5 = (EIF_NATURAL_32) tu4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_NUMBER_THEORETIC}.subc_limb */
void F224_4208 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "subc_limb";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 223, Current, 0, 4, 7167);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(223, Current, 7167);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 223, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 223, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu4_1 = (EIF_NATURAL_32) (arg3 - arg4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg2))(arg2, uu4_1x);
	RTHOOK(2);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg2))(arg2)).it_n4);
	ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (tu4_1 > arg3);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg1))(arg1, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_NUMBER_THEORETIC}.invert_gf */
void F224_4209 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "invert_gf";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLR(6,loc1);
	RTLR(7,tr1);
	RTLR(8,loc4);
	RTLR(9,loc9);
	RTLR(10,loc11);
	RTLR(11,loc7);
	RTLR(12,ur3);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	
	RTEAA(l_feature_name, 223, Current, 14, 8, 7168);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(223, Current, 7168);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 223, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 223, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg6, 223, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op2_count_a > 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg8 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("op1_count_a >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("op1_count_a <= op2_count_a", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 <= arg8), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("(op1_count_a = op2_count_a) implies cmp (op1_a, op1_offset, op2_a, op2_offset, op2_count_a) <= 0", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg5 == arg8)) {
			ur1 = arg3;
			ui4_1 = arg4;
			ur2 = arg6;
			ui4_2 = arg7;
			ui4_3 = arg8;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1946, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x)).it_i4);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
	loc13 = (EIF_INTEGER_32) arg8;
	RTHOOK(6);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg5;
	RTHOOK(7);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) arg8;
	RTHOOK(8);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = (EIF_INTEGER_32) (loc13 + loc13);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(8,1);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAL(4, 0xF800026B, 0, 0); /* loc4 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = (EIF_INTEGER_32) (loc13 + loc13);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(9,1);
	loc4 = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	ur1 = arg3;
	ui4_1 = arg4;
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = loc13;
	ti4_1 = eif_min_int32 (loc2,ui4_3);
	ui4_3 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(11);
	ur1 = arg6;
	ui4_1 = arg7;
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = loc13;
	ti4_1 = eif_min_int32 (loc5,ui4_3);
	ui4_3 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc4))(loc4, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(12);
	RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = (EIF_INTEGER_32) (loc13 + loc13);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(12,1);
	loc9 = (EIF_REFERENCE) tr1;
	RTHOOK(13);
	RTDBGAL(11, 0xF800026B, 0, 0); /* loc11 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = (EIF_INTEGER_32) (loc13 + loc13);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(13,1);
	loc11 = (EIF_REFERENCE) tr1;
	RTHOOK(14);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc9))(loc9, uu4_1x, ui4_1x);
	RTHOOK(15);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(16);
	RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
	loc12 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(17);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(18);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ui4_1 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(19);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ui4_1 = (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc4))(loc4, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(20);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 < loc5) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == loc5) && (EIF_BOOLEAN) (loc3 > loc6)))) {
			RTHOOK(21);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			loc7 = (EIF_REFERENCE) loc1;
			RTHOOK(22);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			loc1 = (EIF_REFERENCE) loc4;
			RTHOOK(23);
			RTDBGAL(4, 0xF800026B, 0, 0); /* loc4 */
			loc4 = (EIF_REFERENCE) loc7;
			RTHOOK(24);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			loc7 = (EIF_REFERENCE) loc9;
			RTHOOK(25);
			RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
			loc9 = (EIF_REFERENCE) loc11;
			RTHOOK(26);
			RTDBGAL(11, 0xF800026B, 0, 0); /* loc11 */
			loc11 = (EIF_REFERENCE) loc7;
			RTHOOK(27);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8 = (EIF_INTEGER_32) loc2;
			RTHOOK(28);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) loc5;
			RTHOOK(29);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) loc8;
			RTHOOK(30);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8 = (EIF_INTEGER_32) loc3;
			RTHOOK(31);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) loc6;
			RTHOOK(32);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) loc8;
		}
		RTHOOK(33);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != loc5) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == loc5) && (EIF_BOOLEAN)(loc3 != loc6)))) {
			RTHOOK(34);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc5) * ti4_1) + loc6) - loc3);
			RTHOOK(35);
			ur1 = loc1;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ur2 = loc1;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc2;
			ur3 = loc4;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ui4_5 = loc5;
			ui4_6 = loc14;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1057, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ui4_6x);
			RTHOOK(36);
			ur1 = loc9;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ur2 = loc9;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc13;
			ur3 = loc11;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ui4_5 = loc13;
			ui4_6 = loc14;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1057, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ui4_6x);
		} else {
			RTHOOK(37);
			ur1 = loc1;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ur2 = loc1;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc2;
			ur3 = loc4;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ui4_5 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1058, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
			RTHOOK(38);
			ur1 = loc9;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ur2 = loc9;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc13;
			ur3 = loc11;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ui4_5 = loc13;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1058, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
		}
		RTHOOK(39);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ur1 = loc1;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(40);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		ur1 = loc4;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = loc5;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc5 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(41);
	ur1 = loc11;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = arg2;
	ui4_3 = loc13;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(42);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(24);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef uu4_1
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit224 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
