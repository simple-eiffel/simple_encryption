/*
 * Code for class SHA256
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F325_7049(EIF_REFERENCE);
extern void F325_7050(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F325_7051(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F325_7052(EIF_REFERENCE);
extern void F325_7053(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F325_7054(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7055(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F325_7056(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7057(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F325_7058(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F325_7059(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F325_7060(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F325_7061(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7062(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7063(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7064(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7065(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7066(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7067(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7068(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7069(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7070(EIF_REFERENCE);
extern EIF_TYPED_VALUE F325_7071(EIF_REFERENCE);
extern void F325_7357(EIF_REFERENCE, int);
extern void EIF_Minit325(void);

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

/* {SHA256}.make */
void F325_7049 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 324, Current, 0, 0, 13924);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13924);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 764, 0xF800026B, 0); /* schedule */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 64L);
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(764, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(764, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 753, 0xF800014B, 0); /* buffer */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(753, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3627, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(753, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5391, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef uu1_1
}

/* {SHA256}.make_copy */
void F325_7050 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_copy";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 324, Current, 0, 1, 13925);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13925);
	RTCC(arg1, 324, l_feature_name, 1, eif_new_type(Dftype(Current), 1), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5388, dtype))(Current);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(764, "schedule", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = tr2;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(764, "schedule", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3322, "lower", tr3))(tr3)).it_i4);
	ui4_1 = ti4_1;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3322, "lower", tr3))(tr3)).it_i4);
	ui4_2 = ti4_2;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,3);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", tr3))(tr3)).it_i4);
	ui4_3 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(753, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(753, "buffer", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = tr2;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(753, "buffer", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3322, "lower", tr3))(tr3)).it_i4);
	ui4_1 = ti4_1;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(753, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(3,2);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3322, "lower", tr3))(tr3)).it_i4);
	ui4_2 = ti4_2;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(753, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(3,3);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", tr3))(tr3)).it_i4);
	ui4_3 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 759, 0x3C000000, 1); /* byte_count */
	tu8_1 = *(EIF_NATURAL_64 *)(arg1 + RTVA(759, "byte_count", arg1));
	*(EIF_NATURAL_64 *)(Current + RTWA(759, dtype)) = (EIF_NATURAL_64) tu8_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 754, 0x10000000, 1); /* buffer_offset */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(754, "buffer_offset", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(754, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5400, 0x38000000, 1); /* h1 */
	tu4_1 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5400, "h1", arg1));
	*(EIF_NATURAL_32 *)(Current + RTWA(5400, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5401, 0x38000000, 1); /* h2 */
	tu4_1 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5401, "h2", arg1));
	*(EIF_NATURAL_32 *)(Current + RTWA(5401, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5402, 0x38000000, 1); /* h3 */
	tu4_1 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5402, "h3", arg1));
	*(EIF_NATURAL_32 *)(Current + RTWA(5402, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5403, 0x38000000, 1); /* h4 */
	tu4_1 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5403, "h4", arg1));
	*(EIF_NATURAL_32 *)(Current + RTWA(5403, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 5404, 0x38000000, 1); /* h5 */
	tu4_1 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5404, "h5", arg1));
	*(EIF_NATURAL_32 *)(Current + RTWA(5404, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 5405, 0x38000000, 1); /* h6 */
	tu4_1 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5405, "h6", arg1));
	*(EIF_NATURAL_32 *)(Current + RTWA(5405, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 5406, 0x38000000, 1); /* h7 */
	tu4_1 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5406, "h7", arg1));
	*(EIF_NATURAL_32 *)(Current + RTWA(5406, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(13);
	RTDBGAA(Current, dtype, 5407, 0x38000000, 1); /* h8 */
	tu4_1 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5407, "h8", arg1));
	*(EIF_NATURAL_32 *)(Current + RTWA(5407, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(14);
	RTDBGAA(Current, dtype, 765, 0x10000000, 1); /* schedule_offset */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(765, "schedule_offset", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(765, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("Current ~ other", EX_POST);
		if (RTEQ(Current, arg1)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {SHA256}.do_final */
void F325_7051 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "do_final";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 324, Current, 0, 2, 13926);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13926);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 324, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_offset", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("out_big_enough", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(28, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4930, "count", tr1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 - arg2) >= ((EIF_INTEGER_32) 32L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(763, dtype))(Current);
	RTHOOK(4);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5400, dtype));
	uu4_1 = tu4_1;
	ur1 = arg1;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(684, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(5);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5401, dtype));
	uu4_1 = tu4_1;
	ur1 = arg1;
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(684, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(6);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5402, dtype));
	uu4_1 = tu4_1;
	ur1 = arg1;
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(684, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(7);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5403, dtype));
	uu4_1 = tu4_1;
	ur1 = arg1;
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 12L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(684, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(8);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5404, dtype));
	uu4_1 = tu4_1;
	ur1 = arg1;
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 16L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(684, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(9);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5405, dtype));
	uu4_1 = tu4_1;
	ur1 = arg1;
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 20L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(684, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(10);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5406, dtype));
	uu4_1 = tu4_1;
	ur1 = arg1;
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 24L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(684, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(11);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5407, dtype));
	uu4_1 = tu4_1;
	ur1 = arg1;
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 28L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(684, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5391, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {SHA256}.reset */
void F325_7052 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 324, Current, 0, 0, 13927);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13927);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 759, 0x3C000000, 1); /* byte_count */
	*(EIF_NATURAL_64 *)(Current + RTWA(759, dtype)) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 754, 0x10000000, 1); /* buffer_offset */
	*(EIF_INTEGER_32 *)(Current + RTWA(754, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5400, 0x38000000, 1); /* h1 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5400, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1779033703L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5401, 0x38000000, 1); /* h2 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5401, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3144134277));
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5402, 0x38000000, 1); /* h3 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5402, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1013904242L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5403, 0x38000000, 1); /* h4 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5403, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2773480762));
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5404, 0x38000000, 1); /* h5 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5404, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1359893119L);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5405, 0x38000000, 1); /* h6 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5405, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2600822924));
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5406, 0x38000000, 1); /* h7 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5406, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 528734635L);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 5407, 0x38000000, 1); /* h8 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5407, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1541459225L);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 765, 0x10000000, 1); /* schedule_offset */
	*(EIF_INTEGER_32 *)(Current + RTWA(765, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(12);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(12,1);
	uu4_1 = ((EIF_NATURAL_32) 0U);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(12,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3323, "upper", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", tr1))(tr1, uu4_1x, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("byte_count = 0", EX_POST);
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(759, dtype));
		if ((EIF_BOOLEAN)(tu8_1 == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("buffer_reset", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(754, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("schedule_reset", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(765, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef uu4_1
}

/* {SHA256}.current_final */
void F325_7053 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "current_final";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 324, Current, 1, 2, 13928);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13928);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 324, l_feature_name, 1, typres0, 0x01);
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
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 31L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000144, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23, "deep_twin", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = arg1;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5390, "do_final", loc1))(loc1, ur1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {SHA256}.current_out */
EIF_TYPED_VALUE F325_7054 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_out";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 324, Current, 2, 0, 13929);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13929);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	tr1 = RTMS_EX_H("0x",2,12408);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(1, 0xF800014B, 0, 0); /* loc1 */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 32L);
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
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ur1 = loc1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5392, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 32L))) break;
		RTHOOK(6);
		ui4_1 = loc2;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n1);
		tr1 = RTLN(eif_new_type(293, 0x00).id);
		*(EIF_NATURAL_8 *)tr1 = tu1_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4685, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4954, "append", Result))(Result, ur1x);
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uu1_1
}

/* {SHA256}.is_equal */
EIF_TYPED_VALUE F325_7055 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 324, Current, 0, 1, 13930);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13930);
	RTCC(arg1, 324, l_feature_name, 1, eif_new_type(324, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	tb6 = '\0';
	tb7 = '\0';
	tb8 = '\0';
	tb9 = '\0';
	tb10 = '\0';
	tb11 = '\0';
	tb12 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(764, "schedule", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = tr2;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(764, "schedule", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3322, "lower", tr3))(tr3)).it_i4);
	ui4_1 = ti4_1;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3322, "lower", tr3))(tr3)).it_i4);
	ui4_2 = ti4_2;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,3);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", tr3))(tr3)).it_i4);
	ui4_3 = ti4_3;
	tb13 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3636, "same_items", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x)).it_b);
	if (tb13) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(753, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,4);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(753, "buffer", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = tr2;
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(753, "buffer", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3322, "lower", tr3))(tr3)).it_i4);
		ui4_1 = ti4_1;
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(753, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(2,5);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3322, "lower", tr3))(tr3)).it_i4);
		ui4_2 = ti4_2;
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(753, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(2,6);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", tr3))(tr3)).it_i4);
		ui4_3 = ti4_3;
		tb13 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3636, "same_items", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x)).it_b);
		tb12 = tb13;
	}
	if (tb12) {
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5400, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5400, "h1", arg1));
		tb11 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
	}
	if (tb11) {
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5401, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5401, "h2", arg1));
		tb10 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
	}
	if (tb10) {
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5402, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5402, "h3", arg1));
		tb9 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
	}
	if (tb9) {
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5403, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5403, "h4", arg1));
		tb8 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
	}
	if (tb8) {
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5404, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5404, "h5", arg1));
		tb7 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
	}
	if (tb7) {
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5405, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5405, "h6", arg1));
		tb6 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
	}
	if (tb6) {
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5406, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5406, "h7", arg1));
		tb5 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
	}
	if (tb5) {
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5407, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(arg1 + RTVA(5407, "h8", arg1));
		tb4 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(765, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(765, "schedule_offset", arg1));
		tb3 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb3) {
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(759, dtype));
		tu8_2 = *(EIF_NATURAL_64 *)(arg1 + RTVA(759, "byte_count", arg1));
		tb2 = (EIF_BOOLEAN)(tu8_1 == tu8_2);
	}
	if (tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(754, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(754, "buffer_offset", arg1));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {SHA256}.process_block */
void F325_7056 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "process_block";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	
	RTEAA(l_feature_name, 324, Current, 10, 0, 13931);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13931);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5398, dtype))(Current);
	RTHOOK(2);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5400, dtype));
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(3);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5401, dtype));
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5402, dtype));
	loc3 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5403, dtype));
	loc4 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5404, dtype));
	loc5 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(7);
	RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5405, dtype));
	loc6 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5406, dtype));
	loc7 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(9);
	RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5407, dtype));
	loc8 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(10);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(11);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 8L))) break;
		RTHOOK(13);
		RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
		uu4_1 = loc5;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5395, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc5;
		uu4_2 = loc6;
		uu4_3 = loc7;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(755, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5399, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		ui4_1 = loc9;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,2);
		ui4_1 = loc9;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		loc8 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc8 + tu4_1) + tu4_2) + tu4_3) + tu4_4);
		RTHOOK(14);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9++;
		RTHOOK(15);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		loc4 += loc8;
		RTHOOK(16);
		RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
		uu4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5394, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc1;
		uu4_2 = loc2;
		uu4_3 = loc3;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(756, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		loc8 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc8 + tu4_1) + tu4_2);
		RTHOOK(17);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		uu4_1 = loc4;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5395, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc4;
		uu4_2 = loc5;
		uu4_3 = loc6;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(755, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5399, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		ui4_1 = loc9;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,2);
		ui4_1 = loc9;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		loc7 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc7 + tu4_1) + tu4_2) + tu4_3) + tu4_4);
		RTHOOK(18);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9++;
		RTHOOK(19);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		loc3 += loc7;
		RTHOOK(20);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		uu4_1 = loc8;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5394, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc8;
		uu4_2 = loc1;
		uu4_3 = loc2;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(756, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		loc7 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc7 + tu4_1) + tu4_2);
		RTHOOK(21);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		uu4_1 = loc3;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5395, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc3;
		uu4_2 = loc4;
		uu4_3 = loc5;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(755, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5399, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(21,1);
		ui4_1 = loc9;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(21,2);
		ui4_1 = loc9;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + tu4_1) + tu4_2) + tu4_3) + tu4_4);
		RTHOOK(22);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9++;
		RTHOOK(23);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		loc2 += loc6;
		RTHOOK(24);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		uu4_1 = loc7;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5394, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc7;
		uu4_2 = loc8;
		uu4_3 = loc1;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(756, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + tu4_1) + tu4_2);
		RTHOOK(25);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		uu4_1 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5395, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc2;
		uu4_2 = loc3;
		uu4_3 = loc4;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(755, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5399, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		ui4_1 = loc9;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,2);
		ui4_1 = loc9;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 + tu4_1) + tu4_2) + tu4_3) + tu4_4);
		RTHOOK(26);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9++;
		RTHOOK(27);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		loc1 += loc5;
		RTHOOK(28);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		uu4_1 = loc6;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5394, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc6;
		uu4_2 = loc7;
		uu4_3 = loc8;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(756, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 + tu4_1) + tu4_2);
		RTHOOK(29);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		uu4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5395, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc1;
		uu4_2 = loc2;
		uu4_3 = loc3;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(755, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5399, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(29,1);
		ui4_1 = loc9;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(29,2);
		ui4_1 = loc9;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 + tu4_1) + tu4_2) + tu4_3) + tu4_4);
		RTHOOK(30);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9++;
		RTHOOK(31);
		RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
		loc8 += loc4;
		RTHOOK(32);
		RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
		uu4_1 = loc5;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5394, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc5;
		uu4_2 = loc6;
		uu4_3 = loc7;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(756, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 + tu4_1) + tu4_2);
		RTHOOK(33);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		uu4_1 = loc8;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5395, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc8;
		uu4_2 = loc1;
		uu4_3 = loc2;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(755, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5399, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(33,1);
		ui4_1 = loc9;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(33,2);
		ui4_1 = loc9;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc3 + tu4_1) + tu4_2) + tu4_3) + tu4_4);
		RTHOOK(34);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9++;
		RTHOOK(35);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		loc7 += loc3;
		RTHOOK(36);
		RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
		uu4_1 = loc4;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5394, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc4;
		uu4_2 = loc5;
		uu4_3 = loc6;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(756, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc3 + tu4_1) + tu4_2);
		RTHOOK(37);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		uu4_1 = loc7;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5395, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc7;
		uu4_2 = loc8;
		uu4_3 = loc1;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(755, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5399, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(37,1);
		ui4_1 = loc9;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(37,2);
		ui4_1 = loc9;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc2 + tu4_1) + tu4_2) + tu4_3) + tu4_4);
		RTHOOK(38);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9++;
		RTHOOK(39);
		RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
		loc6 += loc2;
		RTHOOK(40);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		uu4_1 = loc3;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5394, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc3;
		uu4_2 = loc4;
		uu4_3 = loc5;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(756, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc2 + tu4_1) + tu4_2);
		RTHOOK(41);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		uu4_1 = loc6;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5395, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc6;
		uu4_2 = loc7;
		uu4_3 = loc8;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(755, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5399, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(41,1);
		ui4_1 = loc9;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(41,2);
		ui4_1 = loc9;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr1))(tr1, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc1 + tu4_1) + tu4_2) + tu4_3) + tu4_4);
		RTHOOK(42);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9++;
		RTHOOK(43);
		RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
		loc5 += loc1;
		RTHOOK(44);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		uu4_1 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5394, dtype))(Current, uu4_1x)).it_n4);
		uu4_1 = loc2;
		uu4_2 = loc3;
		uu4_3 = loc4;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(756, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc1 + tu4_1) + tu4_2);
		RTHOOK(45);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		loc10++;
	}
	RTHOOK(46);
	RTDBGAA(Current, dtype, 5400, 0x38000000, 1); /* h1 */
	(*(EIF_NATURAL_32 *)(Current + RTWA(5400, dtype))) += loc1;
	RTHOOK(47);
	RTDBGAA(Current, dtype, 5401, 0x38000000, 1); /* h2 */
	(*(EIF_NATURAL_32 *)(Current + RTWA(5401, dtype))) += loc2;
	RTHOOK(48);
	RTDBGAA(Current, dtype, 5402, 0x38000000, 1); /* h3 */
	(*(EIF_NATURAL_32 *)(Current + RTWA(5402, dtype))) += loc3;
	RTHOOK(49);
	RTDBGAA(Current, dtype, 5403, 0x38000000, 1); /* h4 */
	(*(EIF_NATURAL_32 *)(Current + RTWA(5403, dtype))) += loc4;
	RTHOOK(50);
	RTDBGAA(Current, dtype, 5404, 0x38000000, 1); /* h5 */
	(*(EIF_NATURAL_32 *)(Current + RTWA(5404, dtype))) += loc5;
	RTHOOK(51);
	RTDBGAA(Current, dtype, 5405, 0x38000000, 1); /* h6 */
	(*(EIF_NATURAL_32 *)(Current + RTWA(5405, dtype))) += loc6;
	RTHOOK(52);
	RTDBGAA(Current, dtype, 5406, 0x38000000, 1); /* h7 */
	(*(EIF_NATURAL_32 *)(Current + RTWA(5406, dtype))) += loc7;
	RTHOOK(53);
	RTDBGAA(Current, dtype, 5407, 0x38000000, 1); /* h8 */
	(*(EIF_NATURAL_32 *)(Current + RTWA(5407, dtype))) += loc8;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(54);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA256}.sigma0 */
EIF_TYPED_VALUE F325_7057 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sigma0";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
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
	
	RTEAA(l_feature_name, 324, Current, 0, 1, 13932);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13932);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	uu4_1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(821, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	uu4_1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 13L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(821, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_xor(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTHOOK(3);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	uu4_1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 22L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(821, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_xor(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {SHA256}.sigma1 */
EIF_TYPED_VALUE F325_7058 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sigma1";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
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
	
	RTEAA(l_feature_name, 324, Current, 0, 1, 13933);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13933);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	uu4_1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 6L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(821, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	uu4_1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 11L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(821, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_xor(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTHOOK(3);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	uu4_1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 25L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(821, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_xor(Result,uu4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {SHA256}.lsigma0 */
EIF_TYPED_VALUE F325_7059 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "lsigma0";
	RTEX;
#define arg1 arg1x.it_n4
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
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 324, Current, 0, 1, 13934);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13934);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	uu4_1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 7L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(821, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
	RTNHOOK(1,1);
	uu4_1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 18L);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(821, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
	uu4_1 = tu4_2;
	tu4_3 = eif_bit_xor(tu4_1,uu4_1);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_xor(tu4_3,uu4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {SHA256}.lsigma1 */
EIF_TYPED_VALUE F325_7060 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "lsigma1";
	RTEX;
#define arg1 arg1x.it_n4
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
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 324, Current, 0, 1, 13935);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13935);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	uu4_1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 17L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(821, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
	RTNHOOK(1,1);
	uu4_1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 19L);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(821, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
	uu4_1 = tu4_2;
	tu4_3 = eif_bit_xor(tu4_1,uu4_1);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	tu4_1 = eif_bit_shift_right(arg1,ui4_1);
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_xor(tu4_3,uu4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {SHA256}.expand_blocks */
void F325_7061 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "expand_blocks";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 324, Current, 1, 0, 13936);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13936);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 64L))) break;
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,2);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5397, dtype))(Current, uu4_1x)).it_n4);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,3);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 7L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,4);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 15L));
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
		uu4_1 = tu4_3;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5396, dtype))(Current, uu4_1x)).it_n4);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,5);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 16L));
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", tr2))(tr2, ui4_1x)).it_n4);
		uu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", tr1))(tr1, uu4_1x, ui4_1x);
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef uu4_1
}

/* {SHA256}.k */
RTOID (F325_7062)
EIF_TYPED_VALUE F325_7062 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "k";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F325_7062);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 324, Current, 0, 0, 13937);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13937);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800026B, 0,0); /* Result */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 64L);
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
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1116352408L);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(3);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1899447441L);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3049323471));
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(5);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3921009573));
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(6);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 961987163L);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(7);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1508970993L);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(8);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2453635748));
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(9);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2870763221));
	ui4_1 = ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(10);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3624381080));
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(11);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 310598401L);
	ui4_1 = ((EIF_INTEGER_32) 9L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(12);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 607225278L);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(13);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1426881987L);
	ui4_1 = ((EIF_INTEGER_32) 11L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(14);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1925078388L);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(15);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2162078206));
	ui4_1 = ((EIF_INTEGER_32) 13L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(16);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2614888103));
	ui4_1 = ((EIF_INTEGER_32) 14L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(17);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3248222580));
	ui4_1 = ((EIF_INTEGER_32) 15L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(18);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3835390401));
	ui4_1 = ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(19);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4022224774));
	ui4_1 = ((EIF_INTEGER_32) 17L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(20);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 264347078L);
	ui4_1 = ((EIF_INTEGER_32) 18L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(21);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 604807628L);
	ui4_1 = ((EIF_INTEGER_32) 19L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(22);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 770255983L);
	ui4_1 = ((EIF_INTEGER_32) 20L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(23);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1249150122L);
	ui4_1 = ((EIF_INTEGER_32) 21L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(24);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1555081692L);
	ui4_1 = ((EIF_INTEGER_32) 22L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(25);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1996064986L);
	ui4_1 = ((EIF_INTEGER_32) 23L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(26);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2554220882));
	ui4_1 = ((EIF_INTEGER_32) 24L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(27);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2821834349));
	ui4_1 = ((EIF_INTEGER_32) 25L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(28);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2952996808));
	ui4_1 = ((EIF_INTEGER_32) 26L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(29);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3210313671));
	ui4_1 = ((EIF_INTEGER_32) 27L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(30);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3336571891));
	ui4_1 = ((EIF_INTEGER_32) 28L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(31);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3584528711));
	ui4_1 = ((EIF_INTEGER_32) 29L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(32);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 113926993L);
	ui4_1 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(33);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 338241895L);
	ui4_1 = ((EIF_INTEGER_32) 31L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(34);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 666307205L);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(35);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 773529912L);
	ui4_1 = ((EIF_INTEGER_32) 33L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(36);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1294757372L);
	ui4_1 = ((EIF_INTEGER_32) 34L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(37);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1396182291L);
	ui4_1 = ((EIF_INTEGER_32) 35L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(38);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1695183700L);
	ui4_1 = ((EIF_INTEGER_32) 36L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(39);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1986661051L);
	ui4_1 = ((EIF_INTEGER_32) 37L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(40);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2177026350));
	ui4_1 = ((EIF_INTEGER_32) 38L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(41);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2456956037));
	ui4_1 = ((EIF_INTEGER_32) 39L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(42);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2730485921));
	ui4_1 = ((EIF_INTEGER_32) 40L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(43);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2820302411));
	ui4_1 = ((EIF_INTEGER_32) 41L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(44);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3259730800));
	ui4_1 = ((EIF_INTEGER_32) 42L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(45);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3345764771));
	ui4_1 = ((EIF_INTEGER_32) 43L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(46);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3516065817));
	ui4_1 = ((EIF_INTEGER_32) 44L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(47);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3600352804));
	ui4_1 = ((EIF_INTEGER_32) 45L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(48);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4094571909));
	ui4_1 = ((EIF_INTEGER_32) 46L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(49);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 275423344L);
	ui4_1 = ((EIF_INTEGER_32) 47L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(50);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 430227734L);
	ui4_1 = ((EIF_INTEGER_32) 48L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(51);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 506948616L);
	ui4_1 = ((EIF_INTEGER_32) 49L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(52);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 659060556L);
	ui4_1 = ((EIF_INTEGER_32) 50L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(53);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 883997877L);
	ui4_1 = ((EIF_INTEGER_32) 51L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(54);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 958139571L);
	ui4_1 = ((EIF_INTEGER_32) 52L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(55);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1322822218L);
	ui4_1 = ((EIF_INTEGER_32) 53L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(56);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1537002063L);
	ui4_1 = ((EIF_INTEGER_32) 54L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(57);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1747873779L);
	ui4_1 = ((EIF_INTEGER_32) 55L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(58);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1955562222L);
	ui4_1 = ((EIF_INTEGER_32) 56L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(59);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2024104815L);
	ui4_1 = ((EIF_INTEGER_32) 57L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(60);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2227730452));
	ui4_1 = ((EIF_INTEGER_32) 58L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(61);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2361852424));
	ui4_1 = ((EIF_INTEGER_32) 59L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(62);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2428436474));
	ui4_1 = ((EIF_INTEGER_32) 60L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(63);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2756734187));
	ui4_1 = ((EIF_INTEGER_32) 61L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(64);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3204031479));
	ui4_1 = ((EIF_INTEGER_32) 62L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(65);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3329325298));
	ui4_1 = ((EIF_INTEGER_32) 63L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", Result))(Result, uu4_1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(66);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef Result
}

/* {SHA256}.h1 */
EIF_TYPED_VALUE F325_7063 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5400,Dtype(Current)));
	return r;
}


/* {SHA256}.h2 */
EIF_TYPED_VALUE F325_7064 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5401,Dtype(Current)));
	return r;
}


/* {SHA256}.h3 */
EIF_TYPED_VALUE F325_7065 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5402,Dtype(Current)));
	return r;
}


/* {SHA256}.h4 */
EIF_TYPED_VALUE F325_7066 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5403,Dtype(Current)));
	return r;
}


/* {SHA256}.h5 */
EIF_TYPED_VALUE F325_7067 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5404,Dtype(Current)));
	return r;
}


/* {SHA256}.h6 */
EIF_TYPED_VALUE F325_7068 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5405,Dtype(Current)));
	return r;
}


/* {SHA256}.h7 */
EIF_TYPED_VALUE F325_7069 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5406,Dtype(Current)));
	return r;
}


/* {SHA256}.h8 */
EIF_TYPED_VALUE F325_7070 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5407,Dtype(Current)));
	return r;
}


/* {SHA256}.debug_output */
EIF_TYPED_VALUE F325_7071 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 324, Current, 0, 0, 13922);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(324, Current, 13922);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800012F, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5393, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {SHA256}._invariant */
void F325_7357 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 324, Current, 0, 7356);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("buffer_size", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(753, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_buffer_offset", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(753, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(754, dtype));
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", tr1))(tr1, ui4_1x)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("schedule_size", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3623, "count", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 64L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_schedule_offset", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(765, dtype));
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", tr1))(tr1, ui4_1x)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef ui4_1
}

void EIF_Minit325 (void)
{
	GTCX
	RTOTS (7062,F325_7062)
}


#ifdef __cplusplus
}
#endif
