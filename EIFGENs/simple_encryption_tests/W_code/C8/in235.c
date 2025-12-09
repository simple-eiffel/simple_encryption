/*
 * Code for class INTEGER_X_DIVISION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F235_4252(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F235_4253(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F235_4254(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F235_4255(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F235_4256(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F235_4257(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F235_4258(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F235_4259(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F235_4260(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit235(void);

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

/* {INTEGER_X_DIVISION}.fdiv_r_2exp */
void F235_4252 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "fdiv_r_2exp";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 234, Current, 0, 3, 7211);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(234, Current, 7211);
	RTCC(arg1, 234, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 234, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = arg3;
	ui4_2 = ((EIF_INTEGER_32) -1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3484, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_DIVISION}.cdiv_r_2exp */
void F235_4253 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "cdiv_r_2exp";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 234, Current, 0, 3, 7212);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(234, Current, 7212);
	RTCC(arg1, 234, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 234, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = arg3;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3484, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_DIVISION}.cfdiv_r_2exp */
void F235_4254 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "cfdiv_r_2exp";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc9 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
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
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc7);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc5);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_UINT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_BOOL, &loc11);
	RTLU(SK_BOOL, &loc12);
	
	RTEAA(l_feature_name, 234, Current, 12, 4, 7213);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(234, Current, 7213);
	RTCC(arg1, 234, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 234, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	loc10 = (EIF_INTEGER_32) arg3;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_2x);
	} else {
		RTHOOK(6);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 / ((EIF_INTEGER_32) 32L));
		RTHOOK(7);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		loc10 %= ((EIF_INTEGER_32) 32L);
		RTHOOK(8);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = eif_abs_int32 (loc1);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tb1 = '\0';
		tb2 = '\0';
		ui4_2 = arg4;
		ti4_1 = eif_bit_xor(loc1,ui4_2);
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
			tb2 = RTCEQ(Current, arg2);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) (loc2 <= loc3);
		}
		if (tb1) {
			RTHOOK(11);
			RTDBGAL(11, 0x04000000, 1, 0); /* loc11 */
			loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(12);
			ui4_2 = arg4;
			ti4_1 = eif_bit_xor(loc1,ui4_2);
			if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
				RTHOOK(13);
				if (RTCEQ(Current, arg2)) {
					RTHOOK(14);
					RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = (EIF_REFERENCE) tr1;
				} else {
					RTHOOK(15);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					ui4_2 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					ti4_1 = eif_min_int32 (loc2,ui4_2);
					loc4 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(16);
					ui4_2 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_2x);
					RTHOOK(17);
					RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = (EIF_REFERENCE) tr1;
					RTHOOK(18);
					ur1 = loc5;
					ui4_2 = loc6;
					ui4_3 = loc8;
					ui4_4 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_2x, ui4_3x, ui4_4x);
					RTHOOK(19);
					if ((EIF_BOOLEAN) (loc2 <= loc3)) {
						RTHOOK(20);
						ui4_2 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_2x);
						RTHOOK(21);
						RTDBGAL(11, 0x04000000, 1, 0); /* loc11 */
						loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
			} else {
				RTHOOK(22);
				if ((EIF_BOOLEAN) (loc2 <= loc3)) {
					RTHOOK(23);
					RTDBGAL(12, 0x04000000, 1, 0); /* loc12 */
					loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(24);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					for (;;) {
						RTHOOK(25);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 < loc3) || loc12)) break;
						RTHOOK(26);
						RTDBGAL(12, 0x04000000, 1, 0); /* loc12 */
						ui4_2 = (EIF_INTEGER_32) (loc6 + loc4);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc5))(loc5, ui4_2x)).it_n4);
						loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
						RTHOOK(27);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						loc4++;
					}
					RTHOOK(28);
					if ((EIF_BOOLEAN) !loc12) {
						RTHOOK(29);
						ui4_2 = (EIF_INTEGER_32) (loc6 + loc3);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc5))(loc5, ui4_2x)).it_n4);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
						ui4_2 = loc10;
						tu4_3 = eif_bit_shift_left(tu4_2,ui4_2);
						uu4_1 = (EIF_NATURAL_32) (tu4_3 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
						tu4_2 = eif_bit_and(tu4_1,uu4_1);
						if ((EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
							RTHOOK(30);
							RTDBGAL(12, 0x04000000, 1, 0); /* loc12 */
							loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						} else {
							RTHOOK(31);
							ui4_2 = ((EIF_INTEGER_32) 0L);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_2x);
							RTHOOK(32);
							RTDBGAL(11, 0x04000000, 1, 0); /* loc11 */
							loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
					}
				}
				RTHOOK(33);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc11 && loc12)) {
					RTHOOK(34);
					ui4_2 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_2x);
					RTHOOK(35);
					RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc5 = (EIF_REFERENCE) tr1;
					RTHOOK(36);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(37);
					RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = (EIF_REFERENCE) tr1;
					RTHOOK(38);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(39);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					ui4_2 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					ti4_1 = eif_min_int32 (loc2,ui4_2);
					loc4 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(40);
					ur1 = loc7;
					ui4_2 = loc8;
					ur2 = loc5;
					ui4_3 = loc6;
					ui4_4 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1052, dtype))(Current, ur1x, ui4_2x, ur2x, ui4_3x, ui4_4x);
					for (;;) {
						RTHOOK(41);
						if ((EIF_BOOLEAN) (loc4 > loc3)) break;
						RTHOOK(42);
						tr1 = RTLN(eif_new_type(272, 0x00).id);
						*(EIF_NATURAL_32 *)tr1 = loc9;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4389, "max_value", tr1))(tr1)).it_n4);
						uu4_1 = tu4_1;
						ui4_2 = (EIF_INTEGER_32) (loc8 + loc4);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_2x);
						RTHOOK(43);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						loc4++;
					}
					RTHOOK(44);
					ur1 = loc7;
					ui4_2 = loc8;
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1064, dtype))(Current, ur1x, ui4_2x, uu4_1x);
					RTHOOK(45);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc1;
				}
			}
		}
		RTHOOK(46);
		if ((EIF_BOOLEAN) !loc11) {
			RTHOOK(47);
			RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
			ui4_2 = (EIF_INTEGER_32) (loc8 + loc3);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc7))(loc7, ui4_2x)).it_n4);
			loc9 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(48);
			RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ui4_2 = loc10;
			tu4_2 = eif_bit_shift_left(tu4_1,ui4_2);
			uu4_1 = (EIF_NATURAL_32) (tu4_2 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
			tu4_1 = eif_bit_and(loc9,uu4_1);
			loc9 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(49);
			uu4_1 = loc9;
			ui4_2 = (EIF_INTEGER_32) (loc8 + loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_2x);
			RTHOOK(50);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3--;
			for (;;) {
				RTHOOK(51);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc9 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)))) break;
				RTHOOK(52);
				RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
				ui4_2 = (EIF_INTEGER_32) (loc8 + loc3);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc7))(loc7, ui4_2x)).it_n4);
				loc9 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(53);
			if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L))) {
				RTHOOK(54);
				ui4_2 = ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_2x);
			} else {
				RTHOOK(55);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
				RTHOOK(56);
				if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L))) {
					RTHOOK(57);
					ui4_2 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_2x);
				} else {
					RTHOOK(58);
					ui4_2 = (EIF_INTEGER_32) -loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_2x);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(59);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_DIVISION}.mod */
void F235_4255 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "mod";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLR(9,Current);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 234, Current, 3, 3, 7214);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(234, Current, 7214);
	RTCC(arg1, 234, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 234, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 234, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF8000147, 0, 0); /* loc3 */
	loc3 = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(5577, "count", loc3));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if (RTCEQ(arg1, loc3)) {
		RTHOOK(4);
		RTDBGAL(2, 0xF8000148, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(328, 0x01).id);
		ti4_1 = eif_abs_int32 (loc1);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5470, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5494, "set_from_other", loc2))(loc2, ur1x);
		RTHOOK(6);
		RTDBGAL(3, 0xF8000147, 0, 0); /* loc3 */
		loc3 = (EIF_REFERENCE) RTCCL(loc2);
	}
	RTHOOK(7);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3489, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(8);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
		tb1 = (EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(5577, "count", loc3));
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(10);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg1);
			ur3 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3469, dtype))(Current, ur1x, ur2x, ur3x);
		} else {
			RTHOOK(11);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg1);
			ur3 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3465, dtype))(Current, ur1x, ur2x, ur3x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_DIVISION}.tdiv_q */
void F235_4256 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "tdiv_q";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,tr1);
	RTLR(4,loc10);
	RTLR(5,loc12);
	RTLR(6,Current);
	RTLR(7,loc6);
	RTLR(8,loc8);
	RTLR(9,loc14);
	RTLR(10,ur1);
	RTLR(11,ur2);
	RTLR(12,ur3);
	RTLR(13,ur4);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_INT32, &loc15);
	
	RTEAA(l_feature_name, 234, Current, 15, 3, 7215);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(234, Current, 7215);
	RTCC(arg1, 234, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 234, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 234, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = eif_abs_int32 (loc2);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = eif_abs_int32 (loc3);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc5) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		tr1 = RTLN(eif_new_type(136, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(7,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1429, "raise", tr1))(tr1);
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(9);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	} else {
		RTHOOK(10);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(11);
		RTDBGAL(10, 0xF800026B, 0, 0); /* loc10 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc10 = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = loc5;
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
		loc12 = (EIF_REFERENCE) tr1;
		RTHOOK(13);
		RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) tr1;
		RTHOOK(14);
		RTDBGAL(8, 0xF800026B, 0, 0); /* loc8 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc8 = (EIF_REFERENCE) tr1;
		RTHOOK(15);
		if ((EIF_BOOLEAN)(loc8 == loc10)) {
			RTHOOK(16);
			RTDBGAL(14, 0xF800026B, 0, 0); /* loc14 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc5;
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
			RTNHOOK(16,1);
			loc14 = (EIF_REFERENCE) tr1;
			RTHOOK(17);
			ur1 = loc8;
			ui4_1 = loc9;
			ui4_2 = loc15;
			ui4_3 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc14))(loc14, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(18);
			RTDBGAL(8, 0xF800026B, 0, 0); /* loc8 */
			loc8 = (EIF_REFERENCE) loc14;
		}
		RTHOOK(19);
		if ((EIF_BOOLEAN)(loc6 == loc10)) {
			RTHOOK(20);
			RTDBGAL(14, 0xF800026B, 0, 0); /* loc14 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc4;
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
			RTNHOOK(20,1);
			loc14 = (EIF_REFERENCE) tr1;
			RTHOOK(21);
			ur1 = loc6;
			ui4_1 = loc7;
			ui4_2 = loc15;
			ui4_3 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc14))(loc14, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(22);
			RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
			loc6 = (EIF_REFERENCE) loc14;
		}
		RTHOOK(23);
		ur1 = loc10;
		ui4_1 = loc11;
		ur2 = loc12;
		ui4_2 = loc13;
		ur3 = loc6;
		ui4_3 = loc7;
		ui4_4 = loc4;
		ur4 = loc8;
		ui4_5 = loc9;
		ui4_6 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
		RTHOOK(24);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 + loc1) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc10))(loc10, ui4_1x)).it_n4);
		ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
		loc1 -= ti4_1;
		RTHOOK(25);
		ui4_1 = loc3;
		ti4_1 = eif_bit_xor(loc2,ui4_1);
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(26);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		} else {
			RTHOOK(27);
			ui4_1 = (EIF_INTEGER_32) -loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(20);
	RTEE;
#undef up1
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
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_DIVISION}.tdiv_q_2exp */
void F235_4257 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "tdiv_q_2exp";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc10);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,loc6);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLR(9,ur3);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 234, Current, 10, 3, 7216);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(234, Current, 7216);
	RTCC(arg1, 234, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 234, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(10, 0xF80001F0, 0, 0); /* loc10 */
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
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	loc9 = (EIF_INTEGER_32) arg3;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 / ((EIF_INTEGER_32) 32L));
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = eif_abs_int32 (loc1);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc3);
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	} else {
		RTHOOK(8);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(9);
		RTDBGAL(4, 0xF800026B, 0, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9 %= ((EIF_INTEGER_32) 32L);
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc9 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(13);
			ur1 = loc4;
			ui4_1 = loc5;
			ur2 = loc6;
			ui4_2 = (EIF_INTEGER_32) (loc7 + loc3);
			ui4_3 = loc2;
			ui4_4 = loc9;
			ur3 = RTCCL(loc10);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1055, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
			RTHOOK(14);
			RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
			loc8 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(15);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc2) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc4))(loc4, ui4_1x)).it_n4);
			ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
			loc2 -= ti4_1;
		} else {
			RTHOOK(16);
			ur1 = loc6;
			ui4_1 = (EIF_INTEGER_32) (loc7 + loc3);
			ui4_2 = loc5;
			ui4_3 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc4))(loc4, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
		RTHOOK(17);
		if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(18);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		} else {
			RTHOOK(19);
			ui4_1 = (EIF_INTEGER_32) -loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_DIVISION}.tdiv_qr */
void F235_4258 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "tdiv_qr";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_TYPED_VALUE ui4_7x = {{0}, SK_INT32};
#define ui4_7 ui4_7x.it_i4
	EIF_TYPED_VALUE ui4_8x = {{0}, SK_INT32};
#define ui4_8 ui4_8x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,Current);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLR(12,ur4);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 234, Current, 7, 4, 7217);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(234, Current, 7217);
	RTCC(arg1, 234, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 234, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 234, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTCC(arg4, 234, l_feature_name, 4, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(5577, "count", arg4));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = eif_abs_int32 (loc2);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = eif_abs_int32 (loc3);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc5) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		tr1 = RTLN(eif_new_type(136, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(7,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1429, "raise", tr1))(tr1);
	}
	RTHOOK(8);
	ui4_1 = loc5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg2))(arg2, ui4_1x);
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		if (!RTCEQ(arg3, arg2)) {
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr2;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(12);
			ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg2))(arg2, ui4_1x);
		}
		RTHOOK(13);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	} else {
		RTHOOK(14);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(15);
		if ((EIF_BOOLEAN) (RTCEQ(arg4, arg2) || RTCEQ(arg4, Current))) {
			RTHOOK(16);
			RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
			ui4_1 = loc5;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				if (ui4_1< 0) {
					eraise ("non_negative_argument", EN_RT_CHECK);
				}
				tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr1) = 0;
			}
			loc6 = (EIF_REFERENCE) tr1;
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg4))(arg4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr1;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = ((EIF_INTEGER_32) 0L);
			ui4_4 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc6))(loc6, ur1x, ui4_2x, ui4_3x, ui4_4x);
		} else {
			RTHOOK(18);
			RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg4))(arg4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) tr1;
		}
		RTHOOK(19);
		if ((EIF_BOOLEAN) (RTCEQ(arg3, arg2) || RTCEQ(arg3, Current))) {
			RTHOOK(20);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			ui4_2 = loc4;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				if (ui4_2< 0) {
					eraise ("non_negative_argument", EN_RT_CHECK);
				}
				tr1 = RTLNSP2(typres0.id,0,ui4_2,sizeof(EIF_NATURAL_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr1) = 0;
			}
			loc7 = (EIF_REFERENCE) tr1;
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr1;
			ui4_3 = ((EIF_INTEGER_32) 0L);
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ui4_5 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_3x, ui4_4x, ui4_5x);
		} else {
			RTHOOK(22);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) tr1;
		}
		RTHOOK(23);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr1;
		ui4_3 = ((EIF_INTEGER_32) 0L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur2 = tr2;
		ui4_4 = ((EIF_INTEGER_32) 0L);
		ur3 = loc7;
		ui4_5 = ((EIF_INTEGER_32) 0L);
		ui4_6 = loc4;
		ur4 = loc6;
		ui4_7 = ((EIF_INTEGER_32) 0L);
		ui4_8 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_3x, ur2x, ui4_4x, ur3x, ui4_5x, ui4_6x, ur4x, ui4_7x, ui4_8x);
		RTHOOK(24);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_3 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_3x)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(25);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1--;
		}
		RTHOOK(26);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr1;
		ui4_3 = ((EIF_INTEGER_32) 0L);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
		ui4_4 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_3x, ui4_4x)).it_i4);
		ui4_3 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg2))(arg2, ui4_3x);
		RTHOOK(27);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(28);
		ui4_3 = loc3;
		ti4_1 = eif_bit_xor(loc2,ui4_3);
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(29);
			ui4_3 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_3x);
		} else {
			RTHOOK(30);
			ui4_3 = (EIF_INTEGER_32) -loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_3x);
		}
		RTHOOK(31);
		if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(32);
			ui4_3 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg2))(arg2, ui4_3x);
		} else {
			RTHOOK(33);
			ui4_3 = (EIF_INTEGER_32) -loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg2))(arg2, ui4_3x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
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
#undef ui4_7
#undef ui4_8
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_DIVISION}.tdiv_r */
void F235_4259 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "tdiv_r";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,tr1);
	RTLR(4,loc6);
	RTLR(5,loc12);
	RTLR(6,ur1);
	RTLR(7,loc10);
	RTLR(8,Current);
	RTLR(9,loc8);
	RTLR(10,loc14);
	RTLR(11,ur2);
	RTLR(12,ur3);
	RTLR(13,ur4);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_INT32, &loc15);
	
	RTEAA(l_feature_name, 234, Current, 15, 3, 7218);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(234, Current, 7218);
	RTCC(arg1, 234, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 234, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 234, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = eif_abs_int32 (loc2);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = eif_abs_int32 (loc3);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc5) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		tr1 = RTLN(eif_new_type(136, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(7,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1429, "raise", tr1))(tr1);
	}
	RTHOOK(8);
	ui4_1 = loc5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		if (!RTCEQ(arg2, arg1)) {
			RTHOOK(11);
			RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc12 = (EIF_REFERENCE) tr1;
			RTHOOK(13);
			ur1 = loc6;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc12))(loc12, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(14);
			ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	} else {
		RTHOOK(15);
		RTDBGAL(10, 0xF800026B, 0, 0); /* loc10 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = loc1;
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
		loc10 = (EIF_REFERENCE) tr1;
		RTHOOK(16);
		RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc12 = (EIF_REFERENCE) tr1;
		RTHOOK(17);
		RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) tr1;
		RTHOOK(18);
		RTDBGAL(8, 0xF800026B, 0, 0); /* loc8 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc8 = (EIF_REFERENCE) tr1;
		RTHOOK(19);
		if ((EIF_BOOLEAN)(loc8 == loc12)) {
			RTHOOK(20);
			RTDBGAL(14, 0xF800026B, 0, 0); /* loc14 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc4;
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
			RTNHOOK(20,1);
			loc14 = (EIF_REFERENCE) tr1;
			RTHOOK(21);
			ur1 = loc6;
			ui4_1 = loc7;
			ui4_2 = loc15;
			ui4_3 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc14))(loc14, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(22);
			RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
			loc6 = (EIF_REFERENCE) loc14;
			RTHOOK(23);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) loc15;
		}
		RTHOOK(24);
		ur1 = loc10;
		ui4_1 = loc11;
		ur2 = loc12;
		ui4_2 = loc13;
		ur3 = loc6;
		ui4_3 = loc7;
		ui4_4 = loc4;
		ur4 = loc8;
		ui4_5 = loc9;
		ui4_6 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
		RTHOOK(25);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		ur1 = loc12;
		ui4_1 = loc13;
		ui4_2 = loc5;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(26);
		if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(27);
			ui4_1 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		} else {
			RTHOOK(28);
			ui4_1 = (EIF_INTEGER_32) -loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(20);
	RTEE;
#undef up1
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
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_DIVISION}.tdiv_r_2exp */
void F235_4260 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "tdiv_r_2exp";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	
	RTEAA(l_feature_name, 234, Current, 6, 3, 7219);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(234, Current, 7219);
	RTCC(arg1, 234, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 234, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 / ((EIF_INTEGER_32) 32L));
	RTHOOK(3);
	RTDBGAL(4, 0xF800026B, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 > loc3)) {
		RTHOOK(5);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		ui4_1 = (EIF_INTEGER_32) (loc5 + loc3);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc4))(loc4, ui4_1x)).it_n4);
		ui4_1 = (EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 32L));
		tu4_2 = eif_bit_shift_left(((EIF_NATURAL_32) 1U),ui4_1);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		loc6 = (EIF_NATURAL_32) tu4_3;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc6 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
			RTHOOK(8);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			uu4_1 = loc6;
			ui4_1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
		} else {
			RTHOOK(10);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) loc3;
			RTHOOK(11);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ur1 = loc4;
			ui4_1 = loc5;
			ui4_2 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(13);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) loc2;
		}
	} else {
		RTHOOK(14);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) loc1;
		RTHOOK(15);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(16);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) loc2;
	}
	RTHOOK(17);
	if (!RTCEQ(arg1, arg2)) {
		RTHOOK(18);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr2;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	}
	RTHOOK(19);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(20);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	} else {
		RTHOOK(21);
		ui4_1 = (EIF_INTEGER_32) -loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit235 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
