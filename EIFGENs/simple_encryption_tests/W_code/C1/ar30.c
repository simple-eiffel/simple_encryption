/*
 * Code for class ARRAY_FACILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F30_691(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F30_692(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F30_693(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F30_694(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F30_695(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F30_696(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F30_697(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit30(void);

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

/* {ARRAY_FACILITIES}.array_xor */
void F30_691 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "array_xor";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 29, Current, 1, 7, 769);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 769);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 29, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 29, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg5, 29, l_feature_name, 5, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_1.valid_index (source_1_offset)", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("source_2.valid_index (source_2_offset)", EX_PRE);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("destination.valid_index (destination_offset)", EX_PRE);
		ui4_1 = arg6;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg5))(arg5, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("source_1.valid_index (source_1_offset + count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg7) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("source_2.valid_index (source_2_offset + count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg7) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("destination.valid_index (destination_offset + count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg6 + arg7) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg5))(arg5, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg7;
	if (RTAL & CK_LOOP) {
		RTHOOK(8);
		RTCT("counter + 1", EX_VAR);
		ti4_2 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(10);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc1) - ((EIF_INTEGER_32) 1L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc1) - ((EIF_INTEGER_32) 1L));
		tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n1);
		uu1_1 = tu1_2;
		tu1_3 = eif_bit_xor(tu1_1,uu1_1);
		uu1_1 = tu1_3;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg6 + loc1) - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg5))(arg5, uu1_1x, ui4_1x);
		RTHOOK(11);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
		if (RTAL & CK_LOOP) {
			RTHOOK(8);
			RTCT("counter + 1", EX_VAR);
			ti4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			} else {
				RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef ui4_1
#undef uu1_1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ARRAY_FACILITIES}.from_natural_32_be */
void F30_692 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "from_natural_32_be";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 3, 770);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 770);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 29, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ui4_1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg2))(arg2, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 3L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg2))(arg2, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(6);
	tu1_1 = (EIF_NATURAL_8) arg1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 3L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("byte_0", EX_POST);
		ui4_1 = arg3;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 24L);
		tu4_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("byte_1", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu4_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("byte_2", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 2L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("byte_3", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 3L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		tu1_2 = (EIF_NATURAL_8) arg1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
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
#undef ui4_1
#undef uu1_1
#undef arg3
#undef arg2
#undef arg1
}

/* {ARRAY_FACILITIES}.as_natural_32_be */
EIF_TYPED_VALUE F30_693 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "as_natural_32_be";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 2, 771);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 771);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 29, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = arg2;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTHOOK(4);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	uu4_1 = tu4_2;
	tu4_1 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	uu4_1 = tu4_2;
	tu4_1 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("byte_0", EX_POST);
		ui4_1 = arg2;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 24L);
		tu4_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("byte_1", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu4_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("byte_2", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("byte_3", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		tu1_2 = (EIF_NATURAL_8) Result;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {ARRAY_FACILITIES}.from_natural_32_le */
void F30_694 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "from_natural_32_le";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 3, 772);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 772);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 29, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ui4_1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg2))(arg2, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 3L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg2))(arg2, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (EIF_NATURAL_8) arg1;
	uu1_1 = tu1_1;
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 3L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("byte_0", EX_POST);
		ui4_1 = arg3;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		tu1_2 = (EIF_NATURAL_8) arg1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("byte_1", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("byte_2", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 2L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu4_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("byte_3", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 3L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 24L);
		tu4_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
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
#undef ui4_1
#undef uu1_1
#undef arg3
#undef arg2
#undef arg1
}

/* {ARRAY_FACILITIES}.as_natural_32_le */
EIF_TYPED_VALUE F30_695 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "as_natural_32_le";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 2, 773);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 773);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 29, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = arg2;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	uu4_1 = tu4_2;
	tu4_1 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	uu4_1 = tu4_2;
	tu4_1 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	uu4_1 = tu4_2;
	tu4_1 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("byte_0", EX_POST);
		ui4_1 = arg2;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		tu1_2 = (EIF_NATURAL_8) Result;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("byte_1", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("byte_2", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu4_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("byte_3", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 24L);
		tu4_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {ARRAY_FACILITIES}.from_natural_64_be */
void F30_696 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "from_natural_64_be";
	RTEX;
#define arg1 arg1x.it_n8
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT64,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 3, 774);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 774);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 29, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ui4_1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg2))(arg2, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 7L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg2))(arg2, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 56L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 48L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 40L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 3L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 4L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(8);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 5L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(9);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 6L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(10);
	tu1_1 = (EIF_NATURAL_8) arg1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 7L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("byte_0", EX_POST);
		ui4_1 = arg3;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 56L);
		tu8_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("byte_1", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 48L);
		tu8_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("byte_2", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 2L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 40L);
		tu8_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("byte_3", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 3L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 32L);
		tu8_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("byte_4", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 4L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 24L);
		tu8_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("byte_5", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 5L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu8_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("byte_6", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 6L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu8_1 = eif_bit_shift_right(arg1,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("byte_7", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 7L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_n1);
		tu1_2 = (EIF_NATURAL_8) arg1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ui4_1
#undef uu1_1
#undef arg3
#undef arg2
#undef arg1
}

/* {ARRAY_FACILITIES}.as_natural_64_be */
EIF_TYPED_VALUE F30_697 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "as_natural_64_be";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_UINT64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 2, 775);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 775);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 29, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 7L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ui4_1 = arg2;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 56L);
	tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
	Result = (EIF_NATURAL_64) tu8_2;
	RTHOOK(4);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 48L);
	tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
	uu8_1 = tu8_2;
	tu8_1 = eif_bit_or(Result,uu8_1);
	Result = (EIF_NATURAL_64) tu8_1;
	RTHOOK(5);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 40L);
	tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
	uu8_1 = tu8_2;
	tu8_1 = eif_bit_or(Result,uu8_1);
	Result = (EIF_NATURAL_64) tu8_1;
	RTHOOK(6);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 32L);
	tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
	uu8_1 = tu8_2;
	tu8_1 = eif_bit_or(Result,uu8_1);
	Result = (EIF_NATURAL_64) tu8_1;
	RTHOOK(7);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
	uu8_1 = tu8_2;
	tu8_1 = eif_bit_or(Result,uu8_1);
	Result = (EIF_NATURAL_64) tu8_1;
	RTHOOK(8);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 5L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
	uu8_1 = tu8_2;
	tu8_1 = eif_bit_or(Result,uu8_1);
	Result = (EIF_NATURAL_64) tu8_1;
	RTHOOK(9);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 6L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
	uu8_1 = tu8_2;
	tu8_1 = eif_bit_or(Result,uu8_1);
	Result = (EIF_NATURAL_64) tu8_1;
	RTHOOK(10);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 7L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	uu8_1 = tu8_1;
	tu8_2 = eif_bit_or(Result,uu8_1);
	Result = (EIF_NATURAL_64) tu8_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("byte_0", EX_POST);
		ui4_1 = arg2;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 56L);
		tu8_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("byte_1", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 48L);
		tu8_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("byte_2", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 40L);
		tu8_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("byte_3", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 32L);
		tu8_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("byte_4", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 24L);
		tu8_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("byte_5", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 5L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu8_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("byte_6", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 6L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu8_1 = eif_bit_shift_right(Result,ui4_1);
		tu1_2 = (EIF_NATURAL_8) tu8_1;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("byte_7", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 7L));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
		tu1_2 = (EIF_NATURAL_8) Result;
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
#undef uu8_1
#undef ui4_1
#undef arg2
#undef arg1
}

void EIF_Minit30 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
