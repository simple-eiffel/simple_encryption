/*
 * Code for class ROTATE_FACILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F46_837(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F46_838(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit46(void);

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

/* {ROTATE_FACILITIES}.rotate_right_32 */
EIF_TYPED_VALUE F46_837 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "rotate_right_32";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 45, Current, 0, 2, 893);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(45, Current, 893);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("count_too_small", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("count_too_big", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 32L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = arg2;
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - arg2);
	tu4_2 = eif_bit_shift_left(arg1,ui4_1);
	uu4_1 = tu4_2;
	tu4_3 = eif_bit_or(tu4_1,uu4_1);
	Result = (EIF_NATURAL_32) tu4_3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("rotate_definition", EX_POST);
		ui4_1 = arg2;
		tu4_1 = eif_bit_shift_right(arg1,ui4_1);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - arg2);
		tu4_2 = eif_bit_shift_left(arg1,ui4_1);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_or(tu4_1,uu4_1);
		if ((EIF_BOOLEAN)(Result == tu4_3)) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {ROTATE_FACILITIES}.rotate_left_32 */
EIF_TYPED_VALUE F46_838 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "rotate_left_32";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 45, Current, 0, 2, 894);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(45, Current, 894);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("count_too_small", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("count_too_big", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 32L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = arg2;
	tu4_1 = eif_bit_shift_left(arg1,ui4_1);
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - arg2);
	tu4_2 = eif_bit_shift_right(arg1,ui4_1);
	uu4_1 = tu4_2;
	tu4_3 = eif_bit_or(tu4_1,uu4_1);
	Result = (EIF_NATURAL_32) tu4_3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("rotate_definition", EX_POST);
		ui4_1 = arg2;
		tu4_1 = eif_bit_shift_left(arg1,ui4_1);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) - arg2);
		tu4_2 = eif_bit_shift_right(arg1,ui4_1);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_or(tu4_1,uu4_1);
		if ((EIF_BOOLEAN)(Result == tu4_3)) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

void EIF_Minit46 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
