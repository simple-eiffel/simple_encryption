/*
 * Code for class SIMPLE_ENCRYPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F27_651(EIF_REFERENCE);
extern EIF_TYPED_VALUE F27_652(EIF_REFERENCE);
extern void F27_653(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_654(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_655(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_656(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_657(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_658(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_659(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_660(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_661(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_662(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_7360(EIF_REFERENCE);
extern EIF_TYPED_VALUE F27_663(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_664(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_665(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_666(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_667(EIF_REFERENCE);
extern EIF_TYPED_VALUE F27_668(EIF_REFERENCE);
extern EIF_TYPED_VALUE F27_669(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F27_670(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F27_671(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_672(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_673(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F27_674(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit27(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"
#include "eif_misc.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_ENCRYPTION}.make */
void F27_651 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 26, Current, 0, 0, 737);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 737);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 652, 0x10000000, 1); /* pbkdf2_iterations */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(667, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(652, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SIMPLE_ENCRYPTION}.pbkdf2_iterations */
EIF_TYPED_VALUE F27_652 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(652,Dtype(Current)));
	return r;
}


/* {SIMPLE_ENCRYPTION}.set_pbkdf2_iterations */
void F27_653 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_pbkdf2_iterations";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 26, Current, 0, 1, 739);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 739);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 652, 0x10000000, 1); /* pbkdf2_iterations */
	*(EIF_INTEGER_32 *)(Current + RTWA(652, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(652, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.sha256 */
EIF_TYPED_VALUE F27_654 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sha256";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLR(6,loc2);
	RTLR(7,Result);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 26, Current, 3, 1, 740);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 740);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("data_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000144, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(324, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5388, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(670, dtype))(Current, ur1x, ur2x);
	RTHOOK(4);
	RTDBGAL(2, 0xF800014B, 0, 0); /* loc2 */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	ur1 = loc2;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5390, "do_final", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(6);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	ur1 = loc2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(665, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("result_length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4930, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 64L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.sha256_bytes */
EIF_TYPED_VALUE F27_655 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sha256_bytes";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 26, Current, 1, 1, 741);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 741);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("data_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000144, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(324, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5388, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(670, dtype))(Current, ur1x, ur2x);
	RTHOOK(4);
	RTDBGAL(0, 0xF800014B, 0,0); /* Result */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5390, "do_final", loc1))(loc1, ur1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("result_length", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 32L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.hmac_sha256 */
EIF_TYPED_VALUE F27_656 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "hmac_sha256";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLR(7,loc2);
	RTLR(8,tr2);
	RTLR(9,Result);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 26, Current, 2, 2, 742);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 742);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTCC(arg2, 26, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("data_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF800001F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(31, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(697, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(671, dtype))(Current, ur1x, ur2x);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(698, "finish", loc1))(loc1);
	RTHOOK(6);
	RTDBGAL(2, 0xF800014B, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(700, "hmac", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5528, "as_bytes", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(7);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	ur1 = loc2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(665, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4930, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 64L))) {
			RTCK;
		} else {
			RTCF;
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.hmac_sha256_bytes */
EIF_TYPED_VALUE F27_657 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "hmac_sha256_bytes";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLR(7,tr2);
	RTLR(8,Result);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 26, Current, 1, 2, 743);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 743);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTCC(arg2, 26, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("data_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF800001F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(31, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(697, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(671, dtype))(Current, ur1x, ur2x);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(698, "finish", loc1))(loc1);
	RTHOOK(6);
	RTDBGAL(0, 0xF800014B, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(700, "hmac", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5528, "as_bytes", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.hash_password */
EIF_TYPED_VALUE F27_658 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hash_password";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,tr2);
	RTLR(8,Result);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 26, Current, 2, 1, 744);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 744);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("password_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4785, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF800012F, 0, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(663, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF800012F, 0, 0); /* loc2 */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(666, dtype))(Current, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(652, dtype));
	ui4_1 = ti4_1;
	ui4_2 = ((EIF_INTEGER_32) 32L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(660, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	tr1 = RTMS_EX_H("$",1,36);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4920, "plus", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(652, dtype));
	tr2 = eif_out__i4_s1(ti4_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4920, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("$",1,36);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4920, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(loc2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4920, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("has_salt", EX_POST);
		uc1 = (EIF_CHARACTER_8) '$';
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", Result))(Result, uc1x)).it_b);
		if (tb1) {
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
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.verify_password */
EIF_TYPED_VALUE F27_659 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "verify_password";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLR(9,Current);
	RTLIU(10);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 26, Current, 5, 2, 745);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 745);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTCC(arg2, 26, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("password_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4785, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("hash_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4785, "is_empty", arg2))(arg2)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000189, 0, 0); /* loc1 */
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '$';
	uw1 = tw1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4846, "split", arg2))(arg2, uw1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3099, "count", loc1))(loc1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
		RTHOOK(5);
		RTDBGAL(2, 0xF800012F, 0, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3053, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3053, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4799, "is_integer", tr1))(tr1)).it_b);
		if (tb1) {
			RTHOOK(7);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3053, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4833, "to_integer", tr1))(tr1)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			RTDBGAL(4, 0xF800012F, 0, 0); /* loc4 */
			ui4_1 = ((EIF_INTEGER_32) 3L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3053, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			RTDBGAL(5, 0xF800012F, 0, 0); /* loc5 */
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(loc2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(666, dtype))(Current, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = tr1;
			ui4_1 = loc3;
			ui4_2 = ((EIF_INTEGER_32) 32L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(660, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(10);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			ur1 = RTCCL(loc4);
			ur2 = RTCCL(loc5);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(674, dtype))(Current, ur1x, ur2x)).it_b);
			Result = (EIF_BOOLEAN) tb1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uw1
#undef arg2
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.pbkdf2_sha256 */
EIF_TYPED_VALUE F27_660 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "pbkdf2_sha256";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,Result);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 26, Current, 1, 4, 746);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 746);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 26, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("password_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4785, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("salt_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("iterations_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("key_length_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(1, 0xF800014B, 0, 0); /* loc1 */
	ur1 = RTCCL(arg1);
	ur2 = arg2;
	ui4_1 = arg3;
	ui4_2 = arg4;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(661, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	ur1 = loc1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(665, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("result_length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4930, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (arg4 * ((EIF_INTEGER_32) 2L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.pbkdf2_sha256_bytes */
EIF_TYPED_VALUE F27_661 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "pbkdf2_sha256_bytes";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc9);
	RTLR(6,ur1);
	RTLR(7,loc8);
	RTLR(8,ur2);
	RTLR(9,loc7);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 26, Current, 9, 4, 747);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 747);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg2, 26, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("password_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4785, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("salt_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("iterations_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("key_length_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(0, 0xF800014B, 0,0); /* Result */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = arg4;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(5,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 31L)) / ((EIF_INTEGER_32) 32L));
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc2 > loc1)) break;
		RTHOOK(9);
		RTDBGAL(9, 0xF800014B, 0, 0); /* loc9 */
		uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg2))(arg2)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 4L));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			if (ui4_1< 0) {
				eraise ("non_negative_argument", EN_RT_CHECK);
			}
			tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
		RTNHOOK(9,1);
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		ur1 = arg2;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg2))(arg2)).it_i4);
		ui4_3 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc9))(loc9, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(11);
		ui4_1 = ((EIF_INTEGER_32) 24L);
		ti4_1 = eif_bit_shift_right(loc2,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_2 = eif_bit_and(ti4_1,ui4_1);
		tu1_1 = (EIF_NATURAL_8) ti4_2;
		uu1_1 = tu1_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg2))(arg2)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc9))(loc9, uu1_1x, ui4_1x);
		RTHOOK(12);
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_1 = eif_bit_shift_right(loc2,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_2 = eif_bit_and(ti4_1,ui4_1);
		tu1_1 = (EIF_NATURAL_8) ti4_2;
		uu1_1 = tu1_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg2))(arg2)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc9))(loc9, uu1_1x, ui4_1x);
		RTHOOK(13);
		ui4_1 = ((EIF_INTEGER_32) 8L);
		ti4_1 = eif_bit_shift_right(loc2,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_2 = eif_bit_and(ti4_1,ui4_1);
		tu1_1 = (EIF_NATURAL_8) ti4_2;
		uu1_1 = tu1_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg2))(arg2)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc9))(loc9, uu1_1x, ui4_1x);
		RTHOOK(14);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_1 = eif_bit_and(loc2,ui4_1);
		tu1_1 = (EIF_NATURAL_8) ti4_1;
		uu1_1 = tu1_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg2))(arg2)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc9))(loc9, uu1_1x, ui4_1x);
		RTHOOK(15);
		RTDBGAL(8, 0xF800014B, 0, 0); /* loc8 */
		ur1 = RTCCL(arg1);
		ur2 = loc9;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(672, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc8 = (EIF_REFERENCE) tr1;
		RTHOOK(16);
		RTDBGAL(7, 0xF800014B, 0, 0); /* loc7 */
		uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		ui4_1 = ((EIF_INTEGER_32) 32L);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			if (ui4_1< 0) {
				eraise ("non_negative_argument", EN_RT_CHECK);
			}
			tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
		RTNHOOK(16,1);
		loc7 = (EIF_REFERENCE) tr1;
		RTHOOK(17);
		ur1 = loc8;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", loc8))(loc8)).it_i4);
		ui4_3 = ((EIF_INTEGER_32) 32L);
		ti4_2 = eif_min_int32 (ti4_1,ui4_3);
		ui4_3 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(18);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		for (;;) {
			RTHOOK(19);
			if ((EIF_BOOLEAN) (loc3 > arg3)) break;
			RTHOOK(20);
			RTDBGAL(8, 0xF800014B, 0, 0); /* loc8 */
			ur1 = RTCCL(arg1);
			ur2 = loc8;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(672, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc8 = (EIF_REFERENCE) tr1;
			RTHOOK(21);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				RTHOOK(22);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", loc8))(loc8)).it_i4);
				ui4_1 = ((EIF_INTEGER_32) 32L);
				ti4_2 = eif_min_int32 (ti4_1,ui4_1);
				if ((EIF_BOOLEAN) (loc4 >= ti4_2)) break;
				RTHOOK(23);
				ui4_1 = loc4;
				tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc7))(loc7, ui4_1x)).it_n1);
				ui4_1 = loc4;
				tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc8))(loc8, ui4_1x)).it_n1);
				uu1_1 = tu1_2;
				tu1_3 = eif_bit_xor(tu1_1,uu1_1);
				uu1_1 = tu1_3;
				ui4_1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu1_1x, ui4_1x);
				RTHOOK(24);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4++;
			}
			RTHOOK(25);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(26);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 32L));
		RTHOOK(27);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		ui4_1 = ((EIF_INTEGER_32) 32L);
		ti4_1 = eif_min_int32 ((EIF_INTEGER_32) (arg4 - loc6),ui4_1);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(28);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(29);
			if ((EIF_BOOLEAN) (loc4 >= loc5)) break;
			RTHOOK(30);
			ui4_1 = loc4;
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc7))(loc7, ui4_1x)).it_n1);
			uu1_1 = tu1_1;
			ui4_1 = (EIF_INTEGER_32) (loc6 + loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu1_1x, ui4_1x);
			RTHOOK(31);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
		RTHOOK(32);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(33);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(34);
		RTCT("result_length", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu1_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.random_bytes */
EIF_TYPED_VALUE F27_662 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "random_bytes";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 26, Current, 3, 1, 748);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 748);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("count_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF800014B, 0,0); /* Result */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = arg1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(319, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5287, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1101, "fine_second", tr1))(tr1)).it_r8);
	ti4_1 = (EIF_INTEGER_32) tr8_1;
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5584, dtype));
	ui4_1 = ti4_1;
	ti4_2 = eif_bit_xor(loc3,ui4_1);
	loc3 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5584, 0x10000000, 1); /* random_counter */
	(*(EIF_INTEGER_32 *)(Current + RTWA(5584, dtype)))++;
	RTHOOK(6);
	RTDBGAL(1, 0xF80000D6, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(214, 0x01).id);
	ui4_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3073, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(6,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 10L))) break;
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2907, "forth", loc1))(loc1);
		RTHOOK(10);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(11);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(12);
		if ((EIF_BOOLEAN) (loc2 >= arg1)) break;
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2907, "forth", loc1))(loc1);
		RTHOOK(14);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2905, "item", loc1))(loc1)).it_i4);
		tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 256L));
		uu1_1 = tu1_1;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu1_1x, ui4_1x);
		RTHOOK(15);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("result_length", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.random_counter */
EIF_TYPED_VALUE F27_7360 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5584,Dtype(Current)));
	return r;
}


/* {SIMPLE_ENCRYPTION}.random_hex */
EIF_TYPED_VALUE F27_663 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "random_hex";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 26, Current, 0, 1, 749);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 749);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("count_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	ui4_1 = arg1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(662, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(665, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4930, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 2L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.random_token */
EIF_TYPED_VALUE F27_664 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "random_token";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 26, Current, 3, 1, 750);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 750);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("length_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF800014B, 0, 0); /* loc1 */
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 3L)) + ((EIF_INTEGER_32) 3L)) / ((EIF_INTEGER_32) 4L));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(662, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(2, 0xF8000011, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(323, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	ur1 = loc1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(673, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(324, "encode", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTMS_EX_H("+",1,43);
	ur1 = tr1;
	tr2 = RTMS_EX_H("-",1,45);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4943, "replace_substring_all", Result))(Result, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("/",1,47);
	ur1 = tr1;
	tr2 = RTMS_EX_H("_",1,95);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4943, "replace_substring_all", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("=",1,61);
	ur1 = tr1;
	tr2 = RTMS_EX_H("",0,0);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4943, "replace_substring_all", Result))(Result, ur1x, ur2x);
	RTHOOK(8);
	ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4930, "count", Result));
	if ((EIF_BOOLEAN) (ti4_1 > arg1)) {
		RTHOOK(9);
		RTDBGAL(0, 0xF800012F, 0,0); /* Result */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4848, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("result_length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4930, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.bytes_to_hex */
EIF_TYPED_VALUE F27_665 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bytes_to_hex";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT8, &loc2);
	
	RTEAA(l_feature_name, 26, Current, 2, 1, 751);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 751);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 26, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("bytes_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(303, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg1))(arg1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4768, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (loc1 >= ti4_1)) break;
		RTHOOK(5);
		RTDBGAL(2, 0x30000000, 1, 0); /* loc2 */
		ui4_1 = loc1;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		loc2 = (EIF_NATURAL_8) tu1_1;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(668, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ui4_1 = ((EIF_INTEGER_32) 4L);
		tu1_1 = eif_bit_shift_right(loc2,ui4_1);
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_c1);
		tr1 = eif_out__c1_s1(tc1);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4954, "append", Result))(Result, ur1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(668, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 15L);
		tu1_1 = eif_bit_and(loc2,uu1_1);
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_c1);
		tr1 = eif_out__c1_s1(tc1);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4954, "append", Result))(Result, ur1x);
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("result_length", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVA(4930, "count", Result));
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_3 * ((EIF_INTEGER_32) 2L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.hex_to_bytes */
EIF_TYPED_VALUE F27_666 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hex_to_bytes";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 26, Current, 3, 1, 752);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 752);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("hex_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("even_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4930, "count", arg1));
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF800014B, 0,0); /* Result */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4930, "count", arg1));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4930, "count", arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(6);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_c1);
		uc1 = tc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(669, dtype))(Current, uc1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(7);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_c1);
		uc1 = tc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(669, dtype))(Current, uc1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(8);
		ui4_1 = ((EIF_INTEGER_32) 4L);
		ti4_2 = eif_bit_shift_left(loc2,ui4_1);
		tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_2 + loc3);
		uu1_1 = tu1_1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu1_1x, ui4_1x);
		RTHOOK(9);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("result_length", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", Result))(Result)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4930, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_3 / ((EIF_INTEGER_32) 2L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu1_1
#undef uc1
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.default_pbkdf2_iterations */
EIF_TYPED_VALUE F27_667 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 600000L);
	return r;
}

/* {SIMPLE_ENCRYPTION}.hex_chars */
RTOID (F27_668)


EIF_TYPED_VALUE F27_668 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F27_668,755,RTMS_EX_H("0123456789abcdef",16,1921832806));
}

/* {SIMPLE_ENCRYPTION}.hex_value */
EIF_TYPED_VALUE F27_669 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hex_value";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 26, Current, 0, 1, 755);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 755);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (EIF_INTEGER_32) (arg1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 10L));
		} else {
			RTHOOK(5);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
				RTHOOK(6);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ti4_1 = (EIF_INTEGER_32) (arg1);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 10L));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.feed_string_to_sha256 */
void F27_670 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "feed_string_to_sha256";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 26, Current, 0, 2, 756);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 756);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(324, 0x01), 0x01);
	RTCC(arg2, 26, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4785, "is_empty", arg2))(arg2)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(694, "sink_string", arg1))(arg1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef arg2
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.feed_string_to_hmac */
void F27_671 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "feed_string_to_hmac";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 26, Current, 1, 2, 757);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 757);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(31, 0x01), 0x01);
	RTCC(arg2, 26, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(4930, "count", arg2));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(3);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_c1);
		ti4_2 = (EIF_INTEGER_32) (tc1);
		tu1_1 = (EIF_NATURAL_8) ti4_2;
		uu1_1 = tu1_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(695, "byte_sink", arg1))(arg1, uu1_1x);
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ui4_1
#undef uu1_1
#undef arg2
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.hmac_sha256_bytes_special */
EIF_TYPED_VALUE F27_672 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "hmac_sha256_bytes_special";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 26, Current, 2, 2, 758);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 758);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 26, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800001F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(31, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(697, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg2))(arg2)).it_i4);
		if ((EIF_BOOLEAN) (loc2 >= ti4_1)) break;
		RTHOOK(4);
		ui4_1 = loc2;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		uu1_1 = tu1_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(695, "byte_sink", loc1))(loc1, uu1_1x);
		RTHOOK(5);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(698, "finish", loc1))(loc1);
	RTHOOK(7);
	RTDBGAL(0, 0xF800014B, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(700, "hmac", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5528, "as_bytes", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uu1_1
#undef arg2
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.bytes_to_string */
EIF_TYPED_VALUE F27_673 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bytes_to_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 26, Current, 1, 1, 759);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 759);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 26, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(303, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4768, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (loc1 >= ti4_1)) break;
		RTHOOK(4);
		ui4_1 = loc1;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		tc1 = (EIF_CHARACTER_8) tu1_1;
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4958, "append_character", Result))(Result, uc1x);
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uc1
#undef arg1
}

/* {SIMPLE_ENCRYPTION}.constant_time_compare */
EIF_TYPED_VALUE F27_674 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "constant_time_compare";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 26, Current, 2, 2, 760);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(26, Current, 760);
	RTCC(arg1, 26, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTCC(arg2, 26, l_feature_name, 2, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4930, "count", arg1));
	ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(4930, "count", arg2));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(2);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4930, "count", arg1));
			if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
			RTHOOK(5);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_c1);
			ti4_2 = (EIF_INTEGER_32) (tc1);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_c1);
			ti4_3 = (EIF_INTEGER_32) (tc1);
			ui4_1 = ti4_3;
			ti4_4 = eif_bit_xor(ti4_2,ui4_1);
			ui4_1 = ti4_4;
			ti4_2 = eif_bit_or(loc2,ui4_1);
			loc2 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(6);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
		RTHOOK(7);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg2
#undef arg1
}

void EIF_Minit27 (void)
{
	GTCX
	RTOTS (668,F27_668)
}


#ifdef __cplusplus
}
#endif
