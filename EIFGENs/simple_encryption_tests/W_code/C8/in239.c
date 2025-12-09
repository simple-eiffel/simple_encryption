/*
 * Code for class INTEGER_X_NUMBER_THEORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F239_4290(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F239_4291(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F239_4292(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F239_4293(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F239_4294(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F239_4295(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F239_4296(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F239_4297(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F239_4298(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F239_4299(EIF_REFERENCE);
extern EIF_TYPED_VALUE F239_4300(EIF_REFERENCE);
extern EIF_TYPED_VALUE F239_4301(EIF_REFERENCE);
extern void F239_4302(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F239_4303(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F239_4304(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit239(void);

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

/* {INTEGER_X_NUMBER_THEORY}.millerrabin_test */
EIF_TYPED_VALUE F239_4290 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "millerrabin_test";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
#define arg5 arg5x.it_r
#define arg6 arg6x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,arg5);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);
	RTLR(8,ur4);
	RTLR(9,Current);
	RTLIU(10);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 238, Current, 1, 6, 7249);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7249);
	RTCC(arg1, 238, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 238, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 238, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTCC(arg4, 238, l_feature_name, 4, eif_new_type(327, 0x01), 0x01);
	RTCC(arg5, 238, l_feature_name, 5, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg4);
	ur2 = RTCCL(arg3);
	ur3 = RTCCL(arg5);
	ur4 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3521, dtype))(Current, ur1x, ur2x, ur3x, ur4x);
	RTHOOK(2);
	tb1 = '\01';
	ur1 = RTCCL(arg4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3460, dtype))(Current, ur1x, uu4_1x)).it_i4);
	if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		ur1 = RTCCL(arg4);
		ur2 = RTCCL(arg2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3458, dtype))(Current, ur1x, ur2x)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(5);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result != ((EIF_INTEGER_32) -1L)) || (EIF_BOOLEAN) (loc1 >= arg6))) break;
			RTHOOK(7);
			ur1 = RTCCL(arg4);
			ur2 = RTCCL(arg4);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L);
			ur3 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3522, dtype))(Current, ur1x, ur2x, uu4_1x, ur3x);
			RTHOOK(8);
			ur1 = RTCCL(arg4);
			ur2 = RTCCL(arg2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3458, dtype))(Current, ur1x, ur2x)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(9);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				RTHOOK(10);
				ur1 = RTCCL(arg4);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3460, dtype))(Current, ur1x, uu4_1x)).it_i4);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(11);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
			RTHOOK(12);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
		RTHOOK(13);
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
			RTHOOK(14);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef uu4_1
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_NUMBER_THEORY}.bin_uiui */
void F239_4291 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "bin_uiui";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_n4
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
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,loc5);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,loc9);
	RTLR(6,loc10);
	RTLR(7,loc11);
	RTLR(8,loc12);
	RTLR(9,ur1);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLR(12,ur4);
	RTLR(13,ur5);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 238, Current, 12, 3, 7250);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7250);
	RTCC(arg1, 238, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
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
	RTNHOOK(1,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
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
	RTNHOOK(2,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(9, 0xF8000259, 0, 0); /* loc9 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,601,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(10, 0xF8000259, 0, 0); /* loc10 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,601,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(11, 0xF80001F0, 0, 0); /* loc11 */
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
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(12, 0xF80001F0, 0, 0); /* loc12 */
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
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
	loc8 = (EIF_NATURAL_32) arg2;
	RTHOOK(8);
	RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
	loc7 = (EIF_NATURAL_32) arg3;
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc8 < loc7)) {
		RTHOOK(10);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	} else {
		RTHOOK(11);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		uu4_1 = (EIF_NATURAL_32) (loc8 - loc7);
		tu4_1 = eif_min_uint32 (loc7,uu4_1);
		loc7 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc7 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(13);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
		} else {
			RTHOOK(15);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc8 - loc7) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			uu4_1 = loc2;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
			RTHOOK(17);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			RTHOOK(18);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5574, "capacity", arg1))(arg1)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc10))(loc10, ui4_1x);
			RTHOOK(19);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc11))(loc11, uu4_1x);
			RTHOOK(20);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc12))(loc12, uu4_1x);
			RTHOOK(21);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(22);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L);
			for (;;) {
				RTHOOK(23);
				if ((EIF_BOOLEAN) (loc1 > loc7)) break;
				RTHOOK(24);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				loc2 += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(25);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc11))(loc11)).it_n4);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc12))(loc12)).it_n4);
				uu4_1 = tu4_2;
				tu4_3 = eif_bit_or(tu4_1,uu4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				tu4_1 = eif_bit_and(tu4_3,uu4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				tu4_2 = eif_bit_xor(tu4_1,uu4_1);
				loc3 = (EIF_NATURAL_32) tu4_2;
				RTHOOK(26);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc11))(loc11)).it_n4);
				ti4_1 = (EIF_INTEGER_32) loc3;
				ui4_1 = ti4_1;
				tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
				uu4_1 = tu4_2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc11))(loc11, uu4_1x);
				RTHOOK(27);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc12))(loc12)).it_n4);
				ti4_1 = (EIF_INTEGER_32) loc3;
				ui4_1 = ti4_1;
				tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
				uu4_1 = tu4_2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc12))(loc12, uu4_1x);
				RTHOOK(28);
				ur1 = RTCCL(loc4);
				ur2 = RTCCL(loc5);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc11))(loc11)).it_n4);
				uu4_1 = tu4_1;
				uu4_2 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
				RTHOOK(29);
				RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc12))(loc12)).it_n4);
				loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 * loc1);
				RTHOOK(30);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(31);
					ur1 = RTCCL(arg1);
					ui4_1 = ((EIF_INTEGER_32) 32L);
					ur2 = RTCCL(loc9);
					ur3 = RTCCL(loc10);
					ur4 = RTCCL(loc11);
					ur5 = RTCCL(loc12);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3529, dtype))(Current, ur1x, ui4_1x, ur2x, ur3x, ur4x, ur5x);
					RTHOOK(32);
					uu4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc11))(loc11, uu4_1x);
					RTHOOK(33);
					uu4_1 = loc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc12))(loc12, uu4_1x);
				} else {
					RTHOOK(34);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
					uu4_1 = tu4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc11))(loc11, uu4_1x);
					RTHOOK(35);
					uu4_1 = loc6;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc12))(loc12, uu4_1x);
				}
				RTHOOK(36);
				RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
				loc1 += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(37);
			ur1 = RTCCL(arg1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ur2 = RTCCL(loc9);
			ur3 = RTCCL(loc10);
			ur4 = RTCCL(loc11);
			ur5 = RTCCL(loc12);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3529, dtype))(Current, ur1x, ui4_1x, ur2x, ur3x, ur4x, ur5x);
			RTHOOK(38);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc9))(loc9)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_NUMBER_THEORY}.gcdext */
void F239_4292 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "gcdext";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc21 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc25 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc26 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc27 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc28 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc29 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc30 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
#define arg5 arg5x.it_r
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(30);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,arg5);
	RTLR(5,loc15);
	RTLR(6,Current);
	RTLR(7,tr1);
	RTLR(8,loc5);
	RTLR(9,loc7);
	RTLR(10,ur1);
	RTLR(11,ur2);
	RTLR(12,loc9);
	RTLR(13,loc11);
	RTLR(14,loc22);
	RTLR(15,loc23);
	RTLR(16,loc24);
	RTLR(17,loc25);
	RTLR(18,loc18);
	RTLR(19,loc20);
	RTLR(20,ur3);
	RTLR(21,ur4);
	RTLR(22,ur5);
	RTLR(23,loc26);
	RTLR(24,loc27);
	RTLR(25,loc29);
	RTLR(26,loc28);
	RTLR(27,loc30);
	RTLR(28,loc17);
	RTLR(29,loc16);
	RTLIU(30);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_INT32, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_INT32, &loc21);
	RTLU(SK_REF, &loc22);
	RTLU(SK_REF, &loc23);
	RTLU(SK_REF, &loc24);
	RTLU(SK_REF, &loc25);
	RTLU(SK_REF, &loc26);
	RTLU(SK_REF, &loc27);
	RTLU(SK_REF, &loc28);
	RTLU(SK_REF, &loc29);
	RTLU(SK_REF, &loc30);
	
	RTEAA(l_feature_name, 238, Current, 30, 5, 7251);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7251);
	RTCC(arg1, 238, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	if (arg2) {
		RTCC(arg2, 238, l_feature_name, 2, eif_new_type(327, 0x00), 0x00);
	}
	if (arg3) {
		RTCC(arg3, 238, l_feature_name, 3, eif_new_type(327, 0x00), 0x00);
	}
	RTCC(arg4, 238, l_feature_name, 4, eif_new_type(327, 0x01), 0x01);
	RTCC(arg5, 238, l_feature_name, 5, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(15, 0xF80000FF, 0, 0); /* loc15 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc15 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(5577, "count", arg4));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg5 + RTVA(5577, "count", arg5));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(4);
	RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg4))(arg4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tb1 = '\01';
	if (!(EIF_BOOLEAN) (loc1 > loc2)) {
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			ur1 = loc5;
			ui4_1 = loc6;
			ur2 = loc7;
			ui4_2 = loc8;
			ui4_3 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1946, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x)).it_i4);
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(7);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) loc1;
		RTHOOK(8);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) loc2;
		RTHOOK(9);
		RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
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
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		RTDBGAL(11, 0xF800026B, 0, 0); /* loc11 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
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
		RTNHOOK(10,1);
		loc11 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		ur1 = loc5;
		ui4_1 = loc6;
		ui4_2 = loc10;
		ui4_3 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc9))(loc9, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(12);
		ur1 = loc7;
		ui4_1 = loc8;
		ui4_2 = loc12;
		ui4_3 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc11))(loc11, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(13);
		RTDBGAL(22, 0xF8000147, 0, 0); /* loc22 */
		loc22 = (EIF_REFERENCE) RTCCL(arg4);
		RTHOOK(14);
		RTDBGAL(23, 0xF8000147, 0, 0); /* loc23 */
		loc23 = (EIF_REFERENCE) RTCCL(arg5);
		RTHOOK(15);
		RTDBGAL(24, 0xF8000147, 0, 0); /* loc24 */
		loc24 = (EIF_REFERENCE) RTCCL(arg2);
		RTHOOK(16);
		RTDBGAL(25, 0xF8000147, 0, 0); /* loc25 */
		loc25 = (EIF_REFERENCE) RTCCL(arg3);
	} else {
		RTHOOK(17);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) loc2;
		RTHOOK(18);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) loc1;
		RTHOOK(19);
		RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
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
		RTNHOOK(19,1);
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(20);
		RTDBGAL(11, 0xF800026B, 0, 0); /* loc11 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
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
		loc11 = (EIF_REFERENCE) tr1;
		RTHOOK(21);
		ur1 = loc7;
		ui4_1 = loc8;
		ui4_2 = loc10;
		ui4_3 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc9))(loc9, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(22);
		ur1 = loc5;
		ui4_1 = loc6;
		ui4_2 = loc12;
		ui4_3 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc11))(loc11, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(23);
		RTDBGAL(22, 0xF8000147, 0, 0); /* loc22 */
		loc22 = (EIF_REFERENCE) RTCCL(arg5);
		RTHOOK(24);
		RTDBGAL(23, 0xF8000147, 0, 0); /* loc23 */
		loc23 = (EIF_REFERENCE) RTCCL(arg4);
		RTHOOK(25);
		RTDBGAL(24, 0xF8000147, 0, 0); /* loc24 */
		loc24 = (EIF_REFERENCE) RTCCL(arg3);
		RTHOOK(26);
		RTDBGAL(25, 0xF8000147, 0, 0); /* loc25 */
		loc25 = (EIF_REFERENCE) RTCCL(arg2);
	}
	RTHOOK(27);
	RTDBGAL(18, 0xF800026B, 0, 0); /* loc18 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
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
	RTNHOOK(27,1);
	loc18 = (EIF_REFERENCE) tr1;
	RTHOOK(28);
	RTDBGAL(20, 0xF800026B, 0, 0); /* loc20 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
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
	RTNHOOK(28,1);
	loc20 = (EIF_REFERENCE) tr1;
	RTHOOK(29);
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(30);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ui4_1 = loc21;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc20))(loc20, uu4_1x, ui4_1x);
		RTHOOK(31);
		
		eif_put_integer_32_item(RTCW(loc15),1,((EIF_INTEGER_32) 1L));
		RTHOOK(32);
		ur1 = loc9;
		ui4_1 = loc10;
		ui4_2 = loc19;
		ui4_3 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc18))(loc18, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(33);
		RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
		loc13 = (EIF_INTEGER_32) loc3;
	} else {
		RTHOOK(34);
		RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
		ur1 = loc18;
		ui4_1 = loc19;
		ur2 = loc20;
		ui4_2 = loc21;
		ur3 = RTCCL(loc15);
		ur4 = loc9;
		ui4_3 = loc10;
		ui4_4 = loc3;
		ur5 = loc11;
		ui4_5 = loc12;
		ui4_6 = loc4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3434, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ur4x, ui4_3x, ui4_4x, ur5x, ui4_5x, ui4_6x)).it_i4);
		loc13 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(35);
	RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
	ti4_1 = eif_integer_32_item(RTCW(loc15),1);
	ti4_2 = eif_abs_int32 (ti4_1);
	loc14 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(36);
	RTDBGAL(26, 0xF8000148, 0, 0); /* loc26 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(36,1);
	loc26 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(37);
	ur1 = loc18;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5576, "item_set", loc26))(loc26, ur1x);
	RTHOOK(38);
	ui4_1 = loc13;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", loc26))(loc26, ui4_1x);
	RTHOOK(39);
	RTDBGAL(27, 0xF8000148, 0, 0); /* loc27 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(39,1);
	loc27 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(40);
	ur1 = loc20;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5576, "item_set", loc27))(loc27, ur1x);
	RTHOOK(41);
	ti4_1 = eif_integer_32_item(RTCW(loc15),1);
	ti4_2 = *(EIF_INTEGER_32 *)(loc22 + RTVA(5577, "count", loc22));
	ui4_1 = ti4_2;
	ti4_3 = eif_bit_xor(ti4_1,ui4_1);
	if ((EIF_BOOLEAN) (ti4_3 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(42);
		ui4_1 = loc14;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", loc27))(loc27, ui4_1x);
	} else {
		RTHOOK(43);
		ui4_1 = (EIF_INTEGER_32) -loc14;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", loc27))(loc27, ui4_1x);
	}
	RTHOOK(44);
	loc29 = RTCCL(loc25);
	if (EIF_TEST(loc29)) {
		RTHOOK(45);
		ti4_1 = *(EIF_INTEGER_32 *)(loc23 + RTVA(5577, "count", loc23));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(46);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", loc29))(loc29, ui4_1x);
		} else {
			RTHOOK(47);
			RTDBGAL(28, 0xF8000148, 0, 0); /* loc28 */
			tr1 = RTLN(eif_new_type(328, 0x01).id);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + loc3) + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5470, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(47,1);
			loc28 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(48);
			ur1 = RTCCL(loc28);
			ur2 = RTCCL(loc27);
			ur3 = RTCCL(loc22);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3476, dtype))(Current, ur1x, ur2x, ur3x);
			RTHOOK(49);
			ur1 = RTCCL(loc28);
			ur2 = RTCCL(loc26);
			ur3 = RTCCL(loc28);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3469, dtype))(Current, ur1x, ur2x, ur3x);
			RTHOOK(50);
			ur1 = RTCCL(loc29);
			ur2 = RTCCL(loc28);
			ur3 = RTCCL(loc23);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3486, dtype))(Current, ur1x, ur2x, ur3x);
		}
	}
	RTHOOK(51);
	loc30 = RTCCL(loc24);
	if (EIF_TEST(loc30)) {
		RTHOOK(52);
		ui4_1 = loc14;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", loc30))(loc30, ui4_1x);
		RTHOOK(53);
		RTDBGAL(17, 0xF800026B, 0, 0); /* loc17 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc30))(loc30)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc17 = (EIF_REFERENCE) tr1;
		RTHOOK(54);
		ur1 = loc20;
		ui4_1 = loc21;
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = loc14;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc17))(loc17, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(55);
		ti4_1 = *(EIF_INTEGER_32 *)(loc27 + RTVA(5577, "count", loc27));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", loc30))(loc30, ui4_1x);
	}
	RTHOOK(56);
	ui4_1 = loc13;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
	RTHOOK(57);
	RTDBGAL(16, 0xF800026B, 0, 0); /* loc16 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc16 = (EIF_REFERENCE) tr1;
	RTHOOK(58);
	ur1 = loc18;
	ui4_1 = loc19;
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = loc13;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc16))(loc16, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(59);
	ui4_1 = loc13;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(60);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(37);
	RTEE;
#undef up1
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
#undef uu4_1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_NUMBER_THEORY}.invert */
EIF_TYPED_VALUE F239_4293 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "invert";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
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
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLR(9,ur4);
	RTLR(10,ur5);
	RTLR(11,Current);
	RTLIU(12);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 238, Current, 5, 3, 7252);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7252);
	RTCC(arg1, 238, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 238, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 238, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc3 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc4 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ui4_1 = loc4;
	ti4_1 = eif_max_int32 (loc3,ui4_1);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 1L))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
			tb2 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(6);
		RTDBGAL(1, 0xF8000148, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(328, 0x01).id);
		ui4_1 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5470, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(6,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(2, 0xF8000148, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(328, 0x01).id);
		ui4_1 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5470, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(7,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(loc2);
		ur3 = NULL;
		ur4 = RTCCL(arg2);
		ur5 = RTCCL(arg3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3518, dtype))(Current, ur1x, ur2x, ur3x, ur4x, ur5x);
		RTHOOK(9);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(5577, "count", loc1));
		if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 1L))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
		}
		if (tb1) {
			RTHOOK(10);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(11);
			ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(5577, "count", loc2));
			if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
				RTHOOK(12);
				ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
				if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
					RTHOOK(13);
					ur1 = RTCCL(arg1);
					ur2 = RTCCL(loc2);
					ur3 = RTCCL(arg3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3469, dtype))(Current, ur1x, ur2x, ur3x);
				} else {
					RTHOOK(14);
					ur1 = RTCCL(arg1);
					ur2 = RTCCL(loc2);
					ur3 = RTCCL(arg3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3465, dtype))(Current, ur1x, ur2x, ur3x);
				}
			} else {
				RTHOOK(15);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18, "copy", arg1))(arg1, ur1x);
			}
			RTHOOK(16);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_NUMBER_THEORY}.millerrabin */
EIF_TYPED_VALUE F239_4294 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "millerrabin";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,ur3);
	RTLR(9,ur4);
	RTLR(10,loc6);
	RTLR(11,loc3);
	RTLR(12,loc9);
	RTLR(13,ur5);
	RTLIU(14);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 238, Current, 9, 2, 7253);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7253);
	RTCC(arg1, 238, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF8000148, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5470, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(arg1);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3470, dtype))(Current, ur1x, ur2x, uu4_1x);
	RTHOOK(3);
	RTDBGAL(4, 0xF8000148, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5470, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(5, 0xF8000148, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5470, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 210L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5502, "set_from_natural_32", loc4))(loc4, uu4_1x);
	RTHOOK(6);
	ur1 = RTCCL(loc5);
	ur2 = RTCCL(loc4);
	ur3 = RTCCL(loc2);
	ur4 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3521, dtype))(Current, ur1x, ur2x, ur3x, ur4x);
	RTHOOK(7);
	ur1 = RTCCL(loc5);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3460, dtype))(Current, ur1x, uu4_1x)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(8);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(9);
		RTDBGAL(6, 0xF8000148, 0, 0); /* loc6 */
		tr1 = RTLN(eif_new_type(328, 0x01).id);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5470, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(9,1);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		ur1 = RTCCL(loc2);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3453, dtype))(Current, ur1x, ui4_1x)).it_i4);
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		ur1 = RTCCL(loc6);
		ur2 = RTCCL(loc2);
		ui4_1 = loc7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3487, dtype))(Current, ur1x, ur2x, ui4_1x);
		RTHOOK(12);
		RTDBGAL(3, 0xF8000148, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(328, 0x01).id);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5470, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(12,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		ur1 = RTCCL(loc3);
		ur2 = RTCCL(arg1);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3470, dtype))(Current, ur1x, ur2x, uu4_1x);
		RTHOOK(14);
		RTDBGAL(9, 0xF80000EB, 0, 0); /* loc9 */
		tr1 = RTLN(eif_new_type(235, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(3491, Dtype(tr1)))(tr1);
		RTNHOOK(14,1);
		loc9 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(15);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(16);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(17);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= arg2) || (EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(18);
			ur1 = RTCCL(loc4);
			ur2 = RTCCL(loc9);
			ur3 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3445, dtype))(Current, ur1x, ur2x, ur3x);
			RTHOOK(19);
			ur1 = RTCCL(loc4);
			ur2 = RTCCL(loc4);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3466, dtype))(Current, ur1x, ur2x, uu4_1x);
			RTHOOK(20);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(loc2);
			ur3 = RTCCL(loc4);
			ur4 = RTCCL(loc5);
			ur5 = RTCCL(loc6);
			ui4_1 = loc7;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3516, dtype))(Current, ur1x, ur2x, ur3x, ur4x, ur5x, ui4_1x)).it_i4);
			loc8 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(21);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
		RTHOOK(22);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) loc8;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {INTEGER_X_NUMBER_THEORY}.powm */
void F239_4295 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "powm";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc21 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc22 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc23 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc24 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc25 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc26 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc27 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc28 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc29 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc30 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc31 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc32 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc33 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc34 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc35 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc36 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc37 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc38 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc39 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc40 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(22);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,loc40);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,loc35);
	RTLR(8,loc15);
	RTLR(9,loc34);
	RTLR(10,ur1);
	RTLR(11,ur2);
	RTLR(12,ur3);
	RTLR(13,loc36);
	RTLR(14,loc3);
	RTLR(15,loc5);
	RTLR(16,loc7);
	RTLR(17,loc11);
	RTLR(18,ur4);
	RTLR(19,loc1);
	RTLR(20,loc9);
	RTLR(21,loc13);
	RTLIU(22);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_INT32, &loc19);
	RTLU(SK_INT32, &loc20);
	RTLU(SK_INT32, &loc21);
	RTLU(SK_UINT32, &loc22);
	RTLU(SK_UINT32, &loc23);
	RTLU(SK_INT32, &loc24);
	RTLU(SK_INT32, &loc25);
	RTLU(SK_INT32, &loc26);
	RTLU(SK_INT32, &loc27);
	RTLU(SK_INT32, &loc28);
	RTLU(SK_INT32, &loc29);
	RTLU(SK_INT32, &loc30);
	RTLU(SK_INT32, &loc31);
	RTLU(SK_INT32, &loc32);
	RTLU(SK_BOOL, &loc33);
	RTLU(SK_REF, &loc34);
	RTLU(SK_REF, &loc35);
	RTLU(SK_REF, &loc36);
	RTLU(SK_INT32, &loc37);
	RTLU(SK_UINT32, &loc38);
	RTLU(SK_UINT32, &loc39);
	RTLU(SK_REF, &loc40);
	
	RTEAA(l_feature_name, 238, Current, 40, 4, 7254);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7254);
	RTCC(arg1, 238, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 238, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 238, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTCC(arg4, 238, l_feature_name, 4, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(40, 0xF80001F0, 0, 0); /* loc40 */
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
	loc40 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(35, 0xF8000147, 0, 0); /* loc35 */
	loc35 = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(3);
	RTDBGAL(15, 0xF800026B, 0, 0); /* loc15 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg4))(arg4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc15 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(5577, "count", arg4));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc20 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc20 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		tr1 = RTLN(eif_new_type(136, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(6,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1429, "raise", tr1))(tr1);
	}
	RTHOOK(7);
	RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
	loc18 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc18 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(9);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc20 == ((EIF_INTEGER_32) 1L))) {
			ui4_1 = loc16;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
		}
		if (tb1) {
			RTHOOK(10);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		} else {
			RTHOOK(11);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
	} else {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (loc18 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(14);
			RTDBGAL(34, 0xF8000148, 0, 0); /* loc34 */
			tr1 = RTLN(eif_new_type(328, 0x01).id);
			ui4_1 = (EIF_INTEGER_32) (loc20 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5470, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(14,1);
			loc34 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(15);
			ur1 = RTCCL(loc34);
			ur2 = RTCCL(loc35);
			ur3 = RTCCL(arg4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3519, dtype))(Current, ur1x, ur2x, ur3x)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(16);
				tr1 = RTLN(eif_new_type(138, 0x01).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(16,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1429, "raise", tr1))(tr1);
			}
			RTHOOK(17);
			RTDBGAL(35, 0xF8000147, 0, 0); /* loc35 */
			loc35 = (EIF_REFERENCE) RTCCL(loc34);
			RTHOOK(18);
			RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
			loc18 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc18;
		}
		RTHOOK(19);
		RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
		loc19 = (EIF_INTEGER_32) loc18;
		RTHOOK(20);
		RTDBGAL(33, 0x04000000, 1, 0); /* loc33 */
		tb1 = '\0';
		if ((EIF_BOOLEAN) (loc20 < ((EIF_INTEGER_32) 170L))) {
			ui4_1 = loc16;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
			tb1 = (EIF_BOOLEAN)((EIF_NATURAL_32) (tu4_1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L)) != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
		}
		loc33 = (EIF_BOOLEAN) tb1;
		RTHOOK(21);
		if (loc33) {
			RTHOOK(22);
			RTDBGAL(22, 0x38000000, 1, 0); /* loc22 */
			ui4_1 = loc16;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1042, dtype))(Current, uu4_1x)).it_n4);
			loc22 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(23);
			RTDBGAL(22, 0x38000000, 1, 0); /* loc22 */
			loc22 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 0L) - loc22);
		} else {
			RTHOOK(24);
			RTDBGAL(30, 0x10000000, 1, 0); /* loc30 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc16 + loc20) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
			loc30 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(25);
			if ((EIF_BOOLEAN)(loc30 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(26);
				RTDBGAL(36, 0xF800026B, 0, 0); /* loc36 */
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				ui4_1 = loc20;
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
				RTNHOOK(26,1);
				loc36 = (EIF_REFERENCE) tr1;
				RTHOOK(27);
				ur1 = loc36;
				ui4_1 = loc37;
				ur2 = loc15;
				ui4_2 = loc16;
				ui4_3 = loc20;
				ui4_4 = loc30;
				ur3 = RTCCL(loc40);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1054, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
				RTHOOK(28);
				RTDBGAL(38, 0x38000000, 1, 0); /* loc38 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc40))(loc40)).it_n4);
				loc38 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(29);
				RTDBGAL(15, 0xF800026B, 0, 0); /* loc15 */
				loc15 = (EIF_REFERENCE) loc36;
				RTHOOK(30);
				RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
				loc16 = (EIF_INTEGER_32) loc37;
			}
		}
		RTHOOK(31);
		RTDBGAL(31, 0x10000000, 1, 0); /* loc31 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc19 - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
		loc31 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(32);
		RTDBGAL(24, 0x10000000, 1, 0); /* loc24 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		loc24 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc19 * ti4_1) - loc31);
		RTHOOK(33);
		RTDBGAL(29, 0x10000000, 1, 0); /* loc29 */
		loc29 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(34);
		RTDBGAL(26, 0x10000000, 1, 0); /* loc26 */
		loc26 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		for (;;) {
			RTHOOK(35);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc29 == ((EIF_INTEGER_32) 10L)) || (EIF_BOOLEAN) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc24) <= (EIF_INTEGER_32) (loc26 * (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + (EIF_INTEGER_32) (loc29 * (EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) + loc29))))))) break;
			RTHOOK(36);
			RTDBGAL(29, 0x10000000, 1, 0); /* loc29 */
			loc29++;
			RTHOOK(37);
			RTDBGAL(26, 0x10000000, 1, 0); /* loc26 */
			loc26 *= ((EIF_INTEGER_32) 2L);
		}
		RTHOOK(38);
		RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc20);
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
		RTNHOOK(38,1);
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(39);
		RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) (loc20 + ((EIF_INTEGER_32) 1L));
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
		RTNHOOK(39,1);
		loc5 = (EIF_REFERENCE) tr1;
		RTHOOK(40);
		RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc26 / ((EIF_INTEGER_32) 2L)) * loc20);
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
		RTNHOOK(40,1);
		loc7 = (EIF_REFERENCE) tr1;
		RTHOOK(41);
		RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
		ti4_1 = *(EIF_INTEGER_32 *)(loc35 + RTVA(5577, "count", loc35));
		ti4_2 = eif_abs_int32 (ti4_1);
		loc17 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(42);
		RTDBGAL(11, 0xF800026B, 0, 0); /* loc11 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc35))(loc35)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc11 = (EIF_REFERENCE) tr1;
		RTHOOK(43);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc17 > loc20)) {
			tb2 = '\0';
			if ((EIF_BOOLEAN)(loc17 == loc20)) {
				ur1 = loc11;
				ui4_1 = loc12;
				ur2 = loc15;
				ui4_2 = loc16;
				ui4_3 = loc20;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1946, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x)).it_i4);
				tb2 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(44);
			if (loc33) {
				RTHOOK(45);
				ur1 = loc3;
				ui4_1 = (EIF_INTEGER_32) (loc4 + loc20);
				ur2 = loc11;
				ui4_2 = loc12;
				ui4_3 = loc17;
				ur3 = loc15;
				ui4_4 = loc16;
				ui4_5 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3528, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
				RTHOOK(46);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				ui4_1 = loc4;
				ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc20 - loc4) - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", loc3))(loc3, uu4_1x, ui4_1x, ui4_2x);
				RTHOOK(47);
				ur1 = loc5;
				ui4_1 = loc6;
				ur2 = loc7;
				ui4_2 = loc8;
				ur3 = loc3;
				ui4_3 = loc4;
				ui4_4 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc20);
				ur4 = loc15;
				ui4_5 = loc16;
				ui4_6 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
			} else {
				RTHOOK(48);
				ur1 = loc7;
				ui4_1 = loc8;
				ur2 = loc11;
				ui4_2 = loc12;
				ui4_3 = loc17;
				ur3 = loc15;
				ui4_4 = loc16;
				ui4_5 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3528, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
			}
		} else {
			RTHOOK(49);
			if (loc33) {
				RTHOOK(50);
				ur1 = loc11;
				ui4_1 = loc12;
				ui4_2 = (EIF_INTEGER_32) (loc4 + loc20);
				ui4_3 = loc17;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc3))(loc3, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(51);
				ur1 = loc5;
				ui4_1 = loc6;
				ur2 = loc7;
				ui4_2 = loc8;
				ur3 = loc3;
				ui4_3 = loc4;
				ui4_4 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc20);
				ur4 = loc15;
				ui4_5 = loc16;
				ui4_6 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
			} else {
				RTHOOK(52);
				ur1 = loc11;
				ui4_1 = loc12;
				ui4_2 = loc8;
				ui4_3 = loc17;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(53);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				ui4_1 = (EIF_INTEGER_32) (loc8 + loc17);
				ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc20 - loc17) - loc8) - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", loc7))(loc7, uu4_1x, ui4_1x, ui4_2x);
			}
		}
		RTHOOK(54);
		RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = loc20;
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
		RTNHOOK(54,1);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(55);
		ur1 = loc3;
		ui4_1 = loc4;
		ur2 = loc7;
		ui4_2 = loc8;
		ui4_3 = loc20;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1073, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
		RTHOOK(56);
		if (loc33) {
			RTHOOK(57);
			ur1 = loc1;
			ui4_1 = loc2;
			ur2 = loc15;
			ui4_2 = loc16;
			ui4_3 = loc20;
			uu4_1 = loc22;
			ur3 = loc3;
			ui4_4 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3437, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x, ui4_4x);
		} else {
			RTHOOK(58);
			ur1 = loc5;
			ui4_1 = loc6;
			ur2 = loc1;
			ui4_2 = loc2;
			ur3 = loc3;
			ui4_3 = loc4;
			ui4_4 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc20);
			ur4 = loc15;
			ui4_5 = loc16;
			ui4_6 = loc20;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
		}
		RTHOOK(59);
		RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
		loc9 = (EIF_REFERENCE) loc7;
		RTHOOK(60);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		loc10 = (EIF_INTEGER_32) loc8;
		RTHOOK(61);
		RTDBGAL(25, 0x10000000, 1, 0); /* loc25 */
		loc25 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(62);
			if ((EIF_BOOLEAN) (loc25 >= (EIF_INTEGER_32) (loc26 / ((EIF_INTEGER_32) 2L)))) break;
			RTHOOK(63);
			ur1 = loc3;
			ui4_1 = loc4;
			ur2 = loc9;
			ui4_2 = loc10;
			ur3 = loc1;
			ui4_3 = loc2;
			ui4_4 = loc20;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1068, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x);
			RTHOOK(64);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 += loc20;
			RTHOOK(65);
			if (loc33) {
				RTHOOK(66);
				ur1 = loc9;
				ui4_1 = loc10;
				ur2 = loc15;
				ui4_2 = loc16;
				ui4_3 = loc20;
				uu4_1 = loc22;
				ur3 = loc3;
				ui4_4 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3437, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x, ui4_4x);
			} else {
				RTHOOK(67);
				ur1 = loc5;
				ui4_1 = loc6;
				ur2 = loc9;
				ui4_2 = loc10;
				ur3 = loc3;
				ui4_3 = loc4;
				ui4_4 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc20);
				ur4 = loc15;
				ui4_5 = loc16;
				ui4_6 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
			}
			RTHOOK(68);
			RTDBGAL(25, 0x10000000, 1, 0); /* loc25 */
			loc25++;
		}
		RTHOOK(69);
		RTDBGAL(13, 0xF800026B, 0, 0); /* loc13 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc13 = (EIF_REFERENCE) tr1;
		RTHOOK(70);
		RTDBGAL(25, 0x10000000, 1, 0); /* loc25 */
		loc25 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc19 - ((EIF_INTEGER_32) 1L));
		RTHOOK(71);
		RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
		ui4_1 = (EIF_INTEGER_32) (loc14 + loc25);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc13))(loc13, ui4_1x)).it_n4);
		loc23 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(72);
		RTDBGAL(32, 0x10000000, 1, 0); /* loc32 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		loc32 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc31);
		RTHOOK(73);
		RTDBGAL(32, 0x10000000, 1, 0); /* loc32 */
		loc32 -= loc29;
		RTHOOK(74);
		if ((EIF_BOOLEAN) (loc32 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(75);
			if ((EIF_BOOLEAN) (loc25 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(76);
				RTDBGAL(25, 0x10000000, 1, 0); /* loc25 */
				loc25--;
				RTHOOK(77);
				RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
				ui4_1 = (EIF_INTEGER_32) -loc32;
				tu4_1 = eif_bit_shift_left(loc23,ui4_1);
				loc23 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(78);
				RTDBGAL(32, 0x10000000, 1, 0); /* loc32 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				loc32 += ti4_1;
				RTHOOK(79);
				RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
				ui4_1 = (EIF_INTEGER_32) (loc14 + loc25);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc13))(loc13, ui4_1x)).it_n4);
				ui4_1 = loc32;
				tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
				uu4_1 = tu4_2;
				tu4_1 = eif_bit_or(loc23,uu4_1);
				loc23 = (EIF_NATURAL_32) tu4_1;
			}
		} else {
			RTHOOK(80);
			RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
			ui4_1 = loc32;
			tu4_1 = eif_bit_shift_right(loc23,ui4_1);
			loc23 = (EIF_NATURAL_32) tu4_1;
		}
		RTHOOK(81);
		RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
		loc27 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(82);
			if ((EIF_BOOLEAN)((EIF_NATURAL_32) (loc23 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L)) != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(83);
			RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_right(loc23,ui4_1);
			loc23 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(84);
			RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
			loc27++;
		}
		RTHOOK(85);
		ur1 = loc7;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = eif_bit_shift_right(loc23,ui4_1);
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		ui4_1 = (EIF_INTEGER_32) (loc8 + (EIF_INTEGER_32) (loc20 * ti4_1));
		ui4_2 = loc2;
		ui4_3 = loc20;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(86);
		RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
		loc27--;
		for (;;) {
			RTHOOK(87);
			if ((EIF_BOOLEAN) (loc27 < ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(88);
			ur1 = loc3;
			ui4_1 = loc4;
			ur2 = loc1;
			ui4_2 = loc2;
			ui4_3 = loc20;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1073, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
			RTHOOK(89);
			if (loc33) {
				RTHOOK(90);
				ur1 = loc1;
				ui4_1 = loc2;
				ur2 = loc15;
				ui4_2 = loc16;
				ui4_3 = loc20;
				uu4_1 = loc22;
				ur3 = loc3;
				ui4_4 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3437, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x, ui4_4x);
			} else {
				RTHOOK(91);
				ur1 = loc5;
				ui4_1 = loc6;
				ur2 = loc1;
				ui4_2 = loc2;
				ur3 = loc3;
				ui4_3 = loc4;
				ui4_4 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc20);
				ur4 = loc15;
				ui4_5 = loc16;
				ui4_6 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
			}
			RTHOOK(92);
			RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
			loc27--;
		}
		for (;;) {
			RTHOOK(93);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc25 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc32 <= ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(94);
			RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
			ui4_1 = (EIF_INTEGER_32) (loc14 + loc25);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc13))(loc13, ui4_1x)).it_n4);
			loc23 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(95);
			RTDBGAL(28, 0x10000000, 1, 0); /* loc28 */
			loc28 = (EIF_INTEGER_32) loc29;
			RTHOOK(96);
			RTDBGAL(32, 0x10000000, 1, 0); /* loc32 */
			loc32 -= loc28;
			RTHOOK(97);
			if ((EIF_BOOLEAN) (loc32 < ((EIF_INTEGER_32) 0L))) {
				RTHOOK(98);
				if ((EIF_BOOLEAN) (loc25 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(99);
					RTDBGAL(25, 0x10000000, 1, 0); /* loc25 */
					loc25--;
					RTHOOK(100);
					RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
					ui4_1 = (EIF_INTEGER_32) -loc32;
					tu4_1 = eif_bit_shift_left(loc23,ui4_1);
					loc23 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(101);
					RTDBGAL(32, 0x10000000, 1, 0); /* loc32 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					loc32 += ti4_1;
					RTHOOK(102);
					RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
					ui4_1 = (EIF_INTEGER_32) (loc14 + loc25);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc13))(loc13, ui4_1x)).it_n4);
					ui4_1 = loc32;
					tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
					uu4_1 = tu4_2;
					tu4_1 = eif_bit_or(loc23,uu4_1);
					loc23 = (EIF_NATURAL_32) tu4_1;
				} else {
					RTHOOK(103);
					RTDBGAL(28, 0x10000000, 1, 0); /* loc28 */
					loc28 += loc32;
				}
			} else {
				RTHOOK(104);
				RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
				ui4_1 = loc32;
				tu4_1 = eif_bit_shift_right(loc23,ui4_1);
				loc23 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(105);
			RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ui4_1 = loc28;
			tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
			uu4_1 = (EIF_NATURAL_32) (tu4_2 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
			tu4_1 = eif_bit_and(loc23,uu4_1);
			loc23 = (EIF_NATURAL_32) tu4_1;
			for (;;) {
				RTHOOK(106);
				tb1 = '\01';
				ui4_1 = (EIF_INTEGER_32) (loc28 - ((EIF_INTEGER_32) 1L));
				tu4_1 = eif_bit_shift_right(loc23,ui4_1);
				if (!((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
					tb1 = (EIF_BOOLEAN) ((EIF_BOOLEAN) (loc25 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc32 <= ((EIF_INTEGER_32) 0L)));
				}
				if (tb1) break;
				RTHOOK(107);
				ur1 = loc3;
				ui4_1 = loc4;
				ur2 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1073, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
				RTHOOK(108);
				if (loc33) {
					RTHOOK(109);
					ur1 = loc1;
					ui4_1 = loc2;
					ur2 = loc15;
					ui4_2 = loc16;
					ui4_3 = loc20;
					uu4_1 = loc22;
					ur3 = loc3;
					ui4_4 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3437, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x, ui4_4x);
				} else {
					RTHOOK(110);
					ur1 = loc5;
					ui4_1 = loc6;
					ur2 = loc1;
					ui4_2 = loc2;
					ur3 = loc3;
					ui4_3 = loc4;
					ui4_4 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc20);
					ur4 = loc15;
					ui4_5 = loc16;
					ui4_6 = loc20;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
				}
				RTHOOK(111);
				if ((EIF_BOOLEAN)(loc32 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(112);
					RTDBGAL(32, 0x10000000, 1, 0); /* loc32 */
					loc32--;
					RTHOOK(113);
					RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tu4_1 = eif_bit_shift_left(loc23,ui4_1);
					ui4_1 = (EIF_INTEGER_32) (loc14 + loc25);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc13))(loc13, ui4_1x)).it_n4);
					ui4_1 = loc32;
					tu4_3 = eif_bit_shift_right(tu4_2,ui4_1);
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
					tu4_2 = eif_bit_and(tu4_3,uu4_1);
					loc23 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + tu4_2);
				} else {
					RTHOOK(114);
					RTDBGAL(25, 0x10000000, 1, 0); /* loc25 */
					loc25--;
					RTHOOK(115);
					RTDBGAL(32, 0x10000000, 1, 0); /* loc32 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					loc32 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
					RTHOOK(116);
					RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tu4_1 = eif_bit_shift_left(loc23,ui4_1);
					ui4_1 = (EIF_INTEGER_32) (loc14 + loc25);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc13))(loc13, ui4_1x)).it_n4);
					ui4_1 = loc32;
					tu4_3 = eif_bit_shift_right(tu4_2,ui4_1);
					loc23 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + tu4_3);
				}
			}
			RTHOOK(117);
			if ((EIF_BOOLEAN)(loc23 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(118);
				RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
				loc27 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					RTHOOK(119);
					if ((EIF_BOOLEAN)((EIF_NATURAL_32) (loc23 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L)) != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(120);
					RTDBGAL(23, 0x38000000, 1, 0); /* loc23 */
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tu4_1 = eif_bit_shift_right(loc23,ui4_1);
					loc23 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(121);
					RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
					loc27++;
				}
				RTHOOK(122);
				RTDBGAL(28, 0x10000000, 1, 0); /* loc28 */
				loc28 -= loc27;
				RTHOOK(123);
				RTDBGAL(28, 0x10000000, 1, 0); /* loc28 */
				loc28--;
				for (;;) {
					RTHOOK(124);
					if ((EIF_BOOLEAN) (loc28 < ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(125);
					ur1 = loc3;
					ui4_1 = loc4;
					ur2 = loc1;
					ui4_2 = loc2;
					ui4_3 = loc20;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1073, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
					RTHOOK(126);
					if (loc33) {
						RTHOOK(127);
						ur1 = loc1;
						ui4_1 = loc2;
						ur2 = loc15;
						ui4_2 = loc16;
						ui4_3 = loc20;
						uu4_1 = loc22;
						ur3 = loc3;
						ui4_4 = loc4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3437, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x, ui4_4x);
					} else {
						RTHOOK(128);
						ur1 = loc5;
						ui4_1 = loc6;
						ur2 = loc1;
						ui4_2 = loc2;
						ur3 = loc3;
						ui4_3 = loc4;
						ui4_4 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc20);
						ur4 = loc15;
						ui4_5 = loc16;
						ui4_6 = loc20;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
					}
					RTHOOK(129);
					RTDBGAL(28, 0x10000000, 1, 0); /* loc28 */
					loc28--;
				}
				RTHOOK(130);
				ur1 = loc3;
				ui4_1 = loc4;
				ur2 = loc1;
				ui4_2 = loc2;
				ur3 = loc7;
				ui4_3 = ((EIF_INTEGER_32) 1L);
				tu4_1 = eif_bit_shift_right(loc23,ui4_3);
				ti4_1 = (EIF_INTEGER_32) tu4_1;
				ui4_3 = (EIF_INTEGER_32) (loc8 + (EIF_INTEGER_32) (loc20 * ti4_1));
				ui4_4 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1068, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x);
				RTHOOK(131);
				if (loc33) {
					RTHOOK(132);
					ur1 = loc1;
					ui4_1 = loc2;
					ur2 = loc15;
					ui4_2 = loc16;
					ui4_3 = loc20;
					uu4_1 = loc22;
					ur3 = loc3;
					ui4_4 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3437, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x, ui4_4x);
				} else {
					RTHOOK(133);
					ur1 = loc5;
					ui4_1 = loc6;
					ur2 = loc1;
					ui4_2 = loc2;
					ur3 = loc3;
					ui4_3 = loc4;
					ui4_4 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc20);
					ur4 = loc15;
					ui4_5 = loc16;
					ui4_6 = loc20;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
				}
			} else {
				RTHOOK(134);
				RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
				loc27 = (EIF_INTEGER_32) loc28;
			}
			RTHOOK(135);
			RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
			loc27--;
			for (;;) {
				RTHOOK(136);
				if ((EIF_BOOLEAN) (loc27 < ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(137);
				ur1 = loc3;
				ui4_1 = loc4;
				ur2 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1073, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
				RTHOOK(138);
				if (loc33) {
					RTHOOK(139);
					ur1 = loc1;
					ui4_1 = loc2;
					ur2 = loc15;
					ui4_2 = loc16;
					ui4_3 = loc20;
					uu4_1 = loc22;
					ur3 = loc3;
					ui4_4 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3437, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x, ui4_4x);
				} else {
					RTHOOK(140);
					ur1 = loc5;
					ui4_1 = loc6;
					ur2 = loc1;
					ui4_2 = loc2;
					ur3 = loc3;
					ui4_3 = loc4;
					ui4_4 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc20);
					ur4 = loc15;
					ui4_5 = loc16;
					ui4_6 = loc20;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
				}
				RTHOOK(141);
				RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
				loc27--;
			}
		}
		RTHOOK(142);
		if (loc33) {
			RTHOOK(143);
			ur1 = loc1;
			ui4_1 = loc2;
			ui4_2 = loc4;
			ui4_3 = loc20;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc3))(loc3, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(144);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = (EIF_INTEGER_32) (loc4 + loc20);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc20) + loc20) - ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", loc3))(loc3, uu4_1x, ui4_1x, ui4_2x);
			RTHOOK(145);
			ur1 = loc1;
			ui4_1 = loc2;
			ur2 = loc15;
			ui4_2 = loc16;
			ui4_3 = loc20;
			uu4_1 = loc22;
			ur3 = loc3;
			ui4_4 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3437, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x, ui4_4x);
			RTHOOK(146);
			ur1 = loc1;
			ui4_1 = loc2;
			ur2 = loc15;
			ui4_2 = loc16;
			ui4_3 = loc20;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1946, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x)).it_i4);
			if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(147);
				ur1 = loc1;
				ui4_1 = loc2;
				ur2 = loc1;
				ui4_2 = loc2;
				ur3 = loc15;
				ui4_3 = loc16;
				ui4_4 = loc20;
				ur4 = RTCCL(loc40);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
				RTHOOK(148);
				RTDBGAL(38, 0x38000000, 1, 0); /* loc38 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc40))(loc40)).it_n4);
				loc38 = (EIF_NATURAL_32) tu4_1;
			}
		} else {
			RTHOOK(149);
			if ((EIF_BOOLEAN)(loc30 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(150);
				ur1 = loc3;
				ui4_1 = loc4;
				ur2 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc20;
				ui4_4 = loc30;
				ur3 = RTCCL(loc40);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1054, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
				RTHOOK(151);
				RTDBGAL(39, 0x38000000, 1, 0); /* loc39 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc40))(loc40)).it_n4);
				loc39 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(152);
				uu4_1 = loc39;
				ui4_1 = (EIF_INTEGER_32) (loc4 + loc20);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc3))(loc3, uu4_1x, ui4_1x);
				RTHOOK(153);
				ur1 = loc5;
				ui4_1 = loc6;
				ur2 = loc1;
				ui4_2 = loc2;
				ur3 = loc3;
				ui4_3 = loc4;
				ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(loc39 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
				ui4_4 = (EIF_INTEGER_32) (loc20 + ti4_1);
				ur4 = loc15;
				ui4_5 = loc16;
				ui4_6 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
				RTHOOK(154);
				ur1 = loc1;
				ui4_1 = loc2;
				ur2 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc20;
				ui4_4 = loc30;
				ur3 = RTCCL(loc40);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1055, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
				RTHOOK(155);
				RTDBGAL(38, 0x38000000, 1, 0); /* loc38 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc40))(loc40)).it_n4);
				loc38 = (EIF_NATURAL_32) tu4_1;
			}
		}
		RTHOOK(156);
		RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
		loc21 = (EIF_INTEGER_32) loc20;
		RTHOOK(157);
		RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
		ur1 = loc1;
		ui4_1 = loc2;
		ui4_2 = loc21;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc21 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(158);
		tb2 = '\0';
		tb3 = '\0';
		ui4_1 = loc14;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc13))(loc13, ui4_1x)).it_n4);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		tu4_2 = eif_bit_and(tu4_1,uu4_1);
		if ((EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc35 + RTVA(5577, "count", loc35));
			tb3 = (EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L));
		}
		if (tb3) {
			tb2 = (EIF_BOOLEAN)(loc21 != ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			RTHOOK(159);
			RTDBGAL(15, 0xF800026B, 0, 0); /* loc15 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg4))(arg4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc15 = (EIF_REFERENCE) tr1;
			RTHOOK(160);
			ur1 = loc1;
			ui4_1 = loc2;
			ur2 = loc15;
			ui4_2 = loc16;
			ui4_3 = loc20;
			ur3 = loc1;
			ui4_4 = loc2;
			ui4_5 = loc21;
			ur4 = RTCCL(loc40);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ur4x);
			RTHOOK(161);
			RTDBGAL(38, 0x38000000, 1, 0); /* loc38 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc40))(loc40)).it_n4);
			loc38 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(162);
			RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
			loc21 = (EIF_INTEGER_32) loc20;
			RTHOOK(163);
			RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
			ur1 = loc1;
			ui4_1 = loc2;
			ui4_2 = loc21;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc21 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(164);
		ui4_1 = loc21;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(165);
		ui4_1 = loc21;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		RTHOOK(166);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = loc1;
		ui4_1 = loc2;
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = loc21;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(167);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(46);
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
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_NUMBER_THEORY}.powm_ui */
void F239_4296 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "powm_ui";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc17 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc19 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc21 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_n4
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	
	RTLI(17);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg4);
	RTLR(3,loc22);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc7);
	RTLR(7,loc18);
	RTLR(8,ur1);
	RTLR(9,ur2);
	RTLR(10,ur3);
	RTLR(11,loc9);
	RTLR(12,loc20);
	RTLR(13,loc3);
	RTLR(14,loc1);
	RTLR(15,loc5);
	RTLR(16,ur4);
	RTLIU(17);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_UINT32, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_UINT32, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_UINT32, &loc21);
	RTLU(SK_REF, &loc22);
	
	RTEAA(l_feature_name, 238, Current, 22, 4, 7255);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7255);
	RTCC(arg1, 238, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 238, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg4, 238, l_feature_name, 4, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(22, 0xF80001F0, 0, 0); /* loc22 */
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
	loc22 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg4))(arg4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(5577, "count", arg4));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc13 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc13 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		tr1 = RTLN(eif_new_type(136, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1429, "raise", tr1))(tr1);
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN)(arg3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc13 == ((EIF_INTEGER_32) 1L))) {
			ui4_1 = loc8;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc7))(loc7, ui4_1x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
		}
		ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN) !tb1);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
	} else {
		RTHOOK(9);
		RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc13) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc7))(loc7, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
		loc15 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc15 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(11);
			RTDBGAL(18, 0xF800026B, 0, 0); /* loc18 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc13;
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
			RTNHOOK(11,1);
			loc18 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			ur1 = loc18;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ur2 = loc7;
			ui4_2 = loc8;
			ui4_3 = loc13;
			ui4_4 = loc15;
			ur3 = RTCCL(loc22);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1054, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
			RTHOOK(13);
			RTDBGAL(19, 0x38000000, 1, 0); /* loc19 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
			loc19 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(14);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			loc7 = (EIF_REFERENCE) loc18;
		}
		RTHOOK(15);
		RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
		ti4_2 = eif_abs_int32 (ti4_1);
		loc14 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(16);
		RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(17);
		if ((EIF_BOOLEAN) (loc14 > loc13)) {
			RTHOOK(18);
			RTDBGAL(20, 0xF800026B, 0, 0); /* loc20 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc13;
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
			loc20 = (EIF_REFERENCE) tr1;
			RTHOOK(19);
			ur1 = loc20;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ur2 = loc9;
			ui4_2 = loc10;
			ui4_3 = loc14;
			ur3 = loc7;
			ui4_4 = loc8;
			ui4_5 = loc13;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3528, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
			RTHOOK(20);
			RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
			loc9 = (EIF_REFERENCE) loc20;
			RTHOOK(21);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			loc14 = (EIF_INTEGER_32) loc13;
			RTHOOK(22);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			ur1 = loc9;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ui4_2 = loc14;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc14 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(23);
		if ((EIF_BOOLEAN)(loc14 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(24);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		} else {
			RTHOOK(25);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc13) + ((EIF_INTEGER_32) 1L));
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
			RTNHOOK(25,1);
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(26);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc13;
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
			RTNHOOK(26,1);
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(27);
			RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = (EIF_INTEGER_32) (loc13 + ((EIF_INTEGER_32) 1L));
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
			RTNHOOK(27,1);
			loc5 = (EIF_REFERENCE) tr1;
			RTHOOK(28);
			ur1 = loc9;
			ui4_1 = loc10;
			ui4_2 = loc2;
			ui4_3 = loc14;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(29);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			loc11 = (EIF_INTEGER_32) loc14;
			RTHOOK(30);
			RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
			loc17 = (EIF_NATURAL_32) arg3;
			RTHOOK(31);
			RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
			uu4_1 = loc17;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
			loc16 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(32);
			RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
			ui4_1 = loc16;
			tu4_1 = eif_bit_shift_left(loc17,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
			loc17 = (EIF_NATURAL_32) tu4_2;
			RTHOOK(33);
			RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			loc16 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)) - loc16);
			RTHOOK(34);
			tb1 = '\0';
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc16 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc11 == loc13))) {
				ur1 = loc1;
				ui4_1 = loc2;
				ur2 = loc7;
				ui4_2 = loc8;
				ui4_3 = loc13;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1946, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x)).it_i4);
				tb1 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
			}
			if (tb1) {
				RTHOOK(35);
				ur1 = loc1;
				ui4_1 = loc2;
				ur2 = loc1;
				ui4_2 = loc2;
				ur3 = loc7;
				ui4_3 = loc8;
				ui4_4 = loc13;
				ur4 = RTCCL(loc22);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
				RTHOOK(36);
				RTDBGAL(19, 0x38000000, 1, 0); /* loc19 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
				loc19 = (EIF_NATURAL_32) tu4_1;
			} else {
				for (;;) {
					RTHOOK(37);
					if ((EIF_BOOLEAN)(loc16 == ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(38);
					ur1 = loc3;
					ui4_1 = loc4;
					ur2 = loc1;
					ui4_2 = loc2;
					ui4_3 = loc11;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1073, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
					RTHOOK(39);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc11);
					RTHOOK(40);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc12) - ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
					loc12 -= ti4_1;
					RTHOOK(41);
					if ((EIF_BOOLEAN) (loc12 < loc13)) {
						RTHOOK(42);
						ur1 = loc3;
						ui4_1 = loc4;
						ui4_2 = loc2;
						ui4_3 = loc12;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
						RTHOOK(43);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						loc11 = (EIF_INTEGER_32) loc12;
					} else {
						RTHOOK(44);
						ur1 = loc5;
						ui4_1 = loc6;
						ur2 = loc1;
						ui4_2 = loc2;
						ur3 = loc3;
						ui4_3 = loc4;
						ui4_4 = loc12;
						ur4 = loc7;
						ui4_5 = loc8;
						ui4_6 = loc13;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
						RTHOOK(45);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						loc11 = (EIF_INTEGER_32) loc13;
					}
					RTHOOK(46);
					ti4_1 = (EIF_INTEGER_32) loc17;
					if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
						RTHOOK(47);
						ur1 = loc3;
						ui4_1 = loc4;
						ur2 = loc1;
						ui4_2 = loc2;
						ui4_3 = loc11;
						ur3 = loc9;
						ui4_4 = loc10;
						ui4_5 = loc14;
						ur4 = RTCCL(loc22);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1065, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ur4x);
						RTHOOK(48);
						RTDBGAL(19, 0x38000000, 1, 0); /* loc19 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
						loc19 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(49);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc11 + loc14);
						RTHOOK(50);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc12) - ((EIF_INTEGER_32) 1L));
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
						ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
						loc12 -= ti4_1;
						RTHOOK(51);
						if ((EIF_BOOLEAN) (loc12 < loc13)) {
							RTHOOK(52);
							ur1 = loc3;
							ui4_1 = loc4;
							ui4_2 = loc2;
							ui4_3 = loc12;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
							RTHOOK(53);
							RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
							loc11 = (EIF_INTEGER_32) loc12;
						} else {
							RTHOOK(54);
							ur1 = loc5;
							ui4_1 = loc6;
							ur2 = loc1;
							ui4_2 = loc2;
							ur3 = loc3;
							ui4_3 = loc4;
							ui4_4 = loc12;
							ur4 = loc7;
							ui4_5 = loc8;
							ui4_6 = loc13;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
							RTHOOK(55);
							RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
							loc11 = (EIF_INTEGER_32) loc13;
						}
					}
					RTHOOK(56);
					RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tu4_1 = eif_bit_shift_left(loc17,ui4_1);
					loc17 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(57);
					RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
					loc16--;
				}
			}
			RTHOOK(58);
			if ((EIF_BOOLEAN)(loc15 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(59);
				ur1 = loc3;
				ui4_1 = loc4;
				ur2 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc11;
				ui4_4 = loc15;
				ur3 = RTCCL(loc22);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1054, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
				RTHOOK(60);
				RTDBGAL(21, 0x38000000, 1, 0); /* loc21 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
				loc21 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(61);
				uu4_1 = loc21;
				ui4_1 = (EIF_INTEGER_32) (loc4 + loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc3))(loc3, uu4_1x, ui4_1x);
				RTHOOK(62);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(loc21 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
				loc11 += ti4_1;
				RTHOOK(63);
				if ((EIF_BOOLEAN) (loc11 < loc13)) {
					RTHOOK(64);
					ur1 = loc3;
					ui4_1 = loc4;
					ui4_2 = loc2;
					ui4_3 = loc11;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
				} else {
					RTHOOK(65);
					ur1 = loc5;
					ui4_1 = loc6;
					ur2 = loc1;
					ui4_2 = loc2;
					ur3 = loc3;
					ui4_3 = loc4;
					ui4_4 = loc11;
					ur4 = loc7;
					ui4_5 = loc8;
					ui4_6 = loc13;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
					RTHOOK(66);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11 = (EIF_INTEGER_32) loc13;
				}
				RTHOOK(67);
				ur1 = loc1;
				ui4_1 = loc2;
				ur2 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc11;
				ui4_4 = loc15;
				ur3 = RTCCL(loc22);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1055, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
				RTHOOK(68);
				RTDBGAL(19, 0x38000000, 1, 0); /* loc19 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
				loc19 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(69);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			ur1 = loc1;
			ui4_1 = loc2;
			ui4_2 = loc11;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc11 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(70);
			tb1 = '\0';
			tb2 = '\0';
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tb3 = eif_bit_test(EIF_NATURAL_32,arg3,ui4_1);
			if (tb3) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
				tb2 = (EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L));
			}
			if (tb2) {
				tb1 = (EIF_BOOLEAN)(loc11 != ((EIF_INTEGER_32) 0L));
			}
			if (tb1) {
				RTHOOK(71);
				RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg4))(arg4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = (EIF_REFERENCE) tr1;
				RTHOOK(72);
				RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
				loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(73);
				ur1 = loc1;
				ui4_1 = loc2;
				ur2 = loc7;
				ui4_2 = loc8;
				ui4_3 = loc13;
				ur3 = loc1;
				ui4_4 = loc2;
				ui4_5 = loc11;
				ur4 = RTCCL(loc22);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ur4x);
				RTHOOK(74);
				RTDBGAL(19, 0x38000000, 1, 0); /* loc19 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
				loc19 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(75);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11 = (EIF_INTEGER_32) loc13;
				RTHOOK(76);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				ur1 = loc1;
				ui4_1 = loc2;
				ui4_2 = loc11;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
				loc11 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(77);
			ui4_1 = loc11;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(78);
			ui4_1 = loc11;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			RTHOOK(79);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = loc1;
			ui4_1 = loc2;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc11;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(80);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(28);
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
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_NUMBER_THEORY}.probab_prime_isprime */
EIF_TYPED_VALUE F239_4297 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "probab_prime_isprime";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	
	RTEAA(l_feature_name, 238, Current, 3, 1, 7256);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7256);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\01';
	if (!((EIF_BOOLEAN) (arg1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L)))) {
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tb2 = eif_bit_test(EIF_NATURAL_32,arg1,ui4_1);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L));
	} else {
		RTHOOK(3);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L);
		RTHOOK(4);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (Result || (EIF_BOOLEAN)(loc2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(6);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) (arg1 / loc3);
			RTHOOK(7);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) (arg1 - (EIF_NATURAL_32) (loc1 * loc3));
			RTHOOK(8);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < loc3);
			RTHOOK(9);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			loc3 += (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {INTEGER_X_NUMBER_THEORY}.probab_prime_p */
EIF_TYPED_VALUE F239_4298 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "probab_prime_p";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc10 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,loc8);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc9);
	RTLR(5,loc11);
	RTLR(6,loc4);
	RTLR(7,loc2);
	RTLR(8,ur1);
	RTLR(9,ur2);
	RTLIU(10);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_UINT32, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_INT32, &loc12);
	
	RTEAA(l_feature_name, 238, Current, 12, 2, 7257);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7257);
	RTCC(arg1, 238, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(8, 0xF80001F0, 0, 0); /* loc8 */
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
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(9, 0xF80001F0, 0, 0); /* loc9 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(2,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(11, 0xF800026B, 0, 0); /* loc11 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 15L);
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
	RTNHOOK(3,1);
	loc11 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(4, 0xF8000147, 0, 0); /* loc4 */
	loc4 = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(5);
	RTDBGAL(2, 0xF8000148, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(loc4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1000000L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3460, dtype))(Current, ur1x, uu4_1x)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ur1 = RTCCL(loc4);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1000000L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3462, dtype))(Current, ur1x, uu4_1x)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5514, "as_natural_32", loc4))(loc4)).it_n4);
			uu4_1 = tu4_1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3523, dtype))(Current, uu4_1x)).it_b);
			loc3 = (EIF_BOOLEAN) tb1;
			RTHOOK(9);
			if (loc3) {
				RTHOOK(10);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(11);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(12);
			RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5576, "item_set", loc2))(loc2, ur1x);
			RTHOOK(14);
			ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(5577, "count", loc4));
			ui4_1 = (EIF_INTEGER_32) -ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", loc2))(loc2, ui4_1x);
			RTHOOK(15);
			RTDBGAL(4, 0xF8000147, 0, 0); /* loc4 */
			loc4 = (EIF_REFERENCE) RTCCL(loc2);
		}
	}
	RTHOOK(16);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !loc5) {
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5514, "as_natural_32", loc4))(loc4)).it_n4);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tb2 = eif_bit_test(EIF_NATURAL_32,tu4_1,ui4_1);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(17);
		RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
		loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(18);
	if ((EIF_BOOLEAN) !loc5) {
		RTHOOK(19);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr1;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(5577, "count", loc4));
		ui4_2 = ti4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3525, dtype))(Current)).it_n4);
		uu4_1 = tu4_1;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3526, dtype))(Current)).it_n4);
		uu4_2 = tu4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3436, dtype))(Current, ur1x, ui4_1x, ui4_2x, uu4_1x, uu4_2x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(20);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L)) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L)) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L)) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 11L)) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 13L)) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L)) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 19L)) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 23L)) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 29L)) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(21);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(22);
			RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(23);
	if ((EIF_BOOLEAN) !loc5) {
		RTHOOK(24);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(25);
		RTDBGAL(10, 0x38000000, 1, 0); /* loc10 */
		loc10 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(26);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		ur1 = RTCCL(loc4);
		ui4_1 = ((EIF_INTEGER_32) 2L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3443, dtype))(Current, ur1x, ui4_1x)).it_i4);
		RTNHOOK(26,1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		loc6 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(27);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3527, dtype))(Current)).it_i4);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		loc7 = (EIF_NATURAL_32) tu4_1;
		for (;;) {
			RTHOOK(28);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc7 >= loc6) || loc5)) break;
			RTHOOK(29);
			uu4_1 = loc7;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3523, dtype))(Current, uu4_1x)).it_b);
			if (tb1) {
				RTHOOK(30);
				ur1 = RTCCL(loc8);
				ur2 = RTCCL(loc9);
				uu4_1 = loc10;
				uu4_2 = loc7;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
				RTHOOK(31);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(32);
					RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = tr1;
					ui4_1 = ((EIF_INTEGER_32) 0L);
					ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(5577, "count", loc4));
					ui4_2 = ti4_1;
					uu4_1 = loc10;
					uu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3435, dtype))(Current, ur1x, ui4_1x, ui4_2x, uu4_1x, uu4_2x)).it_n4);
					loc1 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(33);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					loc12--;
					for (;;) {
						RTHOOK(34);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc12 < ((EIF_INTEGER_32) 0L)) || loc5)) break;
						RTHOOK(35);
						ui4_1 = loc12;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc11))(loc11, ui4_1x)).it_n4);
						if ((EIF_BOOLEAN)((EIF_NATURAL_32) (loc1 % tu4_1) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
							RTHOOK(36);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							RTHOOK(37);
							RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
							loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
						RTHOOK(38);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						loc12--;
					}
					RTHOOK(39);
					RTDBGAL(10, 0x38000000, 1, 0); /* loc10 */
					loc10 = (EIF_NATURAL_32) loc7;
					RTHOOK(40);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					loc12 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				} else {
					RTHOOK(41);
					RTDBGAL(10, 0x38000000, 1, 0); /* loc10 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc9))(loc9)).it_n4);
					loc10 = (EIF_NATURAL_32) tu4_1;
				}
				RTHOOK(42);
				uu4_1 = loc7;
				ui4_1 = loc12;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc11))(loc11, uu4_1x, ui4_1x);
				RTHOOK(43);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				loc12++;
			}
			RTHOOK(44);
			RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
			loc7 += (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L);
		}
	}
	RTHOOK(45);
	if ((EIF_BOOLEAN) !loc5) {
		RTHOOK(46);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ur1 = RTCCL(loc4);
		ui4_1 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3520, dtype))(Current, ur1x, ui4_1x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(47);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef uu4_2
#undef arg2
#undef arg1
}

/* {INTEGER_X_NUMBER_THEORY}.pp */
EIF_TYPED_VALUE F239_4299 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 3234846615U);
	return r;
}

/* {INTEGER_X_NUMBER_THEORY}.pp_inverted */
EIF_TYPED_VALUE F239_4300 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1407542364U);
	return r;
}

/* {INTEGER_X_NUMBER_THEORY}.pp_first_omitted */
EIF_TYPED_VALUE F239_4301 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	return r;
}

/* {INTEGER_X_NUMBER_THEORY}.reduce */
void F239_4302 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "reduce";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,loc1);
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
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 238, Current, 1, 8, 7261);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7261);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 238, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 238, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 238, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 - arg8) + ((EIF_INTEGER_32) 1L));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	ur1 = loc1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ur2 = arg1;
	ui4_2 = arg2;
	ur3 = arg3;
	ui4_3 = arg4;
	ui4_4 = arg5;
	ur4 = arg6;
	ui4_5 = arg7;
	ui4_6 = arg8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
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
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_NUMBER_THEORY}.muldiv */
void F239_4303 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "muldiv";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
#define arg5 arg5x.it_r
#define arg6 arg6x.it_r
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg4);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,loc2);
	RTLR(6,Current);
	RTLR(7,tr1);
	RTLR(8,ur1);
	RTLR(9,tr2);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 238, Current, 2, 6, 7262);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7262);
	RTCC(arg1, 238, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,601,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 238, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,601,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 238, l_feature_name, 4, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg5, 238, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 238, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF80001F0, 0, 0); /* loc2 */
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
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg3))(arg3)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg4))(arg4)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg4))(arg4)).it_i4);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + arg2);
		RTHOOK(4);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(5);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg4))(arg4, ui4_1x);
	}
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = tr2;
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg3))(arg3)).it_i4);
	ui4_3 = ti4_1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg5))(arg5)).it_n4);
	uu4_1 = tu4_1;
	ur3 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
	uu4_1 = tu4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg3))(arg3)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = tr2;
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg3))(arg3)).it_i4);
	ui4_3 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg6))(arg6)).it_n4);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1951, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x);
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg3))(arg3)).it_i4);
	ui4_1 = ti4_1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
	if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg3))(arg3)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg3))(arg3, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
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

/* {INTEGER_X_NUMBER_THEORY}.invert_gf */
void F239_4304 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "invert_gf";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,tr2);
	RTLR(8,ur3);
	RTLR(9,Current);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 238, Current, 2, 3, 7263);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(238, Current, 7263);
	RTCC(arg1, 238, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 238, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 238, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not op1.is_negative", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5488, "is_negative", arg2))(arg2)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not op2.is_negative", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5488, "is_negative", arg3))(arg3)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(5577, "count", arg3));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	ur1 = loc1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	ui4_3 = ti4_1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = tr2;
	ui4_4 = ((EIF_INTEGER_32) 0L);
	ui4_5 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3439, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
	RTHOOK(7);
	ur1 = loc1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = loc2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
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
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit239 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
