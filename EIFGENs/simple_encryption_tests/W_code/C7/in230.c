/*
 * Code for class INTEGER_X_ACCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F230_4216(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit230(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_X_ACCESS}.get_string */
EIF_TYPED_VALUE F230_4216 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
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
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,loc10);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLR(6,loc6);
	RTLR(7,loc1);
	RTLR(8,ur2);
	RTLR(9,loc4);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	
	RTEAA(l_feature_name, 229, Current, 11, 2, 7175);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(229, Current, 7175);
	RTCC(arg1, 229, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base >= 2", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("base <= 62", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 62L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5577, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 35L))) {
		RTHOOK(5);
		RTDBGAL(10, 0xF800003F, 0, 0); /* loc10 */
		tr1 = RTLN(eif_new_type(64, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		loc10 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(6);
		RTDBGAL(10, 0xF800003F, 0, 0); /* loc10 */
		tr1 = RTLN(eif_new_type(65, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(6,1);
		loc10 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(7);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ti4_1 = eif_abs_int32 (loc3);
	ui4_2 = ti4_1;
	ui4_3 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2074, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x)).it_i4);
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L));
	loc9 += ti4_1;
	RTHOOK(9);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(303, 0x01).id);
	uc1 = (EIF_CHARACTER_8) '\000';
	ui4_1 = loc9;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4897, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(9,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(6, 0xF800012F, 0, 0); /* loc6 */
	loc6 = (EIF_REFERENCE) RTCCL(Result);
	RTHOOK(11);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(12);
	if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(13);
		uc1 = (EIF_CHARACTER_8) '-';
		ui4_1 = loc7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3056, "put", loc6))(loc6, uc1x, ui4_1x);
		RTHOOK(14);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7++;
		RTHOOK(15);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc3;
	}
	RTHOOK(16);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(17);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(18);
	tu4_1 = (EIF_NATURAL_32) arg2;
	uu4_1 = tu4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1048, dtype))(Current, uu4_1x)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(19);
		RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
		uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
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
		RTNHOOK(19,1);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(20);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr1;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	}
	RTHOOK(21);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ur1 = RTCCL(loc6);
	ui4_1 = loc7;
	ui4_2 = arg2;
	ur2 = loc1;
	ui4_3 = loc2;
	ui4_4 = loc3;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2071, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x, ui4_3x, ui4_4x)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(22);
	RTDBGAL(4, 0xF800012F, 0, 0); /* loc4 */
	loc4 = (EIF_REFERENCE) RTCCL(loc6);
	RTHOOK(23);
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 - loc8) - (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4894, "remove_tail", loc4))(loc4, ui4_1x);
	RTHOOK(24);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) loc7;
	RTHOOK(25);
	tb1 = '\0';
	ui4_1 = loc5;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc4))(loc4, ui4_1x)).it_c1);
	tc2 = (EIF_CHARACTER_8) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(tc1 == tc2)) {
		tb1 = (EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) 1L));
	}
	if (tb1) {
		RTHOOK(26);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8--;
		RTHOOK(27);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5++;
	}
	RTHOOK(28);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(29);
		if ((EIF_BOOLEAN) (loc11 >= loc8)) break;
		RTHOOK(30);
		ui4_1 = (EIF_INTEGER_32) (loc5 + loc11);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc4))(loc4, ui4_1x)).it_c1);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tu1_1 = (EIF_NATURAL_8) ti4_1;
		uu1_1 = tu1_1;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1079, "number_to_text", loc10))(loc10, uu1_1x)).it_n1);
		tc1 = (EIF_CHARACTER_8) tu1_1;
		uc1 = tc1;
		ui4_1 = (EIF_INTEGER_32) (loc7 + loc11);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3056, "put", loc6))(loc6, uc1x, ui4_1x);
		RTHOOK(31);
		RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
		loc11++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef uu1_1
#undef uc1
#undef arg2
#undef arg1
}

void EIF_Minit230 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
