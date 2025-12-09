/*
 * Code for class SPECIAL_ARITHMETIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F63_1105(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1106(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1107(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1108(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1109(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1110(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1111(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1112(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1113(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1114(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1115(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1116(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1117(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1118(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1119(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1120(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1121(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1122(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F63_1123(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit63(void);

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

/* {SPECIAL_ARITHMETIC}.add */
void F63_1105 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "add";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_r
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
	EIF_NATURAL_32 tu4_1;
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
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,arg9);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,ur3);
	RTLR(7,ur4);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_BOOL, &loc5);
	
	RTEAA(l_feature_name, 62, Current, 5, 9, 1151);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1151);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 62, l_feature_name, 6, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg9, 62, l_feature_name, 9, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op2_count >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg8 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("op1_count >= op2_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= arg8), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("op2_count = 0 or target.valid_index (target_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("op2_count = 0 or target.valid_index (target_offset + op1_count - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg5) - ((EIF_INTEGER_32) 1L));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("op2_count = 0 or op1.valid_index (op1_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg4;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("op2_count = 0 or op1.valid_index (op1_offset + op1_count - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg5) - ((EIF_INTEGER_32) 1L));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(7);
		RTCT("op2_count = 0 or op2.valid_index (op2_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg7;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg6))(arg6, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(8);
		RTCT("op2_count = 0 or op2.valid_index (op2_offset + op2_count - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg8 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 + arg8) - ((EIF_INTEGER_32) 1L));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg6))(arg6, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(9);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg8;
	RTHOOK(10);
	ur1 = arg1;
	ui4_1 = arg2;
	ur2 = arg3;
	ui4_2 = arg4;
	ur3 = arg6;
	ui4_3 = arg7;
	ui4_4 = loc1;
	ur4 = RTCCL(arg9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
	RTHOOK(11);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
	loc3 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(13);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(14);
			if ((EIF_BOOLEAN) (loc5 || (EIF_BOOLEAN)(loc2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(15);
			if ((EIF_BOOLEAN) (loc1 >= arg5)) {
				RTHOOK(16);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg9))(arg9, uu4_1x);
				RTHOOK(17);
				RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(18);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				ui4_1 = (EIF_INTEGER_32) (arg4 + loc1);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
				loc2 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(19);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				loc2 += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(20);
				uu4_1 = loc2;
				ui4_1 = (EIF_INTEGER_32) (arg2 + loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
				RTHOOK(21);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		}
	}
	RTHOOK(22);
	if ((EIF_BOOLEAN) !loc5) {
		RTHOOK(23);
		if ((EIF_BOOLEAN)(arg1 != arg3)) {
			RTHOOK(24);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) loc1;
			for (;;) {
				RTHOOK(25);
				if ((EIF_BOOLEAN) (loc4 >= arg5)) break;
				RTHOOK(26);
				ui4_1 = (EIF_INTEGER_32) (arg4 + loc4);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
				uu4_1 = tu4_1;
				ui4_1 = (EIF_INTEGER_32) (arg2 + loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
				RTHOOK(27);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4++;
			}
		}
		RTHOOK(28);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg9))(arg9, uu4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ur4
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

/* {SPECIAL_ARITHMETIC}.add_1 */
void F63_1106 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "add_1";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_n4
#define arg7 arg7x.it_r
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
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_n4 = * (EIF_NATURAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg7);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_UINT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 62, Current, 2, 7, 1152);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1152);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg7, 62, l_feature_name, 7, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	ui4_1 = arg4;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + arg6);
	RTHOOK(2);
	uu4_1 = loc2;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 < arg6)) {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(5);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= arg5) || (EIF_BOOLEAN)(loc2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(7);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			ui4_1 = (EIF_INTEGER_32) (arg4 + loc1);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
			loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
			RTHOOK(8);
			uu4_1 = loc2;
			ui4_1 = (EIF_INTEGER_32) (arg2 + loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
			RTHOOK(9);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
		RTHOOK(10);
		ur1 = arg3;
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc1);
		ui4_2 = (EIF_INTEGER_32) (arg2 + loc1);
		ui4_3 = (EIF_INTEGER_32) (arg5 - loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(11);
		ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg5) && (EIF_BOOLEAN)(loc2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))));
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg7))(arg7, uu4_1x);
	} else {
		RTHOOK(12);
		if ((EIF_BOOLEAN)(arg1 != arg3)) {
			RTHOOK(13);
			ur1 = arg3;
			ui4_1 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L));
			ui4_2 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
			ui4_3 = (EIF_INTEGER_32) (arg5 - ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
		RTHOOK(14);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg7))(arg7, uu4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("carry.item = 0 or carry.item = 1", EX_POST);
		tb1 = '\01';
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg7))(arg7)).it_n4);
		if (!((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg7))(arg7)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.add_n */
void F63_1107 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "add_n";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg8);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	
	RTEAA(l_feature_name, 62, Current, 8, 8, 1153);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1153);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg5, 62, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg8, 62, l_feature_name, 8, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg7 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n = 0 or op1.valid_index (op1_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg7 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg4;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("n = 0 or op1.valid_index (op1_offset + n - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg7 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg7) - ((EIF_INTEGER_32) 1L));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("n = 0 or op2.valid_index (op2_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg7 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg6;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg5))(arg5, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("n = 0 or op2.valid_index (op2_offset + n - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg7 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg6 + arg7) - ((EIF_INTEGER_32) 1L));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg5))(arg5, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("n = 0 or target.valid_index (target_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg7 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(7);
		RTCT("n = 0 or target.valid_index (target_offset + n - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg7 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg7) - ((EIF_INTEGER_32) 1L));
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
	RTHOOK(8);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_LOOP) {
		RTHOOK(9);
		RTCT("n - cursor + 1", EX_VAR);
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 - loc7) + ((EIF_INTEGER_32) 1L));
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc7 == arg7)) break;
		RTHOOK(11);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) (loc7 + arg4);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(12);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = (EIF_INTEGER_32) (loc7 + arg6);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg5))(arg5, ui4_1x)).it_n4);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc1 + loc2);
		RTHOOK(14);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ti4_3 = (EIF_INTEGER_32) (EIF_BOOLEAN) (loc3 < loc1);
		tu4_1 = (EIF_NATURAL_32) ti4_3;
		loc5 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(15);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc3 + loc8);
		RTHOOK(16);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		ti4_3 = (EIF_INTEGER_32) (EIF_BOOLEAN) (loc4 < loc3);
		tu4_1 = (EIF_NATURAL_32) ti4_3;
		loc6 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(17);
		RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
		uu4_1 = loc6;
		tu4_1 = eif_bit_or(loc5,uu4_1);
		loc8 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(18);
		uu4_1 = loc4;
		ui4_1 = (EIF_INTEGER_32) (loc7 + arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(19);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7++;
		if (RTAL & CK_LOOP) {
			RTHOOK(9);
			RTCT("n - cursor + 1", EX_VAR);
			ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg7 - loc7) + ((EIF_INTEGER_32) 1L));
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			} else {
				RTCF;
			}
		}
	}
	RTHOOK(20);
	uu4_1 = loc8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg8))(arg8, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
#undef ui4_1
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

/* {SPECIAL_ARITHMETIC}.addmul_1 */
void F63_1108 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "addmul_1";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_n4
#define arg7 arg7x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_n4 = * (EIF_NATURAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg7);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_UINT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	
	RTEAA(l_feature_name, 62, Current, 6, 7, 1154);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1154);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg7, 62, l_feature_name, 7, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
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
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_LOOP) {
		RTHOOK(5);
		RTCT("n - cursor + 1", EX_VAR);
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 - loc5) + ((EIF_INTEGER_32) 1L));
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg5 - loc5) == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(7);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc5);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(8);
		ur1 = RTCCL(loc2);
		ur2 = RTCCL(loc3);
		uu4_1 = loc1;
		uu4_2 = arg6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
		RTHOOK(9);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 + loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
		RTHOOK(10);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		ti4_3 = (EIF_INTEGER_32) (EIF_BOOLEAN) (tu4_1 < loc6);
		tu4_1 = (EIF_NATURAL_32) ti4_3;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
		loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + tu4_2);
		RTHOOK(11);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc5);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc4 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(12);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (loc4 + tu4_1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
		RTHOOK(13);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		ti4_3 = (EIF_INTEGER_32) (EIF_BOOLEAN) (tu4_1 < loc4);
		tu4_1 = (EIF_NATURAL_32) ti4_3;
		loc6 += tu4_1;
		RTHOOK(14);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(15);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5++;
		if (RTAL & CK_LOOP) {
			RTHOOK(5);
			RTCT("n - cursor + 1", EX_VAR);
			ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 - loc5) + ((EIF_INTEGER_32) 1L));
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			} else {
				RTCF;
			}
		}
	}
	RTHOOK(16);
	uu4_1 = loc6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg7))(arg7, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.decr_u */
void F63_1109 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "decr_u";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 62, Current, 2, 3, 1155);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1155);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	ui4_1 = arg2;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	uu4_1 = (EIF_NATURAL_32) (loc1 - arg3);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 < arg3)) {
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		RTHOOK(5);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(7);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = loc2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(8);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			loc1 -= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(9);
			uu4_1 = loc1;
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
			RTHOOK(10);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.incr_u */
void F63_1110 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "incr_u";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 62, Current, 2, 3, 1156);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1156);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	ui4_1 = arg2;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
	loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + arg3);
	RTHOOK(2);
	uu4_1 = loc1;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 < arg3)) {
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		RTHOOK(5);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(7);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = loc2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(8);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			loc1 += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(9);
			uu4_1 = loc1;
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
			RTHOOK(10);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.mul */
void F63_1111 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "mul";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc15 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc16 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_r
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
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,arg9);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,Current);
	RTLR(9,ur3);
	RTLR(10,loc13);
	RTLR(11,tr1);
	RTLR(12,ur4);
	RTLR(13,loc7);
	RTLR(14,loc3);
	RTLIU(15);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_UINT32, &loc15);
	RTLU(SK_UINT32, &loc16);
	
	RTEAA(l_feature_name, 62, Current, 16, 9, 1157);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1157);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg6, 62, l_feature_name, 6, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg9, 62, l_feature_name, 9, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("target.valid_index (target_offset_a)", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target.valid_index (target_offset_a + op2_count_a - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg8) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("op1_a.valid_index (op1_offset_a)", EX_PRE);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("op1_a.valid_index (op1_offset_a + op2_count_a - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg8) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("op1_count_a >= op2_count_a", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= arg8), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("op2_count_a >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg8 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	RTDBGAL(4, 0xF800026B, 0, 0); /* loc4 */
	loc4 = (EIF_REFERENCE) arg3;
	RTHOOK(8);
	RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
	loc5 = (EIF_REFERENCE) arg6;
	RTHOOK(9);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	loc8 = (EIF_INTEGER_32) arg5;
	RTHOOK(10);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	loc9 = (EIF_INTEGER_32) arg8;
	RTHOOK(11);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	loc10 = (EIF_INTEGER_32) arg4;
	RTHOOK(12);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	loc11 = (EIF_INTEGER_32) arg7;
	RTHOOK(13);
	RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
	loc12 = (EIF_INTEGER_32) arg2;
	RTHOOK(14);
	if ((EIF_BOOLEAN)(loc8 == loc9)) {
		RTHOOK(15);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == loc5) && (EIF_BOOLEAN)(loc10 == loc11))) {
			RTHOOK(16);
			ur1 = arg1;
			ui4_1 = loc12;
			ur2 = loc4;
			ui4_2 = loc10;
			ui4_3 = loc8;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1073, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
			RTHOOK(17);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc12 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc8)) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg9))(arg9, uu4_1x);
		} else {
			RTHOOK(18);
			ur1 = arg1;
			ui4_1 = loc12;
			ur2 = loc4;
			ui4_2 = loc10;
			ur3 = loc5;
			ui4_3 = loc11;
			ui4_4 = loc8;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1068, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x);
			RTHOOK(19);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc12 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc8)) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg9))(arg9, uu4_1x);
		}
	} else {
		RTHOOK(20);
		if ((EIF_BOOLEAN) (loc9 < ((EIF_INTEGER_32) 32L))) {
			RTHOOK(21);
			if ((EIF_BOOLEAN) (loc8 <= ((EIF_INTEGER_32) 500L))) {
				RTHOOK(22);
				ur1 = arg1;
				ui4_1 = loc12;
				ur2 = loc4;
				ui4_2 = loc10;
				ui4_3 = loc8;
				ur3 = loc5;
				ui4_4 = loc11;
				ui4_5 = loc9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
			} else {
				RTHOOK(23);
				RTDBGAL(13, 0xF800026B, 0, 0); /* loc13 */
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				ui4_1 = ((EIF_INTEGER_32) 32L);
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
				RTNHOOK(23,1);
				loc13 = (EIF_REFERENCE) tr1;
				RTHOOK(24);
				ur1 = arg1;
				ui4_1 = loc12;
				ur2 = loc4;
				ui4_2 = loc10;
				ui4_3 = ((EIF_INTEGER_32) 500L);
				ur3 = loc5;
				ui4_4 = loc11;
				ui4_5 = loc9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
				RTHOOK(25);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				loc12 += ((EIF_INTEGER_32) 500L);
				RTHOOK(26);
				ur1 = arg1;
				ui4_1 = loc12;
				ui4_2 = loc14;
				ui4_3 = loc9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc13))(loc13, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(27);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 += ((EIF_INTEGER_32) 500L);
				RTHOOK(28);
				RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
				loc8 -= ((EIF_INTEGER_32) 500L);
				for (;;) {
					RTHOOK(29);
					if ((EIF_BOOLEAN) (loc8 <= ((EIF_INTEGER_32) 500L))) break;
					RTHOOK(30);
					ur1 = arg1;
					ui4_1 = loc12;
					ur2 = loc4;
					ui4_2 = loc10;
					ui4_3 = ((EIF_INTEGER_32) 500L);
					ur3 = loc5;
					ui4_4 = loc11;
					ui4_5 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
					RTHOOK(31);
					ur1 = arg1;
					ui4_1 = loc12;
					ur2 = arg1;
					ui4_2 = loc12;
					ur3 = loc13;
					ui4_3 = loc14;
					ui4_4 = loc9;
					ur4 = RTCCL(arg9);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
					RTHOOK(32);
					RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
					loc15 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(33);
					ur1 = arg1;
					ui4_1 = (EIF_INTEGER_32) (loc12 + loc9);
					uu4_1 = loc15;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1064, dtype))(Current, ur1x, ui4_1x, uu4_1x);
					RTHOOK(34);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					loc12 += ((EIF_INTEGER_32) 500L);
					RTHOOK(35);
					ur1 = arg1;
					ui4_1 = loc12;
					ui4_2 = loc14;
					ui4_3 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc13))(loc13, ur1x, ui4_1x, ui4_2x, ui4_3x);
					RTHOOK(36);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10 += ((EIF_INTEGER_32) 500L);
					RTHOOK(37);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 -= ((EIF_INTEGER_32) 500L);
				}
				RTHOOK(38);
				if ((EIF_BOOLEAN) (loc8 > loc9)) {
					RTHOOK(39);
					ur1 = arg1;
					ui4_1 = loc12;
					ur2 = loc4;
					ui4_2 = loc10;
					ui4_3 = loc8;
					ur3 = loc5;
					ui4_4 = loc11;
					ui4_5 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
				} else {
					RTHOOK(40);
					ur1 = arg1;
					ui4_1 = loc12;
					ur2 = loc5;
					ui4_2 = loc11;
					ui4_3 = loc9;
					ur3 = loc4;
					ui4_4 = loc10;
					ui4_5 = loc8;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
				}
				RTHOOK(41);
				ur1 = arg1;
				ui4_1 = loc12;
				ur2 = arg1;
				ui4_2 = loc12;
				ur3 = loc13;
				ui4_3 = loc14;
				ui4_4 = loc9;
				ur4 = RTCCL(arg9);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
				RTHOOK(42);
				RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
				loc15 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(43);
				ur1 = arg1;
				ui4_1 = (EIF_INTEGER_32) (loc12 + loc9);
				uu4_1 = loc15;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1064, dtype))(Current, ur1x, ui4_1x, uu4_1x);
			}
			RTHOOK(44);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc12 + loc8) + loc9) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg9))(arg9, uu4_1x);
		} else {
			RTHOOK(45);
			ur1 = arg1;
			ui4_1 = loc12;
			ur2 = loc4;
			ui4_2 = loc10;
			ur3 = loc5;
			ui4_3 = loc11;
			ui4_4 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1068, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x);
			RTHOOK(46);
			if ((EIF_BOOLEAN)(loc8 != loc9)) {
				RTHOOK(47);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				loc12 += loc9;
				RTHOOK(48);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) loc9;
				RTHOOK(49);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 += loc9;
				RTHOOK(50);
				RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
				loc8 -= loc9;
				RTHOOK(51);
				if ((EIF_BOOLEAN) (loc8 < loc9)) {
					RTHOOK(52);
					RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
					loc7 = (EIF_REFERENCE) loc4;
					RTHOOK(53);
					RTDBGAL(4, 0xF800026B, 0, 0); /* loc4 */
					loc4 = (EIF_REFERENCE) loc5;
					RTHOOK(54);
					RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
					loc5 = (EIF_REFERENCE) loc7;
					RTHOOK(55);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) loc10;
					RTHOOK(56);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10 = (EIF_INTEGER_32) loc11;
					RTHOOK(57);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11 = (EIF_INTEGER_32) loc6;
					RTHOOK(58);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) loc8;
					RTHOOK(59);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) loc9;
					RTHOOK(60);
					RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
					loc9 = (EIF_INTEGER_32) loc6;
				}
				RTHOOK(61);
				if ((EIF_BOOLEAN) (loc9 >= ((EIF_INTEGER_32) 32L))) {
					RTHOOK(62);
					RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					ui4_1 = (EIF_INTEGER_32) (loc9 + loc9);
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
					RTNHOOK(62,1);
					loc3 = (EIF_REFERENCE) tr1;
				} else {
					RTHOOK(63);
					RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					ui4_1 = (EIF_INTEGER_32) (loc8 + loc9);
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
					RTNHOOK(63,1);
					loc3 = (EIF_REFERENCE) tr1;
				}
				RTHOOK(64);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					RTHOOK(65);
					if ((EIF_BOOLEAN) (loc9 < ((EIF_INTEGER_32) 32L))) break;
					RTHOOK(66);
					ur1 = loc3;
					ui4_1 = ((EIF_INTEGER_32) 0L);
					ur2 = loc4;
					ui4_2 = loc10;
					ur3 = loc5;
					ui4_3 = loc11;
					ui4_4 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1068, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x);
					RTHOOK(67);
					if ((EIF_BOOLEAN) (loc1 <= (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc9))) {
						RTHOOK(68);
						ur1 = arg1;
						ui4_1 = loc12;
						ur2 = arg1;
						ui4_2 = loc12;
						ur3 = loc3;
						ui4_3 = ((EIF_INTEGER_32) 0L);
						ui4_4 = ((EIF_INTEGER_32) 1L);
						ur4 = RTCCL(arg9);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
						RTHOOK(69);
						RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
						loc2 += tu4_1;
						RTHOOK(70);
						if ((EIF_BOOLEAN)(loc1 != (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc9))) {
							RTHOOK(71);
							ur1 = arg1;
							ui4_1 = (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
							ur2 = loc3;
							ui4_2 = ((EIF_INTEGER_32) 1L);
							ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc9) - ((EIF_INTEGER_32) 1L));
							uu4_1 = loc2;
							ur3 = RTCCL(arg9);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
							RTHOOK(72);
							RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
							loc2 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(73);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc9);
						}
					} else {
						RTHOOK(74);
						ur1 = arg1;
						ui4_1 = loc12;
						ur2 = arg1;
						ui4_2 = loc12;
						ur3 = loc3;
						ui4_3 = ((EIF_INTEGER_32) 0L);
						ui4_4 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc9);
						ur4 = RTCCL(arg9);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
						RTHOOK(75);
						RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
						loc16 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(76);
						ur1 = arg1;
						ui4_1 = (EIF_INTEGER_32) (loc12 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc9));
						ur2 = arg1;
						ui4_2 = (EIF_INTEGER_32) (loc12 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc9));
						ui4_3 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) - (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc9));
						uu4_1 = loc16;
						ur3 = RTCCL(arg9);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
						RTHOOK(77);
						RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
						loc2 += tu4_1;
					}
					RTHOOK(78);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					loc12 += loc9;
					RTHOOK(79);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 -= loc9;
					RTHOOK(80);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10 += loc9;
					RTHOOK(81);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 -= loc9;
					RTHOOK(82);
					if ((EIF_BOOLEAN) (loc8 < loc9)) {
						RTHOOK(83);
						RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
						loc7 = (EIF_REFERENCE) loc4;
						RTHOOK(84);
						RTDBGAL(4, 0xF800026B, 0, 0); /* loc4 */
						loc4 = (EIF_REFERENCE) loc5;
						RTHOOK(85);
						RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
						loc5 = (EIF_REFERENCE) loc7;
						RTHOOK(86);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) loc8;
						RTHOOK(87);
						RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
						loc8 = (EIF_INTEGER_32) loc9;
						RTHOOK(88);
						RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
						loc9 = (EIF_INTEGER_32) loc6;
						RTHOOK(89);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) loc10;
						RTHOOK(90);
						RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
						loc10 = (EIF_INTEGER_32) loc11;
						RTHOOK(91);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						loc11 = (EIF_INTEGER_32) loc6;
					}
				}
				RTHOOK(92);
				if ((EIF_BOOLEAN)(loc9 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(93);
					ur1 = loc3;
					ui4_1 = ((EIF_INTEGER_32) 0L);
					ur2 = loc4;
					ui4_2 = loc10;
					ui4_3 = loc8;
					ur3 = loc5;
					ui4_4 = loc11;
					ui4_5 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
					RTHOOK(94);
					if ((EIF_BOOLEAN) (loc1 <= (EIF_INTEGER_32) (loc8 + loc9))) {
						RTHOOK(95);
						ur1 = arg1;
						ui4_1 = loc12;
						ur2 = arg1;
						ui4_2 = loc12;
						ur3 = loc3;
						ui4_3 = ((EIF_INTEGER_32) 0L);
						ui4_4 = loc1;
						ur4 = RTCCL(arg9);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
						RTHOOK(96);
						RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
						loc2 += tu4_1;
						RTHOOK(97);
						if ((EIF_BOOLEAN)(loc1 != (EIF_INTEGER_32) (loc8 + loc9))) {
							RTHOOK(98);
							ur1 = arg1;
							ui4_1 = (EIF_INTEGER_32) (loc12 + loc1);
							ur2 = loc3;
							ui4_2 = loc1;
							ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc9) - loc1);
							uu4_1 = loc2;
							ur3 = RTCCL(arg9);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
							RTHOOK(99);
							RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
							loc2 = (EIF_NATURAL_32) tu4_1;
						} else {
							RTHOOK(100);
							ur1 = arg1;
							ui4_1 = loc12;
							ur2 = arg1;
							ui4_2 = loc12;
							ur3 = loc3;
							ui4_3 = ((EIF_INTEGER_32) 0L);
							ui4_4 = (EIF_INTEGER_32) (loc8 + loc9);
							ur4 = RTCCL(arg9);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
							RTHOOK(101);
							RTDBGAL(16, 0x38000000, 1, 0); /* loc16 */
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
							loc16 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(102);
							ur1 = arg1;
							ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc12 + loc8) + loc9);
							ur2 = arg1;
							ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc12 + loc8) + loc9);
							ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc8) - loc9);
							uu4_1 = loc16;
							ur3 = RTCCL(arg9);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
							RTHOOK(103);
							RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
							loc2 += tu4_1;
						}
					}
				}
			}
			RTHOOK(104);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc9) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg9))(arg9, uu4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(105);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
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

/* {SPECIAL_ARITHMETIC}.mul_1 */
void F63_1112 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "mul_1";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_n4
#define arg7 arg7x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_n4 = * (EIF_NATURAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg7);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_UINT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	
	RTEAA(l_feature_name, 62, Current, 5, 7, 1158);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1158);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg7, 62, l_feature_name, 7, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op1.valid_index (op1_offset)", EX_PRE);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("op1.valid_index (op1_offset + n - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg5) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("target.valid_index (target_offset)", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("target.valid_index (target_offset + n - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg5) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
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
	RTNHOOK(5,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
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
	RTNHOOK(6,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(arg5 == loc4)) break;
		RTHOOK(8);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc4);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		ur1 = RTCCL(loc2);
		ur2 = RTCCL(loc3);
		uu4_1 = loc1;
		uu4_2 = arg6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
		RTHOOK(10);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 + loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
		RTHOOK(11);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (tu4_1 < loc5);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		loc5 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(12);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
		loc5 += tu4_1;
		RTHOOK(13);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(14);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4++;
	}
	RTHOOK(15);
	uu4_1 = loc5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg7))(arg7, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.mul_basecase */
void F63_1113 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "mul_basecase";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLIU(9);
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
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 62, Current, 2, 8, 1159);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1159);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 62, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op2_count >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg8 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("op1_count >= op2_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= arg8), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("target.valid_index (target_offset)", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("target.valid_index (target_offset + op1_count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg5) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("op1.valid_index (op1_offset)", EX_PRE);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("op1.valid_index (op1_offset + op1_count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg5) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
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
	RTNHOOK(7,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	ur1 = arg1;
	ui4_1 = arg2;
	ur2 = arg3;
	ui4_2 = arg4;
	ui4_3 = arg5;
	ui4_4 = arg7;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_4x)).it_n4);
	uu4_1 = tu4_1;
	ur3 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
	RTHOOK(9);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
	uu4_1 = tu4_1;
	ui4_1 = (EIF_INTEGER_32) (arg2 + arg5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(10);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(11);
		if ((EIF_BOOLEAN)(arg8 == loc1)) break;
		RTHOOK(12);
		ur1 = arg1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc1);
		ur2 = arg3;
		ui4_2 = arg4;
		ui4_3 = arg5;
		ui4_4 = (EIF_INTEGER_32) (arg7 + loc1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_4x)).it_n4);
		uu4_1 = tu4_1;
		ur3 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
		RTHOOK(13);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg5) + loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(14);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
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

/* {SPECIAL_ARITHMETIC}.mul_n */
void F63_1114 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "mul_n";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
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
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,ur3);
	RTLR(6,Current);
	RTLR(7,loc1);
	RTLR(8,tr1);
	RTLR(9,ur4);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 62, Current, 1, 7, 1160);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1160);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg5, 62, l_feature_name, 5, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg7 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target.valid_index (target_offset)", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("target.valid_index (target_offset + n - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg7) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("op1.valid_index (op1_offset)", EX_PRE);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("op1.valid_index (op1_offset + n - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg7) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	if ((EIF_BOOLEAN) (arg7 < ((EIF_INTEGER_32) 32L))) {
		RTHOOK(7);
		ur1 = arg1;
		ui4_1 = arg2;
		ur2 = arg3;
		ui4_2 = arg4;
		ui4_3 = arg7;
		ur3 = arg5;
		ui4_4 = arg6;
		ui4_5 = arg7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
	} else {
		RTHOOK(8);
		RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg7) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 32L)));
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
		RTNHOOK(8,1);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		ur1 = arg1;
		ui4_1 = arg2;
		ur2 = arg3;
		ui4_2 = arg4;
		ur3 = arg5;
		ui4_3 = arg6;
		ui4_4 = arg7;
		ur4 = loc1;
		ui4_5 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1069, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
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
#undef uu4_1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.kara_mul_n */
void F63_1115 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "kara_mul_n";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc13 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc14 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg8);
	RTLR(4,loc16);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLR(9,ur3);
	RTLR(10,ur4);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
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
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_UINT32, &loc13);
	RTLU(SK_UINT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_REF, &loc16);
	
	RTEAA(l_feature_name, 62, Current, 16, 9, 1161);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1161);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg5, 62, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg8, 62, l_feature_name, 8, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n >= 2", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg7 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(16, 0xF80001F0, 0, 0); /* loc16 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(2,1);
	loc16 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = eif_bit_shift_right(arg7,ui4_1);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = eif_bit_and(arg7,ui4_1);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
		loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg7 - loc5);
		RTHOOK(6);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(7);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc5);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = arg3;
			ui4_2 = arg4;
			ur3 = arg3;
			ui4_3 = (EIF_INTEGER_32) (arg4 + loc11);
			ui4_4 = loc5;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(10);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc1 -= tu4_1;
		} else {
			RTHOOK(11);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8 = (EIF_INTEGER_32) loc5;
			RTHOOK(12);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			loc2 = (EIF_NATURAL_32) loc3;
			for (;;) {
				RTHOOK(13);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != loc3) || (EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L)))) break;
				RTHOOK(14);
				RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
				loc8--;
				RTHOOK(15);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				ui4_1 = (EIF_INTEGER_32) (arg4 + loc8);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
				loc2 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(16);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc11) + loc8);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
				loc3 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc2 < loc3)) {
				RTHOOK(18);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg4 + loc11);
				RTHOOK(19);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) arg4;
				RTHOOK(20);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(21);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6 = (EIF_INTEGER_32) arg4;
				RTHOOK(22);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg4 + loc11);
			}
			RTHOOK(23);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = arg3;
			ui4_2 = loc6;
			ur3 = arg3;
			ui4_3 = loc7;
			ui4_4 = loc5;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(24);
			RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc13 = (EIF_NATURAL_32) tu4_1;
		}
		RTHOOK(25);
		uu4_1 = loc1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(26);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) (arg6 + loc5);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg5))(arg5, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(27);
		if ((EIF_BOOLEAN)(loc1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(28);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) (arg2 + loc11);
			ur2 = arg5;
			ui4_2 = arg6;
			ur3 = arg5;
			ui4_3 = (EIF_INTEGER_32) (arg6 + loc11);
			ui4_4 = loc5;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(29);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc1 -= tu4_1;
		} else {
			RTHOOK(30);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8 = (EIF_INTEGER_32) loc5;
			RTHOOK(31);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			loc2 = (EIF_NATURAL_32) loc3;
			for (;;) {
				RTHOOK(32);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != loc3) || (EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L)))) break;
				RTHOOK(33);
				RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
				loc8--;
				RTHOOK(34);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				ui4_1 = (EIF_INTEGER_32) (arg6 + loc8);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg5))(arg5, ui4_1x)).it_n4);
				loc2 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(35);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg6 + loc11) + loc8);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg5))(arg5, ui4_1x)).it_n4);
				loc3 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(36);
			if ((EIF_BOOLEAN) (loc2 < loc3)) {
				RTHOOK(37);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg6 + loc11);
				RTHOOK(38);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) arg6;
				RTHOOK(39);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				ti4_1 = eif_bit_not(loc9);
				loc9 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(40);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6 = (EIF_INTEGER_32) arg6;
				RTHOOK(41);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg6 + loc11);
			}
			RTHOOK(42);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) (arg2 + loc11);
			ur2 = arg5;
			ui4_2 = loc6;
			ur3 = arg5;
			ui4_3 = loc7;
			ui4_4 = loc5;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(43);
			RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc13 = (EIF_NATURAL_32) tu4_1;
		}
		RTHOOK(44);
		uu4_1 = loc1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + arg7);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(45);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg7 + ((EIF_INTEGER_32) 1L));
		RTHOOK(46);
		if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 32L))) {
			RTHOOK(47);
			if ((EIF_BOOLEAN) (loc11 < ((EIF_INTEGER_32) 32L))) {
				RTHOOK(48);
				ur1 = arg8;
				ui4_1 = arg9;
				ur2 = arg1;
				ui4_2 = arg2;
				ui4_3 = loc11;
				ur3 = arg1;
				ui4_4 = (EIF_INTEGER_32) (arg2 + loc11);
				ui4_5 = loc11;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
				RTHOOK(49);
				ur1 = arg1;
				ui4_1 = arg2;
				ur2 = arg3;
				ui4_2 = arg4;
				ui4_3 = loc11;
				ur3 = arg5;
				ui4_4 = arg6;
				ui4_5 = loc11;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
			} else {
				RTHOOK(50);
				ur1 = arg8;
				ui4_1 = arg9;
				ur2 = arg1;
				ui4_2 = arg2;
				ur3 = arg1;
				ui4_3 = (EIF_INTEGER_32) (arg2 + loc11);
				ui4_4 = loc11;
				ur4 = arg8;
				ui4_5 = (EIF_INTEGER_32) (arg9 + loc10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1069, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x);
				RTHOOK(51);
				ur1 = arg1;
				ui4_1 = arg2;
				ur2 = arg3;
				ui4_2 = arg4;
				ur3 = arg5;
				ui4_3 = arg6;
				ui4_4 = loc11;
				ur4 = arg8;
				ui4_5 = (EIF_INTEGER_32) (arg9 + loc10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1069, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x);
			}
			RTHOOK(52);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) (arg2 + loc10);
			ur2 = arg3;
			ui4_2 = (EIF_INTEGER_32) (arg4 + loc11);
			ui4_3 = loc5;
			ur3 = arg5;
			ui4_4 = (EIF_INTEGER_32) (arg6 + loc11);
			ui4_5 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
		} else {
			RTHOOK(53);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = arg2;
			ur3 = arg1;
			ui4_3 = (EIF_INTEGER_32) (arg2 + loc11);
			ui4_4 = loc11;
			ur4 = arg8;
			ui4_5 = (EIF_INTEGER_32) (arg9 + loc10);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1069, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x);
			RTHOOK(54);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = arg3;
			ui4_2 = arg4;
			ur3 = arg5;
			ui4_3 = arg6;
			ui4_4 = loc11;
			ur4 = arg8;
			ui4_5 = (EIF_INTEGER_32) (arg9 + loc10);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1069, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x);
			RTHOOK(55);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) (arg2 + loc10);
			ur2 = arg3;
			ui4_2 = (EIF_INTEGER_32) (arg4 + loc11);
			ur3 = arg5;
			ui4_3 = (EIF_INTEGER_32) (arg6 + loc11);
			ui4_4 = loc5;
			ur4 = arg8;
			ui4_5 = (EIF_INTEGER_32) (arg9 + loc10);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1069, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x);
		}
		RTHOOK(56);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg7 - ((EIF_INTEGER_32) 1L));
		RTHOOK(57);
		if ((EIF_BOOLEAN)(loc9 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(58);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = arg2;
			ur3 = arg8;
			ui4_3 = arg9;
			ui4_4 = loc10;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(59);
			RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc13 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(60);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = (EIF_INTEGER_32) (arg2 + loc10);
			ur3 = arg8;
			ui4_3 = arg9;
			ui4_4 = loc12;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(61);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc4 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(62);
			if ((EIF_BOOLEAN)(loc4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(63);
				RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
				ui4_1 = (EIF_INTEGER_32) (arg9 + loc12);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg8))(arg8, ui4_1x)).it_n4);
				loc14 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
				RTHOOK(64);
				uu4_1 = loc14;
				ui4_1 = (EIF_INTEGER_32) (arg9 + loc12);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg8))(arg8, uu4_1x, ui4_1x);
				RTHOOK(65);
				if ((EIF_BOOLEAN)(loc14 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(66);
					ui4_1 = (EIF_INTEGER_32) (arg9 + arg7);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg8))(arg8, ui4_1x)).it_n4);
					uu4_1 = (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
					ui4_1 = (EIF_INTEGER_32) (arg9 + arg7);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg8))(arg8, uu4_1x, ui4_1x);
				}
			}
		} else {
			RTHOOK(67);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = arg2;
			ur3 = arg8;
			ui4_3 = arg9;
			ui4_4 = loc10;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(68);
			RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc13 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(69);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = (EIF_INTEGER_32) (arg2 + loc10);
			ur3 = arg8;
			ui4_3 = arg9;
			ui4_4 = loc12;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(70);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc4 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(71);
			if ((EIF_BOOLEAN)(loc4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(72);
				RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
				ui4_1 = (EIF_INTEGER_32) (arg9 + loc12);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg8))(arg8, ui4_1x)).it_n4);
				loc14 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
				RTHOOK(73);
				uu4_1 = loc14;
				ui4_1 = (EIF_INTEGER_32) (arg9 + loc12);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg8))(arg8, uu4_1x, ui4_1x);
				RTHOOK(74);
				if ((EIF_BOOLEAN)(loc14 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(75);
					ui4_1 = (EIF_INTEGER_32) (arg9 + arg7);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg8))(arg8, ui4_1x)).it_n4);
					uu4_1 = (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
					ui4_1 = (EIF_INTEGER_32) (arg9 + arg7);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg8))(arg8, uu4_1x, ui4_1x);
				}
			}
		}
		RTHOOK(76);
		ur1 = arg1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc11);
		ur2 = arg1;
		ui4_2 = (EIF_INTEGER_32) (arg2 + loc11);
		ur3 = arg8;
		ui4_3 = arg9;
		ui4_4 = loc10;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(77);
		RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		loc14 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(78);
		if ((EIF_BOOLEAN)(loc14 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(79);
			RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc10) + loc11);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			loc14 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
			RTHOOK(80);
			uu4_1 = loc14;
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc10) + loc11);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
			RTHOOK(81);
			RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
			loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(82);
				if ((EIF_BOOLEAN)(loc14 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(83);
				RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc10) + loc11) + loc15);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
				loc14 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
				RTHOOK(84);
				uu4_1 = loc14;
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc10) + loc11) + loc15);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
				RTHOOK(85);
				RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
				loc15++;
			}
		}
	} else {
		RTHOOK(86);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) loc5;
		RTHOOK(87);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) loc3;
		for (;;) {
			RTHOOK(88);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != loc3) || (EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(89);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8--;
			RTHOOK(90);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			ui4_1 = (EIF_INTEGER_32) (arg4 + loc8);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
			loc2 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(91);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc5) + loc8);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
			loc3 = (EIF_NATURAL_32) tu4_1;
		}
		RTHOOK(92);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(93);
		if ((EIF_BOOLEAN) (loc2 < loc3)) {
			RTHOOK(94);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg4 + loc5);
			RTHOOK(95);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) arg4;
			RTHOOK(96);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		} else {
			RTHOOK(97);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) arg4;
			RTHOOK(98);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg4 + loc5);
		}
		RTHOOK(99);
		ur1 = arg1;
		ui4_1 = arg2;
		ur2 = arg3;
		ui4_2 = loc6;
		ur3 = arg3;
		ui4_3 = loc7;
		ui4_4 = loc5;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(100);
		RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		loc13 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(101);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) loc5;
		RTHOOK(102);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) loc3;
		for (;;) {
			RTHOOK(103);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != loc3) || (EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(104);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8--;
			RTHOOK(105);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			ui4_1 = (EIF_INTEGER_32) (arg6 + loc8);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg5))(arg5, ui4_1x)).it_n4);
			loc2 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(106);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg6 + loc5) + loc8);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg5))(arg5, ui4_1x)).it_n4);
			loc3 = (EIF_NATURAL_32) tu4_1;
		}
		RTHOOK(107);
		if ((EIF_BOOLEAN) (loc2 < loc3)) {
			RTHOOK(108);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg6 + loc5);
			RTHOOK(109);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) arg6;
			RTHOOK(110);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ti4_1 = eif_bit_not(loc9);
			loc9 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(111);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) arg6;
			RTHOOK(112);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg6 + loc5);
		}
		RTHOOK(113);
		ur1 = arg1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc5);
		ur2 = arg5;
		ui4_2 = loc6;
		ur3 = arg5;
		ui4_3 = loc7;
		ui4_4 = loc5;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(114);
		RTDBGAL(13, 0x38000000, 1, 0); /* loc13 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		loc13 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(115);
		if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 32L))) {
			RTHOOK(116);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc5;
			ur3 = arg1;
			ui4_4 = (EIF_INTEGER_32) (arg2 + loc5);
			ui4_5 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
			RTHOOK(117);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = arg3;
			ui4_2 = arg4;
			ui4_3 = loc5;
			ur3 = arg5;
			ui4_4 = arg6;
			ui4_5 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
			RTHOOK(118);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) (arg2 + arg7);
			ur2 = arg3;
			ui4_2 = (EIF_INTEGER_32) (arg4 + loc5);
			ui4_3 = loc5;
			ur3 = arg5;
			ui4_4 = (EIF_INTEGER_32) (arg6 + loc5);
			ui4_5 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1067, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
		} else {
			RTHOOK(119);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = arg2;
			ur3 = arg1;
			ui4_3 = (EIF_INTEGER_32) (arg2 + loc5);
			ui4_4 = loc5;
			ur4 = arg8;
			ui4_5 = (EIF_INTEGER_32) (arg9 + arg7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1069, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x);
			RTHOOK(120);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = arg3;
			ui4_2 = arg4;
			ur3 = arg5;
			ui4_3 = arg6;
			ui4_4 = loc5;
			ur4 = arg8;
			ui4_5 = (EIF_INTEGER_32) (arg9 + arg7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1069, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x);
			RTHOOK(121);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) (arg2 + arg7);
			ur2 = arg3;
			ui4_2 = (EIF_INTEGER_32) (arg4 + loc5);
			ur3 = arg5;
			ui4_3 = (EIF_INTEGER_32) (arg6 + loc5);
			ui4_4 = loc5;
			ur4 = arg8;
			ui4_5 = (EIF_INTEGER_32) (arg9 + arg7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1069, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x, ui4_5x);
		}
		RTHOOK(122);
		if ((EIF_BOOLEAN)(loc9 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(123);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = arg2;
			ur3 = arg8;
			ui4_3 = arg9;
			ui4_4 = arg7;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(124);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(125);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = (EIF_INTEGER_32) (arg2 + arg7);
			ur3 = arg8;
			ui4_3 = arg9;
			ui4_4 = arg7;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(126);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc1 += tu4_1;
		} else {
			RTHOOK(127);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = arg2;
			ur3 = arg8;
			ui4_3 = arg9;
			ui4_4 = arg7;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(128);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 - tu4_2);
			RTHOOK(129);
			ur1 = arg8;
			ui4_1 = arg9;
			ur2 = arg1;
			ui4_2 = (EIF_INTEGER_32) (arg2 + arg7);
			ur3 = arg8;
			ui4_3 = arg9;
			ui4_4 = arg7;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(130);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc1 += tu4_1;
		}
		RTHOOK(131);
		ur1 = arg1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc5);
		ur2 = arg1;
		ui4_2 = (EIF_INTEGER_32) (arg2 + loc5);
		ur3 = arg8;
		ui4_3 = arg9;
		ui4_4 = arg7;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(132);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		loc1 += tu4_1;
		RTHOOK(133);
		RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + arg7);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc14 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + loc1);
		RTHOOK(134);
		uu4_1 = loc14;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + arg7);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(135);
		if ((EIF_BOOLEAN) (loc14 < loc1)) {
			RTHOOK(136);
			RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
			loc14 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(137);
			RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
			loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(138);
				if ((EIF_BOOLEAN)(loc14 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(139);
				RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + arg7) + loc15);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
				loc14 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
				RTHOOK(140);
				uu4_1 = loc14;
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + arg7) + loc15);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
				RTHOOK(141);
				RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
				loc15++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(142);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
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

/* {SPECIAL_ARITHMETIC}.kara_sqr_n */
void F63_1116 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "kara_sqr_n";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc14 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc15 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
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
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,loc16);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLR(9,ur4);
	RTLR(10,loc6);
	RTLR(11,loc8);
	RTLIU(12);
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
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_UINT32, &loc14);
	RTLU(SK_UINT32, &loc15);
	RTLU(SK_REF, &loc16);
	
	RTEAA(l_feature_name, 62, Current, 16, 7, 1143);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1143);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 62, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op1_count >= 2", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(16, 0xF80001F0, 0, 0); /* loc16 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(939, Dtype(tr1)))(tr1, uu4_1x);
	RTNHOOK(2,1);
	loc16 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = eif_bit_shift_right(arg5,ui4_1);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tb1 = eif_bit_test(EIF_INTEGER_32,arg5,ui4_1);
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg5 - loc5);
		RTHOOK(6);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc5);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = arg3;
			ui4_2 = arg4;
			ur3 = arg3;
			ui4_3 = (EIF_INTEGER_32) (arg4 + loc12);
			ui4_4 = loc5;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(9);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc1 -= tu4_1;
		} else {
			RTHOOK(10);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) loc5;
			RTHOOK(11);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			loc2 = (EIF_NATURAL_32) loc3;
			if (RTAL & CK_CHECK) {
				RTHOOK(12);
				RTCT("i /= 0", EX_CHECK);
				if ((EIF_BOOLEAN)(loc10 != ((EIF_INTEGER_32) 0L))) {
					RTCK;
				} else {
					RTCF;
				}
			}
			for (;;) {
				RTHOOK(13);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != loc3) || (EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L)))) break;
				RTHOOK(14);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10--;
				RTHOOK(15);
				RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
				ui4_1 = (EIF_INTEGER_32) (arg4 + loc10);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
				loc2 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(16);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc12) + loc10);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
				loc3 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc2 < loc3)) {
				RTHOOK(18);
				RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
				loc6 = (EIF_REFERENCE) arg3;
				RTHOOK(19);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg4 + loc12);
				RTHOOK(20);
				RTDBGAL(8, 0xF800026B, 0, 0); /* loc8 */
				loc8 = (EIF_REFERENCE) arg3;
				RTHOOK(21);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9 = (EIF_INTEGER_32) arg4;
			} else {
				RTHOOK(22);
				RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
				loc6 = (EIF_REFERENCE) arg3;
				RTHOOK(23);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) arg4;
				RTHOOK(24);
				RTDBGAL(8, 0xF800026B, 0, 0); /* loc8 */
				loc8 = (EIF_REFERENCE) arg3;
				RTHOOK(25);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg4 + loc12);
			}
			RTHOOK(26);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = loc6;
			ui4_2 = loc7;
			ur3 = loc8;
			ui4_3 = loc9;
			ui4_4 = loc5;
			ur4 = RTCCL(loc16);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
			RTHOOK(27);
			RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
			loc14 = (EIF_NATURAL_32) tu4_1;
		}
		RTHOOK(28);
		uu4_1 = loc1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(29);
		RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
		loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg5 + ((EIF_INTEGER_32) 1L));
		RTHOOK(30);
		if ((EIF_BOOLEAN) (loc12 < ((EIF_INTEGER_32) 64L))) {
			RTHOOK(31);
			ur1 = arg6;
			ui4_1 = arg7;
			ur2 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc12;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1071, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
			RTHOOK(32);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = arg3;
			ui4_2 = arg4;
			ui4_3 = loc12;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1071, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
		} else {
			RTHOOK(33);
			ur1 = arg6;
			ui4_1 = arg7;
			ur2 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc12;
			ur3 = arg6;
			ui4_4 = (EIF_INTEGER_32) (arg7 + loc11);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1070, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x);
			RTHOOK(34);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = arg3;
			ui4_2 = arg4;
			ui4_3 = loc12;
			ur3 = arg6;
			ui4_4 = (EIF_INTEGER_32) (arg7 + loc11);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1070, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x);
		}
		RTHOOK(35);
		if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 64L))) {
			RTHOOK(36);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) (arg2 + loc11);
			ur2 = arg3;
			ui4_2 = (EIF_INTEGER_32) (arg4 + loc12);
			ui4_3 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1071, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
		} else {
			RTHOOK(37);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) (arg2 + loc11);
			ur2 = arg3;
			ui4_2 = (EIF_INTEGER_32) (arg4 + loc12);
			ui4_3 = loc12;
			ur3 = arg6;
			ui4_4 = (EIF_INTEGER_32) (arg7 + loc11);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1070, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x);
		}
		RTHOOK(38);
		RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
		loc13 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg5 - ((EIF_INTEGER_32) 1L));
		RTHOOK(39);
		ur1 = arg6;
		ui4_1 = arg7;
		ur2 = arg1;
		ui4_2 = arg2;
		ur3 = arg6;
		ui4_3 = arg7;
		ui4_4 = loc11;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(40);
		RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		loc14 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(41);
		ur1 = arg6;
		ui4_1 = arg7;
		ur2 = arg1;
		ui4_2 = (EIF_INTEGER_32) (arg2 + loc11);
		ur3 = arg6;
		ui4_3 = arg7;
		ui4_4 = loc13;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(42);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		loc4 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(43);
		if ((EIF_BOOLEAN)(loc4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(44);
			RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
			ui4_1 = (EIF_INTEGER_32) (arg7 + loc13);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
			loc15 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(45);
			uu4_1 = loc15;
			ui4_1 = (EIF_INTEGER_32) (arg7 + loc13);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg6))(arg6, uu4_1x, ui4_1x);
			RTHOOK(46);
			if ((EIF_BOOLEAN)(loc15 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(47);
				ui4_1 = (EIF_INTEGER_32) (arg7 + arg5);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg6))(arg6, ui4_1x)).it_n4);
				uu4_1 = (EIF_NATURAL_32) (tu4_1 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
				ui4_1 = (EIF_INTEGER_32) (arg7 + arg5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg6))(arg6, uu4_1x, ui4_1x);
			}
		}
		RTHOOK(48);
		ur1 = arg1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc12);
		ur2 = arg1;
		ui4_2 = (EIF_INTEGER_32) (arg2 + loc12);
		ur3 = arg6;
		ui4_3 = arg7;
		ui4_4 = loc11;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(49);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(50);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc11) + loc12);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1064, dtype))(Current, ur1x, ui4_1x, uu4_1x);
		}
	} else {
		RTHOOK(51);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		loc10 = (EIF_INTEGER_32) loc5;
		RTHOOK(52);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 = (EIF_NATURAL_32) loc3;
		if (RTAL & CK_CHECK) {
			RTHOOK(53);
			RTCT("i /= 0", EX_CHECK);
			if ((EIF_BOOLEAN)(loc10 != ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		for (;;) {
			RTHOOK(54);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != loc3) || (EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(55);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10--;
			RTHOOK(56);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			ui4_1 = (EIF_INTEGER_32) (arg4 + loc10);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
			loc2 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(57);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc5) + loc10);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
			loc3 = (EIF_NATURAL_32) tu4_1;
		}
		RTHOOK(58);
		if ((EIF_BOOLEAN) (loc2 < loc3)) {
			RTHOOK(59);
			RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
			loc6 = (EIF_REFERENCE) arg3;
			RTHOOK(60);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg4 + loc5);
			RTHOOK(61);
			RTDBGAL(8, 0xF800026B, 0, 0); /* loc8 */
			loc8 = (EIF_REFERENCE) arg3;
			RTHOOK(62);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) arg4;
		} else {
			RTHOOK(63);
			RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
			loc6 = (EIF_REFERENCE) arg3;
			RTHOOK(64);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) arg4;
			RTHOOK(65);
			RTDBGAL(8, 0xF800026B, 0, 0); /* loc8 */
			loc8 = (EIF_REFERENCE) arg3;
			RTHOOK(66);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg4 + loc5);
		}
		RTHOOK(67);
		ur1 = arg1;
		ui4_1 = arg2;
		ur2 = loc6;
		ui4_2 = loc7;
		ur3 = loc8;
		ui4_3 = loc9;
		ui4_4 = loc5;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(68);
		RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		loc14 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(69);
		if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 64L))) {
			RTHOOK(70);
			ur1 = arg6;
			ui4_1 = arg7;
			ur2 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1071, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
			RTHOOK(71);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = arg3;
			ui4_2 = arg4;
			ui4_3 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1071, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
			RTHOOK(72);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) (arg2 + arg5);
			ur2 = arg3;
			ui4_2 = (EIF_INTEGER_32) (arg4 + loc5);
			ui4_3 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1071, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
		} else {
			RTHOOK(73);
			ur1 = arg6;
			ui4_1 = arg7;
			ur2 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc5;
			ur3 = arg6;
			ui4_4 = (EIF_INTEGER_32) (arg7 + arg5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1070, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x);
			RTHOOK(74);
			ur1 = arg1;
			ui4_1 = arg2;
			ur2 = arg3;
			ui4_2 = arg4;
			ui4_3 = loc5;
			ur3 = arg6;
			ui4_4 = (EIF_INTEGER_32) (arg7 + arg5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1070, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x);
			RTHOOK(75);
			ur1 = arg1;
			ui4_1 = (EIF_INTEGER_32) (arg2 + arg5);
			ur2 = arg3;
			ui4_2 = (EIF_INTEGER_32) (arg4 + loc5);
			ui4_3 = loc5;
			ur3 = arg6;
			ui4_4 = (EIF_INTEGER_32) (arg7 + arg5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1070, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x);
		}
		RTHOOK(76);
		ur1 = arg6;
		ui4_1 = arg7;
		ur2 = arg1;
		ui4_2 = arg2;
		ur3 = arg6;
		ui4_3 = arg7;
		ui4_4 = arg5;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(77);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 0L) - tu4_1);
		RTHOOK(78);
		ur1 = arg6;
		ui4_1 = arg7;
		ur2 = arg1;
		ui4_2 = (EIF_INTEGER_32) (arg2 + arg5);
		ur3 = arg6;
		ui4_3 = arg7;
		ui4_4 = arg5;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(79);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		loc1 += tu4_1;
		RTHOOK(80);
		ur1 = arg1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc5);
		ur2 = arg1;
		ui4_2 = (EIF_INTEGER_32) (arg2 + loc5);
		ur3 = arg6;
		ui4_3 = arg7;
		ui4_4 = arg5;
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(81);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc16))(loc16)).it_n4);
		loc1 += tu4_1;
		RTHOOK(82);
		ur1 = arg1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc5) + arg5);
		uu4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1064, dtype))(Current, ur1x, ui4_1x, uu4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(83);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(25);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.sqr_basecase */
void F63_1117 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "sqr_basecase";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
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
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,loc9);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLR(9,loc5);
	RTLR(10,loc6);
	RTLR(11,ur3);
	RTLR(12,ur4);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 62, Current, 9, 5, 1144);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1144);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op1_count >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
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
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	ui4_1 = arg4;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	ur1 = RTCCL(loc4);
	ur2 = RTCCL(loc3);
	uu4_1 = loc2;
	uu4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
	RTHOOK(7);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
	uu4_1 = tu4_1;
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(8);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
	uu4_1 = tu4_1;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(9);
	if ((EIF_BOOLEAN) (arg5 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(10);
		RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = ((EIF_INTEGER_32) 128L);
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
		loc5 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
		loc6 = (EIF_REFERENCE) loc5;
		RTHOOK(12);
		ur1 = loc6;
		ui4_1 = loc7;
		ur2 = arg3;
		ui4_2 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L));
		ui4_3 = (EIF_INTEGER_32) (arg5 - ((EIF_INTEGER_32) 1L));
		ui4_4 = arg4;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_4x)).it_n4);
		uu4_1 = tu4_1;
		ur3 = RTCCL(loc9);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1066, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
		RTHOOK(13);
		RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc9))(loc9)).it_n4);
		loc8 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(14);
		uu4_1 = loc8;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 + arg5) - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc6))(loc6, uu4_1x, ui4_1x);
		RTHOOK(15);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		for (;;) {
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc1 >= arg5)) break;
			RTHOOK(17);
			ur1 = loc6;
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc1)) - ((EIF_INTEGER_32) 2L));
			ur2 = arg3;
			ui4_2 = (EIF_INTEGER_32) (arg4 + loc1);
			ui4_3 = (EIF_INTEGER_32) (arg5 - loc1);
			ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + loc1) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_4x)).it_n4);
			uu4_1 = tu4_1;
			ur3 = RTCCL(loc9);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1062, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(18);
			RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc9))(loc9)).it_n4);
			loc8 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(19);
			uu4_1 = loc8;
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 + arg5) + loc1) - ((EIF_INTEGER_32) 2L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc6))(loc6, uu4_1x, ui4_1x);
			RTHOOK(20);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
		RTHOOK(21);
		ur1 = arg1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
		ur2 = arg3;
		ui4_2 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L));
		ui4_3 = (EIF_INTEGER_32) (arg5 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1072, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
		RTHOOK(22);
		ur1 = loc6;
		ui4_1 = loc7;
		ur2 = loc6;
		ui4_2 = loc7;
		ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg5) - ((EIF_INTEGER_32) 2L));
		ui4_4 = ((EIF_INTEGER_32) 1L);
		ur3 = RTCCL(loc9);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1054, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
		RTHOOK(23);
		RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc9))(loc9)).it_n4);
		loc8 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(24);
		ur1 = arg1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		ur2 = arg1;
		ui4_2 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		ur3 = loc6;
		ui4_3 = loc7;
		ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg5) - ((EIF_INTEGER_32) 2L));
		ur4 = RTCCL(loc9);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(25);
		RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc9))(loc9)).it_n4);
		loc8 += tu4_1;
		RTHOOK(26);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg5)) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 + loc8);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg5)) - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
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
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.sqr_diagonal */
void F63_1118 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "sqr_diagonal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
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
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 62, Current, 4, 5, 1145);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1145);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
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
	RTNHOOK(1,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
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
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 >= arg5)) break;
		RTHOOK(5);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		ur1 = RTCCL(loc4);
		ur2 = RTCCL(loc3);
		uu4_1 = loc2;
		uu4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
		RTHOOK(7);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc4))(loc4)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc1)) + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(8);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(9);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.sqr_n */
void F63_1119 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "sqr_n";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLR(5,loc1);
	RTLR(6,tr1);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 62, Current, 2, 5, 1146);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1146);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op1_count >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg5 < ((EIF_INTEGER_32) 64L))) {
		RTHOOK(3);
		ur1 = arg1;
		ui4_1 = arg2;
		ur2 = arg3;
		ui4_2 = arg4;
		ui4_3 = arg5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1071, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x);
	} else {
		RTHOOK(4);
		RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg5) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 32L)));
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
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		ur1 = arg1;
		ui4_1 = arg2;
		ur2 = arg3;
		ui4_2 = arg4;
		ui4_3 = arg5;
		ur3 = loc1;
		ui4_4 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1070, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.sub */
void F63_1120 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "sub";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_r
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
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg6);
	RTLR(3,arg9);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,ur3);
	RTLR(7,ur4);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_BOOL, &loc5);
	
	RTEAA(l_feature_name, 62, Current, 5, 9, 1147);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1147);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 62, l_feature_name, 6, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg9, 62, l_feature_name, 9, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg8;
	RTHOOK(2);
	ur1 = arg1;
	ui4_1 = arg2;
	ur2 = arg3;
	ui4_2 = arg4;
	ur3 = arg6;
	ui4_3 = arg7;
	ui4_4 = loc1;
	ur4 = RTCCL(arg9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1076, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
	RTHOOK(3);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", arg9))(arg9)).it_n4);
	loc4 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc4 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc5 || (EIF_BOOLEAN)(loc3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 >= arg5)) {
				RTHOOK(8);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg9))(arg9, uu4_1x);
				RTHOOK(9);
				RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(10);
				RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
				ui4_1 = (EIF_INTEGER_32) (arg4 + loc1);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
				loc3 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(11);
				uu4_1 = (EIF_NATURAL_32) (loc3 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
				ui4_1 = (EIF_INTEGER_32) (arg2 + loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
				RTHOOK(12);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		}
	}
	RTHOOK(13);
	if ((EIF_BOOLEAN) !loc5) {
		RTHOOK(14);
		if ((EIF_BOOLEAN)(arg1 != arg3)) {
			RTHOOK(15);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) loc1;
			for (;;) {
				RTHOOK(16);
				if ((EIF_BOOLEAN) (loc2 >= arg5)) break;
				RTHOOK(17);
				ui4_1 = (EIF_INTEGER_32) (arg4 + loc2);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
				uu4_1 = tu4_1;
				ui4_1 = (EIF_INTEGER_32) (arg2 + loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
				RTHOOK(18);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			}
		}
		RTHOOK(19);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg9))(arg9, uu4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ur4
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

/* {SPECIAL_ARITHMETIC}.sub_1 */
void F63_1121 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "sub_1";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_n4
#define arg7 arg7x.it_r
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
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_n4 = * (EIF_NATURAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg7);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_UINT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	
	RTEAA(l_feature_name, 62, Current, 3, 7, 1148);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1148);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg7, 62, l_feature_name, 7, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("op1.valid_index (op1_offset)", EX_PRE);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("op1.valid_index (op1_offset + op1_count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg5) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg3))(arg3, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("target.valid_index (target_offset)", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("target.valid_index (target_offset + op1_count - 1)", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg5) - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	ui4_1 = arg4;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc2 - arg6);
	RTHOOK(7);
	uu4_1 = loc3;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
	RTHOOK(8);
	if ((EIF_BOOLEAN) (loc2 < arg6)) {
		RTHOOK(9);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg7))(arg7, uu4_1x);
		RTHOOK(10);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(11);
			if ((EIF_BOOLEAN) (loc1 >= arg5)) break;
			RTHOOK(12);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			ui4_1 = (EIF_INTEGER_32) (arg4 + loc1);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
			loc2 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(13);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc2 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
			RTHOOK(14);
			uu4_1 = loc3;
			ui4_1 = (EIF_INTEGER_32) (arg2 + loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
			RTHOOK(15);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc2 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L))) {
				RTHOOK(17);
				if ((EIF_BOOLEAN)(arg3 != arg1)) {
					RTHOOK(18);
					ur1 = arg3;
					ui4_1 = (EIF_INTEGER_32) (arg4 + loc1);
					ui4_2 = (EIF_INTEGER_32) (arg2 + loc1);
					ui4_3 = (EIF_INTEGER_32) (arg5 - loc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
				}
				RTHOOK(19);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg7))(arg7, uu4_1x);
				RTHOOK(20);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) arg5;
			}
		}
	} else {
		RTHOOK(21);
		if ((EIF_BOOLEAN)(arg3 != arg1)) {
			RTHOOK(22);
			ur1 = arg3;
			ui4_1 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L));
			ui4_2 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
			ui4_3 = (EIF_INTEGER_32) (arg5 - ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
		RTHOOK(23);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg7))(arg7, uu4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
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
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SPECIAL_ARITHMETIC}.sub_n */
void F63_1122 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "sub_n";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg5);
	RTLR(3,arg8);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	
	RTEAA(l_feature_name, 62, Current, 8, 8, 1149);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1149);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg5, 62, l_feature_name, 5, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg8, 62, l_feature_name, 8, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc7 == arg7)) break;
		RTHOOK(3);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc7);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(4);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = (EIF_INTEGER_32) (arg6 + loc7);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg5))(arg5, ui4_1x)).it_n4);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(5);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc1 - loc2);
		RTHOOK(6);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (loc3 > loc1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		loc5 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc3 - loc8);
		RTHOOK(8);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (loc4 > loc3);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		loc6 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
		uu4_1 = loc6;
		tu4_1 = eif_bit_or(loc5,uu4_1);
		loc8 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		uu4_1 = loc4;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc7);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(11);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7++;
	}
	RTHOOK(12);
	uu4_1 = loc8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg8))(arg8, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
#undef ui4_1
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

/* {SPECIAL_ARITHMETIC}.submul_1 */
void F63_1123 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "submul_1";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_n4
#define arg7 arg7x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_n4 = * (EIF_NATURAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg7);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_UINT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	
	RTEAA(l_feature_name, 62, Current, 6, 7, 1150);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1150);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 62, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 62, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,496,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg7, 62, l_feature_name, 7, typres0, 0x01);
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
		RTCT("n >= 1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
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
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
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
	RTNHOOK(5,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc5 >= arg5)) break;
		RTHOOK(8);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = (EIF_INTEGER_32) (arg4 + loc5);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg3))(arg3, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		ur1 = RTCCL(loc2);
		ur2 = RTCCL(loc3);
		uu4_1 = loc1;
		uu4_2 = arg6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, ur1x, ur2x, uu4_1x, uu4_2x);
		RTHOOK(10);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (tu4_1 + loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
		RTHOOK(11);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (tu4_1 < loc6);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc2))(loc2)).it_n4);
		loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 + tu4_2);
		RTHOOK(12);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc5);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		loc4 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = (EIF_NATURAL_32) (loc4 - tu4_1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", loc3))(loc3, uu4_1x);
		RTHOOK(14);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (tu4_1 > loc4);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		loc6 += tu4_1;
		RTHOOK(15);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc3))(loc3)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = (EIF_INTEGER_32) (arg2 + loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(16);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5++;
	}
	RTHOOK(17);
	uu4_1 = loc6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "put", arg7))(arg7, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit63 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
