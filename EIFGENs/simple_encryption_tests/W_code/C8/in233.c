/*
 * Code for class INTEGER_X_ASSIGNMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F233_4233(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F233_4234(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit233(void);

#ifdef __cplusplus
}
#endif

#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_X_ASSIGNMENT}.swap */
void F233_4233 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "swap";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 232, Current, 2, 2, 7192);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(232, Current, 7192);
	RTCC(arg1, 232, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 232, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg2))(arg2, ui4_1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5576, "item_set", arg2))(arg2, ur1x);
	RTHOOK(5);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	RTHOOK(6);
	ur1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5576, "item_set", arg1))(arg1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {INTEGER_X_ASSIGNMENT}.set_str */
void F233_4234 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_str";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc8 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc12 = (EIF_NATURAL_8) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc10);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,Current);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_CHAR8, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_UINT8, &loc12);
	
	RTEAA(l_feature_name, 232, Current, 12, 3, 7193);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(232, Current, 7193);
	RTCC(arg1, 232, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 232, l_feature_name, 2, eif_new_type(301, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base_a <= 62", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= ((EIF_INTEGER_32) 62L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("base_a >= 2 or base_a = 0", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg3;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 36L))) {
		RTHOOK(5);
		RTDBGAL(10, 0xF800003F, 0, 0); /* loc10 */
		tr1 = RTLN(eif_new_type(65, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		loc10 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(6);
		RTDBGAL(10, 0xF800003F, 0, 0); /* loc10 */
		tr1 = RTLN(eif_new_type(64, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(6,1);
		loc10 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	RTDBGAL(8, 0x08000000, 1, 0); /* loc8 */
	loc8 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
	for (;;) {
		RTHOOK(9);
		tb1 = '\01';
		tb2 = eif_builtin_CHARACTER_8_is_space__c1_b(loc8);
		if (!(EIF_BOOLEAN) !tb2) {
			ui4_1 = loc2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3325, "valid_index", arg2))(arg2, ui4_1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(10);
		RTDBGAL(8, 0x08000000, 1, 0); /* loc8 */
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_c1);
		loc8 = (EIF_CHARACTER_8) tc1;
		RTHOOK(11);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc8 == (EIF_CHARACTER_8) '-')) {
		RTHOOK(13);
		RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
		loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(14);
		RTDBGAL(8, 0x08000000, 1, 0); /* loc8 */
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_c1);
		loc8 = (EIF_CHARACTER_8) tc1;
		RTHOOK(15);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(16);
	ti4_1 = (EIF_INTEGER_32) (loc8);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	uu1_1 = tu1_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1078, "text_to_number", loc10))(loc10, uu1_1x)).it_n1);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(17);
		ti4_1 = ((EIF_INTEGER_32) 10L);
	} else {
		RTHOOK(18);
		ti4_1 = loc1;
	}
	if ((EIF_BOOLEAN) (tu1_1 >= (EIF_NATURAL_8) ti4_1)) {
		RTHOOK(19);
		tr1 = RTLN(eif_new_type(137, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(19,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1429, "raise", tr1))(tr1);
	}
	RTHOOK(20);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(21);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
		RTHOOK(22);
		if ((EIF_BOOLEAN)(loc8 == (EIF_CHARACTER_8) '0')) {
			RTHOOK(23);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
			RTHOOK(24);
			ui4_1 = loc2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3325, "valid_index", arg2))(arg2, ui4_1x)).it_b);
			if (tb2) {
				RTHOOK(25);
				RTDBGAL(8, 0x08000000, 1, 0); /* loc8 */
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_c1);
				loc8 = (EIF_CHARACTER_8) tc1;
			}
			RTHOOK(26);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
			RTHOOK(27);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc8 == (EIF_CHARACTER_8) 'x') || (EIF_BOOLEAN)(loc8 == (EIF_CHARACTER_8) 'X'))) {
				RTHOOK(28);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
				RTHOOK(29);
				RTDBGAL(8, 0x08000000, 1, 0); /* loc8 */
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_c1);
				loc8 = (EIF_CHARACTER_8) tc1;
				RTHOOK(30);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			} else {
				RTHOOK(31);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc8 == (EIF_CHARACTER_8) 'b') || (EIF_BOOLEAN)(loc8 == (EIF_CHARACTER_8) 'B'))) {
					RTHOOK(32);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
					RTHOOK(33);
					RTDBGAL(8, 0x08000000, 1, 0); /* loc8 */
					ui4_1 = loc2;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_c1);
					loc8 = (EIF_CHARACTER_8) tc1;
					RTHOOK(34);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2++;
				}
			}
		}
	}
	for (;;) {
		RTHOOK(35);
		tb2 = '\01';
		tb3 = '\0';
		if ((EIF_BOOLEAN)(loc8 != (EIF_CHARACTER_8) '0')) {
			tb4 = eif_builtin_CHARACTER_8_is_space__c1_b(loc8);
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (!tb3) {
			ui4_1 = loc2;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3325, "valid_index", arg2))(arg2, ui4_1x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) break;
		RTHOOK(36);
		RTDBGAL(8, 0x08000000, 1, 0); /* loc8 */
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_c1);
		loc8 = (EIF_CHARACTER_8) tc1;
		RTHOOK(37);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(38);
	ti4_1 = (EIF_INTEGER_32) (loc8);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(39);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		RTHOOK(40);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
	} else {
		RTHOOK(41);
		RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(4930, "count", arg2));
		loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc2) + ((EIF_INTEGER_32) 2L));
		RTHOOK(42);
		RTDBGAL(3, 0xF800014B, 0, 0); /* loc3 */
		uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		ui4_1 = loc11;
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
		RTNHOOK(42,1);
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(43);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(44);
			if ((EIF_BOOLEAN) (loc6 >= loc11)) break;
			RTHOOK(45);
			tb3 = eif_builtin_CHARACTER_8_is_space__c1_b(loc8);
			if ((EIF_BOOLEAN) !tb3) {
				RTHOOK(46);
				RTDBGAL(12, 0x30000000, 1, 0); /* loc12 */
				ti4_1 = (EIF_INTEGER_32) (loc8);
				tu1_1 = (EIF_NATURAL_8) ti4_1;
				uu1_1 = tu1_1;
				tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1078, "text_to_number", loc10))(loc10, uu1_1x)).it_n1);
				loc12 = (EIF_NATURAL_8) tu1_1;
				RTHOOK(47);
				ti4_1 = (EIF_INTEGER_32) loc12;
				if ((EIF_BOOLEAN) (ti4_1 >= loc1)) {
					RTHOOK(48);
					tr1 = RTLN(eif_new_type(137, 0x01).id);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
					RTNHOOK(48,1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1429, "raise", tr1))(tr1);
				}
				RTHOOK(49);
				uu1_1 = loc12;
				ui4_1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc3))(loc3, uu1_1x, ui4_1x);
				RTHOOK(50);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4++;
			}
			RTHOOK(51);
			ui4_1 = loc2;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3325, "valid_index", arg2))(arg2, ui4_1x)).it_b);
			if (tb3) {
				RTHOOK(52);
				RTDBGAL(8, 0x08000000, 1, 0); /* loc8 */
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg2))(arg2, ui4_1x)).it_c1);
				loc8 = (EIF_CHARACTER_8) tc1;
			}
			RTHOOK(53);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
			RTHOOK(54);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6++;
		}
		RTHOOK(55);
		RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
		loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc5);
		RTHOOK(56);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		tr8_1 = (EIF_REAL_64) (loc11);
		ui4_1 = loc1;
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2067, dtype))(Current, ui4_1x)).it_r8);
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 32L)) + ((EIF_INTEGER_32) 2L));
		RTHOOK(57);
		ui4_1 = loc7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(58);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr1;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ur2 = loc3;
		ui4_2 = loc5;
		ui4_3 = loc11;
		ui4_4 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2073, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x)).it_i4);
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(59);
		if (loc9) {
			RTHOOK(60);
			ui4_1 = (EIF_INTEGER_32) -loc7;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		} else {
			RTHOOK(61);
			ui4_1 = loc7;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(62);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef uu1_1
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit233 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
