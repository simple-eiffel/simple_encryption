/*
 * Code for class SPECIAL_LOGIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F62_1098(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F62_1099(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F62_1100(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F62_1101(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F62_1102(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F62_1103(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F62_1104(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit62(void);

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

/* {SPECIAL_LOGIC}.com_n */
void F62_1098 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "com_n";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 61, Current, 3, 5, 1136);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(61, Current, 1136);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 61, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 61, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op1_count_a >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg4;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) arg5;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(6);
		ui4_1 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		tu4_2 = eif_bit_not(tu4_1);
		uu4_1 = tu4_2;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(8);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(9);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_LOGIC}.hamdist */
EIF_TYPED_VALUE F62_1099 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "hamdist";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	
	RTEAA(l_feature_name, 61, Current, 11, 5, 1137);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(61, Current, 1137);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 61, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 61, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	loc11 = (EIF_INTEGER_32) arg4;
	RTHOOK(2);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	loc10 = (EIF_INTEGER_32) arg5;
	RTHOOK(3);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	loc9 = (EIF_INTEGER_32) arg2;
	RTHOOK(4);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	ti4_1 = eif_bit_shift_right(loc10,ui4_1);
	loc8 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(6);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = loc9;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		ui4_1 = loc11;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_xor(tu4_1,uu4_1);
		loc1 = (EIF_NATURAL_32) tu4_3;
		RTHOOK(7);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = eif_bit_shift_right(loc1,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		loc1 -= tu4_3;
		RTHOOK(8);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tu4_1 = eif_bit_shift_right(loc1,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_2 = eif_bit_and(loc1,uu4_1);
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(9);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		ui4_1 = (EIF_INTEGER_32) (loc11 + ((EIF_INTEGER_32) 1L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_xor(tu4_1,uu4_1);
		loc2 = (EIF_NATURAL_32) tu4_3;
		RTHOOK(10);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = eif_bit_shift_right(loc2,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		loc2 -= tu4_3;
		RTHOOK(11);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tu4_1 = eif_bit_shift_right(loc2,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_2 = eif_bit_and(loc2,uu4_1);
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(12);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc1 + loc2);
		RTHOOK(13);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		ui4_1 = ((EIF_INTEGER_32) 4L);
		tu4_1 = eif_bit_shift_right(loc6,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L));
		tu4_2 = eif_bit_and(loc6,uu4_1);
		loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(14);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 2L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		ui4_1 = (EIF_INTEGER_32) (loc11 + ((EIF_INTEGER_32) 2L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_xor(tu4_1,uu4_1);
		loc3 = (EIF_NATURAL_32) tu4_3;
		RTHOOK(15);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = eif_bit_shift_right(loc3,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		loc3 -= tu4_3;
		RTHOOK(16);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tu4_1 = eif_bit_shift_right(loc3,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_2 = eif_bit_and(loc3,uu4_1);
		loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(17);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 3L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		ui4_1 = (EIF_INTEGER_32) (loc11 + ((EIF_INTEGER_32) 3L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_xor(tu4_1,uu4_1);
		loc4 = (EIF_NATURAL_32) tu4_3;
		RTHOOK(18);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = eif_bit_shift_right(loc4,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		loc4 -= tu4_3;
		RTHOOK(19);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tu4_1 = eif_bit_shift_right(loc4,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_2 = eif_bit_and(loc4,uu4_1);
		loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(20);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		loc7 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc3 + loc4);
		RTHOOK(21);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		ui4_1 = ((EIF_INTEGER_32) 4L);
		tu4_1 = eif_bit_shift_right(loc7,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L));
		tu4_2 = eif_bit_and(loc7,uu4_1);
		loc7 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(22);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc6 + loc7);
		RTHOOK(23);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_right(loc5,ui4_1);
		loc5 += tu4_1;
		RTHOOK(24);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu4_1 = eif_bit_shift_right(loc5,ui4_1);
		loc5 += tu4_1;
		RTHOOK(25);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
		tu4_1 = eif_bit_and(loc5,uu4_1);
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		Result += ti4_1;
		RTHOOK(26);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9 += ((EIF_INTEGER_32) 4L);
		RTHOOK(27);
		RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
		loc11 += ((EIF_INTEGER_32) 4L);
		RTHOOK(28);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8--;
	}
	RTHOOK(29);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	ti4_1 = eif_bit_and(loc10,ui4_1);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(30);
	if ((EIF_BOOLEAN)(loc10 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(31);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(32);
			if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(33);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = loc9;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			ui4_1 = loc11;
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_xor(tu4_1,uu4_1);
			loc1 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(34);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_right(loc1,ui4_1);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L));
			tu4_3 = eif_bit_and(tu4_1,uu4_1);
			loc1 -= tu4_3;
			RTHOOK(35);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tu4_1 = eif_bit_shift_right(loc1,ui4_1);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
			tu4_3 = eif_bit_and(tu4_1,uu4_1);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
			tu4_2 = eif_bit_and(loc1,uu4_1);
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
			RTHOOK(36);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = ((EIF_INTEGER_32) 4L);
			tu4_1 = eif_bit_shift_right(loc1,ui4_1);
			uu4_1 = loc1;
			tu4_2 = eif_bit_or(tu4_1,uu4_1);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L));
			tu4_3 = eif_bit_and(tu4_2,uu4_1);
			loc1 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(37);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			loc5 += loc1;
			RTHOOK(38);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9++;
			RTHOOK(39);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			loc11++;
			RTHOOK(40);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10--;
		}
		RTHOOK(41);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_right(loc5,ui4_1);
		loc5 += tu4_1;
		RTHOOK(42);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu4_1 = eif_bit_shift_right(loc5,ui4_1);
		loc5 += tu4_1;
		RTHOOK(43);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
		tu4_1 = eif_bit_and(loc5,uu4_1);
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		Result += ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_LOGIC}.lshift */
void F62_1100 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "lshift";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg7);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 61, Current, 6, 7, 1138);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(61, Current, 1138);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 61, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 61, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg7, 61, l_feature_name, 7, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("target.valid_index (target_offset)", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target.valid_index (target_offset + n - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg5) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("op1.valid_index (op1_offset)", EX_PRE);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("op1.valid_index (op1_offset + n - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg5) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("count > 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg6 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("count < 32", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg6 < ((EIF_INTEGER_32) 32L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg4 + arg5);
	RTHOOK(8);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + arg5);
	RTHOOK(9);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - arg6);
	RTHOOK(10);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5--;
	RTHOOK(11);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	ui4_1 = loc5;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(12);
	ui4_1 = loc3;
	tu4_1 = eif_bit_shift_right(loc2,ui4_1);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg7))(arg7, uu4_1x);
	RTHOOK(13);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	ui4_1 = arg6;
	tu4_1 = eif_bit_shift_left(loc2,ui4_1);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(14);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg5 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(15);
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(16);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5--;
		RTHOOK(17);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = loc5;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(18);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6--;
		RTHOOK(19);
		ui4_1 = loc3;
		tu4_1 = eif_bit_shift_right(loc2,ui4_1);
		uu4_1 = tu4_1;
		tu4_2 = eif_bit_or(loc1,uu4_1);
		uu4_1 = tu4_2;
		ui4_1 = loc6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(20);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = arg6;
		tu4_1 = eif_bit_shift_left(loc2,ui4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(21);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4--;
	}
	RTHOOK(22);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	loc6--;
	RTHOOK(23);
	uu4_1 = loc1;
	ui4_1 = loc6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_LOGIC}.rshift */
void F62_1101 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "rshift";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg7);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 61, Current, 6, 7, 1139);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(61, Current, 1139);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 61, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 61, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg7, 61, l_feature_name, 7, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - arg6);
	RTHOOK(2);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) arg4;
	RTHOOK(3);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	ui4_1 = loc5;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5++;
	RTHOOK(5);
	ui4_1 = loc3;
	tu4_1 = eif_bit_shift_left(loc1,ui4_1);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg7))(arg7, uu4_1x);
	RTHOOK(6);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	ui4_1 = arg6;
	tu4_1 = eif_bit_shift_right(loc1,ui4_1);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(7);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg5 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(9);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = loc5;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5++;
		RTHOOK(11);
		ui4_1 = loc3;
		tu4_1 = eif_bit_shift_left(loc1,ui4_1);
		uu4_1 = tu4_1;
		tu4_2 = eif_bit_or(loc2,uu4_1);
		uu4_1 = tu4_2;
		ui4_1 = loc6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(12);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6++;
		RTHOOK(13);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = arg6;
		tu4_1 = eif_bit_shift_right(loc1,ui4_1);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(14);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4--;
	}
	RTHOOK(15);
	uu4_1 = loc2;
	ui4_1 = loc6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_LOGIC}.popcount */
EIF_TYPED_VALUE F62_1102 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "popcount";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	
	RTEAA(l_feature_name, 61, Current, 10, 3, 1140);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(61, Current, 1140);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 61, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	loc10 = (EIF_INTEGER_32) arg3;
	RTHOOK(2);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	loc9 = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	ti4_1 = eif_bit_shift_right(loc10,ui4_1);
	loc8 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = loc9;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = eif_bit_shift_right(loc1,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		loc1 -= tu4_3;
		RTHOOK(7);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tu4_1 = eif_bit_shift_right(loc1,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_2 = eif_bit_and(loc1,uu4_1);
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(8);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = eif_bit_shift_right(loc2,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		loc2 -= tu4_3;
		RTHOOK(10);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tu4_1 = eif_bit_shift_right(loc2,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_2 = eif_bit_and(loc2,uu4_1);
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(11);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc1 + loc2);
		RTHOOK(12);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		ui4_1 = ((EIF_INTEGER_32) 4L);
		tu4_1 = eif_bit_shift_right(loc6,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L));
		tu4_2 = eif_bit_and(loc6,uu4_1);
		loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(13);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 2L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(14);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = eif_bit_shift_right(loc3,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		loc3 -= tu4_3;
		RTHOOK(15);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tu4_1 = eif_bit_shift_right(loc3,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_2 = eif_bit_and(loc3,uu4_1);
		loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(16);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 3L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc4 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(17);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = eif_bit_shift_right(loc4,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		loc4 -= tu4_3;
		RTHOOK(18);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tu4_1 = eif_bit_shift_right(loc4,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
		tu4_2 = eif_bit_and(loc4,uu4_1);
		loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(19);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		loc7 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc3 + loc4);
		RTHOOK(20);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		ui4_1 = ((EIF_INTEGER_32) 4L);
		tu4_1 = eif_bit_shift_right(loc7,ui4_1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L));
		tu4_3 = eif_bit_and(tu4_1,uu4_1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L));
		tu4_2 = eif_bit_and(loc7,uu4_1);
		loc7 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
		RTHOOK(21);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc6 + loc7);
		RTHOOK(22);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_right(loc5,ui4_1);
		loc5 += tu4_1;
		RTHOOK(23);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu4_1 = eif_bit_shift_right(loc5,ui4_1);
		loc5 += tu4_1;
		RTHOOK(24);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
		tu4_1 = eif_bit_and(loc5,uu4_1);
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		Result += ti4_1;
		RTHOOK(25);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9 += ((EIF_INTEGER_32) 4L);
		RTHOOK(26);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8--;
	}
	RTHOOK(27);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	ti4_1 = eif_bit_and(loc10,ui4_1);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(28);
	if ((EIF_BOOLEAN)(loc10 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(29);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(30);
			if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(31);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = loc9;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(32);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_right(loc1,ui4_1);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L));
			tu4_3 = eif_bit_and(tu4_1,uu4_1);
			loc1 -= tu4_3;
			RTHOOK(33);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tu4_1 = eif_bit_shift_right(loc1,ui4_1);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_2 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
			tu4_3 = eif_bit_and(tu4_1,uu4_1);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L));
			tu4_2 = eif_bit_and(loc1,uu4_1);
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_3 + tu4_2);
			RTHOOK(34);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = ((EIF_INTEGER_32) 4L);
			tu4_1 = eif_bit_shift_right(loc1,ui4_1);
			uu4_1 = loc1;
			tu4_2 = eif_bit_or(tu4_1,uu4_1);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
			uu4_1 = (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 17L));
			tu4_3 = eif_bit_and(tu4_2,uu4_1);
			loc1 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(35);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			loc5 += loc1;
			RTHOOK(36);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9++;
			RTHOOK(37);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10--;
		}
		RTHOOK(38);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_right(loc5,ui4_1);
		loc5 += tu4_1;
		RTHOOK(39);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu4_1 = eif_bit_shift_right(loc5,ui4_1);
		loc5 += tu4_1;
		RTHOOK(40);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
		tu4_1 = eif_bit_and(loc5,uu4_1);
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		Result += ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(41);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_LOGIC}.bit_xor_lshift */
void F62_1103 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "bit_xor_lshift";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_i4
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
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 61, Current, 6, 9, 1141);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(61, Current, 1141);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 61, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 61, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 61, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op2_lshift >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg9 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("op1 /= op2", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != arg6), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("target /= op2", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != arg6), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("op1_count = 0 or op1.valid_index (op1_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg5 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg4;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("op1_count = 0 or op1.valid_index (op1_offset + op1_count - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg5 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg5) - ((EIF_INTEGER_32) 1L));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("op2_count = 0 or op2.valid_index (op2_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg7;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg6))(arg6, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(7);
		RTCT("op2_count = 0 or op2.valid_index (op2_offset + op2_count - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 + arg8) - ((EIF_INTEGER_32) 1L));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg6))(arg6, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(8);
		RTCT("(op1_count = 0 and op2_count = 0) or target.valid_index (target_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN)(arg5 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L)))) {
			ui4_1 = arg2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(9);
		RTCT("(op1_count = 0 and op2_count = 0) or target.valid_index (target_offset + op1_count.max (op2_count + bits_to_limbs (op2_lshift)) - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN)(arg5 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L)))) {
			ui4_1 = arg9;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (arg8 + ti4_1);
			ti4_2 = eif_max_int32 (arg5,ui4_1);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ti4_2) - ((EIF_INTEGER_32) 1L));
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
	RTHOOK(10);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg9 / ti4_1);
	RTHOOK(11);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg9 % ti4_1);
	RTHOOK(12);
	ur1 = arg3;
	ui4_1 = arg4;
	ui4_2 = arg2;
	ui4_3 = loc5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	for (;;) {
		RTHOOK(13);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 >= arg8) || (EIF_BOOLEAN) (loc4 >= (EIF_INTEGER_32) (arg5 - loc5)))) break;
		RTHOOK(14);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) loc1;
		RTHOOK(15);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) (arg7 + loc4);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = loc6;
		uu4_1 = loc1;
		uu4_2 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(17);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc5) + loc4);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		tu4_2 = eif_bit_xor(loc3,uu4_1);
		uu4_1 = tu4_2;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(18);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4++;
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN) (loc4 >= arg8)) {
		RTHOOK(20);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) loc1;
		RTHOOK(21);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = loc6;
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		uu4_2 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(22);
		if ((EIF_BOOLEAN) (loc4 >= (EIF_INTEGER_32) (arg5 - loc5))) {
			RTHOOK(23);
			uu4_1 = loc3;
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		} else {
			RTHOOK(24);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc5) + loc4);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			tu4_2 = eif_bit_xor(loc3,uu4_1);
			uu4_1 = tu4_2;
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
			RTHOOK(25);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
			RTHOOK(26);
			ur1 = arg3;
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc5) + loc4);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + loc4);
			ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 - loc4) - loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
	} else {
		for (;;) {
			RTHOOK(27);
			if ((EIF_BOOLEAN) (loc4 >= arg8)) break;
			RTHOOK(28);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			loc2 = (EIF_NATURAL_32) loc1;
			RTHOOK(29);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = (EIF_INTEGER_32) (arg7 + loc4);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(30);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = loc6;
			uu4_1 = loc1;
			uu4_2 = loc2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
			loc3 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(31);
			uu4_1 = loc3;
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
			RTHOOK(32);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
		RTHOOK(33);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) loc1;
		RTHOOK(34);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = loc6;
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		uu4_2 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(35);
		uu4_1 = loc3;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef uu4_2
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

/* {SPECIAL_LOGIC}.bit_xor */
void F62_1104 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "bit_xor";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
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
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 61, Current, 2, 8, 1142);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(61, Current, 1142);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 61, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 61, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 61, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("(op1_count = 0 and op2_count = 0) or target.valid_index (target_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN)(arg5 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L)))) {
			ui4_1 = arg2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("(op1_count = 0 and op2_count = 0) or target.valid_index (target_offset + op1_count.max (op2_count) - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN)(arg5 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L)))) {
			ui4_1 = arg8;
			ti4_1 = eif_max_int32 (arg5,ui4_1);
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
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ui4_1 = arg8;
	ti4_1 = eif_min_int32 (arg5,ui4_1);
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		RTHOOK(5);
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		ui4_1 = (EIF_INTEGER_32) (arg7 + loc1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_xor(tu4_1,uu4_1);
		uu4_1 = tu4_3;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (arg5 > arg8)) {
		RTHOOK(8);
		ur1 = arg3;
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc1);
		ui4_2 = (EIF_INTEGER_32) (arg2 + loc1);
		ui4_3 = (EIF_INTEGER_32) (arg5 - loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	} else {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (arg8 > arg5)) {
			RTHOOK(10);
			ur1 = arg6;
			ui4_1 = (EIF_INTEGER_32) (arg7 + loc1);
			ui4_2 = (EIF_INTEGER_32) (arg2 + loc1);
			ui4_3 = (EIF_INTEGER_32) (arg8 - loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
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

void EIF_Minit62 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
