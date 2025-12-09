/*
 * Code for class SPECIAL_ACCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F181_2325(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F181_2326(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F181_2327(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit181(void);

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

/* {SPECIAL_ACCESS}.dc_get_str */
EIF_TYPED_VALUE F181_2325 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x)
{
	GTCX
	char *l_feature_name = "dc_get_str";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_r
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_r
#define arg10 arg10x.it_i4
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
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_i4 = * (EIF_INTEGER_32 *) arg10x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,arg7);
	RTLR(3,arg9);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLR(9,loc3);
	RTLR(10,tr1);
	RTLR(11,tr2);
	RTLR(12,ur4);
	RTLR(13,loc5);
	RTLR(14,loc7);
	RTLIU(15);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	
	RTEAA(l_feature_name, 180, Current, 11, 10, 2322);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(180, Current, 2322);
	RTCC(arg1, 180, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 180, l_feature_name, 4, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,434,0xFF01,1,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg7, 180, l_feature_name, 7, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg9, 180, l_feature_name, 9, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800012F, 0, 0); /* loc1 */
	loc1 = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg3;
	RTHOOK(3);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	loc11 = (EIF_INTEGER_32) arg2;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg6 < ((EIF_INTEGER_32) 15L))) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg6 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			ur1 = RTCCL(loc1);
			ui4_1 = loc11;
			ui4_2 = loc2;
			ur2 = arg4;
			ui4_3 = arg5;
			ui4_4 = arg6;
			ur3 = arg7;
			ui4_5 = arg8;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2072, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x, ui4_3x, ui4_4x, ur3x, ui4_5x)).it_i4);
			loc11 = (EIF_INTEGER_32) ti4_1;
		} else {
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(8);
				uc1 = (EIF_CHARACTER_8) '\000';
				ui4_1 = loc11;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3056, "put", loc1))(loc1, uc1x, ui4_1x);
				RTHOOK(9);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11++;
				RTHOOK(10);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2--;
			}
		}
	} else {
		RTHOOK(11);
		RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
		ui4_1 = arg8;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg7))(arg7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(40, "p", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) tr2;
		RTHOOK(12);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		ui4_1 = arg8;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg7))(arg7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(42, "n", tr1));
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(13);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (arg6 < loc9)) {
			tb2 = '\0';
			if ((EIF_BOOLEAN)(arg6 == loc9)) {
				ur1 = arg4;
				ui4_1 = arg5;
				ur2 = loc3;
				ui4_2 = loc4;
				ui4_3 = arg6;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1946, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x)).it_i4);
				tb2 = (EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(14);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			ur1 = RTCCL(loc1);
			ui4_1 = loc11;
			ui4_2 = loc2;
			ur2 = arg4;
			ui4_3 = arg5;
			ui4_4 = arg6;
			ur3 = arg7;
			ui4_5 = (EIF_INTEGER_32) (arg8 - ((EIF_INTEGER_32) 1L));
			ur4 = arg9;
			ui4_6 = arg10;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2070, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x, ui4_3x, ui4_4x, ur3x, ui4_5x, ur4x, ui4_6x)).it_i4);
			loc11 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(15);
			RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
			loc5 = (EIF_REFERENCE) arg9;
			RTHOOK(16);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) arg10;
			RTHOOK(17);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			loc7 = (EIF_REFERENCE) arg4;
			RTHOOK(18);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8 = (EIF_INTEGER_32) arg5;
			RTHOOK(19);
			ur1 = loc5;
			ui4_1 = loc6;
			ur2 = loc7;
			ui4_2 = loc8;
			ur3 = arg4;
			ui4_3 = arg5;
			ui4_4 = arg6;
			ur4 = loc3;
			ui4_5 = loc4;
			ui4_6 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1962, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x, ui4_6x);
			RTHOOK(20);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg6 - loc9);
			RTHOOK(21);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			ui4_1 = (EIF_INTEGER_32) (loc6 + loc10);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc5))(loc5, ui4_1x)).it_n4);
			ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
			loc10 += ti4_1;
			RTHOOK(22);
			if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(23);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ui4_1 = arg8;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg7))(arg7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(39, "digits_in_base", tr1));
				loc2 -= ti4_1;
			}
			RTHOOK(24);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			ur1 = RTCCL(loc1);
			ui4_1 = loc11;
			ui4_2 = loc2;
			ur2 = loc5;
			ui4_3 = loc6;
			ui4_4 = loc10;
			ur3 = arg7;
			ui4_5 = (EIF_INTEGER_32) (arg8 - ((EIF_INTEGER_32) 1L));
			ur4 = arg9;
			ui4_6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg10 + arg6) - loc9) + ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2070, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x, ui4_3x, ui4_4x, ur3x, ui4_5x, ur4x, ui4_6x)).it_i4);
			loc11 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(25);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			ur1 = RTCCL(loc1);
			ui4_1 = loc11;
			ui4_2 = arg8;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg7))(arg7, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(39, "digits_in_base", tr1));
			ui4_2 = ti4_1;
			ur2 = loc7;
			ui4_3 = loc8;
			ui4_4 = loc9;
			ur3 = arg7;
			ui4_5 = (EIF_INTEGER_32) (arg8 - ((EIF_INTEGER_32) 1L));
			ur4 = arg9;
			ui4_6 = arg10;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2070, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x, ui4_3x, ui4_4x, ur3x, ui4_5x, ur4x, ui4_6x)).it_i4);
			loc11 = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTHOOK(26);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) loc11;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(23);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
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
#undef uc1
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

/* {SPECIAL_ACCESS}.get_str */
EIF_TYPED_VALUE F181_2326 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "get_str";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc11 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc12 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
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
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ui4_7x = {{0}, SK_INT32};
#define ui4_7 ui4_7x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,Current);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLR(5,loc9);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLR(9,loc1);
	RTLIU(10);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_UINT32, &loc11);
	RTLU(SK_UINT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_INT32, &loc18);
	
	RTEAA(l_feature_name, 180, Current, 18, 6, 2323);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(180, Current, 2323);
	RTCC(arg1, 180, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg4, 180, l_feature_name, 4, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg6 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		uc1 = (EIF_CHARACTER_8) '\000';
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3056, "put", arg1))(arg1, uc1x, ui4_1x);
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		tu4_1 = (EIF_NATURAL_32) arg3;
		uu4_1 = tu4_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1048, dtype))(Current, uu4_1x)).it_b);
		if (tb1) {
			RTHOOK(5);
			RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
			ui4_1 = arg3;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2068, dtype))(Current, ui4_1x)).it_n4);
			RTNHOOK(5,1);
			ti4_1 = (EIF_INTEGER_32) tu4_1;
			loc13 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
			loc17 = (EIF_INTEGER_32) arg2;
			RTHOOK(7);
			RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 + arg6) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg4))(arg4, ui4_1x)).it_n4);
			loc11 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(8);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			uu4_1 = loc11;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
			loc14 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(9);
			RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			loc18 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * arg6) - loc14);
			RTHOOK(10);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc18 % loc13);
			RTHOOK(11);
			if ((EIF_BOOLEAN)(loc14 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(12);
				RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
				loc18 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc18 + loc13) - loc14);
			}
			RTHOOK(13);
			RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			loc15 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc18 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg6 - ((EIF_INTEGER_32) 1L)) * ti4_1));
			RTHOOK(14);
			RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
			loc16 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg6 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(15);
				if ((EIF_BOOLEAN) (loc16 < ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(16);
				RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
				loc15 -= loc13;
				for (;;) {
					RTHOOK(17);
					if ((EIF_BOOLEAN) (loc15 < ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(18);
					ui4_1 = loc15;
					tu4_1 = eif_bit_shift_right(loc11,ui4_1);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
					ui4_1 = loc13;
					tu4_3 = eif_bit_shift_left(tu4_2,ui4_1);
					uu4_1 = (EIF_NATURAL_32) (tu4_3 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
					tu4_2 = eif_bit_and(tu4_1,uu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_2;
					uc1 = tc1;
					ui4_1 = loc17;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3056, "put", arg1))(arg1, uc1x, ui4_1x);
					RTHOOK(19);
					RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
					loc17++;
					RTHOOK(20);
					RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
					loc15 -= loc13;
				}
				RTHOOK(21);
				RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
				loc16--;
				RTHOOK(22);
				if ((EIF_BOOLEAN) (loc16 >= ((EIF_INTEGER_32) 0L))) {
					RTHOOK(23);
					RTDBGAL(12, 0x38000000, 1, 0); /* loc12 */
					ui4_1 = (EIF_INTEGER_32) -loc15;
					tu4_1 = eif_bit_shift_left(loc11,ui4_1);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
					ui4_1 = loc13;
					tu4_3 = eif_bit_shift_left(tu4_2,ui4_1);
					uu4_1 = (EIF_NATURAL_32) (tu4_3 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
					tu4_2 = eif_bit_and(tu4_1,uu4_1);
					loc12 = (EIF_NATURAL_32) tu4_2;
					RTHOOK(24);
					RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
					ui4_1 = (EIF_INTEGER_32) (arg5 + loc16);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg4))(arg4, ui4_1x)).it_n4);
					loc11 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(25);
					RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					loc15 += ti4_1;
					RTHOOK(26);
					ui4_1 = loc15;
					tu4_1 = eif_bit_shift_right(loc11,ui4_1);
					uu4_1 = tu4_1;
					tu4_2 = eif_bit_or(loc12,uu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_2;
					uc1 = tc1;
					ui4_1 = loc17;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3056, "put", arg1))(arg1, uc1x, ui4_1x);
					RTHOOK(27);
					RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
					loc17++;
				}
			}
			RTHOOK(28);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc17 - arg2);
		} else {
			RTHOOK(29);
			if ((EIF_BOOLEAN) (arg6 < ((EIF_INTEGER_32) 30L))) {
				RTHOOK(30);
				RTDBGAL(5, 0xF80001B2, 0, 0); /* loc5 */
				ui4_1 = ((EIF_INTEGER_32) 1L);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,434,0xFF01,1,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					if (ui4_1< 0) {
						eraise ("non_negative_argument", EN_RT_CHECK);
					}
					tr1 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
					RT_SPECIAL_COUNT(tr1) = 0;
				}
				loc5 = (EIF_REFERENCE) tr1;
				RTHOOK(31);
				RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
				ui4_2 = ((EIF_INTEGER_32) 0L);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					if (ui4_2< 0) {
						eraise ("non_negative_argument", EN_RT_CHECK);
					}
					tr1 = RTLNSP2(typres0.id,0,ui4_2,sizeof(EIF_NATURAL_32), EIF_TRUE);
					RT_SPECIAL_COUNT(tr1) = 0;
				}
				loc9 = (EIF_REFERENCE) tr1;
				RTHOOK(32);
				tr1 = RTLN(eif_new_type(1, 0x01).id);
				ui4_3 = ((EIF_INTEGER_32) 0L);
				ur1 = loc9;
				ui4_4 = ((EIF_INTEGER_32) 0L);
				ui4_5 = ((EIF_INTEGER_32) 0L);
				ui4_6 = arg3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(38, Dtype(tr1)))(tr1, ui4_3x, ur1x, ui4_4x, ui4_5x, ui4_6x);
				RTNHOOK(32,1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3639, "extend", loc5))(loc5, ur1x);
				RTHOOK(33);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ur1 = RTCCL(arg1);
				ui4_3 = arg2;
				ui4_4 = ((EIF_INTEGER_32) 0L);
				ur2 = arg4;
				ui4_5 = arg5;
				ui4_6 = arg6;
				ur3 = loc5;
				ui4_7 = ((EIF_INTEGER_32) 0L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2072, dtype))(Current, ur1x, ui4_3x, ui4_4x, ur2x, ui4_5x, ui4_6x, ur3x, ui4_7x)).it_i4);
				Result = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(34);
				RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg6) + ((EIF_INTEGER_32) 30L));
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					if (ui4_3< 0) {
						eraise ("non_negative_argument", EN_RT_CHECK);
					}
					tr1 = RTLNSP2(typres0.id,0,ui4_3,sizeof(EIF_NATURAL_32), EIF_TRUE);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_3x);
				RTNHOOK(34,1);
				loc1 = (EIF_REFERENCE) tr1;
				RTHOOK(35);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				ui4_3 = arg3;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2068, dtype))(Current, ui4_3x)).it_n4);
				loc3 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(36);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ui4_3 = arg3;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2066, dtype))(Current, ui4_3x)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(37);
				RTDBGAL(5, 0xF80001B2, 0, 0); /* loc5 */
				ui4_3 = ((EIF_INTEGER_32) 30L);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,434,0xFF01,1,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					if (ui4_3< 0) {
						eraise ("non_negative_argument", EN_RT_CHECK);
					}
					tr1 = RTLNSP2(typres0.id,EO_REF,ui4_3,sizeof(EIF_REFERENCE), EIF_FALSE);
					RT_SPECIAL_COUNT(tr1) = 0;
				}
				loc5 = (EIF_REFERENCE) tr1;
				RTHOOK(38);
				RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				ui4_4 = ((EIF_INTEGER_32) 0L);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					if (ui4_4< 0) {
						eraise ("non_negative_argument", EN_RT_CHECK);
					}
					tr1 = RTLNSP2(typres0.id,0,ui4_4,sizeof(EIF_NATURAL_32), EIF_TRUE);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_4x);
				RTNHOOK(38,1);
				loc9 = (EIF_REFERENCE) tr1;
				RTHOOK(39);
				tr1 = RTLN(eif_new_type(1, 0x01).id);
				ui4_4 = ((EIF_INTEGER_32) 0L);
				ur1 = loc9;
				ui4_5 = ((EIF_INTEGER_32) 0L);
				ui4_6 = ((EIF_INTEGER_32) 0L);
				ui4_7 = arg3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(38, Dtype(tr1)))(tr1, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
				RTNHOOK(39,1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3639, "extend", loc5))(loc5, ur1x);
				RTHOOK(40);
				RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
				uu4_1 = loc3;
				ui4_4 = ((EIF_INTEGER_32) 1L);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					if (ui4_4< 0) {
						eraise ("non_negative_argument", EN_RT_CHECK);
					}
					tr1 = RTLNSP2(typres0.id,0,ui4_4,sizeof(EIF_NATURAL_32), EIF_TRUE);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_4x);
				RTNHOOK(40,1);
				loc9 = (EIF_REFERENCE) tr1;
				RTHOOK(41);
				tr1 = RTLN(eif_new_type(1, 0x01).id);
				ui4_4 = loc4;
				ur1 = loc9;
				ui4_5 = ((EIF_INTEGER_32) 0L);
				ui4_6 = ((EIF_INTEGER_32) 1L);
				ui4_7 = arg3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(38, Dtype(tr1)))(tr1, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
				RTNHOOK(41,1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3639, "extend", loc5))(loc5, ur1x);
				RTHOOK(42);
				RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
				uu4_1 = loc3;
				ui4_4 = ((EIF_INTEGER_32) 1L);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					if (ui4_4< 0) {
						eraise ("non_negative_argument", EN_RT_CHECK);
					}
					tr1 = RTLNSP2(typres0.id,0,ui4_4,sizeof(EIF_NATURAL_32), EIF_TRUE);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_4x);
				RTNHOOK(42,1);
				loc9 = (EIF_REFERENCE) tr1;
				RTHOOK(43);
				tr1 = RTLN(eif_new_type(1, 0x01).id);
				ui4_4 = loc4;
				ur1 = loc9;
				ui4_5 = ((EIF_INTEGER_32) 0L);
				ui4_6 = ((EIF_INTEGER_32) 1L);
				ui4_7 = arg3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(38, Dtype(tr1)))(tr1, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
				RTNHOOK(43,1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3639, "extend", loc5))(loc5, ur1x);
				RTHOOK(44);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(45);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				RTHOOK(46);
				RTDBGAL(9, 0xF800026B, 0, 0); /* loc9 */
				uu4_1 = loc3;
				ui4_4 = ((EIF_INTEGER_32) 1L);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					if (ui4_4< 0) {
						eraise ("non_negative_argument", EN_RT_CHECK);
					}
					tr1 = RTLNSP2(typres0.id,0,ui4_4,sizeof(EIF_NATURAL_32), EIF_TRUE);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_4x);
				RTNHOOK(46,1);
				loc9 = (EIF_REFERENCE) tr1;
				RTHOOK(47);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					RTHOOK(48);
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc7) > arg6)) break;
					RTHOOK(49);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6++;
					RTHOOK(50);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) loc2;
					RTHOOK(51);
					ur1 = loc1;
					ui4_4 = loc8;
					ur2 = loc9;
					ui4_5 = loc10;
					ui4_6 = loc7;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1073, dtype))(Current, ur1x, ui4_4x, ur2x, ui4_5x, ui4_6x);
					RTHOOK(52);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					loc7 *= ((EIF_INTEGER_32) 2L);
					RTHOOK(53);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc7) - ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_4x)).it_n4);
					ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
					loc7 -= ti4_1;
					RTHOOK(54);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4 *= ((EIF_INTEGER_32) 2L);
					RTHOOK(55);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) loc8;
					RTHOOK(56);
					tr1 = RTLN(eif_new_type(1, 0x01).id);
					ui4_4 = loc4;
					ur1 = loc9;
					ui4_5 = ((EIF_INTEGER_32) 0L);
					ui4_6 = loc7;
					ui4_7 = arg3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(38, Dtype(tr1)))(tr1, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
					RTNHOOK(56,1);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3639, "extend", loc5))(loc5, ur1x);
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
	RTLO(26);
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
#undef ui4_6
#undef ui4_7
#undef uu4_1
#undef uc1
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ACCESS}.sb_get_str */
EIF_TYPED_VALUE F181_2327 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "sb_get_str";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc16 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc17 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_r
#define arg8 arg8x.it_i4
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,arg7);
	RTLR(3,loc14);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc13);
	RTLR(7,loc2);
	RTLR(8,loc1);
	RTLR(9,loc6);
	RTLR(10,loc8);
	RTLR(11,ur1);
	RTLR(12,ur2);
	RTLIU(13);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_UINT32, &loc16);
	RTLU(SK_UINT32, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_INT32, &loc19);
	RTLU(SK_INT32, &loc20);
	
	RTEAA(l_feature_name, 180, Current, 20, 8, 2324);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(180, Current, 2324);
	RTCC(arg1, 180, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg4, 180, l_feature_name, 4, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,434,0xFF01,1,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg7, 180, l_feature_name, 7, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(14, 0xF80001F0, 0, 0); /* loc14 */
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
	loc14 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
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
	RTNHOOK(2,1);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
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
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
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
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
	loc20 = (EIF_INTEGER_32) arg3;
	RTHOOK(6);
	RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
	loc19 = (EIF_INTEGER_32) arg2;
	RTHOOK(7);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	loc11 = (EIF_INTEGER_32) arg6;
	RTHOOK(8);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 30L) * ((EIF_INTEGER_32) 8L)) * ((EIF_INTEGER_32) 4L)) * ((EIF_INTEGER_32) 7L)) / ((EIF_INTEGER_32) 11L));
	RTHOOK(9);
	RTDBGAL(6, 0xF800014B, 0, 0); /* loc6 */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = loc10;
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
	loc6 = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTDBGAL(8, 0xF800026B, 0, 0); /* loc8 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 30L);
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
	RTHOOK(11);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ui4_1 = arg8;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg7))(arg7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(43, "base", tr1));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
	ui4_1 = loc4;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2066, dtype))(Current, ui4_1x)).it_i4);
	loc15 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(13);
	RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
	ui4_1 = loc4;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2068, dtype))(Current, ui4_1x)).it_n4);
	loc16 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(14);
	RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
	ui4_1 = loc4;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2069, dtype))(Current, ui4_1x)).it_n4);
	loc17 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(15);
	RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
	uu4_1 = loc16;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1025, dtype))(Current, uu4_1x)).it_i4);
	loc18 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(16);
	ur1 = arg4;
	ui4_1 = arg5;
	ui4_2 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
	ui4_3 = loc11;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc8))(loc8, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(17);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + loc10);
	for (;;) {
		RTHOOK(18);
		if ((EIF_BOOLEAN) (loc11 <= ((EIF_INTEGER_32) 1L))) break;
		RTHOOK(19);
		ur1 = loc8;
		ui4_1 = loc9;
		ui4_2 = ((EIF_INTEGER_32) 1L);
		ur2 = loc8;
		ui4_3 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
		ui4_4 = loc11;
		uu4_1 = loc16;
		uu4_2 = loc17;
		ui4_5 = loc18;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1960, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x, ui4_3x, ui4_4x, uu4_1x, uu4_2x, ui4_5x)).it_n4);
		RTNHOOK(19,1);
		eif_do_nothing_value.it_n4 = tu4_1;
		RTHOOK(20);
		RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
		ui4_1 = (EIF_INTEGER_32) (loc9 + loc11);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc8))(loc8, ui4_1x)).it_n4);
		ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
		loc11 -= ti4_1;
		RTHOOK(21);
		ui4_1 = loc9;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc8))(loc8, ui4_1x)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc13))(loc13, uu4_1x);
		RTHOOK(22);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 -= loc15;
		RTHOOK(23);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12 = (EIF_INTEGER_32) loc15;
		for (;;) {
			RTHOOK(24);
			if ((EIF_BOOLEAN)(loc12 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(25);
			ur1 = RTCCL(loc14);
			ur2 = RTCCL(loc13);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc13))(loc13)).it_n4);
			uu4_1 = tu4_1;
			tu4_2 = (EIF_NATURAL_32) loc4;
			uu4_2 = tu4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
			RTHOOK(26);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc14))(loc14)).it_n4);
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			uu1_1 = tu1_1;
			ui4_1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc6))(loc6, uu1_1x, ui4_1x);
			RTHOOK(27);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
			RTHOOK(28);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12--;
		}
		RTHOOK(29);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 -= loc15;
	}
	RTHOOK(30);
	ui4_1 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc8))(loc8, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc2))(loc2, uu4_1x);
	for (;;) {
		RTHOOK(31);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(32);
		ur1 = RTCCL(loc2);
		ur2 = RTCCL(loc1);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
		uu4_1 = tu4_2;
		tu4_3 = (EIF_NATURAL_32) loc4;
		uu4_2 = tu4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1956, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
		RTHOOK(33);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3--;
		RTHOOK(34);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc1))(loc1)).it_n4);
		tu1_1 = (EIF_NATURAL_8) tu4_2;
		uu1_1 = tu1_1;
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc6))(loc6, uu1_1x, ui4_1x);
	}
	RTHOOK(35);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 + loc10) - loc3);
	for (;;) {
		RTHOOK(36);
		if ((EIF_BOOLEAN) (loc5 >= loc20)) break;
		RTHOOK(37);
		uc1 = (EIF_CHARACTER_8) '\000';
		ui4_1 = loc19;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3056, "put", arg1))(arg1, uc1x, ui4_1x);
		RTHOOK(38);
		RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
		loc19++;
		RTHOOK(39);
		RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
		loc20--;
	}
	for (;;) {
		RTHOOK(40);
		if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(41);
		ui4_1 = loc3;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc6))(loc6, ui4_1x)).it_n1);
		tc1 = (EIF_CHARACTER_8) tu1_1;
		uc1 = tc1;
		ui4_1 = loc19;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3056, "put", arg1))(arg1, uc1x, ui4_1x);
		RTHOOK(42);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
		RTHOOK(43);
		RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
		loc19++;
		RTHOOK(44);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5--;
	}
	RTHOOK(45);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc19 - arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(46);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(30);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef uu4_1
#undef uu4_2
#undef uu1_1
#undef uc1
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit181 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
