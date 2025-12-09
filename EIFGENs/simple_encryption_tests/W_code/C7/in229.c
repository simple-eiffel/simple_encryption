/*
 * Code for class INTEGER_X_RANDOM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F229_4214(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F229_4215(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit229(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_X_RANDOM}.urandomb */
void F229_4214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "urandomb";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 228, Current, 1, 3, 7173);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(228, Current, 7173);
	RTCC(arg1, 228, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 228, l_feature_name, 2, eif_new_type(60, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ui4_1 = arg3;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1051, "randget", arg2))(arg2, ur1x, ui4_1x, ui4_2x);
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("target.bits <= nbits", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5473, "bits", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 <= arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_RANDOM}.urandomm */
void F229_4215 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "urandomm";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc12 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc13);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLR(7,loc1);
	RTLR(8,ur1);
	RTLR(9,ur2);
	RTLR(10,ur3);
	RTLR(11,ur4);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_BOOL, &loc11);
	RTLU(SK_UINT32, &loc12);
	RTLU(SK_REF, &loc13);
	
	RTEAA(l_feature_name, 228, Current, 13, 3, 7174);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(228, Current, 7174);
	RTCC(arg1, 228, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 228, l_feature_name, 2, eif_new_type(60, 0x01), 0x01);
	RTCC(arg3, 228, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(13, 0xF80001F0, 0, 0); /* loc13 */
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
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc7 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = RTLN(eif_new_type(136, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1429, "raise", tr1))(tr1);
	}
	RTHOOK(5);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ui4_1 = loc5;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1048, dtype))(Current, uu4_1x)).it_b);
	loc9 = (EIF_BOOLEAN) tb1;
	RTHOOK(8);
	if (loc9) {
		RTHOOK(9);
		RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc9 || (EIF_BOOLEAN) (loc4 >= loc5))) break;
			RTHOOK(11);
			ui4_1 = loc4;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
			if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(12);
				RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
				loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(13);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
	}
	RTHOOK(14);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ui4_1 = loc5;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(15);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	ti4_2 = (EIF_INTEGER_32) loc9;
	loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 * ti4_1) - loc8) - ti4_2);
	RTHOOK(16);
	if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(17);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	} else {
		RTHOOK(18);
		RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(19);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(20);
		RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(21);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(22);
		if ((EIF_BOOLEAN)(loc3 == loc1)) {
			RTHOOK(23);
			RTDBGAL(11, 0x04000000, 1, 0); /* loc11 */
			loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(24);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc7;
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
			RTNHOOK(24,1);
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(25);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr1;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc7;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc3))(loc3, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
		RTHOOK(26);
		ui4_1 = loc7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(27);
		RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(28);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + loc7) - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc1))(loc1, uu4_1x, ui4_1x);
		RTHOOK(29);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
		RTHOOK(30);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(31);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(32);
			ur1 = loc1;
			ui4_1 = loc2;
			ui4_2 = loc6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1051, "randget", arg2))(arg2, ur1x, ui4_1x, ui4_2x);
			RTHOOK(33);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			ur1 = loc1;
			ui4_1 = loc2;
			ur2 = loc3;
			ui4_2 = loc4;
			ui4_3 = loc7;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1946, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x)).it_i4);
			loc10 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(34);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8--;
		}
		RTHOOK(35);
		if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(36);
			ur1 = loc1;
			ui4_1 = loc2;
			ur2 = loc1;
			ui4_2 = loc2;
			ur3 = loc3;
			ui4_3 = loc4;
			ui4_4 = loc7;
			ur4 = RTCCL(loc13);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(37);
			RTDBGAL(12, 0x38000000, 1, 0); /* loc12 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc13))(loc13)).it_n4);
			loc12 = (EIF_NATURAL_32) tu4_1;
		}
		RTHOOK(38);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		ur1 = loc1;
		ui4_1 = loc2;
		ui4_2 = loc7;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(39);
		ui4_1 = loc7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(40);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
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
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit229 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
