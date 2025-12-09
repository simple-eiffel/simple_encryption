/*
 * Code for class INTEGER_X_LOGIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F231_4217(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F231_4218(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F231_4219(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F231_4220(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F231_4221(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F231_4222(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F231_4223(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F231_4224(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F231_4225(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F231_4226(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F231_4227(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit231(void);

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

/* {INTEGER_X_LOGIC}.bit_and */
void F231_4217 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "bit_and";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc11 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc15 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(18);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc22);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc20);
	RTLR(7,loc21);
	RTLR(8,loc1);
	RTLR(9,loc3);
	RTLR(10,loc7);
	RTLR(11,ur1);
	RTLR(12,ur2);
	RTLR(13,ur3);
	RTLR(14,ur4);
	RTLR(15,loc13);
	RTLR(16,loc19);
	RTLR(17,loc17);
	RTLIU(18);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_UINT32, &loc11);
	RTLU(SK_BOOL, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_UINT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	
	RTEAA(l_feature_name, 230, Current, 22, 3, 7176);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7176);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 230, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 230, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(22, 0xF80001F0, 0, 0); /* loc22 */
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
	loc22 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(20, 0xF8000147, 0, 0); /* loc20 */
	loc20 = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(3);
	RTDBGAL(21, 0xF8000147, 0, 0); /* loc21 */
	loc21 = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc20 + RTVA(5577, "count", loc20));
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc21 + RTVA(5577, "count", loc21));
	loc6 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc21))(loc21)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc5 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc6 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(11);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ui4_1 = loc6;
			ti4_1 = eif_min_int32 (loc5,ui4_1);
			loc9 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(13);
				tb1 = '\01';
				if (!(EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) {
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_and(tu4_1,uu4_1);
					tb1 = (EIF_BOOLEAN)(tu4_3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
				}
				if (tb1) break;
				RTHOOK(14);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10--;
			}
			RTHOOK(15);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
			RTHOOK(16);
			ui4_1 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(17);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) tr1;
			RTHOOK(18);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(19);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc21))(loc21)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(20);
			ui4_1 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			RTHOOK(21);
			if ((EIF_BOOLEAN)(loc9 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(22);
				ur1 = loc7;
				ui4_1 = loc8;
				ur2 = loc1;
				ui4_2 = loc2;
				ur3 = loc3;
				ui4_3 = loc4;
				ui4_4 = loc9;
				ur4 = RTCCL(loc22);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
				RTHOOK(23);
				RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
				loc11 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(24);
			RTDBGAL(12, 0x04000000, 1, 0); /* loc12 */
			loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(25);
		if ((EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(26);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc5;
			RTHOOK(27);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc6;
			RTHOOK(28);
			RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
			ui4_1 = loc6;
			ti4_1 = eif_max_int32 (loc5,ui4_1);
			loc16 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1);
			RTHOOK(29);
			RTDBGAL(13, 0xF800026B, 0, 0); /* loc13 */
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
			RTNHOOK(29,1);
			loc13 = (EIF_REFERENCE) tr1;
			RTHOOK(30);
			ur1 = loc13;
			ui4_1 = loc14;
			ur2 = loc1;
			ui4_2 = loc2;
			ui4_3 = loc5;
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ur3 = RTCCL(loc22);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(31);
			RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
			loc11 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(32);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			loc1 = (EIF_REFERENCE) loc13;
			RTHOOK(33);
			RTDBGAL(13, 0xF800026B, 0, 0); /* loc13 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc6;
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
			RTNHOOK(33,1);
			loc13 = (EIF_REFERENCE) tr1;
			RTHOOK(34);
			ur1 = loc13;
			ui4_1 = loc14;
			ur2 = loc3;
			ui4_2 = loc4;
			ui4_3 = loc6;
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ur3 = RTCCL(loc22);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(35);
			RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
			loc11 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(36);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			loc3 = (EIF_REFERENCE) loc13;
			RTHOOK(37);
			ui4_1 = loc16;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(38);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) tr1;
			RTHOOK(39);
			if ((EIF_BOOLEAN) (loc5 >= loc6)) {
				RTHOOK(40);
				ur1 = loc1;
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc6);
				ui4_2 = (EIF_INTEGER_32) (loc8 + loc6);
				ui4_3 = (EIF_INTEGER_32) (loc5 - loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(41);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(42);
					if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(43);
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_or(tu4_1,uu4_1);
					uu4_1 = tu4_3;
					ui4_1 = (EIF_INTEGER_32) (loc8 + loc10);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
					RTHOOK(44);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10--;
				}
				RTHOOK(45);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9 = (EIF_INTEGER_32) loc5;
			} else {
				RTHOOK(46);
				ur1 = loc3;
				ui4_1 = (EIF_INTEGER_32) (loc4 + loc5);
				ui4_2 = (EIF_INTEGER_32) (loc8 + loc5);
				ui4_3 = (EIF_INTEGER_32) (loc6 - loc5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(47);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(48);
					if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(49);
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_or(tu4_1,uu4_1);
					uu4_1 = tu4_3;
					ui4_1 = (EIF_INTEGER_32) (loc8 + loc10);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
					RTHOOK(50);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10--;
				}
				RTHOOK(51);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9 = (EIF_INTEGER_32) loc6;
			}
			RTHOOK(52);
			ur1 = loc7;
			ui4_1 = loc8;
			ur2 = loc7;
			ui4_2 = loc8;
			ui4_3 = loc9;
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ur3 = RTCCL(loc22);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(53);
			RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
			loc15 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(54);
			if ((EIF_BOOLEAN)(loc15 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(55);
				uu4_1 = loc15;
				ui4_1 = (EIF_INTEGER_32) (loc8 + loc9);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
				RTHOOK(56);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9++;
			}
			RTHOOK(57);
			ui4_1 = (EIF_INTEGER_32) -loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			RTHOOK(58);
			RTDBGAL(12, 0x04000000, 1, 0); /* loc12 */
			loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(59);
			RTDBGAL(19, 0xF8000147, 0, 0); /* loc19 */
			loc19 = (EIF_REFERENCE) RTCCL(loc20);
			RTHOOK(60);
			RTDBGAL(20, 0xF8000147, 0, 0); /* loc20 */
			loc20 = (EIF_REFERENCE) RTCCL(loc21);
			RTHOOK(61);
			RTDBGAL(21, 0xF8000147, 0, 0); /* loc21 */
			loc21 = (EIF_REFERENCE) RTCCL(loc19);
			RTHOOK(62);
			RTDBGAL(17, 0xF800026B, 0, 0); /* loc17 */
			loc17 = (EIF_REFERENCE) loc1;
			RTHOOK(63);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			loc1 = (EIF_REFERENCE) loc3;
			RTHOOK(64);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			loc3 = (EIF_REFERENCE) loc17;
			RTHOOK(65);
			RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
			loc18 = (EIF_INTEGER_32) loc2;
			RTHOOK(66);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) loc4;
			RTHOOK(67);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) loc18;
		}
	}
	RTHOOK(68);
	if ((EIF_BOOLEAN) !loc12) {
		RTHOOK(69);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc6;
		RTHOOK(70);
		RTDBGAL(13, 0xF800026B, 0, 0); /* loc13 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = loc6;
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
		RTNHOOK(70,1);
		loc13 = (EIF_REFERENCE) tr1;
		RTHOOK(71);
		ur1 = loc13;
		ui4_1 = loc14;
		ur2 = loc3;
		ui4_2 = loc4;
		ui4_3 = loc6;
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ur3 = RTCCL(loc22);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
		RTHOOK(72);
		RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
		loc11 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(73);
		RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
		loc3 = (EIF_REFERENCE) loc13;
		RTHOOK(74);
		if ((EIF_BOOLEAN) (loc5 > loc6)) {
			RTHOOK(75);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) loc5;
			RTHOOK(76);
			ui4_1 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(77);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) tr1;
			RTHOOK(78);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(79);
			ur1 = loc1;
			ui4_1 = (EIF_INTEGER_32) (loc2 + loc6);
			ui4_2 = (EIF_INTEGER_32) (loc8 + loc6);
			ui4_3 = (EIF_INTEGER_32) (loc9 - loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(80);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(81);
				if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(82);
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
				ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
				tu4_3 = eif_bit_not(tu4_2);
				uu4_1 = tu4_3;
				tu4_2 = eif_bit_and(tu4_1,uu4_1);
				uu4_1 = tu4_2;
				ui4_1 = (EIF_INTEGER_32) (loc8 + loc10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
				RTHOOK(83);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10--;
			}
			RTHOOK(84);
			ui4_1 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		} else {
			RTHOOK(85);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(86);
				tb2 = '\01';
				if (!(EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) {
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					tu4_3 = eif_bit_not(tu4_2);
					uu4_1 = tu4_3;
					tu4_2 = eif_bit_and(tu4_1,uu4_1);
					tb2 = (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
				}
				if (tb2) break;
				RTHOOK(87);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10--;
			}
			RTHOOK(88);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
			RTHOOK(89);
			ui4_1 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(90);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) tr1;
			RTHOOK(91);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(92);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(93);
				if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(94);
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
				ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
				tu4_3 = eif_bit_not(tu4_2);
				uu4_1 = tu4_3;
				tu4_2 = eif_bit_and(tu4_1,uu4_1);
				uu4_1 = tu4_2;
				ui4_1 = (EIF_INTEGER_32) (loc8 + loc10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
				RTHOOK(95);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10--;
			}
			RTHOOK(96);
			ui4_1 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(97);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_LOGIC}.bit_clear */
void F231_4218 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_clear";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_BOOL, &loc8);
	
	RTEAA(l_feature_name, 230, Current, 8, 2, 7177);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7177);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ti4_1);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc4 < loc1)) {
			RTHOOK(6);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
			loc5 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(7);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
			ti4_2 = eif_bit_shift_left(((EIF_INTEGER_32) 1L),ui4_1);
			ti4_1 = eif_bit_not(ti4_2);
			tu4_1 = (EIF_NATURAL_32) ti4_1;
			uu4_1 = tu4_1;
			tu4_2 = eif_bit_and(loc5,uu4_1);
			loc5 = (EIF_NATURAL_32) tu4_2;
			RTHOOK(8);
			uu4_1 = loc5;
			ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
			RTHOOK(9);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc4 == (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))))) {
				RTHOOK(10);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1--;
				for (;;) {
					RTHOOK(11);
					tb1 = '\01';
					if (!(EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 0L))) {
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc1) - ((EIF_INTEGER_32) 1L));
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
						tb1 = (EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
					}
					if (tb1) break;
					RTHOOK(12);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1--;
				}
				RTHOOK(13);
				ui4_1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			}
		}
	} else {
		RTHOOK(14);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc1;
		RTHOOK(15);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(16);
			ui4_1 = (EIF_INTEGER_32) (loc3 + loc6);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
			if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(17);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6++;
		}
		RTHOOK(18);
		if ((EIF_BOOLEAN) (loc4 > loc6)) {
			RTHOOK(19);
			if ((EIF_BOOLEAN) (loc4 < loc1)) {
				RTHOOK(20);
				ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
				ti4_2 = eif_bit_shift_left(((EIF_INTEGER_32) 1L),ui4_1);
				tu4_3 = (EIF_NATURAL_32) ti4_2;
				uu4_1 = tu4_3;
				tu4_4 = eif_bit_or(tu4_2,uu4_1);
				uu4_1 = tu4_4;
				ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
			} else {
				RTHOOK(21);
				ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
				RTHOOK(22);
				RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) tr1;
				RTHOOK(23);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				ui4_1 = (EIF_INTEGER_32) (loc3 + loc1);
				ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc1) + (EIF_INTEGER_32) (loc4 - loc1)) - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", loc2))(loc2, uu4_1x, ui4_1x, ui4_2x);
				RTHOOK(24);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
				ti4_2 = eif_bit_shift_left(((EIF_INTEGER_32) 1L),ui4_1);
				tu4_2 = (EIF_NATURAL_32) ti4_2;
				uu4_1 = tu4_2;
				ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
				RTHOOK(25);
				ui4_1 = (EIF_INTEGER_32) -(EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			}
		} else {
			RTHOOK(26);
			if ((EIF_BOOLEAN)(loc4 == loc6)) {
				RTHOOK(27);
				ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
				ti4_2 = eif_bit_shift_left(((EIF_INTEGER_32) 1L),ui4_1);
				tu4_3 = (EIF_NATURAL_32) ti4_2;
				uu4_1 = tu4_3;
				tu4_4 = eif_bit_or(((EIF_NATURAL_32) (tu4_2 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L))),uu4_1);
				uu4_1 = tu4_4;
				ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
				RTHOOK(28);
				ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
				if ((EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(29);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(30);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc7 >= loc1) || loc8)) break;
						RTHOOK(31);
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
						uu4_1 = (EIF_NATURAL_32) (tu4_2 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
						RTHOOK(32);
						ui4_1 = (EIF_INTEGER_32) (loc3 + loc7);
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
						if ((EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
							RTHOOK(33);
							RTDBGAL(8, 0x04000000, 1, 0); /* loc8 */
							loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						} else {
							RTHOOK(34);
							RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
							loc7++;
						}
					}
					RTHOOK(35);
					if ((EIF_BOOLEAN) !loc8) {
						RTHOOK(36);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
						RTHOOK(37);
						ui4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
						RTHOOK(38);
						uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
						ui4_1 = (EIF_INTEGER_32) (loc3 + loc7);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
						RTHOOK(39);
						ui4_1 = (EIF_INTEGER_32) -loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(40);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg2
#undef arg1
}

/* {INTEGER_X_LOGIC}.bit_one_complement */
void F231_4219 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_one_complement";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc5);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLR(6,ur1);
	RTLR(7,tr2);
	RTLR(8,ur2);
	RTLR(9,ur3);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 230, Current, 5, 2, 7178);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7178);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 230, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
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
	RTDBGAL(1, 0xF8000147, 0, 0); /* loc1 */
	loc1 = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(5577, "count", loc1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
			RTHOOK(8);
			ui4_1 = ((EIF_INTEGER_32) -1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		} else {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr1;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = tr2;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc2;
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ur3 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(10);
			RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
			loc3 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(11);
			if ((EIF_BOOLEAN)(loc3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				uu4_1 = loc3;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
				RTHOOK(13);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			}
			RTHOOK(14);
			ui4_1 = (EIF_INTEGER_32) -loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	} else {
		RTHOOK(15);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc2;
		RTHOOK(16);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(17);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr1;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur2 = tr2;
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = loc2;
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ur3 = RTCCL(loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
		RTHOOK(18);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc5))(loc5)).it_n4);
		loc4 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(20);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2--;
		}
		RTHOOK(21);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg2
#undef arg1
}

/* {INTEGER_X_LOGIC}.bit_complement */
void F231_4220 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_complement";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc9);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 230, Current, 9, 2, 7179);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7179);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(9, 0xF80001F0, 0, 0); /* loc9 */
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
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	ti4_2 = eif_abs_int32 (ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ti4_1);
	RTHOOK(5);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
	tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
	loc4 = (EIF_NATURAL_32) tu4_2;
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc3 >= loc1)) {
		RTHOOK(7);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(8);
		RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
	}
	RTHOOK(10);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(11);
		ui4_1 = loc3;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
		uu4_1 = loc4;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		uu4_1 = tu4_2;
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
		RTHOOK(12);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ur1 = loc2;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(13);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	} else {
		RTHOOK(14);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = loc3;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
		loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 0L) - tu4_1);
		RTHOOK(15);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(17);
			ui4_1 = loc6;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
			if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(18);
				RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
				loc5 -= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(19);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(20);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6--;
		}
		RTHOOK(21);
		uu4_1 = loc4;
		tu4_1 = eif_bit_and(loc5,uu4_1);
		if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(22);
			ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(23);
			RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(24);
			ur1 = loc2;
			ui4_1 = loc3;
			ur2 = loc2;
			ui4_2 = loc3;
			ui4_3 = (EIF_INTEGER_32) (loc1 - loc3);
			uu4_1 = loc4;
			ur3 = RTCCL(loc9);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(25);
			RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc9))(loc9)).it_n4);
			loc7 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(26);
			uu4_1 = loc7;
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
			RTHOOK(27);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ti4_1 = (EIF_INTEGER_32) loc7;
			loc1 += ti4_1;
		} else {
			RTHOOK(28);
			ur1 = loc2;
			ui4_1 = loc3;
			ur2 = loc2;
			ui4_2 = loc3;
			ui4_3 = (EIF_INTEGER_32) (loc1 + loc3);
			uu4_1 = loc4;
			ur3 = RTCCL(loc9);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(29);
			RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc9))(loc9)).it_n4);
			loc8 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(30);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ur1 = loc2;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ui4_2 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(31);
			ui4_1 = (EIF_INTEGER_32) -loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg2
#undef arg1
}

/* {INTEGER_X_LOGIC}.bit_or */
void F231_4221 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "bit_or";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc14 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc15 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc21 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc22 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(17);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc23);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc19);
	RTLR(7,loc20);
	RTLR(8,loc1);
	RTLR(9,loc3);
	RTLR(10,loc7);
	RTLR(11,ur1);
	RTLR(12,loc12);
	RTLR(13,ur2);
	RTLR(14,ur3);
	RTLR(15,loc18);
	RTLR(16,loc16);
	RTLIU(17);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_BOOL, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_UINT32, &loc14);
	RTLU(SK_UINT32, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_INT32, &loc21);
	RTLU(SK_INT32, &loc22);
	RTLU(SK_REF, &loc23);
	
	RTEAA(l_feature_name, 230, Current, 23, 3, 7180);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7180);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 230, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 230, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(23, 0xF80001F0, 0, 0); /* loc23 */
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
	loc23 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(19, 0xF8000147, 0, 0); /* loc19 */
	loc19 = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(3);
	RTDBGAL(20, 0xF8000147, 0, 0); /* loc20 */
	loc20 = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc19 + RTVA(5577, "count", loc19));
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc20 + RTVA(5577, "count", loc20));
	loc6 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc19))(loc19)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc5 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc6 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(11);
			if ((EIF_BOOLEAN) (loc5 >= loc6)) {
				RTHOOK(12);
				ui4_1 = loc5;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
				RTHOOK(13);
				RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc19))(loc19)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) tr1;
				RTHOOK(14);
				RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc3 = (EIF_REFERENCE) tr1;
				RTHOOK(15);
				RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = (EIF_REFERENCE) tr1;
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc7 != loc1)) {
					RTHOOK(17);
					ur1 = loc1;
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc6);
					ui4_2 = (EIF_INTEGER_32) (loc8 + loc6);
					ui4_3 = (EIF_INTEGER_32) (loc5 - loc6);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
				}
				RTHOOK(18);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(19);
					if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(20);
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_or(tu4_1,uu4_1);
					uu4_1 = tu4_3;
					ui4_1 = (EIF_INTEGER_32) (loc8 + loc10);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
					RTHOOK(21);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10--;
				}
				RTHOOK(22);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9 = (EIF_INTEGER_32) loc5;
			} else {
				RTHOOK(23);
				ui4_1 = loc6;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
				RTHOOK(24);
				RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc19))(loc19)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) tr1;
				RTHOOK(25);
				RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc3 = (EIF_REFERENCE) tr1;
				RTHOOK(26);
				RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = (EIF_REFERENCE) tr1;
				RTHOOK(27);
				if ((EIF_BOOLEAN)(loc7 != loc3)) {
					RTHOOK(28);
					ur1 = loc3;
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc5);
					ui4_2 = (EIF_INTEGER_32) (loc8 + loc5);
					ui4_3 = (EIF_INTEGER_32) (loc6 - loc5);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
				}
				RTHOOK(29);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(30);
					if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(31);
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_or(tu4_1,uu4_1);
					uu4_1 = tu4_3;
					ui4_1 = (EIF_INTEGER_32) (loc8 + loc10);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
					RTHOOK(32);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10--;
				}
			}
			RTHOOK(33);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) loc6;
			RTHOOK(34);
			RTDBGAL(11, 0x04000000, 1, 0); /* loc11 */
			loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(35);
		if ((EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(36);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc5;
			RTHOOK(37);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc6;
			RTHOOK(38);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ui4_1 = loc6;
			ti4_1 = eif_min_int32 (loc5,ui4_1);
			loc9 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(39);
			RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc9;
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
			RTNHOOK(39,1);
			loc12 = (EIF_REFERENCE) tr1;
			RTHOOK(40);
			ur1 = loc12;
			ui4_1 = loc13;
			ur2 = loc1;
			ui4_2 = loc2;
			ui4_3 = loc9;
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ur3 = RTCCL(loc23);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(41);
			RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc23))(loc23)).it_n4);
			loc15 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(42);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			loc1 = (EIF_REFERENCE) loc12;
			RTHOOK(43);
			RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc9;
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
			RTNHOOK(43,1);
			loc12 = (EIF_REFERENCE) tr1;
			RTHOOK(44);
			ur1 = loc12;
			ui4_1 = loc13;
			ur2 = loc3;
			ui4_2 = loc4;
			ui4_3 = loc9;
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ur3 = RTCCL(loc23);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(45);
			RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc23))(loc23)).it_n4);
			loc15 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(46);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			loc3 = (EIF_REFERENCE) loc12;
			RTHOOK(47);
			ui4_1 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(48);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) tr1;
			RTHOOK(49);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(50);
				tb1 = '\01';
				if (!(EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) {
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_and(tu4_1,uu4_1);
					tb1 = (EIF_BOOLEAN)(tu4_3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
				}
				if (tb1) break;
				RTHOOK(51);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10--;
			}
			RTHOOK(52);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
			RTHOOK(53);
			if ((EIF_BOOLEAN)(loc9 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(54);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(55);
					if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(56);
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_and(tu4_1,uu4_1);
					uu4_1 = tu4_3;
					ui4_1 = (EIF_INTEGER_32) (loc8 + loc10);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
					RTHOOK(57);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10--;
				}
				RTHOOK(58);
				ur1 = loc7;
				ui4_1 = loc8;
				ur2 = loc7;
				ui4_2 = loc8;
				ui4_3 = loc9;
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				ur3 = RTCCL(loc23);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
				RTHOOK(59);
				RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc23))(loc23)).it_n4);
				loc14 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(60);
				if ((EIF_BOOLEAN)(loc14 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(61);
					uu4_1 = loc14;
					ui4_1 = (EIF_INTEGER_32) (loc8 + loc9);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
					RTHOOK(62);
					RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
					loc9++;
				}
			} else {
				RTHOOK(63);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				ui4_1 = loc8;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
				RTHOOK(64);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(65);
			ui4_1 = (EIF_INTEGER_32) -loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			RTHOOK(66);
			RTDBGAL(11, 0x04000000, 1, 0); /* loc11 */
			loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(67);
			RTDBGAL(18, 0xF8000147, 0, 0); /* loc18 */
			loc18 = (EIF_REFERENCE) RTCCL(loc19);
			RTHOOK(68);
			RTDBGAL(19, 0xF8000147, 0, 0); /* loc19 */
			loc19 = (EIF_REFERENCE) RTCCL(loc20);
			RTHOOK(69);
			RTDBGAL(20, 0xF8000147, 0, 0); /* loc20 */
			loc20 = (EIF_REFERENCE) RTCCL(loc18);
			RTHOOK(70);
			RTDBGAL(16, 0xF800026B, 0, 0); /* loc16 */
			loc16 = (EIF_REFERENCE) loc1;
			RTHOOK(71);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			loc1 = (EIF_REFERENCE) loc3;
			RTHOOK(72);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			loc3 = (EIF_REFERENCE) loc16;
			RTHOOK(73);
			RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
			loc17 = (EIF_INTEGER_32) loc2;
			RTHOOK(74);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) loc4;
			RTHOOK(75);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) loc17;
		}
	}
	RTHOOK(76);
	if ((EIF_BOOLEAN) !loc11) {
		RTHOOK(77);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc6;
		RTHOOK(78);
		RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
		loc21 = (EIF_INTEGER_32) loc6;
		RTHOOK(79);
		RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = loc6;
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
		RTNHOOK(79,1);
		loc12 = (EIF_REFERENCE) tr1;
		RTHOOK(80);
		ur1 = loc12;
		ui4_1 = loc13;
		ur2 = loc3;
		ui4_2 = loc4;
		ui4_3 = loc6;
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ur3 = RTCCL(loc23);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
		RTHOOK(81);
		RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc23))(loc23)).it_n4);
		loc15 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(82);
		RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
		loc3 = (EIF_REFERENCE) loc12;
		RTHOOK(83);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc6) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
		ti4_1 = (EIF_INTEGER_32) ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
		loc6 -= ti4_1;
		RTHOOK(84);
		ui4_1 = loc21;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(85);
		RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc19))(loc19)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(86);
		RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = (EIF_REFERENCE) tr1;
		RTHOOK(87);
		if ((EIF_BOOLEAN) (loc5 >= loc6)) {
			RTHOOK(88);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(89);
				tb2 = '\01';
				if (!(EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) {
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					tu4_2 = eif_bit_not(tu4_1);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					uu4_1 = tu4_1;
					tu4_3 = eif_bit_and(tu4_2,uu4_1);
					tb2 = (EIF_BOOLEAN)(tu4_3 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
				}
				if (tb2) break;
				RTHOOK(90);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10--;
			}
			RTHOOK(91);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
			RTHOOK(92);
			RTDBGAL(22, 0x10000000, 1, 0); /* loc22 */
			loc22 = (EIF_INTEGER_32) loc9;
		} else {
			RTHOOK(93);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) loc6;
			RTHOOK(94);
			ur1 = loc3;
			ui4_1 = (EIF_INTEGER_32) (loc4 + loc5);
			ui4_2 = (EIF_INTEGER_32) (loc8 + loc5);
			ui4_3 = (EIF_INTEGER_32) (loc6 - loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(95);
			RTDBGAL(22, 0x10000000, 1, 0); /* loc22 */
			loc22 = (EIF_INTEGER_32) loc5;
		}
		RTHOOK(96);
		if ((EIF_BOOLEAN)(loc9 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(97);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc22 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(98);
				if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(99);
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc10);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
				tu4_2 = eif_bit_not(tu4_1);
				ui4_1 = (EIF_INTEGER_32) (loc4 + loc10);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
				uu4_1 = tu4_1;
				tu4_3 = eif_bit_and(tu4_2,uu4_1);
				uu4_1 = tu4_3;
				ui4_1 = (EIF_INTEGER_32) (loc8 + loc10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
				RTHOOK(100);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10--;
			}
			RTHOOK(101);
			ur1 = loc7;
			ui4_1 = loc8;
			ur2 = loc7;
			ui4_2 = loc8;
			ui4_3 = loc9;
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ur3 = RTCCL(loc23);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(102);
			RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc23))(loc23)).it_n4);
			loc14 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(103);
			if ((EIF_BOOLEAN)(loc14 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(104);
				uu4_1 = loc14;
				ui4_1 = (EIF_INTEGER_32) (loc8 + loc9);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
				RTHOOK(105);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9++;
			} else {
				RTHOOK(106);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				ui4_1 = loc8;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
				RTHOOK(107);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(108);
			ui4_1 = (EIF_INTEGER_32) -loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(109);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(28);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_LOGIC}.bit_scan_0 */
EIF_TYPED_VALUE F231_4222 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_scan_0";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
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
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_INT32, &loc10);
	
	RTEAA(l_feature_name, 230, Current, 10, 2, 7181);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7181);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = eif_abs_int32 (loc2);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) loc3;
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) 4L),ui4_1);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ti4_1);
	RTHOOK(5);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	loc6 = (EIF_INTEGER_32) loc5;
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc5 >= loc3)) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) arg2;
		} else {
			RTHOOK(9);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(260, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4169, "max_value", tr1))(tr1)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(10);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc6;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		loc7 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(12);
			RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
			ui4_1 = ((EIF_INTEGER_32) 3L);
			ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) 4L),ui4_1);
			ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
			ti4_2 = eif_bit_shift_left(((EIF_INTEGER_32) 1L),ui4_1);
			tu4_1 = (EIF_NATURAL_32) ti4_2;
			uu4_1 = tu4_1;
			tu4_2 = eif_bit_or(loc7,uu4_1);
			loc7 = (EIF_NATURAL_32) tu4_2;
			for (;;) {
				RTHOOK(13);
				tb1 = '\01';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				tu4_2 = eif_bit_not(tu4_1);
				if (!(EIF_BOOLEAN)(loc7 != tu4_2)) {
					tb1 = loc9;
				}
				if (tb1) break;
				RTHOOK(14);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6++;
				RTHOOK(15);
				if ((EIF_BOOLEAN)(loc6 == loc4)) {
					RTHOOK(16);
					RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
					loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(17);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					ui4_1 = ((EIF_INTEGER_32) 3L);
					ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) 4L),ui4_1);
					Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 * ti4_1);
				} else {
					RTHOOK(18);
					RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ui4_1 = loc6;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
					loc7 = (EIF_NATURAL_32) tu4_1;
				}
			}
			RTHOOK(19);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(20);
				RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
				tu4_1 = eif_bit_not(loc7);
				loc7 = (EIF_NATURAL_32) tu4_1;
			}
		} else {
			RTHOOK(21);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) loc6;
			for (;;) {
				RTHOOK(22);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc10 == loc1) || loc9)) break;
				RTHOOK(23);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10--;
				RTHOOK(24);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ui4_1 = loc10;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(25);
					RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
					loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
			RTHOOK(26);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(27);
				RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
				loc7 -= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(28);
			RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
			tu4_1 = eif_bit_not(((EIF_NATURAL_32) 0U));
			ui4_1 = ((EIF_INTEGER_32) 3L);
			ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) 4L),ui4_1);
			ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
			tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
			uu4_1 = tu4_2;
			tu4_1 = eif_bit_and(loc7,uu4_1);
			loc7 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(29);
			if ((EIF_BOOLEAN)(loc7 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(30);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6++;
				RTHOOK(31);
				if ((EIF_BOOLEAN)(loc6 == loc4)) {
					RTHOOK(32);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					tr1 = RTLN(eif_new_type(260, 0x00).id);
					*(EIF_INTEGER_32 *)tr1 = Result;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4169, "max_value", tr1))(tr1)).it_i4);
					Result = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(33);
					RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ui4_1 = loc6;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
					loc7 = (EIF_NATURAL_32) tu4_1;
					for (;;) {
						RTHOOK(34);
						if ((EIF_BOOLEAN)(loc7 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
						RTHOOK(35);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6++;
					}
				}
			}
		}
		RTHOOK(36);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (EIF_INTEGER_32) loc7;
		ui4_1 = ti4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
		loc8 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(37);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - loc1) + loc8);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {INTEGER_X_LOGIC}.bit_scan_1 */
EIF_TYPED_VALUE F231_4223 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_scan_1";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc11 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_UINT32, &loc11);
	RTLU(SK_BOOL, &loc12);
	
	RTEAA(l_feature_name, 230, Current, 12, 2, 7182);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7182);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = eif_abs_int32 (loc3);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc4);
	RTHOOK(5);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ti4_1);
	RTHOOK(6);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc6);
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc6 >= loc4)) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(260, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4169, "max_value", tr1))(tr1)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(10);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) arg2;
		}
	}
	RTHOOK(11);
	RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
	ui4_1 = loc7;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
	loc8 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(12);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = RTLN(eif_new_type(272, 0x00).id);
		*(EIF_NATURAL_32 *)tr1 = loc8;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4389, "max_value", tr1))(tr1)).it_n4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
		tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
		uu4_1 = tu4_2;
		tu4_1 = eif_bit_and(loc8,uu4_1);
		tb2 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)) == loc5);
	}
	if (tb1) {
		RTHOOK(13);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr1 = RTLN(eif_new_type(260, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = Result;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4169, "max_value", tr1))(tr1)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(14);
		if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(15);
			RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
			tr1 = RTLN(eif_new_type(272, 0x00).id);
			*(EIF_NATURAL_32 *)tr1 = loc8;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4389, "max_value", tr1))(tr1)).it_n4);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
			tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
			uu4_1 = tu4_2;
			tu4_1 = eif_bit_and(loc8,uu4_1);
			loc8 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc8 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7++;
				RTHOOK(18);
				RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
				ui4_1 = loc7;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
				loc8 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(19);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7++;
				for (;;) {
					RTHOOK(20);
					if ((EIF_BOOLEAN)(loc8 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(21);
					RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
					ui4_1 = loc7;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					loc8 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(22);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					loc7++;
				}
			}
		} else {
			RTHOOK(23);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			loc10 = (EIF_INTEGER_32) loc7;
			RTHOOK(24);
			RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
			loc11 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				RTHOOK(25);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc10 == loc2) || (EIF_BOOLEAN)(loc11 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) break;
				RTHOOK(26);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				loc10--;
				RTHOOK(27);
				RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
				ui4_1 = loc10;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
				loc11 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(28);
			if ((EIF_BOOLEAN)(loc11 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(29);
				if ((EIF_BOOLEAN)(loc8 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(30);
					RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
					loc8 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
					for (;;) {
						RTHOOK(31);
						if ((EIF_BOOLEAN)(loc8 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
						RTHOOK(32);
						RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
						loc7++;
						RTHOOK(33);
						RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
						ui4_1 = loc7;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
						loc8 = (EIF_NATURAL_32) tu4_1;
					}
					RTHOOK(34);
					RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
					loc8 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 0L) - loc8);
					RTHOOK(35);
					RTDBGAL(12, 0x04000000, 1, 0); /* loc12 */
					loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(36);
					RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
					loc8 -= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				}
			}
			RTHOOK(37);
			if ((EIF_BOOLEAN) !loc12) {
				RTHOOK(38);
				RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
				tu4_2 = eif_bit_shift_left(tu4_1,ui4_1);
				uu4_1 = (EIF_NATURAL_32) (tu4_2 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
				tu4_1 = eif_bit_or(loc8,uu4_1);
				loc8 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(39);
				RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
				loc8 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(40);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7++;
				RTHOOK(41);
				if ((EIF_BOOLEAN)(loc7 != loc5)) {
					RTHOOK(42);
					RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
					ui4_1 = loc7;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					loc8 = (EIF_NATURAL_32) tu4_1;
				}
				for (;;) {
					RTHOOK(43);
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc7 == loc5)) {
						tr1 = RTLN(eif_new_type(272, 0x00).id);
						*(EIF_NATURAL_32 *)tr1 = loc8;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4389, "max_value", tr1))(tr1)).it_n4);
						tb1 = (EIF_BOOLEAN)(loc8 == tu4_1);
					}
					if (tb1) break;
					RTHOOK(44);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					loc7++;
					RTHOOK(45);
					if ((EIF_BOOLEAN)(loc7 != loc5)) {
						RTHOOK(46);
						RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
						ui4_1 = loc7;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
						loc8 = (EIF_NATURAL_32) tu4_1;
					}
				}
				RTHOOK(47);
				if ((EIF_BOOLEAN)(loc7 == loc5)) {
					RTHOOK(48);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 * ti4_1);
				} else {
					RTHOOK(49);
					RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
					tu4_1 = eif_bit_not(loc8);
					loc8 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(50);
					RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
					uu4_1 = loc8;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
					loc9 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(51);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - loc2) * ti4_1) + loc9);
				}
			} else {
				RTHOOK(52);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				uu4_1 = loc8;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1027, dtype))(Current, uu4_1x)).it_i4);
				loc9 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(53);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - loc2) * ti4_1) + loc9);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(54);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {INTEGER_X_LOGIC}.bit_set */
void F231_4224 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_set";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc10 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc12 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_UINT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_UINT32, &loc12);
	
	RTEAA(l_feature_name, 230, Current, 12, 2, 7183);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7183);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ti4_1);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc3 < loc1)) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = (EIF_INTEGER_32) (loc2 + loc3);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
			tu4_3 = eif_bit_shift_left(tu4_2,ui4_1);
			uu4_1 = tu4_3;
			tu4_2 = eif_bit_or(tu4_1,uu4_1);
			uu4_1 = tu4_2;
			ui4_1 = (EIF_INTEGER_32) (loc2 + loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
			RTHOOK(7);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		} else {
			RTHOOK(8);
			ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(9);
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc3 - loc1) != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(10);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
				RTHOOK(11);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - loc1);
				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				ui4_1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
				RTHOOK(13);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4++;
				RTHOOK(14);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5--;
				for (;;) {
					RTHOOK(15);
					if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(16);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					ui4_1 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
					RTHOOK(17);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4++;
					RTHOOK(18);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					loc5--;
				}
			}
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
			ti4_2 = eif_bit_shift_left(((EIF_INTEGER_32) 1L),ui4_1);
			tu4_1 = (EIF_NATURAL_32) ti4_2;
			uu4_1 = tu4_1;
			ui4_1 = (EIF_INTEGER_32) (loc2 + loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
			RTHOOK(20);
			ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
		}
	} else {
		RTHOOK(21);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc1;
		RTHOOK(22);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(23);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = (EIF_INTEGER_32) (loc2 + loc6);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
			if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(24);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6++;
		}
		RTHOOK(25);
		if ((EIF_BOOLEAN) (loc3 > loc6)) {
			RTHOOK(26);
			if ((EIF_BOOLEAN) (loc3 < loc1)) {
				RTHOOK(27);
				RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc3);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
				loc7 = (EIF_NATURAL_32) tu4_2;
				RTHOOK(28);
				RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
				ti4_2 = eif_bit_shift_left(((EIF_INTEGER_32) 1L),ui4_1);
				ti4_1 = eif_bit_not(ti4_2);
				tu4_2 = (EIF_NATURAL_32) ti4_1;
				uu4_1 = tu4_2;
				tu4_3 = eif_bit_and(loc7,uu4_1);
				loc7 = (EIF_NATURAL_32) tu4_3;
				RTHOOK(29);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				uu4_1 = loc7;
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
				RTHOOK(30);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc7 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc3 == (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))))) {
					RTHOOK(31);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1--;
					for (;;) {
						RTHOOK(32);
						tb1 = '\01';
						if (!(EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 0L))) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + loc1) - ((EIF_INTEGER_32) 1L));
							tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
							tb1 = (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
						}
						if (tb1) break;
						RTHOOK(33);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1--;
					}
					RTHOOK(34);
					ui4_1 = (EIF_INTEGER_32) -loc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
				}
			}
		} else {
			RTHOOK(35);
			if ((EIF_BOOLEAN)(loc3 == loc6)) {
				RTHOOK(36);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc3);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
				tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
				tu4_4 = eif_bit_shift_left(tu4_3,ui4_1);
				tu4_3 = eif_bit_not(tu4_4);
				uu4_1 = tu4_3;
				tu4_4 = eif_bit_and(((EIF_NATURAL_32) (tu4_2 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L))),uu4_1);
				uu4_1 = (EIF_NATURAL_32) (tu4_4 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
				RTHOOK(37);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc3);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
				if ((EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(38);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(39);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc8 >= loc1) || loc9)) break;
						RTHOOK(40);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ui4_1 = (EIF_INTEGER_32) (loc2 + loc8);
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
						uu4_1 = (EIF_NATURAL_32) (tu4_2 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
						ui4_1 = (EIF_INTEGER_32) (loc2 + loc8);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
						RTHOOK(41);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ui4_1 = (EIF_INTEGER_32) (loc2 + loc8);
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
						if ((EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
							RTHOOK(42);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						} else {
							RTHOOK(43);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8++;
						}
					}
					RTHOOK(44);
					if ((EIF_BOOLEAN) !loc9) {
						RTHOOK(45);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
						RTHOOK(46);
						ui4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
						RTHOOK(47);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
						ui4_1 = (EIF_INTEGER_32) (loc2 + loc8);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
						RTHOOK(48);
						ui4_1 = (EIF_INTEGER_32) -loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
					}
				}
			} else {
				RTHOOK(49);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc3);
				RTHOOK(50);
				RTDBGAL(10, 0x38000000, 1, 0); /* loc10 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ui4_1 = loc11;
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
				loc10 = (EIF_NATURAL_32) tu4_2;
				RTHOOK(51);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
				ti4_2 = eif_bit_shift_left(((EIF_INTEGER_32) 1L),ui4_1);
				tu4_2 = (EIF_NATURAL_32) ti4_2;
				uu4_1 = (EIF_NATURAL_32) (loc10 - tu4_2);
				ui4_1 = loc11;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
				RTHOOK(52);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
				ti4_2 = eif_bit_shift_left(((EIF_INTEGER_32) 1L),ui4_1);
				tu4_2 = (EIF_NATURAL_32) ti4_2;
				if ((EIF_BOOLEAN) (loc10 < tu4_2)) {
					RTHOOK(53);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11++;
					RTHOOK(54);
					RTDBGAL(12, 0x38000000, 1, 0); /* loc12 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ui4_1 = loc11;
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
					loc12 = (EIF_NATURAL_32) tu4_2;
					RTHOOK(55);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					uu4_1 = (EIF_NATURAL_32) (loc12 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
					ui4_1 = loc11;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
					for (;;) {
						RTHOOK(56);
						if ((EIF_BOOLEAN)(loc12 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
						RTHOOK(57);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						loc11++;
						RTHOOK(58);
						RTDBGAL(12, 0x38000000, 1, 0); /* loc12 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ui4_1 = loc11;
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
						loc12 = (EIF_NATURAL_32) tu4_2;
						RTHOOK(59);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						uu4_1 = (EIF_NATURAL_32) (loc12 - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
						ui4_1 = loc11;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
					}
				}
				RTHOOK(60);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + loc1) - ((EIF_INTEGER_32) 1L));
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
				if ((EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(61);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1--;
				}
				RTHOOK(62);
				ui4_1 = (EIF_INTEGER_32) -loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(63);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {INTEGER_X_LOGIC}.bit_test */
EIF_TYPED_VALUE F231_4225 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_test";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	
	RTEAA(l_feature_name, 230, Current, 6, 2, 7184);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7184);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = eif_abs_int32 (loc2);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ti4_1);
	RTHOOK(5);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 0L) + loc4);
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc4 >= loc3)) {
		RTHOOK(7);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L));
	} else {
		RTHOOK(8);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		ui4_1 = loc5;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
		loc6 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(10);
			RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
			loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 0L) - loc6);
			for (;;) {
				RTHOOK(11);
				if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(12);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5--;
				RTHOOK(13);
				ui4_1 = loc5;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
					RTHOOK(14);
					RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
					loc6 -= (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(15);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
		RTHOOK(16);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (arg2 % ti4_1);
		tb1 = eif_bit_test(EIF_NATURAL_32,loc6,ui4_1);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {INTEGER_X_LOGIC}.bit_xor */
void F231_4226 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "bit_xor";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc14 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc15 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc21 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(17);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc22);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc19);
	RTLR(7,loc20);
	RTLR(8,loc1);
	RTLR(9,loc3);
	RTLR(10,loc7);
	RTLR(11,ur1);
	RTLR(12,ur2);
	RTLR(13,ur3);
	RTLR(14,loc12);
	RTLR(15,loc18);
	RTLR(16,loc16);
	RTLIU(17);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_UINT32, &loc14);
	RTLU(SK_BOOL, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_UINT32, &loc21);
	RTLU(SK_REF, &loc22);
	
	RTEAA(l_feature_name, 230, Current, 22, 3, 7185);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7185);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 230, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 230, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(22, 0xF80001F0, 0, 0); /* loc22 */
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
	loc22 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(19, 0xF8000147, 0, 0); /* loc19 */
	loc19 = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(3);
	RTDBGAL(20, 0xF8000147, 0, 0); /* loc20 */
	loc20 = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc19 + RTVA(5577, "count", loc19));
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc20 + RTVA(5577, "count", loc20));
	loc6 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc19))(loc19)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc5 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc6 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(11);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ui4_1 = loc6;
			ti4_1 = eif_max_int32 (loc5,ui4_1);
			loc9 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			ui4_1 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(13);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) tr1;
			RTHOOK(14);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc19))(loc19)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(15);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(16);
			ur1 = loc7;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ur2 = loc1;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = loc5;
			ur3 = loc3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ui4_5 = loc6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1058, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x);
			RTHOOK(17);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ur1 = loc7;
			ui4_1 = loc8;
			ui4_2 = loc9;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc9 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(18);
			ui4_1 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			RTHOOK(19);
			RTDBGAL(15, 0x04000000, 1, 0); /* loc15 */
			loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(20);
		if ((EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(21);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc5;
			RTHOOK(22);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc6;
			RTHOOK(23);
			RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
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
			RTNHOOK(23,1);
			loc12 = (EIF_REFERENCE) tr1;
			RTHOOK(24);
			ur1 = loc12;
			ui4_1 = loc13;
			ur2 = loc1;
			ui4_2 = loc2;
			ui4_3 = loc5;
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ur3 = RTCCL(loc22);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(25);
			RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
			loc14 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(26);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			loc1 = (EIF_REFERENCE) loc12;
			RTHOOK(27);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) loc13;
			RTHOOK(28);
			RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			ui4_1 = loc6;
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
			RTNHOOK(28,1);
			loc12 = (EIF_REFERENCE) tr1;
			RTHOOK(29);
			ur1 = loc12;
			ui4_1 = loc13;
			ur2 = loc3;
			ui4_2 = loc4;
			ui4_3 = loc6;
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			ur3 = RTCCL(loc22);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
			RTHOOK(30);
			RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
			loc14 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(31);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			loc3 = (EIF_REFERENCE) loc12;
			RTHOOK(32);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) loc13;
			RTHOOK(33);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			ui4_1 = loc6;
			ti4_1 = eif_max_int32 (loc5,ui4_1);
			loc10 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(34);
			ui4_1 = loc10;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
			RTHOOK(35);
			RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) tr1;
			RTHOOK(36);
			if ((EIF_BOOLEAN) (loc5 > loc6)) {
				RTHOOK(37);
				ur1 = loc1;
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc6);
				ui4_2 = (EIF_INTEGER_32) (loc8 + loc6);
				ui4_3 = (EIF_INTEGER_32) (loc5 - loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(38);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(39);
					if ((EIF_BOOLEAN) (loc11 < ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(40);
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc11);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc11);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_xor(tu4_1,uu4_1);
					uu4_1 = tu4_3;
					ui4_1 = (EIF_INTEGER_32) (loc8 + loc11);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
					RTHOOK(41);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11--;
				}
				RTHOOK(42);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9 = (EIF_INTEGER_32) loc5;
			} else {
				RTHOOK(43);
				ur1 = loc3;
				ui4_1 = (EIF_INTEGER_32) (loc4 + loc5);
				ui4_2 = (EIF_INTEGER_32) (loc8 + loc5);
				ui4_3 = (EIF_INTEGER_32) (loc6 - loc5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(44);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(45);
					if ((EIF_BOOLEAN) (loc11 < ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(46);
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc11);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					ui4_1 = (EIF_INTEGER_32) (loc4 + loc11);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_xor(tu4_1,uu4_1);
					uu4_1 = tu4_3;
					ui4_1 = (EIF_INTEGER_32) (loc8 + loc11);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
					RTHOOK(47);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11--;
				}
				RTHOOK(48);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				loc9 = (EIF_INTEGER_32) loc6;
			}
			RTHOOK(49);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ur1 = loc7;
			ui4_1 = loc8;
			ui4_2 = loc9;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc9 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(50);
			ui4_1 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
			RTHOOK(51);
			RTDBGAL(15, 0x04000000, 1, 0); /* loc15 */
			loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(52);
			RTDBGAL(18, 0xF8000147, 0, 0); /* loc18 */
			loc18 = (EIF_REFERENCE) RTCCL(loc19);
			RTHOOK(53);
			RTDBGAL(19, 0xF8000147, 0, 0); /* loc19 */
			loc19 = (EIF_REFERENCE) RTCCL(loc20);
			RTHOOK(54);
			RTDBGAL(20, 0xF8000147, 0, 0); /* loc20 */
			loc20 = (EIF_REFERENCE) RTCCL(loc18);
			RTHOOK(55);
			RTDBGAL(16, 0xF800026B, 0, 0); /* loc16 */
			loc16 = (EIF_REFERENCE) loc1;
			RTHOOK(56);
			RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
			loc1 = (EIF_REFERENCE) loc3;
			RTHOOK(57);
			RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
			loc3 = (EIF_REFERENCE) loc16;
			RTHOOK(58);
			RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
			loc17 = (EIF_INTEGER_32) loc2;
			RTHOOK(59);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) loc4;
			RTHOOK(60);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) loc17;
			RTHOOK(61);
			RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
			loc17 = (EIF_INTEGER_32) loc5;
			RTHOOK(62);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) loc6;
			RTHOOK(63);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) loc17;
		}
	}
	RTHOOK(64);
	if ((EIF_BOOLEAN) !loc15) {
		RTHOOK(65);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc6;
		RTHOOK(66);
		RTDBGAL(12, 0xF800026B, 0, 0); /* loc12 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = loc6;
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
		RTNHOOK(66,1);
		loc12 = (EIF_REFERENCE) tr1;
		RTHOOK(67);
		ur1 = loc12;
		ui4_1 = loc13;
		ur2 = loc3;
		ui4_2 = loc4;
		ui4_3 = loc6;
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ur3 = RTCCL(loc22);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
		RTHOOK(68);
		RTDBGAL(14, 0x38000000, 1, 0); /* loc14 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
		loc14 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(69);
		RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
		loc3 = (EIF_REFERENCE) loc12;
		RTHOOK(70);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) loc13;
		RTHOOK(71);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		ui4_1 = loc6;
		ti4_1 = eif_max_int32 (loc5,ui4_1);
		loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		RTHOOK(72);
		ui4_1 = loc10;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
		RTHOOK(73);
		RTDBGAL(7, 0xF800026B, 0, 0); /* loc7 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = (EIF_REFERENCE) tr1;
		RTHOOK(74);
		if ((EIF_BOOLEAN) (loc5 > loc6)) {
			RTHOOK(75);
			ur1 = loc1;
			ui4_1 = (EIF_INTEGER_32) (loc2 + loc6);
			ui4_2 = (EIF_INTEGER_32) (loc8 + loc6);
			ui4_3 = (EIF_INTEGER_32) (loc5 - loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(76);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(77);
				if ((EIF_BOOLEAN) (loc11 < ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(78);
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc11);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
				ui4_1 = (EIF_INTEGER_32) (loc4 + loc11);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
				uu4_1 = tu4_2;
				tu4_3 = eif_bit_xor(tu4_1,uu4_1);
				uu4_1 = tu4_3;
				ui4_1 = (EIF_INTEGER_32) (loc8 + loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
				RTHOOK(79);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11--;
			}
			RTHOOK(80);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) loc5;
		} else {
			RTHOOK(81);
			ur1 = loc3;
			ui4_1 = (EIF_INTEGER_32) (loc4 + loc5);
			ui4_2 = (EIF_INTEGER_32) (loc8 + loc5);
			ui4_3 = (EIF_INTEGER_32) (loc6 - loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTHOOK(82);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(83);
				if ((EIF_BOOLEAN) (loc11 < ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(84);
				ui4_1 = (EIF_INTEGER_32) (loc2 + loc11);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
				ui4_1 = (EIF_INTEGER_32) (loc4 + loc11);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc3))(loc3, ui4_1x)).it_n4);
				uu4_1 = tu4_2;
				tu4_3 = eif_bit_xor(tu4_1,uu4_1);
				uu4_1 = tu4_3;
				ui4_1 = (EIF_INTEGER_32) (loc8 + loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
				RTHOOK(85);
				RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
				loc11--;
			}
			RTHOOK(86);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) loc6;
		}
		RTHOOK(87);
		ur1 = loc7;
		ui4_1 = loc8;
		ur2 = loc7;
		ui4_2 = loc8;
		ui4_3 = loc9;
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		ur3 = RTCCL(loc22);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1060, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, uu4_1x, ur3x);
		RTHOOK(88);
		RTDBGAL(21, 0x38000000, 1, 0); /* loc21 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc22))(loc22)).it_n4);
		loc21 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(89);
		if ((EIF_BOOLEAN)(loc21 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(90);
			uu4_1 = loc21;
			ui4_1 = (EIF_INTEGER_32) (loc8 + loc9);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc7))(loc7, uu4_1x, ui4_1x);
			RTHOOK(91);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9++;
		}
		RTHOOK(92);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		ur1 = loc7;
		ui4_1 = loc8;
		ui4_2 = loc9;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(93);
		ui4_1 = (EIF_INTEGER_32) -loc9;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(94);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_LOGIC}.bit_xor_lshift */
void F231_4227 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "bit_xor_lshift";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,Current);
	RTLR(7,loc2);
	RTLR(8,ur1);
	RTLR(9,ur2);
	RTLR(10,ur3);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 230, Current, 6, 4, 7186);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(230, Current, 7186);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTCC(arg2, 230, l_feature_name, 2, eif_new_type(327, 0x01), 0x01);
	RTCC(arg3, 230, l_feature_name, 3, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, arg3) || RTCEQ(arg2, arg3))) {
		RTHOOK(2);
		RTDBGAL(1, 0xF8000147, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3712, "identity", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		RTDBGAL(1, 0xF8000147, 0, 0); /* loc1 */
		loc1 = (EIF_REFERENCE) RTCCL(arg3);
	}
	RTHOOK(4);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5577, "count", arg2));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(5577, "count", loc1));
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ui4_1 = arg4;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
	loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc5) + ti4_1);
	RTHOOK(8);
	ui4_1 = loc6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
	RTHOOK(9);
	RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	ur1 = loc2;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ur2 = loc3;
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = loc4;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = tr1;
	ui4_4 = ((EIF_INTEGER_32) 0L);
	ui4_5 = loc5;
	ui4_6 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1057, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ui4_6x);
	RTHOOK(11);
	ur1 = loc2;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = loc6;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit231 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
