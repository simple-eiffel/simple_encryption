/*
 * Code for class SPECIAL_ASSIGNMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F182_2328(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit182(void);

#ifdef __cplusplus
}
#endif

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

/* {SPECIAL_ASSIGNMENT}.set_str */
EIF_TYPED_VALUE F182_2328 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "set_str";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc9 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc12 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,loc13);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_UINT8, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_UINT32, &loc12);
	RTLU(SK_REF, &loc13);
	
	RTEAA(l_feature_name, 181, Current, 13, 6, 2325);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(181, Current, 2325);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 181, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 181, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base >= 2", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg6 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(13, 0xF80001F0, 0, 0); /* loc13 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(2,1);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg4;
	RTHOOK(4);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	ui4_1 = arg6;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2068, dtype))(Current, ui4_1x)).it_n4);
	loc3 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ui4_1 = arg6;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2066, dtype))(Current, ui4_1x)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(7);
	tu4_1 = (EIF_NATURAL_32) arg6;
	uu4_1 = tu4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1048, dtype))(Current, uu4_1x)).it_b);
	if (tb1) {
		RTHOOK(8);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		ti4_1 = (EIF_INTEGER_32) loc3;
		loc8 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(10);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(11);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg5) - ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN) (loc6 < loc1)) break;
			RTHOOK(13);
			RTDBGAL(9, 0x30000000, 1, 0); /* loc9 */
			ui4_1 = loc6;
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n1);
			loc9 = (EIF_NATURAL_8) tu1_1;
			RTHOOK(14);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			tu4_1 = (EIF_NATURAL_32) loc9;
			ui4_1 = loc7;
			tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
			uu4_1 = tu4_2;
			tu4_1 = eif_bit_or(loc5,uu4_1);
			loc5 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(15);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 += loc8;
			RTHOOK(16);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (loc7 >= ti4_1)) {
				RTHOOK(17);
				uu4_1 = loc5;
				ui4_1 = (EIF_INTEGER_32) (arg2 + loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
				RTHOOK(18);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
				RTHOOK(19);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				loc7 -= ti4_1;
				RTHOOK(20);
				RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
				ui4_1 = (EIF_INTEGER_32) (loc8 - loc7);
				tu1_1 = eif_bit_shift_right(loc9,ui4_1);
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				loc5 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(21);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6--;
		}
		RTHOOK(22);
		if ((EIF_BOOLEAN)(loc5 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(23);
			uu4_1 = loc5;
			ui4_1 = (EIF_INTEGER_32) (arg2 + loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
			RTHOOK(24);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(25);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) loc2;
	} else {
		RTHOOK(26);
		tr1 = RTLN(eif_new_type(260, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = arg5;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4169, "max_value", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (arg5 < ti4_1)) {
			RTHOOK(27);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) loc4;
			for (;;) {
				RTHOOK(28);
				if ((EIF_BOOLEAN) (loc10 >= arg5)) break;
				RTHOOK(29);
				RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
				ui4_1 = loc1;
				tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n1);
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				loc5 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(30);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
				RTHOOK(31);
				if ((EIF_BOOLEAN)(arg6 == ((EIF_INTEGER_32) 10L))) {
					RTHOOK(32);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 9L) - ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(33);
						if ((EIF_BOOLEAN)(loc11 == ((EIF_INTEGER_32) 0L))) break;
						RTHOOK(34);
						RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
						ui4_1 = loc1;
						tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n1);
						tu4_1 = (EIF_NATURAL_32) tu1_1;
						loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 * (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L)) + tu4_1);
						RTHOOK(35);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
						RTHOOK(36);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						loc11--;
					}
				} else {
					RTHOOK(37);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(38);
						if ((EIF_BOOLEAN)(loc11 == ((EIF_INTEGER_32) 0L))) break;
						RTHOOK(39);
						RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
						tu4_1 = (EIF_NATURAL_32) arg6;
						ui4_1 = loc1;
						tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n1);
						tu4_2 = (EIF_NATURAL_32) tu1_1;
						loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 * tu4_1) + tu4_2);
						RTHOOK(40);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
						RTHOOK(41);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						loc11--;
					}
				}
				RTHOOK(42);
				if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(43);
					if ((EIF_BOOLEAN)(loc5 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(44);
						uu4_1 = loc5;
						ui4_1 = arg2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
						RTHOOK(45);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				} else {
					RTHOOK(46);
					ur1 = arg1;
					ui4_1 = arg2;
					ur2 = arg1;
					ui4_2 = arg2;
					ui4_3 = loc2;
					uu4_1 = loc3;
					ur3 = RTCCL(loc13);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
					RTHOOK(47);
					RTDBGAL(12, 0x38000000, 1, 0); /* loc12 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc13))(loc13)).it_n4);
					loc12 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(48);
					ur1 = arg1;
					ui4_1 = arg2;
					ur2 = arg1;
					ui4_2 = arg2;
					ui4_3 = loc2;
					uu4_1 = loc5;
					ur3 = RTCCL(loc13);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
					RTHOOK(49);
					RTDBGAL(12, 0x38000000, 1, 0); /* loc12 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc13))(loc13)).it_n4);
					loc12 += tu4_1;
					RTHOOK(50);
					if ((EIF_BOOLEAN)(loc12 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
						RTHOOK(51);
						uu4_1 = loc12;
						ui4_1 = (EIF_INTEGER_32) (arg2 + loc2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
						RTHOOK(52);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2++;
					}
				}
				RTHOOK(53);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 += loc4;
			}
			RTHOOK(54);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			tu4_1 = (EIF_NATURAL_32) arg6;
			loc3 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(55);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			ui4_1 = loc1;
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n1);
			tu4_1 = (EIF_NATURAL_32) tu1_1;
			loc5 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(56);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
			RTHOOK(57);
			if ((EIF_BOOLEAN)(arg6 == ((EIF_INTEGER_32) 10L))) {
				RTHOOK(58);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 - (EIF_INTEGER_32) (loc10 - ((EIF_INTEGER_32) 9L))) - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(59);
					if ((EIF_BOOLEAN) (loc11 <= ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(60);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					ui4_1 = loc1;
					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n1);
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 * (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L)) + tu4_1);
					RTHOOK(61);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
					RTHOOK(62);
					RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
					loc3 *= (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
					RTHOOK(63);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11--;
				}
			} else {
				RTHOOK(64);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 - (EIF_INTEGER_32) (loc10 - loc4)) - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(65);
					if ((EIF_BOOLEAN) (loc11 <= ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(66);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					tu4_1 = (EIF_NATURAL_32) arg6;
					ui4_1 = loc1;
					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n1);
					tu4_2 = (EIF_NATURAL_32) tu1_1;
					loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 * tu4_1) + tu4_2);
					RTHOOK(67);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
					RTHOOK(68);
					RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
					tu4_1 = (EIF_NATURAL_32) arg6;
					loc3 *= tu4_1;
					RTHOOK(69);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11--;
				}
			}
			RTHOOK(70);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(71);
				if ((EIF_BOOLEAN)(loc5 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(72);
					uu4_1 = loc5;
					ui4_1 = arg2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
					RTHOOK(73);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
			} else {
				RTHOOK(74);
				ur1 = arg1;
				ui4_1 = arg2;
				ur2 = arg1;
				ui4_2 = arg2;
				ui4_3 = loc2;
				uu4_1 = loc3;
				ur3 = RTCCL(loc13);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
				RTHOOK(75);
				RTDBGAL(12, 0x38000000, 1, 0); /* loc12 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc13))(loc13)).it_n4);
				loc12 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(76);
				ur1 = arg1;
				ui4_1 = arg2;
				ur2 = arg1;
				ui4_2 = arg2;
				ui4_3 = loc2;
				uu4_1 = loc5;
				ur3 = RTCCL(loc13);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
				RTHOOK(77);
				RTDBGAL(12, 0x38000000, 1, 0); /* loc12 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc13))(loc13)).it_n4);
				loc12 += tu4_1;
				RTHOOK(78);
				if ((EIF_BOOLEAN)(loc12 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(79);
					uu4_1 = loc12;
					ui4_1 = (EIF_INTEGER_32) (arg2 + loc2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
					RTHOOK(80);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2++;
				}
			}
			RTHOOK(81);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) loc2;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(82);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(21);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit182 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
