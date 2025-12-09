/*
 * Code for class POWERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F2_35(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2_36(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2_37(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2_38(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2_39(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2_40(EIF_REFERENCE);
extern void EIF_Minit2(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {POWERS}.make */
void F2_35 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1, Current, 0, 5, 32);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1, Current, 32);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 1, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 39, 0x10000000, 1); /* digits_in_base */
	*(EIF_INTEGER_32 *)(Current + RTWA(39, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 40, 0xF800026B, 0); /* p */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(40, dtype)) = (EIF_REFERENCE) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 41, 0x10000000, 1); /* p_offset */
	*(EIF_INTEGER_32 *)(Current + RTWA(41, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 42, 0x10000000, 1); /* n */
	*(EIF_INTEGER_32 *)(Current + RTWA(42, dtype)) = (EIF_INTEGER_32) arg4;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 43, 0x10000000, 1); /* base */
	*(EIF_INTEGER_32 *)(Current + RTWA(43, dtype)) = (EIF_INTEGER_32) arg5;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {POWERS}.digits_in_base */
EIF_TYPED_VALUE F2_36 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(39,Dtype(Current)));
	return r;
}


/* {POWERS}.p */
EIF_TYPED_VALUE F2_37 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(40,Dtype(Current)));
	return r;
}


/* {POWERS}.p_offset */
EIF_TYPED_VALUE F2_38 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(41,Dtype(Current)));
	return r;
}


/* {POWERS}.n */
EIF_TYPED_VALUE F2_39 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(42,Dtype(Current)));
	return r;
}


/* {POWERS}.base */
EIF_TYPED_VALUE F2_40 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(43,Dtype(Current)));
	return r;
}


void EIF_Minit2 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
