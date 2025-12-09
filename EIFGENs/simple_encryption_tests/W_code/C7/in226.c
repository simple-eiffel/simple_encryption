/*
 * Code for class INTEGER_X_GCD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F226_4210(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit226(void);

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

/* {INTEGER_X_GCD}.gcd */
void F226_4210 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "gcd";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc16 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc17 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc18);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc9);
	RTLR(7,loc12);
	RTLR(8,ur1);
	RTLR(9,loc7);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLIU(12);
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
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_UINT32, &loc16);
	RTLU(SK_UINT32, &loc17);
	RTLU(SK_REF, &loc18);
	
	RTEAA(l_feature_name, 225, Current, 18, 3, 7169);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(225, Current, 7169);
	RTCC(arg1, 225, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 225, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 225, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(18, 0xF80001F0, 0, 0); /* loc18 */
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
	loc18 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc9 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc11 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(4);
	RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc12 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc14 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc11 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ui4_1 = loc14;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		RTHOOK(8);
		if (!RTCEQ(arg1, arg3)) {
			RTHOOK(9);
			ui4_1 = loc14;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = loc12;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc14;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
	} else {
		RTHOOK(11);
		if ((EIF_BOOLEAN)(loc14 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(12);
			ui4_1 = loc11;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			RTHOOK(13);
			if (!RTCEQ(arg1, arg2)) {
				RTHOOK(14);
				ui4_1 = loc11;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
				RTHOOK(15);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = loc9;
				ui4_1 = loc10;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ui4_3 = loc11;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
			}
		} else {
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc11 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(17);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
				RTHOOK(18);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = loc12;
				ui4_1 = loc13;
				ui4_2 = loc14;
				ui4_3 = loc10;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc9))(loc9, ui4_3x)).it_n4);
				uu4_1 = tu4_1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3419, dtype))(Current, ur1x, ui4_1x, ui4_2x, uu4_1x)).it_n4);
				uu4_1 = tu4_1;
				ui4_1 = ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
			} else {
				RTHOOK(19);
				if ((EIF_BOOLEAN)(loc14 == ((EIF_INTEGER_32) 1L))) {
					RTHOOK(20);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
					RTHOOK(21);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = loc9;
					ui4_1 = loc10;
					ui4_2 = loc11;
					ui4_3 = loc13;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc12))(loc12, ui4_3x)).it_n4);
					uu4_1 = tu4_1;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3419, dtype))(Current, ur1x, ui4_1x, ui4_2x, uu4_1x)).it_n4);
					uu4_1 = tu4_1;
					ui4_1 = ((EIF_INTEGER_32) 0L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
				} else {
					for (;;) {
						RTHOOK(22);
						ui4_1 = loc10;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc9))(loc9, ui4_1x)).it_n4);
						if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
						RTHOOK(23);
						RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
						loc10++;
					}
					RTHOOK(24);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 - ((EIF_INTEGER_32) 0L));
					RTHOOK(25);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11 -= loc5;
					RTHOOK(26);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ui4_1 = loc10;
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc9))(loc9, ui4_1x)).it_n4);
					uu4_1 = tu4_2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(27);
					RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
					loc7 = (EIF_REFERENCE) loc9;
					RTHOOK(28);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) loc10;
					RTHOOK(29);
					RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					ui4_1 = loc11;
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
					RTNHOOK(29,1);
					loc9 = (EIF_REFERENCE) tr1;
					RTHOOK(30);
					if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(31);
						ur1 = loc9;
						ui4_1 = loc10;
						ur2 = loc7;
						ui4_2 = loc8;
						ui4_3 = loc11;
						ui4_4 = loc2;
						ur3 = RTCCL(loc18);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1055, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
						RTHOOK(32);
						RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc18))(loc18)).it_n4);
						loc16 = (EIF_NATURAL_32) tu4_2;
						RTHOOK(33);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 + loc11) - ((EIF_INTEGER_32) 1L));
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc9))(loc9, ui4_1x)).it_n4);
						ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
						loc11 -= ti4_1;
					} else {
						RTHOOK(34);
						ur1 = loc7;
						ui4_1 = loc8;
						ui4_2 = loc10;
						ui4_3 = loc11;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc9))(loc9, ur1x, ui4_1x, ui4_2x, ui4_3x);
					}
					for (;;) {
						RTHOOK(35);
						ui4_1 = loc13;
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc12))(loc12, ui4_1x)).it_n4);
						if ((EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
						RTHOOK(36);
						RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
						loc13++;
					}
					RTHOOK(37);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc13 - ((EIF_INTEGER_32) 0L));
					RTHOOK(38);
					RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
					loc14 -= loc6;
					RTHOOK(39);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					ui4_1 = loc13;
					tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc12))(loc12, ui4_1x)).it_n4);
					uu4_1 = tu4_3;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
					loc3 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(40);
					RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
					loc7 = (EIF_REFERENCE) loc12;
					RTHOOK(41);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) loc13;
					RTHOOK(42);
					RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					ui4_1 = loc14;
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
					RTNHOOK(42,1);
					loc12 = (EIF_REFERENCE) tr1;
					RTHOOK(43);
					if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(44);
						ur1 = loc12;
						ui4_1 = loc13;
						ur2 = loc7;
						ui4_2 = loc8;
						ui4_3 = loc14;
						ui4_4 = loc3;
						ur3 = RTCCL(loc18);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1055, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
						RTHOOK(45);
						RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
						tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc18))(loc18)).it_n4);
						loc16 = (EIF_NATURAL_32) tu4_3;
						RTHOOK(46);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc13 + loc14) - ((EIF_INTEGER_32) 1L));
						tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc12))(loc12, ui4_1x)).it_n4);
						ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
						loc14 -= ti4_1;
					} else {
						RTHOOK(47);
						ur1 = loc7;
						ui4_1 = loc8;
						ui4_2 = loc13;
						ui4_3 = loc14;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc12))(loc12, ur1x, ui4_1x, ui4_2x, ui4_3x);
					}
					RTHOOK(48);
					if ((EIF_BOOLEAN) (loc5 > loc6)) {
						RTHOOK(49);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						loc4 = (EIF_INTEGER_32) loc6;
						RTHOOK(50);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) loc3;
					} else {
						RTHOOK(51);
						if ((EIF_BOOLEAN) (loc5 < loc6)) {
							RTHOOK(52);
							RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
							loc4 = (EIF_INTEGER_32) loc5;
							RTHOOK(53);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) loc2;
						} else {
							RTHOOK(54);
							RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
							loc4 = (EIF_INTEGER_32) loc5;
							RTHOOK(55);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							ui4_1 = loc3;
							ti4_1 = eif_min_int32 (loc2,ui4_1);
							loc1 = (EIF_INTEGER_32) ti4_1;
						}
					}
					RTHOOK(56);
					tb1 = '\01';
					if (!(EIF_BOOLEAN) (loc11 < loc14)) {
						tb2 = '\0';
						if ((EIF_BOOLEAN)(loc11 == loc14)) {
							ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 + loc11) - ((EIF_INTEGER_32) 1L));
							tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc9))(loc9, ui4_1x)).it_n4);
							ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc13 + loc14) - ((EIF_INTEGER_32) 1L));
							tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc12))(loc12, ui4_1x)).it_n4);
							tb2 = (EIF_BOOLEAN) (tu4_3 < tu4_4);
						}
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(57);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						ur1 = loc12;
						ui4_1 = loc13;
						ur2 = loc12;
						ui4_2 = loc13;
						ui4_3 = loc14;
						ur3 = loc9;
						ui4_4 = loc10;
						ui4_5 = loc11;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3418, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x)).it_i4);
						loc14 = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(58);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						ur1 = loc12;
						ui4_1 = loc13;
						ur2 = loc9;
						ui4_2 = loc10;
						ui4_3 = loc11;
						ur3 = loc12;
						ui4_4 = loc13;
						ui4_5 = loc14;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3418, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x)).it_i4);
						loc14 = (EIF_INTEGER_32) ti4_1;
					}
					RTHOOK(59);
					RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
					loc15 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 + loc4);
					RTHOOK(60);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(61);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc13 + loc14) - ((EIF_INTEGER_32) 1L));
						tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc12))(loc12, ui4_1x)).it_n4);
						ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - loc1);
						tu4_4 = eif_bit_shift_right(tu4_3,ui4_1);
						ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
						loc15 += ti4_1;
						RTHOOK(62);
						ui4_1 = loc15;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
						RTHOOK(63);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
						ui4_1 = ((EIF_INTEGER_32) 0L);
						ui4_2 = loc4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", tr1))(tr1, uu4_1x, ui4_1x, ui4_2x);
						RTHOOK(64);
						RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc7 = (EIF_REFERENCE) tr1;
						RTHOOK(65);
						RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
						loc8 = (EIF_INTEGER_32) loc4;
						RTHOOK(66);
						ur1 = loc7;
						ui4_1 = loc8;
						ur2 = loc12;
						ui4_2 = loc13;
						ui4_3 = loc14;
						ui4_4 = loc1;
						ur3 = RTCCL(loc18);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1054, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
						RTHOOK(67);
						RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
						tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc18))(loc18)).it_n4);
						loc17 = (EIF_NATURAL_32) tu4_3;
						RTHOOK(68);
						if ((EIF_BOOLEAN)(loc17 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
							RTHOOK(69);
							uu4_1 = loc17;
							ui4_1 = (EIF_INTEGER_32) (loc8 + loc14);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
						}
					} else {
						RTHOOK(70);
						ui4_1 = loc15;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
						RTHOOK(71);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
						ui4_1 = ((EIF_INTEGER_32) 0L);
						ui4_2 = loc4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", tr1))(tr1, uu4_1x, ui4_1x, ui4_2x);
						RTHOOK(72);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = loc12;
						ui4_1 = loc13;
						ui4_2 = loc4;
						ui4_3 = loc14;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
					}
					RTHOOK(73);
					ui4_1 = loc15;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(74);
		RTCT("g.count /= 0", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(75);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(23);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit226 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
