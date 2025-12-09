/*
 * Code for class LIMB_MANIPULATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F60_1076(EIF_REFERENCE);
extern EIF_TYPED_VALUE F60_1077(EIF_REFERENCE);
extern EIF_TYPED_VALUE F60_1078(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1079(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1080(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1081(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F60_1082(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F60_1083(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1084(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1085(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F60_1086(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1087(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1088(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1089(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1090(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F60_1091(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1092(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1093(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1094(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F60_1095(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit60(void);

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

/* {LIMB_MANIPULATION}.limb_low_bit */
EIF_TYPED_VALUE F60_1076 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {LIMB_MANIPULATION}.limb_max */
EIF_TYPED_VALUE F60_1077 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 4294967295U);
	return r;
}

/* {LIMB_MANIPULATION}.integer_to_limb */
EIF_TYPED_VALUE F60_1078 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "integer_to_limb";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_NATURAL_32 tu4_1;
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
	
	RTEAA(l_feature_name, 59, Current, 0, 1, 1129);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1129);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("integer >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = (EIF_NATURAL_32) arg1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg1
}

/* {LIMB_MANIPULATION}.boolean_to_integer */
EIF_TYPED_VALUE F60_1079 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "boolean_to_integer";
	RTEX;
#define arg1 arg1x.it_b
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 59, Current, 0, 1, 1130);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1130);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("boolean implies Result = 1", EX_POST);
		if ((!(arg1) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("not boolean implies Result = 0", EX_POST);
		if ((!((EIF_BOOLEAN) !arg1) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {LIMB_MANIPULATION}.boolean_to_limb */
EIF_TYPED_VALUE F60_1080 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "boolean_to_limb";
	RTEX;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 59, Current, 0, 1, 1131);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1131);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ub1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1033, dtype))(Current, ub1x)).it_i4);
	RTNHOOK(1,1);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	Result = (EIF_NATURAL_32) tu4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("boolean implies Result = 1", EX_POST);
		if ((!(arg1) || ((EIF_BOOLEAN)(Result == (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("not boolean implies Result = 0", EX_POST);
		if ((!((EIF_BOOLEAN) !arg1) || ((EIF_BOOLEAN)(Result == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ub1
#undef arg1
}

/* {LIMB_MANIPULATION}.extract_limb */
EIF_TYPED_VALUE F60_1081 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "extract_limb";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 59, Current, 0, 3, 1132);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1132);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("count < limb_bits", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("count >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		Result = (EIF_NATURAL_32) arg2;
	} else {
		RTHOOK(5);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		ui4_1 = arg1;
		tu4_1 = eif_bit_shift_left(arg2,ui4_1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 - arg1);
		tu4_2 = eif_bit_shift_right(arg3,ui4_1);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_or(tu4_1,uu4_1);
		Result = (EIF_NATURAL_32) tu4_3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {LIMB_MANIPULATION}.write_limb */
void F60_1082 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "write_limb";
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
	
	RTEAA(l_feature_name, 59, Current, 0, 3, 1133);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1133);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 59, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu1_1 = (EIF_NATURAL_8) arg1;
	uu1_1 = tu1_1;
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 3L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
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
#undef arg3
#undef arg2
#undef arg1
}

/* {LIMB_MANIPULATION}.write_limb_be */
void F60_1083 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "write_limb_be";
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
	
	RTEAA(l_feature_name, 59, Current, 0, 3, 1134);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1134);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 59, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
	RTHOOK(4);
	tu1_1 = (EIF_NATURAL_8) arg1;
	uu1_1 = tu1_1;
	ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 3L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg2))(arg2, uu1_1x, ui4_1x);
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
#undef arg3
#undef arg2
#undef arg1
}

/* {LIMB_MANIPULATION}.read_limb */
EIF_TYPED_VALUE F60_1084 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "read_limb";
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
	
	RTEAA(l_feature_name, 59, Current, 0, 2, 1135);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1135);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 59, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	uu4_1 = tu4_2;
	tu4_1 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(3);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	uu4_1 = tu4_2;
	tu4_1 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = arg2;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
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

/* {LIMB_MANIPULATION}.read_limb_be */
EIF_TYPED_VALUE F60_1085 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "read_limb_be";
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
	
	RTEAA(l_feature_name, 59, Current, 0, 2, 1116);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1116);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 59, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = arg2;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	uu4_1 = tu4_2;
	tu4_1 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(3);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	uu4_1 = tu4_2;
	tu4_1 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_or(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
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

/* {LIMB_MANIPULATION}.udiv_qrnnd */
void F60_1086 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "udiv_qrnnd";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_n4
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
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_n4 = * (EIF_NATURAL_32 *) arg5x.it_r;
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
	RTLU(SK_UINT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	
	RTEAA(l_feature_name, 59, Current, 7, 5, 1117);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1117);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 59, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 59, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d /= 0", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg5 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n1 < d", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 < arg5), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu4_1 = eif_bit_shift_right(arg5,ui4_1);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
	tu4_1 = eif_bit_and(arg5,uu4_1);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) (arg3 / loc1);
	RTHOOK(6);
	RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
	loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) (arg3 - (EIF_NATURAL_32) (loc3 * loc1));
	RTHOOK(7);
	RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
	loc7 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc3 * loc2);
	RTHOOK(8);
	RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu4_1 = eif_bit_shift_right(arg4,ui4_1);
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_or(((EIF_NATURAL_32) (loc5 * (EIF_NATURAL_32) ((EIF_INTEGER_32) 65536L))),uu4_1);
	loc5 = (EIF_NATURAL_32) tu4_2;
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc5 < loc7)) {
		RTHOOK(10);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		loc3 -= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(11);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		loc5 += arg5;
		RTHOOK(12);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 >= arg5) && (EIF_BOOLEAN) (loc5 < loc7))) {
			RTHOOK(13);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			loc3 -= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(14);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			loc5 += arg5;
		}
	}
	RTHOOK(15);
	RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
	loc5 -= loc7;
	RTHOOK(16);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc5 / loc1);
	RTHOOK(17);
	RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
	loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc5 - (EIF_NATURAL_32) (loc4 * loc1));
	RTHOOK(18);
	RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
	loc7 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc4 * loc2);
	RTHOOK(19);
	RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
	tu4_1 = eif_bit_and(arg4,uu4_1);
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_or(((EIF_NATURAL_32) (loc6 * (EIF_NATURAL_32) ((EIF_INTEGER_32) 65536L))),uu4_1);
	loc6 = (EIF_NATURAL_32) tu4_2;
	RTHOOK(20);
	if ((EIF_BOOLEAN) (loc6 < loc7)) {
		RTHOOK(21);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		loc4 -= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(22);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		loc6 += arg5;
		RTHOOK(23);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc6 >= arg5) && (EIF_BOOLEAN) (loc6 < loc7))) {
			RTHOOK(24);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			loc4 -= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(25);
			RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
			loc6 += arg5;
		}
	}
	RTHOOK(26);
	RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
	loc6 -= loc7;
	RTHOOK(27);
	uu4_1 = loc4;
	tu4_1 = eif_bit_or(((EIF_NATURAL_32) (loc3 * (EIF_NATURAL_32) ((EIF_INTEGER_32) 65536L))),uu4_1);
	
	eif_put_natural_32_item(RTCW(arg1),1,tu4_1);
	RTHOOK(28);
	
	eif_put_natural_32_item(RTCW(arg2),1,loc6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {LIMB_MANIPULATION}.limb_inverse */
EIF_TYPED_VALUE F60_1087 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "limb_inverse";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 59, Current, 2, 1, 1118);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1118);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000FF, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF80000FF, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	tu4_1 = eif_bit_not(arg1);
	uu4_1 = tu4_1;
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1031, dtype))(Current)).it_n4);
	uu4_2 = tu4_2;
	uu4_3 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1040, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x);
	RTHOOK(4);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = eif_natural_32_item(RTCW(loc1),1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ur1
#undef ur2
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef arg1
}

/* {LIMB_MANIPULATION}.modlimb_invert */
EIF_TYPED_VALUE F60_1088 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "modlimb_invert";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 59, Current, 0, 1, 1119);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1119);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("limb_a.bit_test (0)", EX_PRE);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tb1 = eif_bit_test(EIF_NATURAL_32,arg1,ui4_1);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
	tu4_1 = eif_bit_and(((EIF_NATURAL_32) (arg1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L))),uu4_1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = tu1_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1043, dtype))(Current, uu1_1x)).it_n1);
	RTNHOOK(2,1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(3);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 2L) * Result) - (EIF_NATURAL_32) ((EIF_NATURAL_32) (Result * Result) * arg1));
	RTHOOK(4);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 2L) * Result) - (EIF_NATURAL_32) ((EIF_NATURAL_32) (Result * Result) * arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef uu1_1
#undef arg1
}

/* {LIMB_MANIPULATION}.modlimb_invert_table */
EIF_TYPED_VALUE F60_1089 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "modlimb_invert_table";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 59, Current, 0, 1, 1120);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1120);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("in <= 0x7f", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	switch (arg1) {
		case 0U:
			RTHOOK(4);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
			break;
		case 1U:
			RTHOOK(5);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 171L);
			break;
		case 2U:
			RTHOOK(6);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 205L);
			break;
		case 3U:
			RTHOOK(7);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 183L);
			break;
		case 4U:
			RTHOOK(8);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 57L);
			break;
		case 5U:
			RTHOOK(9);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 163L);
			break;
		case 6U:
			RTHOOK(10);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 197L);
			break;
		case 7U:
			RTHOOK(11);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 239L);
			break;
		case 8U:
			RTHOOK(12);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 241L);
			break;
		case 9U:
			RTHOOK(13);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 27L);
			break;
		case 10U:
			RTHOOK(14);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 61L);
			break;
		case 11U:
			RTHOOK(15);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 167L);
			break;
		case 12U:
			RTHOOK(16);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 41L);
			break;
		case 13U:
			RTHOOK(17);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 19L);
			break;
		case 14U:
			RTHOOK(18);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 53L);
			break;
		case 15U:
			RTHOOK(19);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 223L);
			break;
		case 16U:
			RTHOOK(20);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 225L);
			break;
		case 17U:
			RTHOOK(21);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 139L);
			break;
		case 18U:
			RTHOOK(22);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 173L);
			break;
		case 19U:
			RTHOOK(23);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 151L);
			break;
		case 20U:
			RTHOOK(24);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 25L);
			break;
		case 21U:
			RTHOOK(25);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 131L);
			break;
		case 22U:
			RTHOOK(26);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 165L);
			break;
		case 23U:
			RTHOOK(27);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 207L);
			break;
		case 24U:
			RTHOOK(28);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 209L);
			break;
		case 25U:
			RTHOOK(29);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 251L);
			break;
		case 26U:
			RTHOOK(30);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 29L);
			break;
		case 27U:
			RTHOOK(31);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 135L);
			break;
		case 28U:
			RTHOOK(32);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 9L);
			break;
		case 29U:
			RTHOOK(33);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 244L);
			break;
		case 30U:
			RTHOOK(34);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 21L);
			break;
		case 31U:
			RTHOOK(35);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 191L);
			break;
		case 32U:
			RTHOOK(36);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 193L);
			break;
		case 33U:
			RTHOOK(37);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 107L);
			break;
		case 34U:
			RTHOOK(38);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 141L);
			break;
		case 35U:
			RTHOOK(39);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 119L);
			break;
		case 36U:
			RTHOOK(40);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 249L);
			break;
		case 37U:
			RTHOOK(41);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 99L);
			break;
		case 38U:
			RTHOOK(42);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 133L);
			break;
		case 39U:
			RTHOOK(43);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 175L);
			break;
		case 40U:
			RTHOOK(44);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 177L);
			break;
		case 41U:
			RTHOOK(45);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 219L);
			break;
		case 42U:
			RTHOOK(46);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 253L);
			break;
		case 43U:
			RTHOOK(47);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 103L);
			break;
		case 44U:
			RTHOOK(48);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 233L);
			break;
		case 45U:
			RTHOOK(49);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 211L);
			break;
		case 46U:
			RTHOOK(50);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 245L);
			break;
		case 47U:
			RTHOOK(51);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 159L);
			break;
		case 48U:
			RTHOOK(52);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 161L);
			break;
		case 49U:
			RTHOOK(53);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 75L);
			break;
		case 50U:
			RTHOOK(54);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 109L);
			break;
		case 51U:
			RTHOOK(55);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 87L);
			break;
		case 52U:
			RTHOOK(56);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 217L);
			break;
		case 53U:
			RTHOOK(57);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 67L);
			break;
		case 54U:
			RTHOOK(58);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 101L);
			break;
		case 55U:
			RTHOOK(59);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 143L);
			break;
		case 56U:
			RTHOOK(60);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 145L);
			break;
		case 57U:
			RTHOOK(61);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 187L);
			break;
		case 58U:
			RTHOOK(62);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 221L);
			break;
		case 59U:
			RTHOOK(63);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 71L);
			break;
		case 60U:
			RTHOOK(64);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 201L);
			break;
		case 61U:
			RTHOOK(65);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 179L);
			break;
		case 62U:
			RTHOOK(66);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 213L);
			break;
		case 63U:
			RTHOOK(67);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L);
			break;
		case 64U:
			RTHOOK(68);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 129L);
			break;
		case 65U:
			RTHOOK(69);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 43L);
			break;
		case 66U:
			RTHOOK(70);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 77L);
			break;
		case 67U:
			RTHOOK(71);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 55L);
			break;
		case 68U:
			RTHOOK(72);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 185L);
			break;
		case 69U:
			RTHOOK(73);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 35L);
			break;
		case 70U:
			RTHOOK(74);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 69L);
			break;
		case 71U:
			RTHOOK(75);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 111L);
			break;
		case 72U:
			RTHOOK(76);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 113L);
			break;
		case 73U:
			RTHOOK(77);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 155L);
			break;
		case 74U:
			RTHOOK(78);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 189L);
			break;
		case 75U:
			RTHOOK(79);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 39L);
			break;
		case 76U:
			RTHOOK(80);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 169L);
			break;
		case 77U:
			RTHOOK(81);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 147L);
			break;
		case 78U:
			RTHOOK(82);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 181L);
			break;
		case 79U:
			RTHOOK(83);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 95L);
			break;
		case 80U:
			RTHOOK(84);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 97L);
			break;
		case 81U:
			RTHOOK(85);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 11L);
			break;
		case 82U:
			RTHOOK(86);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 45L);
			break;
		case 83U:
			RTHOOK(87);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 23L);
			break;
		case 84U:
			RTHOOK(88);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 153L);
			break;
		case 85U:
			RTHOOK(89);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 3L);
			break;
		case 86U:
			RTHOOK(90);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 37L);
			break;
		case 87U:
			RTHOOK(91);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 79L);
			break;
		case 88U:
			RTHOOK(92);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 81L);
			break;
		case 89U:
			RTHOOK(93);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
			break;
		case 90U:
			RTHOOK(94);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
			break;
		case 91U:
			RTHOOK(95);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 7L);
			break;
		case 92U:
			RTHOOK(96);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 137L);
			break;
		case 93U:
			RTHOOK(97);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 115L);
			break;
		case 94U:
			RTHOOK(98);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 149L);
			break;
		case 95U:
			RTHOOK(99);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
			break;
		case 96U:
			RTHOOK(100);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 65L);
			break;
		case 97U:
			RTHOOK(101);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 235L);
			break;
		case 98U:
			RTHOOK(102);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 13L);
			break;
		case 99U:
			RTHOOK(103);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 247L);
			break;
		case 100U:
			RTHOOK(104);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 121L);
			break;
		case 101U:
			RTHOOK(105);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 227L);
			break;
		case 102U:
			RTHOOK(106);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 5L);
			break;
		case 103U:
			RTHOOK(107);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 47L);
			break;
		case 104U:
			RTHOOK(108);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 49L);
			break;
		case 105U:
			RTHOOK(109);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 91L);
			break;
		case 106U:
			RTHOOK(110);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 125L);
			break;
		case 107U:
			RTHOOK(111);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 231L);
			break;
		case 108U:
			RTHOOK(112);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 105L);
			break;
		case 109U:
			RTHOOK(113);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 83L);
			break;
		case 110U:
			RTHOOK(114);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 117L);
			break;
		case 111U:
			RTHOOK(115);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 31L);
			break;
		case 112U:
			RTHOOK(116);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 33L);
			break;
		case 113U:
			RTHOOK(117);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 203L);
			break;
		case 114U:
			RTHOOK(118);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 237L);
			break;
		case 115U:
			RTHOOK(119);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 215L);
			break;
		case 116U:
			RTHOOK(120);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 89L);
			break;
		case 117U:
			RTHOOK(121);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 195L);
			break;
		case 118U:
			RTHOOK(122);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 229L);
			break;
		case 119U:
			RTHOOK(123);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 15L);
			break;
		case 120U:
			RTHOOK(124);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 17L);
			break;
		case 121U:
			RTHOOK(125);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 59L);
			break;
		case 122U:
			RTHOOK(126);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 93L);
			break;
		case 123U:
			RTHOOK(127);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 199L);
			break;
		case 124U:
			RTHOOK(128);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 73L);
			break;
		case 125U:
			RTHOOK(129);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 51L);
			break;
		case 126U:
			RTHOOK(130);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 85L);
			break;
		case 127U:
			RTHOOK(131);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(132);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {LIMB_MANIPULATION}.bit_index_to_limb_index */
EIF_TYPED_VALUE F60_1090 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_index_to_limb_index";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 59, Current, 0, 1, 1121);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1121);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ti4_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {LIMB_MANIPULATION}.umul_ppmm */
void F60_1091 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "umul_ppmm";
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_NATURAL_64 tu8_1;
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
	RTLU(SK_UINT64, &loc1);
	
	RTEAA(l_feature_name, 59, Current, 1, 4, 1122);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1122);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 59, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 59, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x3C000000, 1, 0); /* loc1 */
	uu4_1 = arg3;
	uu4_2 = arg4;
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1049, dtype))(Current, uu4_1x, uu4_2x)).it_n8);
	loc1 = (EIF_NATURAL_64) tu8_1;
	RTHOOK(2);
	tu4_1 = (EIF_NATURAL_32) loc1;
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg2))(arg2, uu4_1x);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tu8_1 = eif_bit_shift_right(loc1,ui4_1);
	tu4_1 = (EIF_NATURAL_32) tu8_1;
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg1))(arg1, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {LIMB_MANIPULATION}.bits_to_limbs */
EIF_TYPED_VALUE F60_1092 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bits_to_limbs";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 59, Current, 0, 1, 1123);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1123);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ti4_1) - ((EIF_INTEGER_32) 1L)) / ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {LIMB_MANIPULATION}.bits_top_limb */
EIF_TYPED_VALUE F60_1093 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bits_top_limb";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 59, Current, 0, 1, 1124);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1124);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ti4_1) - ((EIF_INTEGER_32) 1L)) % ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {LIMB_MANIPULATION}.pow2_p */
EIF_TYPED_VALUE F60_1094 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "pow2_p";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
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
	
	RTEAA(l_feature_name, 59, Current, 0, 1, 1125);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1125);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	uu4_1 = (EIF_NATURAL_32) (arg1 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
	tu4_1 = eif_bit_and(arg1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uu4_1
#undef arg1
}

/* {LIMB_MANIPULATION}.limb_multiply */
EIF_TYPED_VALUE F60_1095 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "limb_multiply";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 59, Current, 0, 2, 1126);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(59, Current, 1126);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	tu8_1 = (EIF_NATURAL_64) arg1;
	tu8_2 = (EIF_NATURAL_64) arg2;
	Result = (EIF_NATURAL_64) (EIF_NATURAL_64) (tu8_1 * tu8_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
#undef arg2
#undef arg1
}

void EIF_Minit60 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
