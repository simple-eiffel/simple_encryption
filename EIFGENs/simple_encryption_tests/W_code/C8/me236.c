/*
 * Code for class MERSENNE_TWISTER_RNG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F236_4261(EIF_REFERENCE);
extern void F236_4262(EIF_REFERENCE);
extern void F236_4263(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F236_4264(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F236_4265(EIF_REFERENCE);
extern void F236_4266(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F236_4267(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F236_4268(EIF_REFERENCE);
extern EIF_TYPED_VALUE F236_4269(EIF_REFERENCE);
extern EIF_TYPED_VALUE F236_4270(EIF_REFERENCE);
extern EIF_TYPED_VALUE F236_4271(EIF_REFERENCE);
extern EIF_TYPED_VALUE F236_4272(EIF_REFERENCE);
extern EIF_TYPED_VALUE F236_4273(EIF_REFERENCE);
extern EIF_TYPED_VALUE F236_4274(EIF_REFERENCE);
extern EIF_TYPED_VALUE F236_4275(EIF_REFERENCE);
extern EIF_TYPED_VALUE F236_4276(EIF_REFERENCE);
extern EIF_TYPED_VALUE F236_4277(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit236(void);

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

/* {MERSENNE_TWISTER_RNG}.make */
void F236_4261 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 235, Current, 0, 0, 7220);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(235, Current, 7220);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3497, 0xF800026B, 0); /* mt */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(3497, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3497, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3492, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef uu4_1
}

/* {MERSENNE_TWISTER_RNG}.randinit_mt_noseed */
void F236_4262 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "randinit_mt_noseed";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 235, Current, 1, 0, 7221);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(235, Current, 7221);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (loc1 >= ti4_1)) break;
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3505, dtype))(Current, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3496, 0x10000000, 1); /* mti */
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3501, dtype))(Current)).it_i4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3496, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 % ti4_3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
}

/* {MERSENNE_TWISTER_RNG}.mangle_seed */
void F236_4263 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "mangle_seed";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,Current);
	RTLR(8,ur3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_BOOL, &loc6);
	
	RTEAA(l_feature_name, 235, Current, 6, 2, 7222);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(235, Current, 7222);
	RTCC(arg1, 235, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 235, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1074888996L);
	RTHOOK(2);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 536870912L);
	RTHOOK(3);
	RTDBGAL(1, 0xF8000148, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(2, 0xF8000148, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5452, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18, "copy", arg1))(arg1, ur1x);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc4 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(7);
		RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
		loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) !loc6) break;
			RTHOOK(9);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(11);
				ur1 = RTCCL(loc1);
				ur2 = RTCCL(arg1);
				ui4_1 = ((EIF_INTEGER_32) 104759L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3487, dtype))(Current, ur1x, ur2x, ui4_1x);
				RTHOOK(12);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5489, "sign", loc1))(loc1)).it_i4);
				loc5 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(13);
				if ((EIF_BOOLEAN)(loc5 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(14);
					ur1 = RTCCL(arg1);
					ur2 = RTCCL(arg1);
					ui4_1 = ((EIF_INTEGER_32) 104759L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3490, dtype))(Current, ur1x, ur2x, ui4_1x);
					RTHOOK(15);
					ur1 = RTCCL(arg1);
					ur2 = RTCCL(arg1);
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 131107L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3473, dtype))(Current, ur1x, ur2x, uu4_1x);
				}
			}
			RTHOOK(16);
			uu4_1 = loc4;
			tu4_1 = eif_bit_and(loc3,uu4_1);
			if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				tu4_1 = eif_bit_not(loc4);
				uu4_1 = tu4_1;
				tu4_2 = eif_bit_and(loc3,uu4_1);
				loc3 = (EIF_NATURAL_32) tu4_2;
				RTHOOK(18);
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(arg1);
				ur3 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3476, dtype))(Current, ur1x, ur2x, ur3x);
			} else {
				RTHOOK(19);
				RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
		RTHOOK(20);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = eif_bit_shift_right(loc4,ui4_1);
		loc4 = (EIF_NATURAL_32) tu4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {MERSENNE_TWISTER_RNG}.randseed */
void F236_4264 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "randseed";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,ur2);
	RTLR(7,ur3);
	RTLR(8,tr2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 235, Current, 4, 1, 7223);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(235, Current, 7223);
	RTCC(arg1, 235, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF8000148, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5458, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(1,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(4, 0xF8000148, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc3);
	ui4_1 = ((EIF_INTEGER_32) 19937L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3454, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(4);
	ur1 = RTCCL(loc3);
	ur2 = RTCCL(loc3);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 20027L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3470, dtype))(Current, ur1x, ur2x, uu4_1x);
	RTHOOK(5);
	ur1 = RTCCL(loc4);
	ur2 = RTCCL(arg1);
	ur3 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3485, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(6);
	ur1 = RTCCL(loc4);
	ur2 = RTCCL(loc4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3466, dtype))(Current, ur1x, ur2x, uu4_1x);
	RTHOOK(7);
	ur1 = RTCCL(loc4);
	ur2 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3493, dtype))(Current, ur1x, ur2x);
	RTHOOK(8);
	ur1 = RTCCL(loc4);
	ui4_1 = ((EIF_INTEGER_32) 19936L);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3455, dtype))(Current, ur1x, ui4_1x)).it_b);
	if (tb1) {
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2147483648));
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
	} else {
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
	}
	RTHOOK(11);
	ur1 = RTCCL(loc4);
	ui4_1 = ((EIF_INTEGER_32) 19936L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3448, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(12);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(12,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc4))(loc4)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(5577, "count", loc4));
	ui4_3 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(13);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2++;
	for (;;) {
		RTHOOK(14);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (loc2 >= ti4_1)) break;
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(15,1);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
		RTHOOK(16);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(17);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3501, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_2 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(18);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(19);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3501, dtype))(Current)).it_i4);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (loc1 >= (EIF_INTEGER_32) (ti4_2 / ti4_3))) break;
			RTHOOK(20);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3494, dtype))(Current);
			RTHOOK(21);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTHOOK(22);
	RTDBGAA(Current, dtype, 3496, 0x10000000, 1); /* mti */
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3501, dtype))(Current)).it_i4);
	ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3496, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_4 % ti4_5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg1
}

/* {MERSENNE_TWISTER_RNG}.recalc_buffer */
void F236_4265 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "recalc_buffer";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 235, Current, 2, 0, 7224);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(235, Current, 7224);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3499, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (loc2 >= (EIF_INTEGER_32) (ti4_1 - ti4_2))) break;
		RTHOOK(3);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ui4_1 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2147483648));
		tu4_2 = eif_bit_and(tu4_1,uu4_1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,2);
		ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2147483647L);
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		uu4_1 = tu4_3;
		tu4_1 = eif_bit_or(tu4_2,uu4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(4);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tb1 = eif_bit_test(EIF_NATURAL_32,loc1,ui4_1);
		if (tb1) {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(5,2);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3499, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (loc2 + ti4_3);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = eif_bit_shift_right(loc1,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_xor(tu4_1,uu4_1);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3500, dtype))(Current)).it_n4);
			uu4_1 = tu4_1;
			tu4_2 = eif_bit_xor(tu4_3,uu4_1);
			uu4_1 = tu4_2;
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
		} else {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(6,2);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3499, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (loc2 + ti4_3);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = eif_bit_shift_right(loc1,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_xor(tu4_1,uu4_1);
			uu4_1 = tu4_3;
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
		}
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	for (;;) {
		RTHOOK(8);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (loc2 >= (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)))) break;
		RTHOOK(9);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ui4_1 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2147483648));
		tu4_2 = eif_bit_and(tu4_1,uu4_1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,2);
		ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2147483647L);
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		uu4_1 = tu4_3;
		tu4_1 = eif_bit_or(tu4_2,uu4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tb1 = eif_bit_test(EIF_NATURAL_32,loc1,ui4_1);
		if (tb1) {
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(11,2);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
			ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3499, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (loc2 - (EIF_INTEGER_32) (ti4_4 - ti4_5));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = eif_bit_shift_right(loc1,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_xor(tu4_1,uu4_1);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3500, dtype))(Current)).it_n4);
			uu4_1 = tu4_1;
			tu4_2 = eif_bit_xor(tu4_3,uu4_1);
			uu4_1 = tu4_2;
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
		} else {
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(12,2);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
			ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3499, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (loc2 - (EIF_INTEGER_32) (ti4_4 - ti4_5));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = eif_bit_shift_right(loc1,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_xor(tu4_1,uu4_1);
			uu4_1 = tu4_3;
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
		}
		RTHOOK(13);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(14);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(14,1);
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2147483648));
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(14,2);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2147483647L);
	tu4_3 = eif_bit_and(tu4_1,uu4_1);
	uu4_1 = tu4_3;
	tu4_1 = eif_bit_or(tu4_2,uu4_1);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(15);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tb1 = eif_bit_test(EIF_NATURAL_32,loc1,ui4_1);
	if (tb1) {
		RTHOOK(16);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(16,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(16,2);
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3499, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_2 = eif_bit_shift_right(loc1,ui4_1);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_xor(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3500, dtype))(Current)).it_n4);
		uu4_1 = tu4_1;
		tu4_2 = eif_bit_xor(tu4_3,uu4_1);
		uu4_1 = tu4_2;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
	} else {
		RTHOOK(17);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(17,2);
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3499, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_2 = eif_bit_shift_right(loc1,ui4_1);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_xor(tu4_1,uu4_1);
		uu4_1 = tu4_3;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef uu4_1
}

/* {MERSENNE_TWISTER_RNG}.next_random */
void F236_4266 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "next_random";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 235, Current, 0, 1, 7225);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(235, Current, 7225);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 235, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3496, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3498, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3494, dtype))(Current);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 3496, 0x10000000, 1); /* mti */
		*(EIF_INTEGER_32 *)(Current + RTWA(3496, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3497, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3496, dtype));
	ui4_1 = ti4_1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg1))(arg1, uu4_1x);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3496, 0x10000000, 1); /* mti */
	(*(EIF_INTEGER_32 *)(Current + RTWA(3496, dtype)))++;
	RTHOOK(6);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg1))(arg1)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg1))(arg1)).it_n4);
	ui4_1 = ((EIF_INTEGER_32) 11L);
	tu4_3 = eif_bit_shift_right(tu4_2,ui4_1);
	uu4_1 = tu4_3;
	tu4_2 = eif_bit_xor(tu4_1,uu4_1);
	uu4_1 = tu4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg1))(arg1, uu4_1x);
	RTHOOK(7);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg1))(arg1)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg1))(arg1)).it_n4);
	ui4_1 = ((EIF_INTEGER_32) 7L);
	tu4_3 = eif_bit_shift_left(tu4_2,ui4_1);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3503, dtype))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_4 = eif_bit_and(tu4_3,uu4_1);
	uu4_1 = tu4_4;
	tu4_2 = eif_bit_xor(tu4_1,uu4_1);
	uu4_1 = tu4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg1))(arg1, uu4_1x);
	RTHOOK(8);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg1))(arg1)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg1))(arg1)).it_n4);
	ui4_1 = ((EIF_INTEGER_32) 15L);
	tu4_3 = eif_bit_shift_left(tu4_2,ui4_1);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3504, dtype))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_4 = eif_bit_and(tu4_3,uu4_1);
	uu4_1 = tu4_4;
	tu4_2 = eif_bit_xor(tu4_1,uu4_1);
	uu4_1 = tu4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg1))(arg1, uu4_1x);
	RTHOOK(9);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg1))(arg1)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg1))(arg1)).it_n4);
	ui4_1 = ((EIF_INTEGER_32) 18L);
	tu4_3 = eif_bit_shift_right(tu4_2,ui4_1);
	uu4_1 = tu4_3;
	tu4_2 = eif_bit_xor(tu4_1,uu4_1);
	uu4_1 = tu4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg1))(arg1, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {MERSENNE_TWISTER_RNG}.randget */
void F236_4267 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "randget";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 235, Current, 4, 3, 7226);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(235, Current, 7226);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 235, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("count = 0 or target.valid_index (target_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("count = 0 or target.valid_index (target_offset + bits_to_limbs (count) - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ti4_1) - ((EIF_INTEGER_32) 1L));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF80001F0, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 / ((EIF_INTEGER_32) 32L));
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 32L));
	RTHOOK(6);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc3 >= loc4)) break;
		RTHOOK(8);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3495, dtype))(Current, ur1x);
		RTHOOK(9);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc1))(loc1)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(10);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTHOOK(11);
	if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(12);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3495, dtype))(Current, ur1x);
		RTHOOK(13);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc1))(loc1)).it_n4);
		tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4294967295));
		ui4_1 = loc2;
		tu4_3 = eif_bit_shift_left(tu4_2,ui4_1);
		tu4_2 = eif_bit_not(tu4_3);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		uu4_1 = tu4_3;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("target [target_offset + bits_to_limbs (count) - 1] = 0 or else most_significant_one (target [target_offset + bits_to_limbs (count) - 1]) <= bits_top_limb (count)", EX_POST);
		tb1 = '\01';
		ui4_1 = arg3;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ti4_1) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		if (!((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
			ui4_1 = arg3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ti4_1) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1026, dtype))(Current, uu4_1x)).it_i4);
			ui4_1 = arg3;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1047, dtype))(Current, ui4_1x)).it_i4);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
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
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {MERSENNE_TWISTER_RNG}.mti */
EIF_TYPED_VALUE F236_4268 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3496,Dtype(Current)));
	return r;
}


/* {MERSENNE_TWISTER_RNG}.mt */
EIF_TYPED_VALUE F236_4269 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3497,Dtype(Current)));
	return r;
}


/* {MERSENNE_TWISTER_RNG}.n */
EIF_TYPED_VALUE F236_4270 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 624L);
	return r;
}

/* {MERSENNE_TWISTER_RNG}.m */
EIF_TYPED_VALUE F236_4271 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 397L);
	return r;
}

/* {MERSENNE_TWISTER_RNG}.matrix_a */
EIF_TYPED_VALUE F236_4272 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 2567483615U);
	return r;
}

/* {MERSENNE_TWISTER_RNG}.warm_up */
EIF_TYPED_VALUE F236_4273 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2000L);
	return r;
}

/* {MERSENNE_TWISTER_RNG}.default_seed */
EIF_TYPED_VALUE F236_4274 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5489L);
	return r;
}

/* {MERSENNE_TWISTER_RNG}.mask_1 */
EIF_TYPED_VALUE F236_4275 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 2636928640U);
	return r;
}

/* {MERSENNE_TWISTER_RNG}.mask_2 */
EIF_TYPED_VALUE F236_4276 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 4022730752U);
	return r;
}

/* {MERSENNE_TWISTER_RNG}.default_state */
EIF_TYPED_VALUE F236_4277 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "default_state";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 235, Current, 0, 1, 7236);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(235, Current, 7236);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 0L:
			RTHOOK(2);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3527914035));
			break;
		case 1L:
			RTHOOK(3);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2656741617));
			break;
		case 2L:
			RTHOOK(4);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 268081179L);
			break;
		case 3L:
			RTHOOK(5);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2647329152));
			break;
		case 4L:
			RTHOOK(6);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1948258091L);
			break;
		case 5L:
			RTHOOK(7);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2776027204));
			break;
		case 6L:
			RTHOOK(8);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3924843231));
			break;
		case 7L:
			RTHOOK(9);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 356040693L);
			break;
		case 8L:
			RTHOOK(10);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1501662143L);
			break;
		case 9L:
			RTHOOK(11);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3483261144));
			break;
		case 10L:
			RTHOOK(12);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 167567410L);
			break;
		case 11L:
			RTHOOK(13);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1780246079L);
			break;
		case 12L:
			RTHOOK(14);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1360455562L);
			break;
		case 13L:
			RTHOOK(15);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1773396218L);
			break;
		case 14L:
			RTHOOK(16);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1838339685L);
			break;
		case 15L:
			RTHOOK(17);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3500719768));
			break;
		case 16L:
			RTHOOK(18);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4134123316));
			break;
		case 17L:
			RTHOOK(19);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1101798248L);
			break;
		case 18L:
			RTHOOK(20);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1661215729L);
			break;
		case 19L:
			RTHOOK(21);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1267559306L);
			break;
		case 20L:
			RTHOOK(22);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3267653079));
			break;
		case 21L:
			RTHOOK(23);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1451259005L);
			break;
		case 22L:
			RTHOOK(24);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1131429519L);
			break;
		case 23L:
			RTHOOK(25);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 996213714L);
			break;
		case 24L:
			RTHOOK(26);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1239804735L);
			break;
		case 25L:
			RTHOOK(27);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3420107969));
			break;
		case 26L:
			RTHOOK(28);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2627243555));
			break;
		case 27L:
			RTHOOK(29);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1954278923L);
			break;
		case 28L:
			RTHOOK(30);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2433868585));
			break;
		case 29L:
			RTHOOK(31);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2667780954));
			break;
		case 30L:
			RTHOOK(32);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3972690361));
			break;
		case 31L:
			RTHOOK(33);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 721309432L);
			break;
		case 32L:
			RTHOOK(34);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2216806381));
			break;
		case 33L:
			RTHOOK(35);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2894704625));
			break;
		case 34L:
			RTHOOK(36);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2933460467));
			break;
		case 35L:
			RTHOOK(37);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 769085185L);
			break;
		case 36L:
			RTHOOK(38);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 345008659L);
			break;
		case 37L:
			RTHOOK(39);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1971797929L);
			break;
		case 38L:
			RTHOOK(40);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4286838903));
			break;
		case 39L:
			RTHOOK(41);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1344839881L);
			break;
		case 40L:
			RTHOOK(42);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 297059357L);
			break;
		case 41L:
			RTHOOK(43);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2091834308L);
			break;
		case 42L:
			RTHOOK(44);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2255671463));
			break;
		case 43L:
			RTHOOK(45);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1218953481L);
			break;
		case 44L:
			RTHOOK(46);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2199971231));
			break;
		case 45L:
			RTHOOK(47);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3154853215));
			break;
		case 46L:
			RTHOOK(48);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1973618822L);
			break;
		case 47L:
			RTHOOK(49);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4192260392));
			break;
		case 48L:
			RTHOOK(50);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1102017920L);
			break;
		case 49L:
			RTHOOK(51);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 597408077L);
			break;
		case 50L:
			RTHOOK(52);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3329899649));
			break;
		case 51L:
			RTHOOK(53);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1961803118L);
			break;
		case 52L:
			RTHOOK(54);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3154294076));
			break;
		case 53L:
			RTHOOK(55);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1920902217L);
			break;
		case 54L:
			RTHOOK(56);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1804216326L);
			break;
		case 55L:
			RTHOOK(57);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1481879770L);
			break;
		case 56L:
			RTHOOK(58);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3185586932));
			break;
		case 57L:
			RTHOOK(59);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3458418821));
			break;
		case 58L:
			RTHOOK(60);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 839737669L);
			break;
		case 59L:
			RTHOOK(61);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1221330239L);
			break;
		case 60L:
			RTHOOK(62);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 14402770L);
			break;
		case 61L:
			RTHOOK(63);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3579454359));
			break;
		case 62L:
			RTHOOK(64);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3775241071));
			break;
		case 63L:
			RTHOOK(65);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 473826769L);
			break;
		case 64L:
			RTHOOK(66);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 157645924L);
			break;
		case 65L:
			RTHOOK(67);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3497834081));
			break;
		case 66L:
			RTHOOK(68);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1855467060L);
			break;
		case 67L:
			RTHOOK(69);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1842468727L);
			break;
		case 68L:
			RTHOOK(70);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3991736433));
			break;
		case 69L:
			RTHOOK(71);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3617455461));
			break;
		case 70L:
			RTHOOK(72);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4162248142));
			break;
		case 71L:
			RTHOOK(73);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3069899236));
			break;
		case 72L:
			RTHOOK(74);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 477565044L);
			break;
		case 73L:
			RTHOOK(75);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 823670205L);
			break;
		case 74L:
			RTHOOK(76);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 418992887L);
			break;
		case 75L:
			RTHOOK(77);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4176741200));
			break;
		case 76L:
			RTHOOK(78);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1322177364L);
			break;
		case 77L:
			RTHOOK(79);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2089468203L);
			break;
		case 78L:
			RTHOOK(80);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 833198413L);
			break;
		case 79L:
			RTHOOK(81);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1339324231L);
			break;
		case 80L:
			RTHOOK(82);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3693247011));
			break;
		case 81L:
			RTHOOK(83);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1845165535L);
			break;
		case 82L:
			RTHOOK(84);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1737942856L);
			break;
		case 83L:
			RTHOOK(85);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 208626511L);
			break;
		case 84L:
			RTHOOK(86);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4187159069));
			break;
		case 85L:
			RTHOOK(87);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1291219145L);
			break;
		case 86L:
			RTHOOK(88);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 108920113L);
			break;
		case 87L:
			RTHOOK(89);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2812535205));
			break;
		case 88L:
			RTHOOK(90);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2362956255));
			break;
		case 89L:
			RTHOOK(91);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2536295220));
			break;
		case 90L:
			RTHOOK(92);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1741168982L);
			break;
		case 91L:
			RTHOOK(93);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3578328744));
			break;
		case 92L:
			RTHOOK(94);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 73198625L);
			break;
		case 93L:
			RTHOOK(95);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4079225851));
			break;
		case 94L:
			RTHOOK(96);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3740685991));
			break;
		case 95L:
			RTHOOK(97);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1138624709L);
			break;
		case 96L:
			RTHOOK(98);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3671193903));
			break;
		case 97L:
			RTHOOK(99);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 925287787L);
			break;
		case 98L:
			RTHOOK(100);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 336195994L);
			break;
		case 99L:
			RTHOOK(101);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2486161735));
			break;
		case 100L:
			RTHOOK(102);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3106305180));
			break;
		case 101L:
			RTHOOK(103);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2916889016));
			break;
		case 102L:
			RTHOOK(104);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1406195817L);
			break;
		case 103L:
			RTHOOK(105);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3518649086));
			break;
		case 104L:
			RTHOOK(106);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1730338700L);
			break;
		case 105L:
			RTHOOK(107);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 584669812L);
			break;
		case 106L:
			RTHOOK(108);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2109846826L);
			break;
		case 107L:
			RTHOOK(109);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 502034389L);
			break;
		case 108L:
			RTHOOK(110);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1919059789L);
			break;
		case 109L:
			RTHOOK(111);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 175267273L);
			break;
		case 110L:
			RTHOOK(112);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3869776189));
			break;
		case 111L:
			RTHOOK(113);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2689762138));
			break;
		case 112L:
			RTHOOK(114);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3701135656));
			break;
		case 113L:
			RTHOOK(115);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3852385168));
			break;
		case 114L:
			RTHOOK(116);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1893444095L);
			break;
		case 115L:
			RTHOOK(117);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3591533725));
			break;
		case 116L:
			RTHOOK(118);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1515873164L);
			break;
		case 117L:
			RTHOOK(119);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1619455031L);
			break;
		case 118L:
			RTHOOK(120);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 710383369L);
			break;
		case 119L:
			RTHOOK(121);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 340388410L);
			break;
		case 120L:
			RTHOOK(122);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3163438086));
			break;
		case 121L:
			RTHOOK(123);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 797967974L);
			break;
		case 122L:
			RTHOOK(124);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4226240465));
			break;
		case 123L:
			RTHOOK(125);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1798682897L);
			break;
		case 124L:
			RTHOOK(126);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4164112392));
			break;
		case 125L:
			RTHOOK(127);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4011759517));
			break;
		case 126L:
			RTHOOK(128);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1938469533L);
			break;
		case 127L:
			RTHOOK(129);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2732330972));
			break;
		case 128L:
			RTHOOK(130);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1989554269L);
			break;
		case 129L:
			RTHOOK(131);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4114783660));
			break;
		case 130L:
			RTHOOK(132);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2353103163));
			break;
		case 131L:
			RTHOOK(133);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2155077678));
			break;
		case 132L:
			RTHOOK(134);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3203939533));
			break;
		case 133L:
			RTHOOK(135);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2068883802L);
			break;
		case 134L:
			RTHOOK(136);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 99506274L);
			break;
		case 135L:
			RTHOOK(137);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 8560334L);
			break;
		case 136L:
			RTHOOK(138);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2359399820));
			break;
		case 137L:
			RTHOOK(139);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3192824546));
			break;
		case 138L:
			RTHOOK(140);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1116978035L);
			break;
		case 139L:
			RTHOOK(141);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1701804835L);
			break;
		case 140L:
			RTHOOK(142);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1098061528L);
			break;
		case 141L:
			RTHOOK(143);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1147656143L);
			break;
		case 142L:
			RTHOOK(144);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 570484283L);
			break;
		case 143L:
			RTHOOK(145);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 277893320L);
			break;
		case 144L:
			RTHOOK(146);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2169290311));
			break;
		case 145L:
			RTHOOK(147);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 917623976L);
			break;
		case 146L:
			RTHOOK(148);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 917476101L);
			break;
		case 147L:
			RTHOOK(149);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 813901747L);
			break;
		case 148L:
			RTHOOK(150);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3956110148));
			break;
		case 149L:
			RTHOOK(151);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2805521959));
			break;
		case 150L:
			RTHOOK(152);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1511048089L);
			break;
		case 151L:
			RTHOOK(153);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1094858525L);
			break;
		case 152L:
			RTHOOK(154);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1688306984L);
			break;
		case 153L:
			RTHOOK(155);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 187820210L);
			break;
		case 154L:
			RTHOOK(156);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1678792633L);
			break;
		case 155L:
			RTHOOK(157);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1794913851L);
			break;
		case 156L:
			RTHOOK(158);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 277535059L);
			break;
		case 157L:
			RTHOOK(159);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2639110708));
			break;
		case 158L:
			RTHOOK(160);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 204312921L);
			break;
		case 159L:
			RTHOOK(161);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 478812703L);
			break;
		case 160L:
			RTHOOK(162);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 822896314L);
			break;
		case 161L:
			RTHOOK(163);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2276069488));
			break;
		case 162L:
			RTHOOK(164);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3670553343));
			break;
		case 163L:
			RTHOOK(165);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 172176418L);
			break;
		case 164L:
			RTHOOK(166);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2062637074L);
			break;
		case 165L:
			RTHOOK(167);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 764255184L);
			break;
		case 166L:
			RTHOOK(168);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2572821993));
			break;
		case 167L:
			RTHOOK(169);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 624061612L);
			break;
		case 168L:
			RTHOOK(170);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2739111131));
			break;
		case 169L:
			RTHOOK(171);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1283727820L);
			break;
		case 170L:
			RTHOOK(172);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1325602284L);
			break;
		case 171L:
			RTHOOK(173);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 703095966L);
			break;
		case 172L:
			RTHOOK(174);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2809343343));
			break;
		case 173L:
			RTHOOK(175);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 781505507L);
			break;
		case 174L:
			RTHOOK(176);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2107155264L);
			break;
		case 175L:
			RTHOOK(177);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 964447604L);
			break;
		case 176L:
			RTHOOK(178);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1704834270L);
			break;
		case 177L:
			RTHOOK(179);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1954369178L);
			break;
		case 178L:
			RTHOOK(180);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3655042101));
			break;
		case 179L:
			RTHOOK(181);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1180294121L);
			break;
		case 180L:
			RTHOOK(182);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 826174917L);
			break;
		case 181L:
			RTHOOK(183);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 701564124L);
			break;
		case 182L:
			RTHOOK(184);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2669833402));
			break;
		case 183L:
			RTHOOK(185);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1160714416L);
			break;
		case 184L:
			RTHOOK(186);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3502002280));
			break;
		case 185L:
			RTHOOK(187);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2219614873));
			break;
		case 186L:
			RTHOOK(188);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2016094542L);
			break;
		case 187L:
			RTHOOK(189);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1256385403L);
			break;
		case 188L:
			RTHOOK(190);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2764338680));
			break;
		case 189L:
			RTHOOK(191);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1890063121L);
			break;
		case 190L:
			RTHOOK(192);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1262390220L);
			break;
		case 191L:
			RTHOOK(193);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2116080826L);
			break;
		case 192L:
			RTHOOK(194);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2882155465));
			break;
		case 193L:
			RTHOOK(195);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1472080224L);
			break;
		case 194L:
			RTHOOK(196);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1157215257L);
			break;
		case 195L:
			RTHOOK(197);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 777418566L);
			break;
		case 196L:
			RTHOOK(198);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1928033658L);
			break;
		case 197L:
			RTHOOK(199);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 271368424L);
			break;
		case 198L:
			RTHOOK(200);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2961126073));
			break;
		case 199L:
			RTHOOK(201);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3503996249));
			break;
		case 200L:
			RTHOOK(202);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3129322859));
			break;
		case 201L:
			RTHOOK(203);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4091676263));
			break;
		case 202L:
			RTHOOK(204);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2564259201));
			break;
		case 203L:
			RTHOOK(205);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 427489863L);
			break;
		case 204L:
			RTHOOK(206);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1368320428L);
			break;
		case 205L:
			RTHOOK(207);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3775718818));
			break;
		case 206L:
			RTHOOK(208);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 30354474L);
			break;
		case 207L:
			RTHOOK(209);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3550719805));
			break;
		case 208L:
			RTHOOK(210);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 383647077L);
			break;
		case 209L:
			RTHOOK(211);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1720857336L);
			break;
		case 210L:
			RTHOOK(212);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 475046657L);
			break;
		case 211L:
			RTHOOK(213);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3107819857));
			break;
		case 212L:
			RTHOOK(214);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2471810036));
			break;
		case 213L:
			RTHOOK(215);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2222815696));
			break;
		case 214L:
			RTHOOK(216);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3590205126));
			break;
		case 215L:
			RTHOOK(217);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 528156176L);
			break;
		case 216L:
			RTHOOK(218);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4201353381));
			break;
		case 217L:
			RTHOOK(219);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3313995841));
			break;
		case 218L:
			RTHOOK(220);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 779993182L);
			break;
		case 219L:
			RTHOOK(221);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1111433010L);
			break;
		case 220L:
			RTHOOK(222);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4016192987));
			break;
		case 221L:
			RTHOOK(223);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1237398144L);
			break;
		case 222L:
			RTHOOK(224);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2557562514));
			break;
		case 223L:
			RTHOOK(225);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3350652077));
			break;
		case 224L:
			RTHOOK(226);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3291579494));
			break;
		case 225L:
			RTHOOK(227);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 121107218L);
			break;
		case 226L:
			RTHOOK(228);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1295777855L);
			break;
		case 227L:
			RTHOOK(229);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2597068575));
			break;
		case 228L:
			RTHOOK(230);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1595708013L);
			break;
		case 229L:
			RTHOOK(231);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 140486513L);
			break;
		case 230L:
			RTHOOK(232);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 408585122L);
			break;
		case 231L:
			RTHOOK(233);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4188673437));
			break;
		case 232L:
			RTHOOK(234);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 185270578L);
			break;
		case 233L:
			RTHOOK(235);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4186864195));
			break;
		case 234L:
			RTHOOK(236);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3449732542));
			break;
		case 235L:
			RTHOOK(237);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 26266409L);
			break;
		case 236L:
			RTHOOK(238);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 282673078L);
			break;
		case 237L:
			RTHOOK(239);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 998919575L);
			break;
		case 238L:
			RTHOOK(240);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1722178113L);
			break;
		case 239L:
			RTHOOK(241);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3829298799));
			break;
		case 240L:
			RTHOOK(242);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2008955969L);
			break;
		case 241L:
			RTHOOK(243);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110626148));
			break;
		case 242L:
			RTHOOK(244);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3409353037));
			break;
		case 243L:
			RTHOOK(245);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1749459591L);
			break;
		case 244L:
			RTHOOK(246);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1451128823L);
			break;
		case 245L:
			RTHOOK(247);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 907513304L);
			break;
		case 246L:
			RTHOOK(248);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3186012658));
			break;
		case 247L:
			RTHOOK(249);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3069172836));
			break;
		case 248L:
			RTHOOK(250);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2190803748));
			break;
		case 249L:
			RTHOOK(251);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1107640135L);
			break;
		case 250L:
			RTHOOK(252);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3231442204));
			break;
		case 251L:
			RTHOOK(253);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 155375458L);
			break;
		case 252L:
			RTHOOK(254);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 905522303L);
			break;
		case 253L:
			RTHOOK(255);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 914222177L);
			break;
		case 254L:
			RTHOOK(256);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1860426115L);
			break;
		case 255L:
			RTHOOK(257);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3685414794));
			break;
		case 256L:
			RTHOOK(258);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 643640391L);
			break;
		case 257L:
			RTHOOK(259);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2394210140));
			break;
		case 258L:
			RTHOOK(260);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 867316439L);
			break;
		case 259L:
			RTHOOK(261);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2954067575));
			break;
		case 260L:
			RTHOOK(262);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 926693799L);
			break;
		case 261L:
			RTHOOK(263);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2368417398));
			break;
		case 262L:
			RTHOOK(264);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3343978241));
			break;
		case 263L:
			RTHOOK(265);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1358553138L);
			break;
		case 264L:
			RTHOOK(266);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2065685979L);
			break;
		case 265L:
			RTHOOK(267);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1917594286L);
			break;
		case 266L:
			RTHOOK(268);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2970536753));
			break;
		case 267L:
			RTHOOK(269);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3433288120));
			break;
		case 268L:
			RTHOOK(270);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2131480336L);
			break;
		case 269L:
			RTHOOK(271);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1112849341L);
			break;
		case 270L:
			RTHOOK(272);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3824761751));
			break;
		case 271L:
			RTHOOK(273);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 587531163L);
			break;
		case 272L:
			RTHOOK(274);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1393692194L);
			break;
		case 273L:
			RTHOOK(275);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 439303066L);
			break;
		case 274L:
			RTHOOK(276);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 266190231L);
			break;
		case 275L:
			RTHOOK(277);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 18372126L);
			break;
		case 276L:
			RTHOOK(278);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 175738387L);
			break;
		case 277L:
			RTHOOK(279);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2651536077));
			break;
		case 278L:
			RTHOOK(280);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3681328917));
			break;
		case 279L:
			RTHOOK(281);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4111650978));
			break;
		case 280L:
			RTHOOK(282);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2659990056));
			break;
		case 281L:
			RTHOOK(283);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3995174062));
			break;
		case 282L:
			RTHOOK(284);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 5368879L);
			break;
		case 283L:
			RTHOOK(285);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 607319887L);
			break;
		case 284L:
			RTHOOK(286);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2963957482));
			break;
		case 285L:
			RTHOOK(287);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1427279240L);
			break;
		case 286L:
			RTHOOK(288);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4158143032));
			break;
		case 287L:
			RTHOOK(289);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1303285378L);
			break;
		case 288L:
			RTHOOK(290);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1071421654L);
			break;
		case 289L:
			RTHOOK(291);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1594610497L);
			break;
		case 290L:
			RTHOOK(292);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1917107741L);
			break;
		case 291L:
			RTHOOK(293);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3350498936));
			break;
		case 292L:
			RTHOOK(294);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 759640147L);
			break;
		case 293L:
			RTHOOK(295);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1133063712L);
			break;
		case 294L:
			RTHOOK(296);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3121553194));
			break;
		case 295L:
			RTHOOK(297);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1380796565L);
			break;
		case 296L:
			RTHOOK(298);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 772848817L);
			break;
		case 297L:
			RTHOOK(299);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1278684545L);
			break;
		case 298L:
			RTHOOK(300);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1547587789L);
			break;
		case 299L:
			RTHOOK(301);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3479292974));
			break;
		case 300L:
			RTHOOK(302);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2467760555));
			break;
		case 301L:
			RTHOOK(303);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2176036604));
			break;
		case 302L:
			RTHOOK(304);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 971587678L);
			break;
		case 303L:
			RTHOOK(305);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2147356812L);
			break;
		case 304L:
			RTHOOK(306);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1337671672L);
			break;
		case 305L:
			RTHOOK(307);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 111928400L);
			break;
		case 306L:
			RTHOOK(308);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2136732958L);
			break;
		case 307L:
			RTHOOK(309);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2766392829));
			break;
		case 308L:
			RTHOOK(310);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3675221103));
			break;
		case 309L:
			RTHOOK(311);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 362418727L);
			break;
		case 310L:
			RTHOOK(312);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1000336725L);
			break;
		case 311L:
			RTHOOK(313);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3523964799));
			break;
		case 312L:
			RTHOOK(314);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4226403459));
			break;
		case 313L:
			RTHOOK(315);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1686464025L);
			break;
		case 314L:
			RTHOOK(316);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3209869487));
			break;
		case 315L:
			RTHOOK(317);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2641364656));
			break;
		case 316L:
			RTHOOK(318);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1897290694L);
			break;
		case 317L:
			RTHOOK(319);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2922531566));
			break;
		case 318L:
			RTHOOK(320);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 701660972L);
			break;
		case 319L:
			RTHOOK(321);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2035032198L);
			break;
		case 320L:
			RTHOOK(322);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1950637282L);
			break;
		case 321L:
			RTHOOK(323);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2015958476L);
			break;
		case 322L:
			RTHOOK(324);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3570296966));
			break;
		case 323L:
			RTHOOK(325);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 847883900L);
			break;
		case 324L:
			RTHOOK(326);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1407120023L);
			break;
		case 325L:
			RTHOOK(327);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1099298797L);
			break;
		case 326L:
			RTHOOK(328);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2293703680));
			break;
		case 327L:
			RTHOOK(329);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1007279121L);
			break;
		case 328L:
			RTHOOK(330);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3169036982));
			break;
		case 329L:
			RTHOOK(331);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1786090314L);
			break;
		case 330L:
			RTHOOK(332);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2993152921));
			break;
		case 331L:
			RTHOOK(333);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 913855L);
			break;
		case 332L:
			RTHOOK(334);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 423339490L);
			break;
		case 333L:
			RTHOOK(335);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4198373751));
			break;
		case 334L:
			RTHOOK(336);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 396236022L);
			break;
		case 335L:
			RTHOOK(337);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 518906520L);
			break;
		case 336L:
			RTHOOK(338);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1763642118L);
			break;
		case 337L:
			RTHOOK(339);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3092215980));
			break;
		case 338L:
			RTHOOK(340);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3250672406));
			break;
		case 339L:
			RTHOOK(341);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4294916822));
			break;
		case 340L:
			RTHOOK(342);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 189100931L);
			break;
		case 341L:
			RTHOOK(343);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1368184338L);
			break;
		case 342L:
			RTHOOK(344);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 94375742L);
			break;
		case 343L:
			RTHOOK(345);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3585593973));
			break;
		case 344L:
			RTHOOK(346);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1281281239L);
			break;
		case 345L:
			RTHOOK(347);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3761033406));
			break;
		case 346L:
			RTHOOK(348);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1431890418L);
			break;
		case 347L:
			RTHOOK(349);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 210353136L);
			break;
		case 348L:
			RTHOOK(350);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2748932647));
			break;
		case 349L:
			RTHOOK(351);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 674419378L);
			break;
		case 350L:
			RTHOOK(352);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4133992599));
			break;
		case 351L:
			RTHOOK(353);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3562366292));
			break;
		case 352L:
			RTHOOK(354);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4191350815));
			break;
		case 353L:
			RTHOOK(355);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4196286382));
			break;
		case 354L:
			RTHOOK(356);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1388503534L);
			break;
		case 355L:
			RTHOOK(357);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3846512433));
			break;
		case 356L:
			RTHOOK(358);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2122618665L);
			break;
		case 357L:
			RTHOOK(359);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3669866106));
			break;
		case 358L:
			RTHOOK(360);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1421827710L);
			break;
		case 359L:
			RTHOOK(361);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4164010609));
			break;
		case 360L:
			RTHOOK(362);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1595545571L);
			break;
		case 361L:
			RTHOOK(363);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2635336446));
			break;
		case 362L:
			RTHOOK(364);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2457082951));
			break;
		case 363L:
			RTHOOK(365);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1221569486L);
			break;
		case 364L:
			RTHOOK(366);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2629559415));
			break;
		case 365L:
			RTHOOK(367);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2621367679));
			break;
		case 366L:
			RTHOOK(368);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2961001529));
			break;
		case 367L:
			RTHOOK(369);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3424763106));
			break;
		case 368L:
			RTHOOK(370);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1769408689L);
			break;
		case 369L:
			RTHOOK(371);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1490692715L);
			break;
		case 370L:
			RTHOOK(372);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 594598678L);
			break;
		case 371L:
			RTHOOK(373);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1852053832L);
			break;
		case 372L:
			RTHOOK(374);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2898640210));
			break;
		case 373L:
			RTHOOK(375);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2257528012));
			break;
		case 374L:
			RTHOOK(376);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3390943477));
			break;
		case 375L:
			RTHOOK(377);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1286448274L);
			break;
		case 376L:
			RTHOOK(378);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1061437012L);
			break;
		case 377L:
			RTHOOK(379);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3299137001));
			break;
		case 378L:
			RTHOOK(380);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4027242096));
			break;
		case 379L:
			RTHOOK(381);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3913058016));
			break;
		case 380L:
			RTHOOK(382);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4270875930));
			break;
		case 381L:
			RTHOOK(383);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3722785443));
			break;
		case 382L:
			RTHOOK(384);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2791594207));
			break;
		case 383L:
			RTHOOK(385);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2877124945));
			break;
		case 384L:
			RTHOOK(386);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 237926239L);
			break;
		case 385L:
			RTHOOK(387);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3373309849));
			break;
		case 386L:
			RTHOOK(388);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2375472543));
			break;
		case 387L:
			RTHOOK(389);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1942942028L);
			break;
		case 388L:
			RTHOOK(390);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3343812841));
			break;
		case 389L:
			RTHOOK(391);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 40971712L);
			break;
		case 390L:
			RTHOOK(392);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 83105589L);
			break;
		case 391L:
			RTHOOK(393);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 777589922L);
			break;
		case 392L:
			RTHOOK(394);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1509208827L);
			break;
		case 393L:
			RTHOOK(395);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 42466435L);
			break;
		case 394L:
			RTHOOK(396);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2159805251));
			break;
		case 395L:
			RTHOOK(397);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4138935641));
			break;
		case 396L:
			RTHOOK(398);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3342956756));
			break;
		case 397L:
			RTHOOK(399);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4057567523));
			break;
		case 398L:
			RTHOOK(400);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 943508487L);
			break;
		case 399L:
			RTHOOK(401);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2898289533));
			break;
		case 400L:
			RTHOOK(402);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 140748104L);
			break;
		case 401L:
			RTHOOK(403);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2801577093));
			break;
		case 402L:
			RTHOOK(404);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 705949680L);
			break;
		case 403L:
			RTHOOK(405);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2939088305));
			break;
		case 404L:
			RTHOOK(406);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1105667920L);
			break;
		case 405L:
			RTHOOK(407);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3771118402));
			break;
		case 406L:
			RTHOOK(408);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1570908998L);
			break;
		case 407L:
			RTHOOK(409);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1666537952L);
			break;
		case 408L:
			RTHOOK(410);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3538567340));
			break;
		case 409L:
			RTHOOK(411);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 279615680L);
			break;
		case 410L:
			RTHOOK(412);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 420045975L);
			break;
		case 411L:
			RTHOOK(413);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 288117803L);
			break;
		case 412L:
			RTHOOK(414);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 746914828L);
			break;
		case 413L:
			RTHOOK(415);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2825447376));
			break;
		case 414L:
			RTHOOK(416);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1847984520L);
			break;
		case 415L:
			RTHOOK(417);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4120302480));
			break;
		case 416L:
			RTHOOK(418);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3283836282));
			break;
		case 417L:
			RTHOOK(419);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2049616183L);
			break;
		case 418L:
			RTHOOK(420);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3755036722));
			break;
		case 419L:
			RTHOOK(421);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1736486459L);
			break;
		case 420L:
			RTHOOK(422);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3680476376));
			break;
		case 421L:
			RTHOOK(423);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2345821872));
			break;
		case 422L:
			RTHOOK(424);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2000989970L);
			break;
		case 423L:
			RTHOOK(425);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3026432432));
			break;
		case 424L:
			RTHOOK(426);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1486236105L);
			break;
		case 425L:
			RTHOOK(427);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3809328238));
			break;
		case 426L:
			RTHOOK(428);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2282706281));
			break;
		case 427L:
			RTHOOK(429);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 547253782L);
			break;
		case 428L:
			RTHOOK(430);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2649531660));
			break;
		case 429L:
			RTHOOK(431);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 43547223L);
			break;
		case 430L:
			RTHOOK(432);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3201559127));
			break;
		case 431L:
			RTHOOK(433);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3550902442));
			break;
		case 432L:
			RTHOOK(434);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1893532429L);
			break;
		case 433L:
			RTHOOK(435);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 217947229L);
			break;
		case 434L:
			RTHOOK(436);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2460061337));
			break;
		case 435L:
			RTHOOK(437);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4118021657));
			break;
		case 436L:
			RTHOOK(438);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2137983613L);
			break;
		case 437L:
			RTHOOK(439);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 323792794L);
			break;
		case 438L:
			RTHOOK(440);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1895152356L);
			break;
		case 439L:
			RTHOOK(441);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 601663413L);
			break;
		case 440L:
			RTHOOK(442);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1299746765L);
			break;
		case 441L:
			RTHOOK(443);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3354425415));
			break;
		case 442L:
			RTHOOK(444);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3170336161));
			break;
		case 443L:
			RTHOOK(445);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2423379304));
			break;
		case 444L:
			RTHOOK(446);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4234313377));
			break;
		case 445L:
			RTHOOK(447);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2919254903));
			break;
		case 446L:
			RTHOOK(448);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1723157451L);
			break;
		case 447L:
			RTHOOK(449);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2129844908L);
			break;
		case 448L:
			RTHOOK(450);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3704990768));
			break;
		case 449L:
			RTHOOK(451);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3116234544));
			break;
		case 450L:
			RTHOOK(452);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1348114343L);
			break;
		case 451L:
			RTHOOK(453);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2642943955));
			break;
		case 452L:
			RTHOOK(454);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2914490060));
			break;
		case 453L:
			RTHOOK(455);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2493633026));
			break;
		case 454L:
			RTHOOK(456);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2538823039));
			break;
		case 455L:
			RTHOOK(457);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 837558464L);
			break;
		case 456L:
			RTHOOK(458);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2978511512));
			break;
		case 457L:
			RTHOOK(459);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3242676329));
			break;
		case 458L:
			RTHOOK(460);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2801220339));
			break;
		case 459L:
			RTHOOK(461);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1910825063L);
			break;
		case 460L:
			RTHOOK(462);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1185245662L);
			break;
		case 461L:
			RTHOOK(463);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3534611504));
			break;
		case 462L:
			RTHOOK(464);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1862755015L);
			break;
		case 463L:
			RTHOOK(465);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4110972660));
			break;
		case 464L:
			RTHOOK(466);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1397818690L);
			break;
		case 465L:
			RTHOOK(467);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 57941054L);
			break;
		case 466L:
			RTHOOK(468);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1397760548L);
			break;
		case 467L:
			RTHOOK(469);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3638906208));
			break;
		case 468L:
			RTHOOK(470);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1011133210L);
			break;
		case 469L:
			RTHOOK(471);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 882322246L);
			break;
		case 470L:
			RTHOOK(472);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1958717597L);
			break;
		case 471L:
			RTHOOK(473);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3621218528));
			break;
		case 472L:
			RTHOOK(474);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 937821660L);
			break;
		case 473L:
			RTHOOK(475);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3778878431));
			break;
		case 474L:
			RTHOOK(476);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1347535905L);
			break;
		case 475L:
			RTHOOK(477);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3118487486));
			break;
		case 476L:
			RTHOOK(478);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3071779148));
			break;
		case 477L:
			RTHOOK(479);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2708671555));
			break;
		case 478L:
			RTHOOK(480);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3113629886));
			break;
		case 479L:
			RTHOOK(481);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3050697581));
			break;
		case 480L:
			RTHOOK(482);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3915438570));
			break;
		case 481L:
			RTHOOK(483);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1796442323L);
			break;
		case 482L:
			RTHOOK(484);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3971404726));
			break;
		case 483L:
			RTHOOK(485);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3183381379));
			break;
		case 484L:
			RTHOOK(486);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 774483909L);
			break;
		case 485L:
			RTHOOK(487);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1984786924L);
			break;
		case 486L:
			RTHOOK(488);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1267683139L);
			break;
		case 487L:
			RTHOOK(489);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3256736768));
			break;
		case 488L:
			RTHOOK(490);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2789172607));
			break;
		case 489L:
			RTHOOK(491);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2187821360));
			break;
		case 490L:
			RTHOOK(492);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3690280364));
			break;
		case 491L:
			RTHOOK(493);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2778004568));
			break;
		case 492L:
			RTHOOK(494);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2485552828));
			break;
		case 493L:
			RTHOOK(495);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3181077883));
			break;
		case 494L:
			RTHOOK(496);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1242536801L);
			break;
		case 495L:
			RTHOOK(497);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1157568591L);
			break;
		case 496L:
			RTHOOK(498);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 954272303L);
			break;
		case 497L:
			RTHOOK(499);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1636894246L);
			break;
		case 498L:
			RTHOOK(500);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1579447862L);
			break;
		case 499L:
			RTHOOK(501);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1896272183L);
			break;
		case 500L:
			RTHOOK(502);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3324510960));
			break;
		case 501L:
			RTHOOK(503);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3172802304));
			break;
		case 502L:
			RTHOOK(504);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2093014194L);
			break;
		case 503L:
			RTHOOK(505);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3982706953));
			break;
		case 504L:
			RTHOOK(506);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3692278350));
			break;
		case 505L:
			RTHOOK(507);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2543436953));
			break;
		case 506L:
			RTHOOK(508);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3615374698));
			break;
		case 507L:
			RTHOOK(509);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 343358312L);
			break;
		case 508L:
			RTHOOK(510);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2524598199));
			break;
		case 509L:
			RTHOOK(511);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 904843185L);
			break;
		case 510L:
			RTHOOK(512);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 709955768L);
			break;
		case 511L:
			RTHOOK(513);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3807424404));
			break;
		case 512L:
			RTHOOK(514);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2634669733));
			break;
		case 513L:
			RTHOOK(515);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 539319591L);
			break;
		case 514L:
			RTHOOK(516);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1467077451L);
			break;
		case 515L:
			RTHOOK(517);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3775438564));
			break;
		case 516L:
			RTHOOK(518);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 611267339L);
			break;
		case 517L:
			RTHOOK(519);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2407313125));
			break;
		case 518L:
			RTHOOK(520);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3540403986));
			break;
		case 519L:
			RTHOOK(521);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1976237038L);
			break;
		case 520L:
			RTHOOK(522);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3108991016));
			break;
		case 521L:
			RTHOOK(523);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3985978982));
			break;
		case 522L:
			RTHOOK(524);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1561949620L);
			break;
		case 523L:
			RTHOOK(525);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1526207089L);
			break;
		case 524L:
			RTHOOK(526);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 331227173L);
			break;
		case 525L:
			RTHOOK(527);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2233026137));
			break;
		case 526L:
			RTHOOK(528);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 813716273L);
			break;
		case 527L:
			RTHOOK(529);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3969730240));
			break;
		case 528L:
			RTHOOK(530);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3154279478));
			break;
		case 529L:
			RTHOOK(531);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 720912776L);
			break;
		case 530L:
			RTHOOK(532);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3256097664));
			break;
		case 531L:
			RTHOOK(533);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3224051274));
			break;
		case 532L:
			RTHOOK(534);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 80961911L);
			break;
		case 533L:
			RTHOOK(535);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4233161175));
			break;
		case 534L:
			RTHOOK(536);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 969832922L);
			break;
		case 535L:
			RTHOOK(537);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2440956416));
			break;
		case 536L:
			RTHOOK(538);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4017753076));
			break;
		case 537L:
			RTHOOK(539);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2844514513));
			break;
		case 538L:
			RTHOOK(540);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 423775698L);
			break;
		case 539L:
			RTHOOK(541);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2486820639));
			break;
		case 540L:
			RTHOOK(542);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3291150150));
			break;
		case 541L:
			RTHOOK(543);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2916870206));
			break;
		case 542L:
			RTHOOK(544);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2233605901));
			break;
		case 543L:
			RTHOOK(545);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1163280016L);
			break;
		case 544L:
			RTHOOK(546);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2425744466));
			break;
		case 545L:
			RTHOOK(547);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2005433125L);
			break;
		case 546L:
			RTHOOK(548);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2330222692));
			break;
		case 547L:
			RTHOOK(549);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3175331610));
			break;
		case 548L:
			RTHOOK(550);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3142850902));
			break;
		case 549L:
			RTHOOK(551);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1936117661L);
			break;
		case 550L:
			RTHOOK(552);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4002289463));
			break;
		case 551L:
			RTHOOK(553);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3047630793));
			break;
		case 552L:
			RTHOOK(554);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1349956583L);
			break;
		case 553L:
			RTHOOK(555);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4235246282));
			break;
		case 554L:
			RTHOOK(556);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3457375093));
			break;
		case 555L:
			RTHOOK(557);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3303611043));
			break;
		case 556L:
			RTHOOK(558);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4029946129));
			break;
		case 557L:
			RTHOOK(559);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1396902975L);
			break;
		case 558L:
			RTHOOK(560);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2288715812));
			break;
		case 559L:
			RTHOOK(561);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1807071415L);
			break;
		case 560L:
			RTHOOK(562);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 870453844L);
			break;
		case 561L:
			RTHOOK(563);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4052989014));
			break;
		case 562L:
			RTHOOK(564);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1527341439L);
			break;
		case 563L:
			RTHOOK(565);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 559939408L);
			break;
		case 564L:
			RTHOOK(566);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1222213361L);
			break;
		case 565L:
			RTHOOK(567);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 895777195L);
			break;
		case 566L:
			RTHOOK(568);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1856626116L);
			break;
		case 567L:
			RTHOOK(569);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 221587270L);
			break;
		case 568L:
			RTHOOK(570);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2734018115));
			break;
		case 569L:
			RTHOOK(571);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2988876211));
			break;
		case 570L:
			RTHOOK(572);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 321514044L);
			break;
		case 571L:
			RTHOOK(573);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2050194626L);
			break;
		case 572L:
			RTHOOK(574);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3050103101));
			break;
		case 573L:
			RTHOOK(575);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1446919003L);
			break;
		case 574L:
			RTHOOK(576);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1397657231L);
			break;
		case 575L:
			RTHOOK(577);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1444125129L);
			break;
		case 576L:
			RTHOOK(578);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3780731794));
			break;
		case 577L:
			RTHOOK(579);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2968531237));
			break;
		case 578L:
			RTHOOK(580);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1166435419L);
			break;
		case 579L:
			RTHOOK(581);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 523704391L);
			break;
		case 580L:
			RTHOOK(582);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2498407377));
			break;
		case 581L:
			RTHOOK(583);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1106869981L);
			break;
		case 582L:
			RTHOOK(584);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3823477659));
			break;
		case 583L:
			RTHOOK(585);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1908896994L);
			break;
		case 584L:
			RTHOOK(586);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1349687028L);
			break;
		case 585L:
			RTHOOK(587);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1499468603L);
			break;
		case 586L:
			RTHOOK(588);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2018690196L);
			break;
		case 587L:
			RTHOOK(589);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1062938257L);
			break;
		case 588L:
			RTHOOK(590);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2750969716));
			break;
		case 589L:
			RTHOOK(591);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1518008478L);
			break;
		case 590L:
			RTHOOK(592);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 400178984L);
			break;
		case 591L:
			RTHOOK(593);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3923333485));
			break;
		case 592L:
			RTHOOK(594);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4240556501));
			break;
		case 593L:
			RTHOOK(595);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3831596584));
			break;
		case 594L:
			RTHOOK(596);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 67637319L);
			break;
		case 595L:
			RTHOOK(597);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3638877023));
			break;
		case 596L:
			RTHOOK(598);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3694658582));
			break;
		case 597L:
			RTHOOK(599);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2353607650));
			break;
		case 598L:
			RTHOOK(600);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2500283731));
			break;
		case 599L:
			RTHOOK(601);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2981102381));
			break;
		case 600L:
			RTHOOK(602);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3431006954));
			break;
		case 601L:
			RTHOOK(603);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1902383683L);
			break;
		case 602L:
			RTHOOK(604);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2564221802));
			break;
		case 603L:
			RTHOOK(605);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2432616773));
			break;
		case 604L:
			RTHOOK(606);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2693874501));
			break;
		case 605L:
			RTHOOK(607);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1873478525L);
			break;
		case 606L:
			RTHOOK(608);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1895078989L);
			break;
		case 607L:
			RTHOOK(609);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 96426766L);
			break;
		case 608L:
			RTHOOK(610);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2457513855));
			break;
		case 609L:
			RTHOOK(611);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2710835041));
			break;
		case 610L:
			RTHOOK(612);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4276122991));
			break;
		case 611L:
			RTHOOK(613);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4162139807));
			break;
		case 612L:
			RTHOOK(614);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1543513403L);
			break;
		case 613L:
			RTHOOK(615);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4072240687));
			break;
		case 614L:
			RTHOOK(616);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1256930508L);
			break;
		case 615L:
			RTHOOK(617);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 275379078L);
			break;
		case 616L:
			RTHOOK(618);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4221888441));
			break;
		case 617L:
			RTHOOK(619);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1882400357L);
			break;
		case 618L:
			RTHOOK(620);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1808433422L);
			break;
		case 619L:
			RTHOOK(621);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2242609240));
			break;
		case 620L:
			RTHOOK(622);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2924161839));
			break;
		case 621L:
			RTHOOK(623);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2635204370));
			break;
		case 622L:
			RTHOOK(624);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3202935499));
			break;
		case 623L:
			RTHOOK(625);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2003439890L);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(626);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg1
}

void EIF_Minit236 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
