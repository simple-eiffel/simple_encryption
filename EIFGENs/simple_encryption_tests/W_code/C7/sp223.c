/*
 * Code for class SPECIAL_GCD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F223_4186(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4187(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4188(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4189(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4190(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4191(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4192(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4193(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4194(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F223_4195(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4196(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4197(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4198(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F223_4199(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F223_4200(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit223(void);

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

/* {SPECIAL_GCD}.find_a */
EIF_TYPED_VALUE F223_4186 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "find_a";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	
	RTEAA(l_feature_name, 222, Current, 7, 2, 7145);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7145);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	loc2 = (EIF_NATURAL_32) arg1;
	RTHOOK(2);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	loc3 = (EIF_NATURAL_32) arg2;
	RTHOOK(3);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 0L) - loc2);
	RTHOOK(4);
	RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
	tu4_1 = eif_bit_not(loc3);
	loc5 = (EIF_NATURAL_32) tu4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc5 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1023, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 - loc1);
		tb1 = eif_bit_test(EIF_NATURAL_32,loc5,ui4_1);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(7);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			uu4_1 = loc5;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 -= loc1;
			RTHOOK(9);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 += loc6;
			RTHOOK(10);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			ui4_1 = loc6;
			tu4_1 = eif_bit_shift_left(loc5,ui4_1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - loc6);
			tu4_2 = eif_bit_shift_right(loc4,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc5 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(11);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ui4_1 = loc6;
			tu4_1 = eif_bit_shift_left(loc4,ui4_1);
			loc4 = (EIF_NATURAL_32) tu4_1;
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(13);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > loc5) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == loc5) && (EIF_BOOLEAN) (loc2 >= loc4)))) {
					RTHOOK(14);
					RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
					ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (loc2 < loc4);
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc3 -= (EIF_NATURAL_32) (loc5 + tu4_1);
					RTHOOK(15);
					RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
					loc2 -= loc4;
				}
				RTHOOK(16);
				RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_1 = eif_bit_shift_right(loc4,ui4_1);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
				tu4_2 = eif_bit_shift_left(loc5,ui4_1);
				uu4_1 = tu4_2;
				tu4_3 = eif_bit_or(tu4_1,uu4_1);
				loc4 = (EIF_NATURAL_32) tu4_3;
				RTHOOK(17);
				RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_1 = eif_bit_shift_right(loc5,ui4_1);
				loc5 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(18);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6--;
			}
		}
		RTHOOK(19);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > loc5) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == loc5) && (EIF_BOOLEAN) (loc2 >= loc4)))) {
			RTHOOK(20);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (loc2 < loc4);
			tu4_1 = (EIF_NATURAL_32) ti4_1;
			loc3 -= (EIF_NATURAL_32) (loc5 + tu4_1);
			RTHOOK(21);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			loc2 -= loc4;
		}
		RTHOOK(22);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		loc7 = (EIF_NATURAL_32) loc3;
		RTHOOK(23);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		loc3 = (EIF_NATURAL_32) loc5;
		RTHOOK(24);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		loc5 = (EIF_NATURAL_32) loc7;
		RTHOOK(25);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		loc7 = (EIF_NATURAL_32) loc2;
		RTHOOK(26);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) loc4;
		RTHOOK(27);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		loc4 = (EIF_NATURAL_32) loc7;
	}
	RTHOOK(28);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	Result = (EIF_NATURAL_32) loc4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {SPECIAL_GCD}.gcd_2 */
EIF_TYPED_VALUE F223_4187 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "gcd_2";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
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
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 222, Current, 6, 4, 7146);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7146);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 222, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(3);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
	loc3 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
	loc4 = (EIF_NATURAL_32) tu4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == loc4) || (EIF_BOOLEAN)(loc1 == loc3))) break;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc4)) {
			RTHOOK(7);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (loc1 < loc3);
			tu4_1 = (EIF_NATURAL_32) ti4_1;
			loc2 -= (EIF_NATURAL_32) (loc4 + tu4_1);
			RTHOOK(8);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			loc1 -= loc3;
			RTHOOK(9);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			uu4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(10);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - loc6);
			tu4_1 = eif_bit_shift_left(loc2,ui4_1);
			ui4_1 = loc6;
			tu4_2 = eif_bit_shift_right(loc1,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc1 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(11);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			ui4_1 = loc6;
			tu4_1 = eif_bit_shift_right(loc2,ui4_1);
			loc2 = (EIF_NATURAL_32) tu4_1;
		} else {
			RTHOOK(12);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (loc3 < loc1);
			tu4_1 = (EIF_NATURAL_32) ti4_1;
			loc4 -= (EIF_NATURAL_32) (loc2 + tu4_1);
			RTHOOK(13);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			loc3 -= loc1;
			RTHOOK(14);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			uu4_1 = loc3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(15);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - loc6);
			tu4_1 = eif_bit_shift_left(loc4,ui4_1);
			ui4_1 = loc6;
			tu4_2 = eif_bit_shift_right(loc3,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc3 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(16);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ui4_1 = loc6;
			tu4_1 = eif_bit_shift_right(loc4,ui4_1);
			loc4 = (EIF_NATURAL_32) tu4_1;
		}
	}
	RTHOOK(17);
	uu4_1 = loc3;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(18);
	uu4_1 = loc4;
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(19);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(loc4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1);
	RTHOOK(20);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == loc4) && (EIF_BOOLEAN)(loc1 == loc3))) {
		RTHOOK(21);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) loc5;
	} else {
		RTHOOK(22);
		if ((EIF_BOOLEAN)(loc1 == loc3)) {
			RTHOOK(23);
			if ((EIF_BOOLEAN) (loc4 > loc4)) {
				RTHOOK(24);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc2 - loc4);
			} else {
				RTHOOK(25);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc4 - loc2);
			}
		} else {
			RTHOOK(26);
			if ((EIF_BOOLEAN) (loc1 > loc3)) {
				RTHOOK(27);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc1 - loc3);
			} else {
				RTHOOK(28);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				loc3 -= loc1;
			}
		}
		RTHOOK(29);
		ur1 = arg1;
		ui4_1 = arg2;
		ui4_2 = loc5;
		uu4_1 = loc3;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3419, dtype))(Current, ur1x, ui4_1x, ui4_2x, uu4_1x)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(30);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_GCD}.gcd */
EIF_TYPED_VALUE F223_4188 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "gcd";
	RTEX;
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,ur3);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 222, Current, 0, 8, 7147);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7147);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 222, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 222, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ur1 = arg1;
	ui4_1 = arg2;
	ur2 = arg3;
	ui4_2 = arg4;
	ui4_3 = arg5;
	ur3 = arg6;
	ui4_4 = arg7;
	ui4_5 = arg8;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3420, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result > 0", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("Result <= ap_count", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("Result <= n", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg8)) {
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
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_GCD}.gcd_1 */
EIF_TYPED_VALUE F223_4189 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "gcd_1";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_BOOL, &loc7);
	RTLU(SK_BOOL, &loc8);
	
	RTEAA(l_feature_name, 222, Current, 8, 4, 7148);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7148);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("size >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("vlimb_a /= 0", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
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
	RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
	loc6 = (EIF_NATURAL_32) arg4;
	RTHOOK(5);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	ui4_1 = arg2;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	uu4_1 = loc6;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
	ui4_1 = loc3;
	tu4_1 = eif_bit_shift_right(loc6,ui4_1);
	loc6 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(10);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			uu4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(11);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ui4_1 = loc4;
			ti4_1 = eif_min_int32 (loc3,ui4_1);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(12);
		ur1 = arg1;
		ui4_1 = arg2;
		ui4_2 = arg3;
		uu4_1 = loc6;
		ur2 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1959, dtype))(Current, ur1x, ui4_1x, ui4_2x, uu4_1x, ur2x);
		RTHOOK(13);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc1))(loc1)).it_n4);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(14);
		if ((EIF_BOOLEAN)(loc2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(15);
			RTDBGAL(8, 0x04000000, 1, 0); /* loc8 */
			loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(16);
			RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
			loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(17);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		uu4_1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(18);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = loc4;
		tu4_1 = eif_bit_shift_right(loc2,ui4_1);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ui4_1 = loc4;
		ti4_1 = eif_min_int32 (loc3,ui4_1);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(20);
		if ((EIF_BOOLEAN) (loc6 > loc2)) {
			RTHOOK(21);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			loc5 = (EIF_NATURAL_32) loc2;
			RTHOOK(22);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			loc2 = (EIF_NATURAL_32) loc6;
			RTHOOK(23);
			RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
			loc6 = (EIF_NATURAL_32) loc5;
		}
		RTHOOK(24);
		ui4_1 = ((EIF_INTEGER_32) 16L);
		tu4_1 = eif_bit_shift_right(loc2,ui4_1);
		if ((EIF_BOOLEAN) (tu4_1 > loc6)) {
			RTHOOK(25);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			loc2 %= loc6;
			RTHOOK(26);
			if ((EIF_BOOLEAN)(loc2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(27);
				RTDBGAL(8, 0x04000000, 1, 0); /* loc8 */
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(28);
				RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
				loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTHOOK(29);
	if ((EIF_BOOLEAN) !loc8) {
		for (;;) {
			RTHOOK(30);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == loc6) && (EIF_BOOLEAN) !loc7)) break;
			RTHOOK(31);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc6) || loc7)) {
				RTHOOK(32);
				if ((EIF_BOOLEAN) !loc7) {
					RTHOOK(33);
					RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
					loc2 -= loc6;
				}
				RTHOOK(34);
				if ((EIF_BOOLEAN) !loc7) {
					RTHOOK(35);
					RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tu4_1 = eif_bit_shift_right(loc2,ui4_1);
					loc2 = (EIF_NATURAL_32) tu4_1;
				}
				for (;;) {
					RTHOOK(36);
					tb1 = '\0';
					if ((EIF_BOOLEAN) !loc7) {
						ui4_1 = ((EIF_INTEGER_32) 0L);
						tb2 = eif_bit_test(EIF_NATURAL_32,loc2,ui4_1);
						tb1 = tb2;
					}
					if (tb1) break;
					RTHOOK(37);
					if ((EIF_BOOLEAN) !loc7) {
						RTHOOK(38);
						RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
						ui4_1 = ((EIF_INTEGER_32) 1L);
						tu4_1 = eif_bit_shift_right(loc2,ui4_1);
						loc2 = (EIF_NATURAL_32) tu4_1;
					} else {
						RTHOOK(39);
						RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
						loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
			} else {
				RTHOOK(40);
				RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
				loc6 -= loc2;
				RTHOOK(41);
				RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_1 = eif_bit_shift_right(loc6,ui4_1);
				loc6 = (EIF_NATURAL_32) tu4_1;
				for (;;) {
					RTHOOK(42);
					ui4_1 = ((EIF_INTEGER_32) 0L);
					tb2 = eif_bit_test(EIF_NATURAL_32,loc6,ui4_1);
					if (tb2) break;
					RTHOOK(43);
					RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tu4_1 = eif_bit_shift_right(loc6,ui4_1);
					loc6 = (EIF_NATURAL_32) tu4_1;
				}
			}
		}
	}
	RTHOOK(44);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = loc3;
	tu4_1 = eif_bit_shift_left(loc6,ui4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_GCD}.basic_gcd */
EIF_TYPED_VALUE F223_4190 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "basic_gcd";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc21 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc22 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc24 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc25 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc26 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc27 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc28 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc29 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc30 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc31 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc32 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc33 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc34 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc35 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc36 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc37 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc38 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc39 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,loc39);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc31);
	RTLR(7,loc32);
	RTLR(8,loc15);
	RTLR(9,loc19);
	RTLR(10,loc1);
	RTLR(11,loc10);
	RTLR(12,loc13);
	RTLR(13,ur1);
	RTLR(14,ur2);
	RTLR(15,ur3);
	RTLR(16,loc23);
	RTLR(17,loc6);
	RTLR(18,ur4);
	RTLIU(19);
	RTLU (SK_INT32, &Result);
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
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_INT32, &loc20);
	RTLU(SK_INT32, &loc21);
	RTLU(SK_INT32, &loc22);
	RTLU(SK_REF, &loc23);
	RTLU(SK_INT32, &loc24);
	RTLU(SK_UINT32, &loc25);
	RTLU(SK_UINT32, &loc26);
	RTLU(SK_UINT32, &loc27);
	RTLU(SK_UINT32, &loc28);
	RTLU(SK_UINT32, &loc29);
	RTLU(SK_UINT32, &loc30);
	RTLU(SK_REF, &loc31);
	RTLU(SK_REF, &loc32);
	RTLU(SK_UINT32, &loc33);
	RTLU(SK_UINT32, &loc34);
	RTLU(SK_UINT32, &loc35);
	RTLU(SK_INT32, &loc36);
	RTLU(SK_BOOL, &loc37);
	RTLU(SK_BOOL, &loc38);
	RTLU(SK_REF, &loc39);
	
	RTEAA(l_feature_name, 222, Current, 39, 8, 7149);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7149);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 222, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg6, 222, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("usize_a >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("vsize_a >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg8 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("usize_a >= vsize_a", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= arg8), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("vp_a.valid_index (vp_offset_a)", EX_PRE);
		ui4_1 = arg7;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg6))(arg6, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("vp_a.valid_index (vp_offset_a + vsize_a - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 + arg8) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg6))(arg6, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("up_a.valid_index (up_offset_a)", EX_PRE);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(7);
		RTCT("up_a.valid_index (up_offset_a + usize_a - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg5) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(8);
		RTCT("vp_a [vp_offset_a].bit_test (0)", EX_PRE);
		ui4_1 = arg7;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tb1 = eif_bit_test(EIF_NATURAL_32,tu4_1,ui4_1);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(9);
		RTCT("up_a [up_offset_a + usize_a - 1] /= 0", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg5) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		RTTE((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(10);
		RTCT("vp_a [vp_offset_a + vsize_a - 1] /= 0", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 + arg8) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
		RTTE((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(11);
	RTDBGAL(39, 0xF80001F0, 0, 0); /* loc39 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(11,1);
	loc39 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	RTDBGAL(31, 0xF80001F0, 0, 0); /* loc31 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(12,1);
	loc31 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	RTDBGAL(32, 0xF80001F0, 0, 0); /* loc32 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(13,1);
	loc32 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	RTDBGAL(15, 0xF800026B, 0, 0); /* loc15 */
	loc15 = (EIF_REFERENCE) arg3;
	RTHOOK(15);
	RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
	loc16 = (EIF_INTEGER_32) arg4;
	RTHOOK(16);
	RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
	loc17 = (EIF_INTEGER_32) arg5;
	RTHOOK(17);
	RTDBGAL(19, 0xF800026B, 0, 0); /* loc19 */
	loc19 = (EIF_REFERENCE) arg6;
	RTHOOK(18);
	RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
	loc20 = (EIF_INTEGER_32) arg7;
	RTHOOK(19);
	RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
	loc21 = (EIF_INTEGER_32) arg8;
	RTHOOK(20);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	loc1 = (EIF_REFERENCE) loc19;
	RTHOOK(21);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) loc20;
	RTHOOK(22);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) loc21;
	RTHOOK(23);
	if ((EIF_BOOLEAN) (loc21 >= ((EIF_INTEGER_32) 5L))) {
		RTHOOK(24);
		RTDBGAL(10, 0xF800026B, 0, 0); /* loc10 */
		loc10 = (EIF_REFERENCE) loc15;
		RTHOOK(25);
		RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
		loc11 = (EIF_INTEGER_32) loc16;
		RTHOOK(26);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12 = (EIF_INTEGER_32) loc17;
		RTHOOK(27);
		RTDBGAL(13, 0xF800026B, 0, 0); /* loc13 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) (loc17 + ((EIF_INTEGER_32) 2L));
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
		loc13 = (EIF_REFERENCE) tr1;
		RTHOOK(28);
		ur1 = loc10;
		ui4_1 = loc11;
		ui4_2 = loc14;
		ui4_3 = loc17;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc13))(loc13, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(29);
		RTDBGAL(15, 0xF800026B, 0, 0); /* loc15 */
		loc15 = (EIF_REFERENCE) loc13;
		RTHOOK(30);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc16 + loc17) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(31);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc17 * ti4_1) - loc9);
		RTHOOK(32);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc20 + loc21) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc19))(loc19, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
		loc8 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(33);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc21 * ti4_1) - loc8);
		RTHOOK(34);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 - loc8) + ((EIF_INTEGER_32) 1L));
		RTHOOK(35);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) (loc16 + loc17);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc15))(loc15, uu4_1x, ui4_1x);
		RTHOOK(36);
		RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
		loc17++;
		RTHOOK(37);
		RTDBGAL(25, 0x38000000, 1, 0); /* loc25 */
		ur1 = loc15;
		ui4_1 = loc16;
		ur2 = loc15;
		ui4_2 = loc16;
		ui4_3 = loc17;
		ur3 = loc19;
		ui4_4 = loc20;
		ui4_5 = loc21;
		ui4_6 = loc9;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1947, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ui4_6x)).it_n4);
		loc25 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(38);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		loc9 /= ti4_1;
		RTHOOK(39);
		RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
		loc16 += loc9;
		RTHOOK(40);
		RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
		loc17 -= loc9;
		for (;;) {
			RTHOOK(41);
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc17 == ((EIF_INTEGER_32) 0L))) {
				ui4_1 = loc16;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
				tb1 = (EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
			}
			if (tb1) break;
			RTHOOK(42);
			RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
			loc16++;
			RTHOOK(43);
			RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
			loc17--;
		}
		RTHOOK(44);
		if ((EIF_BOOLEAN)(loc17 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(45);
			RTDBGAL(37, 0x04000000, 1, 0); /* loc37 */
			loc37 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(46);
			RTDBGAL(19, 0xF800026B, 0, 0); /* loc19 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = (EIF_INTEGER_32) (loc21 + ((EIF_INTEGER_32) 2L));
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
			RTNHOOK(46,1);
			loc19 = (EIF_REFERENCE) tr1;
			RTHOOK(47);
			RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
			loc20 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(48);
			ur1 = loc1;
			ui4_1 = loc2;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc21;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc19))(loc19, ur1x, ui4_1x, ui4_2x, ui4_3x);
			for (;;) {
				RTHOOK(49);
				if ((EIF_BOOLEAN)(loc17 == ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(50);
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc16 + loc17) - ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1023, dtype))(Current)).it_i4);
				ui4_1 = ti4_1;
				tb2 = eif_bit_test(EIF_NATURAL_32,tu4_1,ui4_1);
				if (tb2) {
					RTHOOK(51);
					ui4_1 = loc16;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
					uu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 0L) - tu4_1);
					ui4_1 = loc14;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc13))(loc13, uu4_1x, ui4_1x);
					RTHOOK(52);
					RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
					loc18 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					for (;;) {
						RTHOOK(53);
						if ((EIF_BOOLEAN) (loc18 >= loc17)) break;
						RTHOOK(54);
						ui4_1 = (EIF_INTEGER_32) (loc16 + loc18);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
						tu4_2 = eif_bit_not(tu4_1);
						uu4_1 = tu4_2;
						ui4_1 = (EIF_INTEGER_32) (loc14 + loc18);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc13))(loc13, uu4_1x, ui4_1x);
						RTHOOK(55);
						RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
						loc18++;
					}
					RTHOOK(56);
					RTDBGAL(15, 0xF800026B, 0, 0); /* loc15 */
					loc15 = (EIF_REFERENCE) loc13;
					RTHOOK(57);
					RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
					loc16 = (EIF_INTEGER_32) loc14;
				}
				RTHOOK(58);
				RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
				ur1 = loc15;
				ui4_1 = loc16;
				ui4_2 = loc17;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
				loc17 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(59);
				ui4_1 = loc16;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
				ui4_1 = ((EIF_INTEGER_32) 0L);
				tb2 = eif_bit_test(EIF_NATURAL_32,tu4_1,ui4_1);
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(60);
					RTDBGAL(22, 0x10000000, 1, 0); /* loc22 */
					ui4_1 = loc16;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
					uu4_1 = tu4_1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
					loc22 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(61);
					ur1 = loc13;
					ui4_1 = loc14;
					ur2 = loc15;
					ui4_2 = loc16;
					ui4_3 = loc17;
					ui4_4 = loc22;
					ur3 = RTCCL(loc39);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1055, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
					RTHOOK(62);
					RTDBGAL(25, 0x38000000, 1, 0); /* loc25 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc39))(loc39)).it_n4);
					loc25 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(63);
					RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
					ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + loc17) - ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc13))(loc13, ui4_1x)).it_n4);
					ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
					loc17 -= ti4_1;
				} else {
					RTHOOK(64);
					ur1 = loc15;
					ui4_1 = loc16;
					ui4_2 = loc14;
					ui4_3 = loc17;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc13))(loc13, ur1x, ui4_1x, ui4_2x, ui4_3x);
				}
				RTHOOK(65);
				RTDBGAL(23, 0xF800026B, 0, 0); /* loc23 */
				loc23 = (EIF_REFERENCE) loc13;
				RTHOOK(66);
				RTDBGAL(13, 0xF800026B, 0, 0); /* loc13 */
				loc13 = (EIF_REFERENCE) loc19;
				RTHOOK(67);
				RTDBGAL(19, 0xF800026B, 0, 0); /* loc19 */
				loc19 = (EIF_REFERENCE) loc23;
				RTHOOK(68);
				RTDBGAL(24, 0x10000000, 1, 0); /* loc24 */
				loc24 = (EIF_INTEGER_32) loc14;
				RTHOOK(69);
				RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
				loc14 = (EIF_INTEGER_32) loc20;
				RTHOOK(70);
				RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
				loc20 = (EIF_INTEGER_32) loc24;
				RTHOOK(71);
				RTDBGAL(24, 0x10000000, 1, 0); /* loc24 */
				loc24 = (EIF_INTEGER_32) loc17;
				RTHOOK(72);
				RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
				loc17 = (EIF_INTEGER_32) loc21;
				RTHOOK(73);
				RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
				loc21 = (EIF_INTEGER_32) loc24;
				RTHOOK(74);
				RTDBGAL(15, 0xF800026B, 0, 0); /* loc15 */
				loc15 = (EIF_REFERENCE) loc13;
				RTHOOK(75);
				RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
				loc16 = (EIF_INTEGER_32) loc14;
				RTHOOK(76);
				if ((EIF_BOOLEAN) (loc21 <= ((EIF_INTEGER_32) 2L))) {
					RTHOOK(77);
					RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
					loc17 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				} else {
					RTHOOK(78);
					RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
					loc9 = (EIF_INTEGER_32) loc8;
					RTHOOK(79);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc20 + loc21) - ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc19))(loc19, ui4_1x)).it_n4);
					uu4_1 = tu4_1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
					loc8 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(80);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc21 * ti4_1) - loc8);
					RTHOOK(81);
					RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
					loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 - loc8) + ((EIF_INTEGER_32) 1L));
					RTHOOK(82);
					if ((EIF_BOOLEAN) (loc9 > ((EIF_INTEGER_32) 16L))) {
						RTHOOK(83);
						uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
						ui4_1 = (EIF_INTEGER_32) (loc16 + loc17);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc15))(loc15, uu4_1x, ui4_1x);
						RTHOOK(84);
						RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
						loc17++;
						RTHOOK(85);
						RTDBGAL(25, 0x38000000, 1, 0); /* loc25 */
						ur1 = loc15;
						ui4_1 = loc16;
						ur2 = loc15;
						ui4_2 = loc16;
						ui4_3 = loc17;
						ur3 = loc19;
						ui4_4 = loc20;
						ui4_5 = loc21;
						ui4_6 = loc9;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1947, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ui4_6x)).it_n4);
						loc25 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(86);
						RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
						loc9 /= ti4_1;
						RTHOOK(87);
						RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
						loc16 += loc9;
						RTHOOK(88);
						RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
						loc17 -= loc9;
					} else {
						RTHOOK(89);
						RTDBGAL(30, 0x38000000, 1, 0); /* loc30 */
						ui4_1 = loc16;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
						uu4_1 = tu4_1;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1042, dtype))(Current, uu4_1x)).it_n4);
						loc30 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(90);
						RTDBGAL(28, 0x38000000, 1, 0); /* loc28 */
						ui4_1 = loc20;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc19))(loc19, ui4_1x)).it_n4);
						loc28 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 * loc30);
						RTHOOK(91);
						ur1 = RTCCL(loc31);
						ur2 = RTCCL(loc32);
						uu4_1 = loc28;
						ui4_1 = loc16;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
						uu4_2 = tu4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
						RTHOOK(92);
						RTDBGAL(29, 0x38000000, 1, 0); /* loc29 */
						ui4_1 = (EIF_INTEGER_32) (loc20 + ((EIF_INTEGER_32) 1L));
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc19))(loc19, ui4_1x)).it_n4);
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc31))(loc31)).it_n4);
						ui4_1 = (EIF_INTEGER_32) (loc16 + ((EIF_INTEGER_32) 1L));
						tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
						loc29 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 - tu4_2) - (EIF_NATURAL_32) (loc28 * tu4_3)) * loc30);
						RTHOOK(93);
						ur1 = loc15;
						ui4_1 = loc16;
						ur2 = loc15;
						ui4_2 = loc16;
						ui4_3 = loc17;
						uu4_1 = loc28;
						uu4_2 = loc29;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3416, dtype))(Current, uu4_1x, uu4_2x)).it_n4);
						uu4_1 = tu4_1;
						ur3 = RTCCL(loc39);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
						RTHOOK(94);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc39))(loc39)).it_n4);
						uu4_1 = tu4_1;
						ui4_1 = (EIF_INTEGER_32) (loc16 + loc17);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc15))(loc15, uu4_1x, ui4_1x);
						RTHOOK(95);
						RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
						loc17++;
						RTHOOK(96);
						RTDBGAL(33, 0x38000000, 1, 0); /* loc33 */
						ui4_1 = loc20;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc19))(loc19, ui4_1x)).it_n4);
						uu4_1 = tu4_1;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1042, dtype))(Current, uu4_1x)).it_n4);
						loc33 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(97);
						RTDBGAL(26, 0x38000000, 1, 0); /* loc26 */
						ui4_1 = loc16;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
						loc26 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 * loc33);
						RTHOOK(98);
						ur1 = RTCCL(loc31);
						ur2 = RTCCL(loc32);
						uu4_1 = loc26;
						ui4_1 = loc20;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc19))(loc19, ui4_1x)).it_n4);
						uu4_2 = tu4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
						RTHOOK(99);
						RTDBGAL(27, 0x38000000, 1, 0); /* loc27 */
						ui4_1 = (EIF_INTEGER_32) (loc16 + ((EIF_INTEGER_32) 1L));
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc31))(loc31)).it_n4);
						ui4_1 = (EIF_INTEGER_32) (loc20 + ((EIF_INTEGER_32) 1L));
						tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc19))(loc19, ui4_1x)).it_n4);
						uu4_1 = tu4_3;
						tu4_4 = eif_bit_and(loc26,uu4_1);
						uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
						tu4_3 = eif_bit_and((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_4),uu4_1);
						loc27 = (EIF_NATURAL_32) tu4_3;
						RTHOOK(100);
						uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
						ui4_1 = (EIF_INTEGER_32) (loc16 + loc17);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc15))(loc15, uu4_1x, ui4_1x);
						RTHOOK(101);
						RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
						loc17++;
						RTHOOK(102);
						if ((EIF_BOOLEAN)(loc27 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
							RTHOOK(103);
							ur1 = loc15;
							ui4_1 = loc16;
							ur2 = loc19;
							ui4_2 = loc20;
							ui4_3 = loc21;
							uu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 0L) - loc26);
							ur3 = RTCCL(loc39);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
							RTHOOK(104);
							RTDBGAL(34, 0x38000000, 1, 0); /* loc34 */
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc39))(loc39)).it_n4);
							loc34 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(105);
							ur1 = loc15;
							ui4_1 = (EIF_INTEGER_32) (loc16 + loc21);
							ur2 = loc15;
							ui4_2 = (EIF_INTEGER_32) (loc16 + loc21);
							ui4_3 = (EIF_INTEGER_32) (loc17 - loc21);
							uu4_1 = loc34;
							ur3 = RTCCL(loc39);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
							RTHOOK(106);
							RTDBGAL(25, 0x38000000, 1, 0); /* loc25 */
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc39))(loc39)).it_n4);
							loc25 = (EIF_NATURAL_32) tu4_1;
						} else {
							RTHOOK(107);
							ur1 = loc15;
							ui4_1 = loc16;
							ur2 = loc19;
							ui4_2 = loc20;
							ui4_3 = loc21;
							uu4_1 = loc26;
							ur3 = RTCCL(loc39);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1077, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
							RTHOOK(108);
							RTDBGAL(35, 0x38000000, 1, 0); /* loc35 */
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc39))(loc39)).it_n4);
							loc35 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(109);
							ur1 = loc15;
							ui4_1 = (EIF_INTEGER_32) (loc16 + loc21);
							ur2 = loc15;
							ui4_2 = (EIF_INTEGER_32) (loc16 + loc21);
							ui4_3 = (EIF_INTEGER_32) (loc17 - loc21);
							uu4_1 = loc35;
							ur3 = RTCCL(loc39);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
							RTHOOK(110);
							RTDBGAL(25, 0x38000000, 1, 0); /* loc25 */
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc39))(loc39)).it_n4);
							loc25 = (EIF_NATURAL_32) tu4_1;
						}
						RTHOOK(111);
						RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
						loc16 += ((EIF_INTEGER_32) 2L);
						RTHOOK(112);
						RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
						loc17 -= ((EIF_INTEGER_32) 2L);
					}
					for (;;) {
						RTHOOK(113);
						tb2 = '\01';
						if (!(EIF_BOOLEAN)(loc17 == ((EIF_INTEGER_32) 0L))) {
							ui4_1 = loc16;
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc15))(loc15, ui4_1x)).it_n4);
							tb2 = (EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
						}
						if (tb2) break;
						RTHOOK(114);
						RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
						loc16++;
						RTHOOK(115);
						RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
						loc17--;
					}
				}
			}
			RTHOOK(116);
			RTDBGAL(15, 0xF800026B, 0, 0); /* loc15 */
			loc15 = (EIF_REFERENCE) loc10;
			RTHOOK(117);
			RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
			loc16 = (EIF_INTEGER_32) loc11;
			RTHOOK(118);
			RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
			loc17 = (EIF_INTEGER_32) loc12;
			RTHOOK(119);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		}
	} else {
		RTHOOK(120);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTHOOK(121);
	if ((EIF_BOOLEAN) !loc37) {
		RTHOOK(122);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		ui4_1 = (EIF_INTEGER_32) (loc21 + ((EIF_INTEGER_32) 1L));
		ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc21),ui4_1);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(123);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc17 + ((EIF_INTEGER_32) 1L)) > loc5)) {
			RTHOOK(124);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc17 + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(125);
		RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
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
		RTNHOOK(125,1);
		loc6 = (EIF_REFERENCE) tr1;
		RTHOOK(126);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(127);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(128);
			RTDBGAL(38, 0x04000000, 1, 0); /* loc38 */
			loc38 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(129);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4--;
			RTHOOK(130);
			if ((EIF_BOOLEAN) (loc17 > loc21)) {
				RTHOOK(131);
				ur1 = loc6;
				ui4_1 = (EIF_INTEGER_32) (loc7 + loc21);
				ur2 = loc6;
				ui4_2 = loc7;
				ur3 = loc15;
				ui4_3 = loc16;
				ui4_4 = loc17;
				ur4 = loc19;
				ui4_5 = loc20;
				ui4_6 = loc21;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
				RTHOOK(132);
				RTDBGAL(36, 0x10000000, 1, 0); /* loc36 */
				loc36 = (EIF_INTEGER_32) loc21;
				RTHOOK(133);
				RTDBGAL(36, 0x10000000, 1, 0); /* loc36 */
				ur1 = loc6;
				ui4_1 = loc7;
				ui4_2 = loc36;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
				loc36 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(134);
				if ((EIF_BOOLEAN)(loc36 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(135);
					RTDBGAL(38, 0x04000000, 1, 0); /* loc38 */
					loc38 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(136);
					ur1 = loc6;
					ui4_1 = loc7;
					ui4_2 = loc16;
					ui4_3 = loc21;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc15))(loc15, ur1x, ui4_1x, ui4_2x, ui4_3x);
				}
			}
			RTHOOK(137);
			if ((EIF_BOOLEAN) !loc38) {
				RTHOOK(138);
				RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
				ur1 = loc19;
				ui4_1 = loc20;
				ur2 = loc15;
				ui4_2 = loc16;
				ur3 = loc19;
				ui4_3 = loc20;
				ui4_4 = loc21;
				ur4 = loc6;
				ui4_5 = loc7;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3428, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x)).it_i4);
				loc21 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(139);
			RTDBGAL(15, 0xF800026B, 0, 0); /* loc15 */
			loc15 = (EIF_REFERENCE) loc1;
			RTHOOK(140);
			RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
			loc16 = (EIF_INTEGER_32) loc2;
			RTHOOK(141);
			RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
			loc17 = (EIF_INTEGER_32) loc3;
		}
	}
	RTHOOK(142);
	if ((EIF_BOOLEAN)(loc19 != arg1)) {
		RTHOOK(143);
		ur1 = loc19;
		ui4_1 = loc20;
		ui4_2 = arg2;
		ui4_3 = loc21;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	}
	RTHOOK(144);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) loc21;
	if (RTAL & CK_ENSURE) {
		RTHOOK(145);
		RTCT("Result > 0", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(146);
		RTCT("Result <= usize_a", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(147);
		RTCT("Result <= vsize_a", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg8)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(148);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(49);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
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
#undef uu4_2
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_GCD}.ngcd_matrix1_vector */
EIF_TYPED_VALUE F223_4191 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "ngcd_matrix1_vector";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_r
#define arg8 arg8x.it_i4
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
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg7);
	RTLR(4,loc4);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLR(9,ur3);
	RTLIU(10);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 222, Current, 4, 8, 7150);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7150);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 222, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg5, 222, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg7, 222, l_feature_name, 7, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(4, 0xF80001F0, 0, 0); /* loc4 */
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
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	ur1 = arg3;
	ui4_1 = arg4;
	ui4_2 = arg8;
	ui4_3 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg7))(arg7, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(4);
	ur1 = arg3;
	ui4_1 = arg4;
	ur2 = arg3;
	ui4_2 = arg4;
	ui4_3 = loc3;
	ui4_4 = ((EIF_INTEGER_32) 3L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_4x)).it_n4);
	uu4_1 = tu4_1;
	ur3 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
	RTHOOK(5);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	ur1 = arg3;
	ui4_1 = arg4;
	ur2 = arg5;
	ui4_2 = arg6;
	ui4_3 = loc3;
	ui4_4 = ((EIF_INTEGER_32) 1L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_4x)).it_n4);
	uu4_1 = tu4_1;
	ur3 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1077, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
	RTHOOK(7);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	ur1 = arg5;
	ui4_1 = arg6;
	ur2 = arg5;
	ui4_2 = arg6;
	ui4_3 = loc3;
	ui4_4 = ((EIF_INTEGER_32) 0L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_4x)).it_n4);
	uu4_1 = tu4_1;
	ur3 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
	RTHOOK(9);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(10);
	ur1 = arg5;
	ui4_1 = arg6;
	ur2 = arg7;
	ui4_2 = arg8;
	ui4_3 = loc3;
	ui4_4 = ((EIF_INTEGER_32) 2L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_4x)).it_n4);
	uu4_1 = tu4_1;
	ur3 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1077, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
	RTHOOK(11);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(12);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc3) - ((EIF_INTEGER_32) 1L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg6 + loc3) - ((EIF_INTEGER_32) 1L));
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg5))(arg5, ui4_1x)).it_n4);
	uu4_1 = tu4_2;
	tu4_3 = eif_bit_or(tu4_1,uu4_1);
	ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_3 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
	loc3 -= ti4_1;
	RTHOOK(13);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) loc3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
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

/* {SPECIAL_GCD}.ngcd_subdiv_step */
EIF_TYPED_VALUE F223_4192 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x)
{
	GTCX
	char *l_feature_name = "ngcd_subdiv_step";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc9 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_r
#define arg10 arg10x.it_i4
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
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_i4 = * (EIF_INTEGER_32 *) arg10x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg4);
	RTLR(3,arg6);
	RTLR(4,arg9);
	RTLR(5,loc11);
	RTLR(6,Current);
	RTLR(7,tr1);
	RTLR(8,loc3);
	RTLR(9,loc5);
	RTLR(10,ur1);
	RTLR(11,loc7);
	RTLR(12,ur2);
	RTLR(13,ur3);
	RTLR(14,ur4);
	RTLIU(15);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_UINT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REF, &loc11);
	
	RTEAA(l_feature_name, 222, Current, 11, 10, 7151);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7151);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 222, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 222, l_feature_name, 4, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 222, l_feature_name, 6, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg9, 222, l_feature_name, 9, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(11, 0xF80001F0, 0, 0); /* loc11 */
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
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
	loc3 = (EIF_REFERENCE) arg4;
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) arg5;
	RTHOOK(4);
	RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
	loc5 = (EIF_REFERENCE) arg6;
	RTHOOK(5);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	loc6 = (EIF_INTEGER_32) arg7;
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg8;
	for (;;) {
		RTHOOK(7);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc1) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc1) - ((EIF_INTEGER_32) 1L));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc5))(loc5, ui4_1x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 != tu4_2);
		}
		if (tb1) break;
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		ur1 = loc3;
		ui4_1 = loc4;
		ui4_2 = arg2;
		ui4_3 = arg8;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(11);
		
		eif_put_integer_32_item(RTCW(arg3),1,arg8);
		RTHOOK(12);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(13);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc1) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc1) - ((EIF_INTEGER_32) 1L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc5))(loc5, ui4_1x)).it_n4);
		if ((EIF_BOOLEAN) (tu4_1 < tu4_2)) {
			RTHOOK(14);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			loc7 = (EIF_REFERENCE) loc3;
			RTHOOK(15);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			loc3 = (EIF_REFERENCE) loc5;
			RTHOOK(16);
			RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
			loc5 = (EIF_REFERENCE) loc7;
			RTHOOK(17);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8 = (EIF_INTEGER_32) loc4;
			RTHOOK(18);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) loc6;
			RTHOOK(19);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) loc8;
			RTHOOK(20);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) arg8;
			RTHOOK(21);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ur1 = loc5;
			ui4_1 = loc6;
			ui4_2 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(22);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(23);
				ur1 = loc3;
				ui4_1 = loc4;
				ui4_2 = arg2;
				ui4_3 = arg8;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(24);
				
				eif_put_integer_32_item(RTCW(arg3),1,arg8);
				RTHOOK(25);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(26);
				ur1 = loc3;
				ui4_1 = loc4;
				ur2 = loc3;
				ui4_2 = loc4;
				ur3 = loc5;
				ui4_3 = loc6;
				ui4_4 = loc1;
				ur4 = RTCCL(loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
				RTHOOK(27);
				RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc11))(loc11)).it_n4);
				loc9 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(28);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ur1 = loc3;
				ui4_1 = loc4;
				ui4_2 = loc1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
				loc1 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(29);
				if ((EIF_BOOLEAN) (loc1 < loc2)) {
					RTHOOK(30);
					RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
					loc7 = (EIF_REFERENCE) loc3;
					RTHOOK(31);
					RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
					loc3 = (EIF_REFERENCE) loc5;
					RTHOOK(32);
					RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
					loc5 = (EIF_REFERENCE) loc7;
					RTHOOK(33);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) loc4;
					RTHOOK(34);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4 = (EIF_INTEGER_32) loc6;
					RTHOOK(35);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) loc8;
					RTHOOK(36);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) loc1;
					RTHOOK(37);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) loc2;
					RTHOOK(38);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) loc8;
				} else {
					RTHOOK(39);
					if ((EIF_BOOLEAN)(loc1 == loc2)) {
						RTHOOK(40);
						RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
						ur1 = loc3;
						ui4_1 = loc4;
						ur2 = loc5;
						ui4_2 = loc6;
						ui4_3 = loc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1946, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x)).it_i4);
						loc10 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(41);
						if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) {
							RTHOOK(42);
							RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
							loc7 = (EIF_REFERENCE) loc3;
							RTHOOK(43);
							RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
							loc3 = (EIF_REFERENCE) loc5;
							RTHOOK(44);
							RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
							loc5 = (EIF_REFERENCE) loc7;
							RTHOOK(45);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8 = (EIF_INTEGER_32) loc4;
							RTHOOK(46);
							RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
							loc4 = (EIF_INTEGER_32) loc6;
							RTHOOK(47);
							RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
							loc6 = (EIF_INTEGER_32) loc8;
						}
					}
				}
				RTHOOK(48);
				ur1 = arg9;
				ui4_1 = (EIF_INTEGER_32) (arg10 + loc2);
				ur2 = arg9;
				ui4_2 = arg10;
				ur3 = loc3;
				ui4_3 = loc4;
				ui4_4 = loc1;
				ur4 = loc5;
				ui4_5 = loc6;
				ui4_6 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
				RTHOOK(49);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) loc2;
				RTHOOK(50);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ur1 = arg9;
				ui4_1 = arg10;
				ui4_2 = loc1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
				loc1 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(51);
				if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(52);
					ur1 = loc5;
					ui4_1 = loc6;
					ui4_2 = arg2;
					ui4_3 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
					RTHOOK(53);
					
					eif_put_integer_32_item(RTCW(arg3),1,loc2);
					RTHOOK(54);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				} else {
					RTHOOK(55);
					ur1 = arg9;
					ui4_1 = arg10;
					ui4_2 = loc4;
					ui4_3 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc3))(loc3, ur1x, ui4_1x, ui4_2x, ui4_3x);
					RTHOOK(56);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) loc2;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(57);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(23);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
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
#undef arg10
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

/* {SPECIAL_GCD}.nhgcd2 */
EIF_TYPED_VALUE F223_4193 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "nhgcd2";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc13 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_TYPED_VALUE uu4_4x = {{0}, SK_UINT32};
#define uu4_4 uu4_4x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(11);
	RTLR(0,arg5);
	RTLR(1,loc11);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc12);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,loc8);
	RTLR(9,ur1);
	RTLR(10,ur2);
	RTLIU(11);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_UINT32, &loc13);
	
	RTEAA(l_feature_name, 222, Current, 13, 5, 7152);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7152);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg5, 222, l_feature_name, 5, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
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
	RTNHOOK(1,1);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
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
	RTNHOOK(2,1);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(5, 0xF80001F0, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(3,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(6, 0xF80001F0, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(4,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(7, 0xF80001F0, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(5,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(8, 0xF80001F0, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(6,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	tb1 = '\01';
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
	if (!((EIF_BOOLEAN) (tu4_1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L)))) {
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
		tb1 = (EIF_BOOLEAN) (tu4_1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L));
	}
	if (tb1) {
		RTHOOK(8);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(9);
		tb1 = '\01';
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
		if (!(EIF_BOOLEAN) (tu4_1 > tu4_2)) {
			tb2 = '\0';
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
			if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
				tb2 = (EIF_BOOLEAN) (tu4_1 > tu4_2);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(10);
			ur1 = RTCCL(loc6);
			ur2 = RTCCL(loc5);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
			uu4_1 = tu4_1;
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			uu4_2 = tu4_2;
			tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
			uu4_3 = tu4_3;
			tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			uu4_4 = tu4_4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
			RTHOOK(11);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
			if ((EIF_BOOLEAN) (tu4_1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L))) {
				RTHOOK(12);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(13);
				RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
				loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(14);
				RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
				loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(15);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				loc2 = (EIF_NATURAL_32) loc4;
				RTHOOK(16);
				RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
				loc1 = (EIF_NATURAL_32) loc2;
				RTHOOK(17);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			}
		} else {
			RTHOOK(18);
			ur1 = RTCCL(loc8);
			ur2 = RTCCL(loc7);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
			uu4_1 = tu4_1;
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
			uu4_2 = tu4_2;
			tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
			uu4_3 = tu4_3;
			tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			uu4_4 = tu4_4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
			RTHOOK(19);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
			if ((EIF_BOOLEAN) (tu4_1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L))) {
				RTHOOK(20);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(21);
				RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
				loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(22);
				RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
				loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(23);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				loc3 = (EIF_NATURAL_32) loc4;
				RTHOOK(24);
				RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
				loc1 = (EIF_NATURAL_32) loc3;
				RTHOOK(25);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			}
		}
		RTHOOK(26);
		if ((EIF_BOOLEAN) !loc9) {
			RTHOOK(27);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
			if ((EIF_BOOLEAN) (tu4_1 < tu4_2)) {
				RTHOOK(28);
				RTDBGAL(10, 0x04000000, 1, 0); /* loc10 */
				loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			for (;;) {
				RTHOOK(29);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc10 && loc9)) break;
				RTHOOK(30);
				if ((EIF_BOOLEAN) !loc10) {
					RTHOOK(31);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
					if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
						RTHOOK(32);
						RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						RTHOOK(33);
						ur1 = RTCCL(loc6);
						ur2 = RTCCL(loc5);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
						uu4_1 = tu4_1;
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
						uu4_2 = tu4_2;
						tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
						uu4_3 = tu4_3;
						tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
						uu4_4 = tu4_4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
						RTHOOK(34);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
						if ((EIF_BOOLEAN) (tu4_1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L))) {
							RTHOOK(35);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						} else {
							RTHOOK(36);
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
							tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
							if ((EIF_BOOLEAN) (tu4_1 <= tu4_2)) {
								RTHOOK(37);
								RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
								loc2 += loc1;
								RTHOOK(38);
								RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
								loc4 += loc3;
							} else {
								RTHOOK(39);
								RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
								ur1 = RTCCL(loc11);
								ur2 = RTCCL(loc12);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
								uu4_1 = tu4_1;
								tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
								uu4_2 = tu4_2;
								tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
								uu4_3 = tu4_3;
								tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
								uu4_4 = tu4_4;
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3424, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x)).it_n4);
								loc13 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(40);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc11))(loc11)).it_n4);
								uu4_1 = tu4_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc5))(loc5, uu4_1x);
								RTHOOK(41);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc12))(loc12)).it_n4);
								uu4_1 = tu4_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc6))(loc6, uu4_1x);
								RTHOOK(42);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
								if ((EIF_BOOLEAN) (tu4_1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L))) {
									RTHOOK(43);
									RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
									loc2 += (EIF_NATURAL_32) (loc13 * loc1);
									RTHOOK(44);
									RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
									loc4 += (EIF_NATURAL_32) (loc13 * loc3);
									RTHOOK(45);
									RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								} else {
									RTHOOK(46);
									RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
									loc13 += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
									RTHOOK(47);
									RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
									loc2 += (EIF_NATURAL_32) (loc13 * loc1);
									RTHOOK(48);
									RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
									loc4 += (EIF_NATURAL_32) (loc13 * loc3);
								}
							}
						}
					}
				}
				RTHOOK(49);
				if ((EIF_BOOLEAN) !loc9) {
					RTHOOK(50);
					RTDBGAL(10, 0x04000000, 1, 0); /* loc10 */
					loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(51);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
					if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
						RTHOOK(52);
						RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						RTHOOK(53);
						ur1 = RTCCL(loc8);
						ur2 = RTCCL(loc7);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
						uu4_1 = tu4_1;
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
						uu4_2 = tu4_2;
						tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
						uu4_3 = tu4_3;
						tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
						uu4_4 = tu4_4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
						RTHOOK(54);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
						if ((EIF_BOOLEAN) (tu4_1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L))) {
							RTHOOK(55);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						} else {
							RTHOOK(56);
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
							tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
							if ((EIF_BOOLEAN) (tu4_1 <= tu4_2)) {
								RTHOOK(57);
								RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
								loc1 += loc2;
								RTHOOK(58);
								RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
								loc3 += loc4;
							} else {
								RTHOOK(59);
								RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
								ur1 = RTCCL(loc11);
								ur2 = RTCCL(loc12);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
								uu4_1 = tu4_1;
								tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
								uu4_2 = tu4_2;
								tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
								uu4_3 = tu4_3;
								tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
								uu4_4 = tu4_4;
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3424, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x)).it_n4);
								loc13 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(60);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc11))(loc11)).it_n4);
								uu4_1 = tu4_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc7))(loc7, uu4_1x);
								RTHOOK(61);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc12))(loc12)).it_n4);
								uu4_1 = tu4_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc8))(loc8, uu4_1x);
								RTHOOK(62);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
								if ((EIF_BOOLEAN) (tu4_1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L))) {
									RTHOOK(63);
									RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
									loc1 += (EIF_NATURAL_32) (loc13 * loc2);
									RTHOOK(64);
									RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
									loc3 += (EIF_NATURAL_32) (loc13 * loc4);
									RTHOOK(65);
									RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								} else {
									RTHOOK(66);
									RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
									loc13 += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
									RTHOOK(67);
									RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
									loc1 += (EIF_NATURAL_32) (loc13 * loc2);
									RTHOOK(68);
									RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
									loc3 += (EIF_NATURAL_32) (loc13 * loc4);
								}
							}
						}
					}
				}
			}
			RTHOOK(69);
			uu4_1 = loc1;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg5))(arg5, uu4_1x, ui4_1x);
			RTHOOK(70);
			uu4_1 = loc2;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg5))(arg5, uu4_1x, ui4_1x);
			RTHOOK(71);
			uu4_1 = loc3;
			ui4_1 = ((EIF_INTEGER_32) 2L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg5))(arg5, uu4_1x, ui4_1x);
			RTHOOK(72);
			uu4_1 = loc4;
			ui4_1 = ((EIF_INTEGER_32) 3L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg5))(arg5, uu4_1x, ui4_1x);
			RTHOOK(73);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(74);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(20);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef uu4_4
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_GCD}.div2 */
EIF_TYPED_VALUE F223_4194 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "div2";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_n4
#define arg6 arg6x.it_n4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_TYPED_VALUE uu4_4x = {{0}, SK_UINT32};
#define uu4_4 uu4_4x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_n4 = * (EIF_NATURAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_n4 = * (EIF_NATURAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc5);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc6);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_UINT32,&arg5);
	RTLU(SK_UINT32,&arg6);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 222, Current, 6, 6, 7153);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7153);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg2, 222, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("dh_a /= 0 or dl_a /= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg5 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(arg6 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
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
	RTNHOOK(2,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(6, 0xF80001F0, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(3,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	uu4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc5))(loc5, uu4_1x);
	RTHOOK(5);
	uu4_1 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc6))(loc6, uu4_1x);
	RTHOOK(6);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	loc3 = (EIF_NATURAL_32) arg5;
	RTHOOK(7);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	loc4 = (EIF_NATURAL_32) arg6;
	RTHOOK(8);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1023, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tb1 = eif_bit_test(EIF_NATURAL_32,tu4_1,ui4_1);
	if (tb1) {
		RTHOOK(9);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		if (RTAL & CK_LOOP) {
			RTHOOK(10);
			RTCT("dh /= 0 or dl /= 0", EX_LINV);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		for (;;) {
			RTHOOK(11);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1023, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tb1 = eif_bit_test(EIF_NATURAL_32,loc3,ui4_1);
			if (tb1) break;
			RTHOOK(12);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc3,ui4_1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tu4_2 = eif_bit_shift_right(loc4,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc3 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(13);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc4,ui4_1);
			loc4 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(14);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
			if (RTAL & CK_LOOP) {
				RTHOOK(10);
				RTCT("dh /= 0 or dl /= 0", EX_LINV);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
					RTCK;
				} else {
					RTCF;
				}
			}
		}
		for (;;) {
			RTHOOK(15);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(16);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc1,ui4_1);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(17);
			tb2 = '\01';
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			if (!(EIF_BOOLEAN) (tu4_1 > loc3)) {
				tb3 = '\0';
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == loc3)) {
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
					tb3 = (EIF_BOOLEAN) (tu4_1 >= loc4);
				}
				tb2 = tb3;
			}
			if (tb2) {
				RTHOOK(18);
				ur1 = RTCCL(loc5);
				ur2 = RTCCL(loc6);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				uu4_1 = tu4_1;
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
				uu4_2 = tu4_2;
				uu4_3 = loc3;
				uu4_4 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
				RTHOOK(19);
				RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				tu4_1 = eif_bit_or(loc1,uu4_1);
				loc1 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(20);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tu4_1 = eif_bit_shift_left(loc3,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = eif_bit_shift_right(loc4,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc4 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(21);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_right(loc3,ui4_1);
			loc3 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(22);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2--;
		}
	} else {
		for (;;) {
			RTHOOK(23);
			tb2 = '\01';
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			if (!(EIF_BOOLEAN) (tu4_1 > loc3)) {
				tb3 = '\0';
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == loc3)) {
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
					tb3 = (EIF_BOOLEAN) (tu4_1 >= loc4);
				}
				tb2 = tb3;
			}
			if ((EIF_BOOLEAN) !tb2) break;
			RTHOOK(24);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc3,ui4_1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tu4_2 = eif_bit_shift_right(loc4,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc3 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(25);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc4,ui4_1);
			loc4 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(26);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		for (;;) {
			RTHOOK(27);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(28);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tu4_1 = eif_bit_shift_left(loc3,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = eif_bit_shift_right(loc4,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			loc4 = (EIF_NATURAL_32) tu4_3;
			RTHOOK(29);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_right(loc3,ui4_1);
			loc3 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(30);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = eif_bit_shift_left(loc1,ui4_1);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(31);
			tb3 = '\01';
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			if (!(EIF_BOOLEAN) (tu4_1 > loc3)) {
				tb4 = '\0';
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == loc3)) {
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
					tb4 = (EIF_BOOLEAN) (tu4_1 >= loc4);
				}
				tb3 = tb4;
			}
			if (tb3) {
				RTHOOK(32);
				ur1 = RTCCL(loc5);
				ur2 = RTCCL(loc6);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
				uu4_1 = tu4_1;
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
				uu4_2 = tu4_2;
				uu4_3 = loc3;
				uu4_4 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1953, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
				RTHOOK(33);
				RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				tu4_1 = eif_bit_or(loc1,uu4_1);
				loc1 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(34);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2--;
		}
	}
	RTHOOK(35);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg1))(arg1, uu4_1x);
	RTHOOK(36);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg2))(arg2, uu4_1x);
	RTHOOK(37);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	Result = (EIF_NATURAL_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef uu4_4
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_GCD}.mul_2 */
void F223_4195 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "mul_2";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_TYPED_VALUE uu4_4x = {{0}, SK_UINT32};
#define uu4_4 uu4_4x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,loc4);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc9);
	RTLR(10,loc8);
	RTLR(11,ur1);
	RTLR(12,ur2);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	
	RTEAA(l_feature_name, 222, Current, 10, 7, 7154);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7154);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 222, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg6, 222, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
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
	RTNHOOK(1,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
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
	RTNHOOK(2,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(6, 0xF80001F0, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(3,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(7, 0xF80001F0, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(4,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
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
	RTNHOOK(5,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
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
	RTNHOOK(6,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	ui4_1 = arg7;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	ur1 = RTCCL(loc4);
	ur2 = RTCCL(loc5);
	uu4_1 = loc2;
	ui4_1 = arg4;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	uu4_2 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
	RTHOOK(9);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
	uu4_1 = tu4_1;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(10);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	ui4_1 = (EIF_INTEGER_32) (arg7 + ((EIF_INTEGER_32) 1L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(11);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(12);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (loc10 >= arg5)) break;
		RTHOOK(14);
		ur1 = RTCCL(loc6);
		ur2 = RTCCL(loc7);
		uu4_1 = loc1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc10) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		uu4_2 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
		RTHOOK(15);
		ur1 = RTCCL(loc8);
		ur2 = RTCCL(loc9);
		uu4_1 = loc2;
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc10);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		uu4_2 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
		RTHOOK(16);
		ur1 = RTCCL(loc6);
		ur2 = RTCCL(loc7);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
		uu4_1 = tu4_1;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
		uu4_2 = tu4_2;
		uu4_3 = loc3;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
		uu4_4 = tu4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1957, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
		RTHOOK(17);
		ur1 = RTCCL(loc4);
		ur2 = RTCCL(loc5);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
		uu4_1 = tu4_1;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc9))(loc9)).it_n4);
		uu4_2 = tu4_2;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
		uu4_3 = tu4_3;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
		uu4_4 = tu4_4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1957, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
		RTHOOK(18);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc10);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(19);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc8))(loc8)).it_n4);
		ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (tu4_1 < tu4_2);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(20);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		loc10++;
	}
	RTHOOK(21);
	ur1 = RTCCL(loc6);
	ur2 = RTCCL(loc7);
	uu4_1 = loc1;
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg5) - ((EIF_INTEGER_32) 1L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	uu4_2 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
	RTHOOK(22);
	ur1 = RTCCL(loc4);
	ur2 = RTCCL(loc5);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
	uu4_1 = tu4_1;
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc7))(loc7)).it_n4);
	uu4_2 = tu4_2;
	uu4_3 = loc3;
	tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
	uu4_4 = tu4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1957, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
	RTHOOK(23);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
	uu4_1 = tu4_1;
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg5) + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(24);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
	uu4_1 = tu4_1;
	ui4_1 = (EIF_INTEGER_32) (arg2 + arg5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(19);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef uu4_4
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_GCD}.ngcd_matrix1_adjust */
EIF_TYPED_VALUE F223_4196 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "ngcd_matrix1_adjust";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_r
#define arg9 arg9x.it_i4
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
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg8);
	RTLR(4,loc5);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLR(9,ur3);
	RTLIU(10);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 222, Current, 5, 9, 7155);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7155);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 222, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg5, 222, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg8, 222, l_feature_name, 8, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(5, 0xF80001F0, 0, 0); /* loc5 */
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
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	ur1 = arg3;
	ui4_1 = arg4;
	ui4_2 = arg9;
	ui4_3 = arg7;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg8))(arg8, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(4);
	ur1 = arg3;
	ui4_1 = arg4;
	ur2 = arg3;
	ui4_2 = arg4;
	ui4_3 = arg7;
	ui4_4 = ((EIF_INTEGER_32) 3L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_4x)).it_n4);
	uu4_1 = tu4_1;
	ur3 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
	RTHOOK(5);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	ur1 = arg3;
	ui4_1 = arg4;
	ur2 = arg5;
	ui4_2 = arg6;
	ui4_3 = arg7;
	ui4_4 = ((EIF_INTEGER_32) 1L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_4x)).it_n4);
	uu4_1 = tu4_1;
	ur3 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1077, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
	RTHOOK(7);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
	loc3 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN) (loc3 > loc1)) {
		RTHOOK(9);
		ur1 = arg3;
		ui4_1 = (EIF_INTEGER_32) (arg4 + arg7);
		uu4_1 = (EIF_NATURAL_32) (loc3 - loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1063, dtype))(Current, ur1x, ui4_1x, uu4_1x);
		RTHOOK(10);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(11);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		loc1 -= loc3;
		RTHOOK(12);
		if ((EIF_BOOLEAN) (loc1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(13);
			ur1 = arg3;
			ui4_1 = (EIF_INTEGER_32) (arg4 + arg7);
			ur2 = arg3;
			ui4_2 = (EIF_INTEGER_32) (arg4 + arg7);
			ui4_3 = loc4;
			uu4_1 = loc1;
			ur3 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(14);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
		}
	}
	RTHOOK(15);
	ur1 = arg5;
	ui4_1 = arg6;
	ur2 = arg5;
	ui4_2 = arg6;
	ui4_3 = arg7;
	ui4_4 = ((EIF_INTEGER_32) 0L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_4x)).it_n4);
	uu4_1 = tu4_1;
	ur3 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
	RTHOOK(16);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(17);
	ur1 = arg5;
	ui4_1 = arg6;
	ur2 = arg8;
	ui4_2 = arg9;
	ui4_3 = arg7;
	ui4_4 = ((EIF_INTEGER_32) 2L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_4x)).it_n4);
	uu4_1 = tu4_1;
	ur3 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1077, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
	RTHOOK(18);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
	loc3 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(19);
	if ((EIF_BOOLEAN) (loc3 > loc2)) {
		RTHOOK(20);
		ur1 = arg5;
		ui4_1 = (EIF_INTEGER_32) (arg6 + arg7);
		uu4_1 = (EIF_NATURAL_32) (loc3 - loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1063, dtype))(Current, ur1x, ui4_1x, uu4_1x);
		RTHOOK(21);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(22);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 -= loc3;
		RTHOOK(23);
		if ((EIF_BOOLEAN) (loc2 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(24);
			ur1 = arg5;
			ui4_1 = (EIF_INTEGER_32) (arg6 + arg7);
			ur2 = arg5;
			ui4_2 = (EIF_INTEGER_32) (arg6 + arg7);
			ui4_3 = loc4;
			uu4_1 = loc2;
			ur3 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(25);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			loc2 = (EIF_NATURAL_32) tu4_1;
		}
	}
	RTHOOK(26);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 += arg7;
	RTHOOK(27);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc2 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(28);
		uu4_1 = loc1;
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg3))(arg3, uu4_1x, ui4_1x);
		RTHOOK(29);
		uu4_1 = loc2;
		ui4_1 = (EIF_INTEGER_32) (arg6 + loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg5))(arg5, uu4_1x, ui4_1x);
		RTHOOK(30);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4++;
	} else {
		RTHOOK(31);
		tb1 = '\0';
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc4) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg6 + loc4) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg5))(arg5, ui4_1x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTHOOK(32);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4--;
		}
	}
	RTHOOK(33);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) loc4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
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

/* {SPECIAL_GCD}.ngcd_matrix2_adjust */
EIF_TYPED_VALUE F223_4197 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "ngcd_matrix2_adjust";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc9 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_r
#define arg9 arg9x.it_i4
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg8);
	RTLR(4,loc10);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,loc1);
	RTLR(8,loc3);
	RTLR(9,ur1);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLR(12,ur4);
	RTLIU(13);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_UINT32, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 222, Current, 10, 9, 7156);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7156);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 222, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg5, 222, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg8, 222, l_feature_name, 8, typres0, 0x01);
	}
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
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	loc8 = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	loc1 = (EIF_REFERENCE) arg8;
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg9;
	RTHOOK(5);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
	loc3 = (EIF_REFERENCE) arg8;
	RTHOOK(6);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg9 + arg7) + ((EIF_INTEGER_32) 2L));
	RTHOOK(7);
	ur1 = loc1;
	ui4_1 = loc2;
	ur2 = arg3;
	ui4_2 = arg4;
	ui4_3 = arg7;
	ur3 = arg1;
	ui4_4 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3425, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x);
	RTHOOK(8);
	ur1 = loc3;
	ui4_1 = loc4;
	ur2 = arg3;
	ui4_2 = arg4;
	ui4_3 = arg7;
	ur3 = arg1;
	ui4_4 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3425, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x);
	RTHOOK(9);
	ur1 = loc1;
	ui4_1 = loc2;
	ui4_2 = arg4;
	ui4_3 = arg7;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg3))(arg3, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(10);
	ur1 = arg3;
	ui4_1 = (EIF_INTEGER_32) (arg4 + arg7);
	ur2 = arg3;
	ui4_2 = (EIF_INTEGER_32) (arg4 + arg7);
	ui4_3 = loc8;
	ur3 = loc1;
	ui4_4 = (EIF_INTEGER_32) (loc2 + arg7);
	ui4_5 = ((EIF_INTEGER_32) 2L);
	ur4 = RTCCL(loc10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1059, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ur4x);
	RTHOOK(11);
	RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
	loc5 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(12);
	ur1 = loc1;
	ui4_1 = loc2;
	ur2 = arg5;
	ui4_2 = arg6;
	ui4_3 = arg7;
	ur3 = arg1;
	ui4_4 = ((EIF_INTEGER_32) 1L);
	ui4_5 = ((EIF_INTEGER_32) 2L);
	ur4 = RTCCL(loc10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1065, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ur4x);
	RTHOOK(13);
	RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
	loc9 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(14);
	ur1 = arg3;
	ui4_1 = arg4;
	ur2 = arg3;
	ui4_2 = arg4;
	ui4_3 = (EIF_INTEGER_32) (loc8 + arg7);
	ur3 = loc1;
	ui4_4 = loc2;
	ui4_5 = (EIF_INTEGER_32) (arg7 + ((EIF_INTEGER_32) 2L));
	ur4 = RTCCL(loc10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ur4x);
	RTHOOK(15);
	RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
	loc7 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(16);
	RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
	loc5 -= loc7;
	RTHOOK(17);
	ur1 = loc1;
	ui4_1 = loc2;
	ur2 = arg5;
	ui4_2 = arg6;
	ui4_3 = arg7;
	ur3 = arg1;
	ui4_4 = ((EIF_INTEGER_32) 0L);
	ui4_5 = ((EIF_INTEGER_32) 2L);
	ur4 = RTCCL(loc10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1065, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ur4x);
	RTHOOK(18);
	RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
	loc9 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(19);
	ur1 = loc1;
	ui4_1 = loc2;
	ui4_2 = arg6;
	ui4_3 = arg7;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg5))(arg5, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(20);
	ur1 = arg5;
	ui4_1 = (EIF_INTEGER_32) (arg6 + arg7);
	ur2 = arg5;
	ui4_2 = (EIF_INTEGER_32) (arg6 + arg7);
	ui4_3 = loc8;
	ur3 = loc1;
	ui4_4 = (EIF_INTEGER_32) (loc2 + arg7);
	ui4_5 = ((EIF_INTEGER_32) 2L);
	ur4 = RTCCL(loc10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1059, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ur4x);
	RTHOOK(21);
	RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
	loc6 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(22);
	ur1 = arg5;
	ui4_1 = arg6;
	ur2 = arg5;
	ui4_2 = arg6;
	ui4_3 = (EIF_INTEGER_32) (loc8 + arg7);
	ur3 = loc3;
	ui4_4 = loc4;
	ui4_5 = (EIF_INTEGER_32) (arg7 + ((EIF_INTEGER_32) 2L));
	ur4 = RTCCL(loc10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ur4x);
	RTHOOK(23);
	RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
	loc7 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(24);
	RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
	loc6 -= loc7;
	RTHOOK(25);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	loc8 += arg7;
	RTHOOK(26);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc6 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(27);
		uu4_1 = loc5;
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc8);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg3))(arg3, uu4_1x, ui4_1x);
		RTHOOK(28);
		uu4_1 = loc6;
		ui4_1 = (EIF_INTEGER_32) (arg6 + loc8);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg5))(arg5, uu4_1x, ui4_1x);
		RTHOOK(29);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8++;
	} else {
		RTHOOK(30);
		tb1 = '\0';
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc8) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg6 + loc8) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg5))(arg5, ui4_1x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTHOOK(31);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8--;
		}
	}
	RTHOOK(32);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) loc8;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(21);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef uu4_1
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

/* {SPECIAL_GCD}.ngcd_lehmer */
EIF_TYPED_VALUE F223_4198 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "ngcd_lehmer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc9 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc10 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc11 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc12 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc13 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc21 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc22 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_r
#define arg9 arg9x.it_i4
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_TYPED_VALUE uu4_4x = {{0}, SK_UINT32};
#define uu4_4 uu4_4x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg8);
	RTLR(4,loc18);
	RTLR(5,loc20);
	RTLR(6,loc1);
	RTLR(7,Current);
	RTLR(8,tr1);
	RTLR(9,loc6);
	RTLR(10,loc3);
	RTLR(11,loc4);
	RTLR(12,loc8);
	RTLR(13,ur1);
	RTLR(14,ur2);
	RTLR(15,ur3);
	RTLR(16,ur4);
	RTLR(17,ur5);
	RTLR(18,loc15);
	RTLIU(19);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_UINT32, &loc9);
	RTLU(SK_UINT32, &loc10);
	RTLU(SK_UINT32, &loc11);
	RTLU(SK_UINT32, &loc12);
	RTLU(SK_UINT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_INT32, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_INT32, &loc21);
	RTLU(SK_BOOL, &loc22);
	
	RTEAA(l_feature_name, 222, Current, 22, 9, 7157);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7157);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 222, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg5, 222, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg8, 222, l_feature_name, 8, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(18, 0xF800026B, 0, 0); /* loc18 */
	loc18 = (EIF_REFERENCE) arg3;
	RTHOOK(2);
	RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
	loc19 = (EIF_INTEGER_32) arg4;
	RTHOOK(3);
	RTDBGAL(20, 0xF800026B, 0, 0); /* loc20 */
	loc20 = (EIF_REFERENCE) arg5;
	RTHOOK(4);
	RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
	loc21 = (EIF_INTEGER_32) arg6;
	RTHOOK(5);
	RTDBGAL(1, 0xF80000FF, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(6, 0xF80000FF, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg7;
	RTHOOK(8);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 4L);
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
	RTNHOOK(8,1);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAL(4, 0xF800026B, 0, 0); /* loc4 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 4L);
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
	loc4 = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTDBGAL(8, 0xF800026B, 0, 0); /* loc8 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 4L);
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
	loc8 = (EIF_REFERENCE) tr1;
	for (;;) {
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 7L))) break;
		RTHOOK(12);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 5L));
		RTHOOK(13);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		ur1 = loc18;
		ui4_1 = (EIF_INTEGER_32) (loc19 + loc5);
		ur2 = loc20;
		ui4_2 = (EIF_INTEGER_32) (loc21 + loc5);
		ur3 = RTCCL(loc6);
		ur4 = loc3;
		ur5 = loc4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3429, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ur4x, ur5x)).it_i4);
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(14);
		ti4_1 = eif_integer_32_item(RTCW(loc6),1);
		switch (ti4_1) {
			case 0L:
				RTHOOK(15);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ur1 = arg1;
				ui4_1 = arg2;
				ur2 = RTCCL(loc1);
				ur3 = loc18;
				ui4_2 = loc19;
				ur4 = loc20;
				ui4_3 = loc21;
				ui4_4 = loc2;
				ur5 = arg8;
				ui4_5 = arg9;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3422, dtype))(Current, ur1x, ui4_1x, ur2x, ur3x, ui4_2x, ur4x, ui4_3x, ui4_4x, ur5x, ui4_5x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
				break;
			case 1L:
				RTHOOK(16);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ur1 = loc3;
				ui4_1 = loc7;
				ur2 = loc18;
				ui4_2 = loc19;
				ur3 = loc20;
				ui4_3 = loc21;
				ui4_4 = loc5;
				ur4 = arg8;
				ui4_5 = arg9;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3426, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
				break;
			case 2L:
				RTHOOK(17);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ur1 = loc4;
				ui4_1 = loc7;
				ur2 = loc18;
				ui4_2 = loc19;
				ur3 = loc20;
				ui4_3 = loc21;
				ui4_4 = loc5;
				ur4 = arg8;
				ui4_5 = arg9;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3427, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	for (;;) {
		RTHOOK(18);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 2L)) || loc22)) break;
		RTHOOK(19);
		RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc19 + loc2) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc18))(loc18, ui4_1x)).it_n4);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc21 + loc2) - ((EIF_INTEGER_32) 1L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_or(tu4_1,uu4_1);
		loc13 = (EIF_NATURAL_32) tu4_3;
		RTHOOK(20);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1023, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tb1 = eif_bit_test(EIF_NATURAL_32,loc13,ui4_1);
		if (tb1) {
			RTHOOK(21);
			RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc19 + loc2) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc18))(loc18, ui4_1x)).it_n4);
			loc9 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(22);
			RTDBGAL(10, 0x38000000, 1, 0); /* loc10 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc19 + loc2) - ((EIF_INTEGER_32) 2L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc18))(loc18, ui4_1x)).it_n4);
			loc10 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(23);
			RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc21 + loc2) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_1x)).it_n4);
			loc11 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(24);
			RTDBGAL(12, 0x38000000, 1, 0); /* loc12 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc21 + loc2) - ((EIF_INTEGER_32) 2L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_1x)).it_n4);
			loc12 = (EIF_NATURAL_32) tu4_1;
		} else {
			RTHOOK(25);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			uu4_1 = loc13;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
			loc14 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(26);
			RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
			ui4_1 = loc14;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc19 + loc2) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc18))(loc18, ui4_2x)).it_n4);
			uu4_1 = tu4_1;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc19 + loc2) - ((EIF_INTEGER_32) 2L));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc18))(loc18, ui4_2x)).it_n4);
			uu4_2 = tu4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
			loc9 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(27);
			RTDBGAL(10, 0x38000000, 1, 0); /* loc10 */
			ui4_1 = loc14;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc19 + loc2) - ((EIF_INTEGER_32) 2L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc18))(loc18, ui4_2x)).it_n4);
			uu4_1 = tu4_1;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc19 + loc2) - ((EIF_INTEGER_32) 3L));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc18))(loc18, ui4_2x)).it_n4);
			uu4_2 = tu4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
			loc10 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(28);
			RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
			ui4_1 = loc14;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc21 + loc2) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_2x)).it_n4);
			uu4_1 = tu4_1;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc21 + loc2) - ((EIF_INTEGER_32) 2L));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_2x)).it_n4);
			uu4_2 = tu4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
			loc11 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(29);
			RTDBGAL(12, 0x38000000, 1, 0); /* loc12 */
			ui4_1 = loc14;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc21 + loc2) - ((EIF_INTEGER_32) 2L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_2x)).it_n4);
			uu4_1 = tu4_1;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc21 + loc2) - ((EIF_INTEGER_32) 3L));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_2x)).it_n4);
			uu4_2 = tu4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
			loc12 = (EIF_NATURAL_32) tu4_1;
		}
		RTHOOK(30);
		uu4_1 = loc9;
		uu4_2 = loc10;
		uu4_3 = loc11;
		uu4_4 = loc12;
		ur1 = loc8;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3423, dtype))(Current, uu4_1x, uu4_2x, uu4_3x, uu4_4x, ur1x)).it_b);
		if (tb1) {
			RTHOOK(31);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ur1 = loc8;
			ui4_1 = loc2;
			ur2 = loc18;
			ui4_2 = loc19;
			ur3 = loc20;
			ui4_3 = loc21;
			ur4 = arg8;
			ui4_4 = arg9;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3421, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ur4x, ui4_4x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(32);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = RTCCL(loc1);
			ur3 = loc18;
			ui4_2 = loc19;
			ur4 = loc20;
			ui4_3 = loc21;
			ui4_4 = loc2;
			ur5 = arg8;
			ui4_5 = arg9;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3422, dtype))(Current, ur1x, ui4_1x, ur2x, ur3x, ui4_2x, ur4x, ui4_3x, ui4_4x, ur5x, ui4_5x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(33);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(34);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ti4_1 = eif_integer_32_item(RTCW(loc1),1);
				Result = (EIF_INTEGER_32) ti4_1;
				RTHOOK(35);
				RTDBGAL(22, 0x04000000, 1, 0); /* loc22 */
				loc22 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTHOOK(36);
	if ((EIF_BOOLEAN) !loc22) {
		RTHOOK(37);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(38);
			ur1 = loc18;
			ui4_1 = loc19;
			ui4_2 = ((EIF_INTEGER_32) 1L);
			ui4_3 = loc21;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_3x)).it_n4);
			uu4_1 = tu4_1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3419, dtype))(Current, ur1x, ui4_1x, ui4_2x, uu4_1x)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
			RTHOOK(39);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(40);
			ui4_1 = loc19;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc18))(loc18, ui4_1x)).it_n4);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tb1 = eif_bit_test(EIF_NATURAL_32,tu4_1,ui4_1);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(41);
				RTDBGAL(15, 0xF800026B, 0, 0); /* loc15 */
				loc15 = (EIF_REFERENCE) loc18;
				RTHOOK(42);
				RTDBGAL(18, 0xF800026B, 0, 0); /* loc18 */
				loc18 = (EIF_REFERENCE) loc20;
				RTHOOK(43);
				RTDBGAL(20, 0xF800026B, 0, 0); /* loc20 */
				loc20 = (EIF_REFERENCE) loc15;
				RTHOOK(44);
				RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
				loc16 = (EIF_INTEGER_32) loc19;
				RTHOOK(45);
				RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
				loc19 = (EIF_INTEGER_32) loc21;
				RTHOOK(46);
				RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
				loc21 = (EIF_INTEGER_32) loc16;
			}
			RTHOOK(47);
			ui4_1 = loc21;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_1x)).it_n4);
			if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(48);
				ur1 = loc18;
				ui4_1 = loc19;
				ui4_2 = ((EIF_INTEGER_32) 2L);
				ui4_3 = (EIF_INTEGER_32) (loc21 + ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_3x)).it_n4);
				uu4_1 = tu4_1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3419, dtype))(Current, ur1x, ui4_1x, ui4_2x, uu4_1x)).it_n4);
				uu4_1 = tu4_1;
				ui4_1 = arg2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
				RTHOOK(49);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				RTHOOK(50);
				ui4_1 = loc21;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_1x)).it_n4);
				ui4_1 = ((EIF_INTEGER_32) 0L);
				tb1 = eif_bit_test(EIF_NATURAL_32,tu4_1,ui4_1);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(51);
					RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
					ui4_1 = loc21;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_1x)).it_n4);
					uu4_1 = tu4_1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
					loc17 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(52);
					ui4_1 = (EIF_INTEGER_32) (loc21 + ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_1x)).it_n4);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					ui4_1 = (EIF_INTEGER_32) (ti4_1 - loc17);
					tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
					ui4_1 = loc21;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_1x)).it_n4);
					ui4_1 = loc17;
					tu4_3 = eif_bit_shift_right(tu4_1,ui4_1);
					uu4_1 = tu4_3;
					tu4_1 = eif_bit_or(tu4_2,uu4_1);
					uu4_1 = tu4_1;
					ui4_1 = loc21;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc20))(loc20, uu4_1x, ui4_1x);
					RTHOOK(53);
					ui4_1 = (EIF_INTEGER_32) (loc21 + ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc20))(loc20, ui4_1x)).it_n4);
					ui4_1 = loc17;
					tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
					uu4_1 = tu4_2;
					ui4_1 = (EIF_INTEGER_32) (loc21 + ((EIF_INTEGER_32) 1L));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc20))(loc20, uu4_1x, ui4_1x);
				}
				RTHOOK(54);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ur1 = loc18;
				ui4_1 = loc19;
				ur2 = loc20;
				ui4_2 = loc21;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3417, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(55);
				ur1 = loc18;
				ui4_1 = loc19;
				ui4_2 = arg2;
				ui4_3 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(56);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) loc2;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(57);
		RTCT("Result > 0", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(58);
		RTCT("Result <= n_a", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg7)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(59);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(33);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
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
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef uu4_4
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

/* {SPECIAL_GCD}.nhgcd5 */
EIF_TYPED_VALUE F223_4199 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "nhgcd5";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_r
#define arg7 arg7x.it_r
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
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_TYPED_VALUE uu4_4x = {{0}, SK_UINT32};
#define uu4_4 uu4_4x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg6);
	RTLR(4,arg7);
	RTLR(5,loc10);
	RTLR(6,Current);
	RTLR(7,tr1);
	RTLR(8,loc11);
	RTLR(9,loc2);
	RTLR(10,loc1);
	RTLR(11,ur1);
	RTLR(12,ur2);
	RTLR(13,ur3);
	RTLR(14,ur4);
	RTLIU(15);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	
	RTEAA(l_feature_name, 222, Current, 11, 7, 7158);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7158);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 222, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg5, 222, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg6, 222, l_feature_name, 6, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg7, 222, l_feature_name, 7, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(10, 0xF80001F0, 0, 0); /* loc10 */
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
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
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
	RTNHOOK(2,1);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 5L);
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
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 4L);
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
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
	ui4_1 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 4L));
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	uu4_1 = tu4_2;
	tu4_3 = eif_bit_or(tu4_1,uu4_1);
	loc8 = (EIF_NATURAL_32) tu4_3;
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 31L);
	tb1 = eif_bit_test(EIF_NATURAL_32,loc8,ui4_1);
	if (tb1) {
		RTHOOK(7);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc4 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(8);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc5 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		ui4_1 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 4L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc6 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		ui4_1 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 3L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc7 = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(11);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		uu4_1 = loc8;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = loc9;
		ui4_2 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_2x)).it_n4);
		uu4_1 = tu4_1;
		ui4_2 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_2x)).it_n4);
		uu4_2 = tu4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
		loc4 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = loc9;
		ui4_2 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_2x)).it_n4);
		uu4_1 = tu4_1;
		ui4_2 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_2x)).it_n4);
		uu4_2 = tu4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
		loc5 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(14);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		ui4_1 = loc9;
		ui4_2 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 4L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_2x)).it_n4);
		uu4_1 = tu4_1;
		ui4_2 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 3L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_2x)).it_n4);
		uu4_2 = tu4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
		loc6 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(15);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		ui4_1 = loc9;
		ui4_2 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 3L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_2x)).it_n4);
		uu4_1 = tu4_1;
		ui4_2 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 2L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_2x)).it_n4);
		uu4_2 = tu4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
		loc7 = (EIF_NATURAL_32) tu4_1;
	}
	RTHOOK(16);
	uu4_1 = loc4;
	uu4_2 = loc5;
	uu4_3 = loc6;
	uu4_4 = loc7;
	ur1 = arg6;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3423, dtype))(Current, uu4_1x, uu4_2x, uu4_3x, uu4_4x, ur1x)).it_b);
	if (tb1) {
		RTHOOK(17);
		
		eif_put_integer_32_item(RTCW(arg5),1,((EIF_INTEGER_32) 0L));
		RTHOOK(18);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(19);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ur1 = arg6;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		ur2 = arg1;
		ui4_2 = arg2;
		ur3 = arg3;
		ui4_3 = arg4;
		ur4 = loc2;
		ui4_4 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3421, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ur4x, ui4_4x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(20);
		RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc3) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc3) - ((EIF_INTEGER_32) 1L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_3 = eif_bit_or(tu4_1,uu4_1);
		loc8 = (EIF_NATURAL_32) tu4_3;
		RTHOOK(21);
		ui4_1 = ((EIF_INTEGER_32) 31L);
		tb1 = eif_bit_test(EIF_NATURAL_32,loc8,ui4_1);
		if (tb1) {
			RTHOOK(22);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc3) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			loc4 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(23);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc3) - ((EIF_INTEGER_32) 2L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			loc5 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(24);
			RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc3) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
			loc6 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(25);
			RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc3) - ((EIF_INTEGER_32) 2L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
			loc7 = (EIF_NATURAL_32) tu4_1;
		} else {
			RTHOOK(26);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			uu4_1 = loc8;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
			loc9 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(27);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			ui4_1 = loc9;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc3) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_2x)).it_n4);
			uu4_1 = tu4_1;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc3) - ((EIF_INTEGER_32) 2L));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_2x)).it_n4);
			uu4_2 = tu4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
			loc4 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(28);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			ui4_1 = loc9;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc3) - ((EIF_INTEGER_32) 2L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_2x)).it_n4);
			uu4_1 = tu4_1;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc3) - ((EIF_INTEGER_32) 3L));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_2x)).it_n4);
			uu4_2 = tu4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
			loc5 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(29);
			RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
			ui4_1 = loc9;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc3) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_2x)).it_n4);
			uu4_1 = tu4_1;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc3) - ((EIF_INTEGER_32) 2L));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_2x)).it_n4);
			uu4_2 = tu4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
			loc6 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(30);
			RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
			ui4_1 = loc9;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc3) - ((EIF_INTEGER_32) 2L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_2x)).it_n4);
			uu4_1 = tu4_1;
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc3) - ((EIF_INTEGER_32) 3L));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_2x)).it_n4);
			uu4_2 = tu4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, ui4_1x, uu4_1x, uu4_2x)).it_n4);
			loc7 = (EIF_NATURAL_32) tu4_1;
		}
		RTHOOK(31);
		uu4_1 = loc4;
		uu4_2 = loc5;
		uu4_3 = loc6;
		uu4_4 = loc7;
		ur1 = loc1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3423, dtype))(Current, uu4_1x, uu4_2x, uu4_3x, uu4_4x, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(32);
			
			eif_put_integer_32_item(RTCW(arg5),1,((EIF_INTEGER_32) 1L));
			RTHOOK(33);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) loc3;
		} else {
			RTHOOK(34);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ur1 = loc1;
			ui4_1 = loc3;
			ur2 = arg1;
			ui4_2 = arg2;
			ur3 = arg3;
			ui4_3 = arg4;
			ur4 = loc2;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3421, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ur4x, ui4_4x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(35);
			ur1 = RTCCL(loc10);
			ur2 = RTCCL(loc11);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
			uu4_2 = tu4_2;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
			uu4_3 = tu4_3;
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
			uu4_4 = tu4_4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3430, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
			RTHOOK(36);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg7))(arg7, uu4_1x, ui4_1x);
			RTHOOK(37);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc11))(loc11)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg7))(arg7, uu4_1x, ui4_1x);
			RTHOOK(38);
			ur1 = RTCCL(loc10);
			ur2 = RTCCL(loc11);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
			uu4_2 = tu4_2;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
			uu4_3 = tu4_3;
			ui4_1 = ((EIF_INTEGER_32) 3L);
			tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
			uu4_4 = tu4_4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3430, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
			RTHOOK(39);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 3L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg7))(arg7, uu4_1x, ui4_1x);
			RTHOOK(40);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc11))(loc11)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 2L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg7))(arg7, uu4_1x, ui4_1x);
			RTHOOK(41);
			ur1 = RTCCL(loc10);
			ur2 = RTCCL(loc11);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 3L);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
			uu4_2 = tu4_2;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
			uu4_3 = tu4_3;
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
			uu4_4 = tu4_4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3430, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
			RTHOOK(42);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 5L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg7))(arg7, uu4_1x, ui4_1x);
			RTHOOK(43);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc11))(loc11)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 4L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg7))(arg7, uu4_1x, ui4_1x);
			RTHOOK(44);
			ur1 = RTCCL(loc10);
			ur2 = RTCCL(loc11);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 3L);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
			uu4_2 = tu4_2;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
			uu4_3 = tu4_3;
			ui4_1 = ((EIF_INTEGER_32) 3L);
			tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
			uu4_4 = tu4_4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3430, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
			RTHOOK(45);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc10))(loc10)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 7L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg7))(arg7, uu4_1x, ui4_1x);
			RTHOOK(46);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc11))(loc11)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 6L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg7))(arg7, uu4_1x, ui4_1x);
			RTHOOK(47);
			
			eif_put_integer_32_item(RTCW(arg5),1,((EIF_INTEGER_32) 2L));
			RTHOOK(48);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) loc3;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(49);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(20);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef uu4_4
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_GCD}.dotmul_ppxxyy */
void F223_4200 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "dotmul_ppxxyy";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_n4
#define arg6 arg6x.it_n4
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
	EIF_TYPED_VALUE uu4_4x = {{0}, SK_UINT32};
#define uu4_4 uu4_4x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_n4 = * (EIF_NATURAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_n4 = * (EIF_NATURAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLR(9,loc6);
	RTLR(10,ur1);
	RTLR(11,ur2);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_UINT32,&arg5);
	RTLU(SK_UINT32,&arg6);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 222, Current, 6, 6, 7159);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(222, Current, 7159);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 222, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg2, 222, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80001F0, 0, 0); /* loc1 */
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
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF80001F0, 0, 0); /* loc2 */
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
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF80001F0, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
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
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
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
	RTNHOOK(5,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(6, 0xF80001F0, 0, 0); /* loc6 */
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
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	uu4_1 = arg3;
	uu4_2 = arg5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
	RTHOOK(8);
	ur1 = RTCCL(loc3);
	ur2 = RTCCL(loc4);
	uu4_1 = arg4;
	uu4_2 = arg6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
	RTHOOK(9);
	ur1 = RTCCL(loc5);
	ur2 = RTCCL(loc6);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc1))(loc1)).it_n4);
	uu4_1 = tu4_1;
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
	uu4_2 = tu4_2;
	tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
	uu4_3 = tu4_3;
	tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
	uu4_4 = tu4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1957, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x, uu4_3x, uu4_4x);
	RTHOOK(10);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg1))(arg1, uu4_1x);
	RTHOOK(11);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc6))(loc6)).it_n4);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg2))(arg2, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef ur1
#undef ur2
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef uu4_4
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit223 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
