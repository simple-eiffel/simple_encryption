/*
 * Code for class LINEAR_CONGRUENTIAL_RNG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F238_4284(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F238_4285(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F238_4286(EIF_REFERENCE);
extern void F238_4287(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F238_4288(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F238_4289(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit238(void);

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

/* {LINEAR_CONGRUENTIAL_RNG}.make */
void F238_4284 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 237, Current, 3, 1, 7243);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(237, Current, 7243);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("size >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("size <= 128", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 128L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	switch (arg1) {
		case 0L:
		case 1L:
		case 2L:
		case 3L:
		case 4L:
		case 5L:
		case 6L:
		case 7L:
		case 8L:
		case 9L:
		case 10L:
		case 11L:
		case 12L:
		case 13L:
		case 14L:
		case 15L:
		case 16L:
			RTHOOK(4);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
			RTHOOK(5);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("29cf535",7,1223655733);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			RTHOOK(6);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 34L);
			RTHOOK(7);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("A3D73AD",7,1530272324);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			RTHOOK(8);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 36L);
			RTHOOK(9);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("28f825c5",8,1323335221);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			RTHOOK(10);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
			RTHOOK(11);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("a3dd4cdd",8,998036580);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			RTHOOK(12);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
			RTHOOK(13);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("28f5da175",9,201413941);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 21L:
		case 22L:
		case 23L:
		case 24L:
		case 25L:
		case 26L:
		case 27L:
		case 28L:
			RTHOOK(14);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 56L);
			RTHOOK(15);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("AA7D735234C0DD",14,413171012);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 29L:
		case 30L:
		case 31L:
		case 32L:
			RTHOOK(16);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
			RTHOOK(17);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("BAECD515DAF0B49D",16,563233860);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 33L:
		case 34L:
		case 35L:
		case 36L:
		case 37L:
		case 38L:
		case 39L:
		case 40L:
		case 41L:
		case 42L:
		case 43L:
		case 44L:
		case 45L:
		case 46L:
		case 47L:
		case 48L:
		case 49L:
		case 50L:
			RTHOOK(18);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
			RTHOOK(19);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("292787EBD3329AD7E7575E2FD",25,450042180);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 51L:
		case 52L:
		case 53L:
		case 54L:
		case 55L:
		case 56L:
		case 57L:
		case 58L:
		case 59L:
		case 60L:
		case 61L:
		case 62L:
		case 63L:
		case 64L:
			RTHOOK(20);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 128L);
			RTHOOK(21);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("48A74F367FA7B5C8ACBB36901308FA85",32,1875338293);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 65L:
		case 66L:
		case 67L:
		case 68L:
		case 69L:
		case 70L:
		case 71L:
		case 72L:
		case 73L:
		case 74L:
		case 75L:
		case 76L:
		case 77L:
		case 78L:
			RTHOOK(22);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 156L);
			RTHOOK(23);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("78A7FDDDC43611B527C3F1D760F36E5D7FC7C45",39,407216181);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 79L:
		case 80L:
		case 81L:
		case 82L:
		case 83L:
		case 84L:
		case 85L:
		case 86L:
		case 87L:
		case 88L:
		case 89L:
		case 90L:
		case 91L:
		case 92L:
		case 93L:
		case 94L:
		case 95L:
		case 96L:
		case 97L:
		case 98L:
			RTHOOK(24);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 196L);
			RTHOOK(25);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("41BA2E104EE34C66B3520CE706A56498DE6D44721E5E24F5",48,1426587189);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 99L:
		case 100L:
			RTHOOK(26);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 200L);
			RTHOOK(27);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("4E5A24C38B981EAFE84CD9D0BEC48E83911362C114F30072C5",50,760243765);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		case 101L:
		case 102L:
		case 103L:
		case 104L:
		case 105L:
		case 106L:
		case 107L:
		case 108L:
		case 109L:
		case 110L:
		case 111L:
		case 112L:
		case 113L:
		case 114L:
		case 115L:
		case 116L:
		case 117L:
		case 118L:
		case 119L:
		case 120L:
		case 121L:
		case 122L:
		case 123L:
		case 124L:
		case 125L:
		case 126L:
		case 127L:
		case 128L:
		case 129L:
		case 130L:
		case 131L:
		case 132L:
		case 133L:
		case 134L:
		case 135L:
		case 136L:
		case 137L:
		case 138L:
		case 139L:
		case 140L:
		case 141L:
		case 142L:
		case 143L:
		case 144L:
		case 145L:
		case 146L:
		case 147L:
		case 148L:
		case 149L:
		case 150L:
		case 151L:
		case 152L:
		case 153L:
		case 154L:
		case 155L:
		case 156L:
		case 157L:
		case 158L:
		case 159L:
		case 160L:
		case 161L:
		case 162L:
		case 163L:
		case 164L:
		case 165L:
		case 166L:
		case 167L:
		case 168L:
		case 169L:
		case 170L:
		case 171L:
		case 172L:
		case 173L:
		case 174L:
		case 175L:
		case 176L:
		case 177L:
		case 178L:
		case 179L:
		case 180L:
		case 181L:
		case 182L:
		case 183L:
		case 184L:
		case 185L:
		case 186L:
		case 187L:
		case 188L:
		case 189L:
		case 190L:
		case 191L:
		case 192L:
		case 193L:
		case 194L:
		case 195L:
		case 196L:
		case 197L:
		case 198L:
		case 199L:
		case 200L:
		case 201L:
		case 202L:
		case 203L:
		case 204L:
		case 205L:
		case 206L:
		case 207L:
		case 208L:
		case 209L:
		case 210L:
		case 211L:
		case 212L:
		case 213L:
		case 214L:
		case 215L:
		case 216L:
		case 217L:
		case 218L:
		case 219L:
		case 220L:
		case 221L:
		case 222L:
		case 223L:
		case 224L:
		case 225L:
		case 226L:
		case 227L:
		case 228L:
		case 229L:
		case 230L:
		case 231L:
		case 232L:
		case 233L:
		case 234L:
		case 235L:
		case 236L:
		case 237L:
		case 238L:
			RTHOOK(28);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 256L);
			RTHOOK(29);
			RTDBGAL(3, 0xF800012F, 0, 0); /* loc3 */
			tr1 = RTMS_EX_H("AF66BA932AAF58A071FD8F0742A99A0C76982D648509973DB802303128A14CB5",64,820560437);
			loc3 = (EIF_REFERENCE) tr1;
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTHOOK(30);
	RTDBGAL(1, 0xF8000148, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(328, 0x01).id);
	ur1 = RTCCL(loc3);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5465, Dtype(tr1)))(tr1, ur1x, ui4_1x);
	RTNHOOK(30,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(31);
	ur1 = RTCCL(loc1);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3513, dtype))(Current, ur1x, uu4_1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {LINEAR_CONGRUENTIAL_RNG}.randinit_lc_2exp */
void F238_4285 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "randinit_lc_2exp";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 237, Current, 1, 3, 7244);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(237, Current, 7244);
	RTCC(arg1, 237, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ui4_1 = arg3;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3514, 0xF80000EC, 0); /* seed */
	tr1 = RTLNSMART(RTWCT(3514, dtype, Dftype(Current)).id);
	ui4_1 = arg3;
	ur1 = RTCCL(arg1);
	ui4_2 = loc1;
	uu4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3506, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, uu4_1x);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3514, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {LINEAR_CONGRUENTIAL_RNG}.seed */
EIF_TYPED_VALUE F238_4286 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3514,Dtype(Current)));
	return r;
}


/* {LINEAR_CONGRUENTIAL_RNG}.randseed */
void F238_4287 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "randseed";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 237, Current, 2, 1, 7246);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(237, Current, 7246);
	RTCC(arg1, 237, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000147, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3507, "seed", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3511, "m2exp", tr1));
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3511, "m2exp", tr1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3482, dtype))(Current, ur1x, ur2x, ui4_1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(5577, "count", loc1));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(loc1 + RTVA(5577, "count", loc1));
	ti4_3 = *(EIF_INTEGER_32 *)(loc1 + RTVA(5577, "count", loc1));
	ui4_2 = (EIF_INTEGER_32) (ti4_2 - (EIF_INTEGER_32) (loc2 - ti4_3));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3641, "fill_with", tr1))(tr1, uu4_1x, ui4_1x, ui4_2x);
	RTHOOK(5);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", loc1))(loc1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg1
}

/* {LINEAR_CONGRUENTIAL_RNG}.randget */
void F238_4288 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "randget";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc11 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc12);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc6);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_UINT32, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 237, Current, 12, 3, 7247);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(237, Current, 7247);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 237, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("count = 0 or target.valid_index (target_offset)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3625, "valid_index", arg1))(arg1, ui4_1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("count = 0 or target.valid_index (target_offset + bits_to_limbs (count) - 1)", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ti4_1) - ((EIF_INTEGER_32) 1L));
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
	RTHOOK(3);
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
	RTNHOOK(3,1);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3511, "m2exp", tr1));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
	RTHOOK(5);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ui4_1 = loc2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
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
	RTNHOOK(6,1);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc2) > arg3)) break;
		RTHOOK(9);
		RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
		loc6 = (EIF_REFERENCE) arg1;
		RTHOOK(10);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + (EIF_INTEGER_32) (loc1 / ti4_1));
		RTHOOK(11);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc1 % ti4_1) != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(12);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ur1 = loc3;
			ui4_1 = loc4;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3515, dtype))(Current, ur1x, ui4_1x)).it_i4);
			loc9 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(13);
			RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
			ui4_1 = loc7;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc6))(loc6, ui4_1x)).it_n4);
			loc11 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(14);
			ur1 = loc6;
			ui4_1 = loc7;
			ur2 = loc3;
			ui4_2 = loc4;
			ui4_3 = loc5;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_4 = (EIF_INTEGER_32) (loc1 % ti4_1);
			ur3 = RTCCL(loc12);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1054, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
			RTHOOK(15);
			RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc12))(loc12)).it_n4);
			loc8 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(16);
			ui4_1 = loc7;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc6))(loc6, ui4_1x)).it_n4);
			uu4_1 = loc11;
			tu4_2 = eif_bit_or(tu4_1,uu4_1);
			uu4_1 = tu4_2;
			ui4_1 = loc7;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc6))(loc6, uu4_1x, ui4_1x);
			RTHOOK(17);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % ti4_1) + (EIF_INTEGER_32) (loc1 % ti4_2)) > ti4_3)) {
				RTHOOK(18);
				uu4_1 = loc8;
				ui4_1 = (EIF_INTEGER_32) (loc7 + loc5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc6))(loc6, uu4_1x, ui4_1x);
			}
		} else {
			RTHOOK(19);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ur1 = loc6;
			ui4_1 = loc7;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3515, dtype))(Current, ur1x, ui4_1x)).it_i4);
			loc9 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(20);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 += loc2;
	}
	RTHOOK(21);
	if ((EIF_BOOLEAN)(loc1 != arg3)) {
		RTHOOK(22);
		RTDBGAL(6, 0xF800026B, 0, 0); /* loc6 */
		loc6 = (EIF_REFERENCE) arg1;
		RTHOOK(23);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + (EIF_INTEGER_32) (loc1 / ti4_1));
		RTHOOK(24);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - loc1);
		RTHOOK(25);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		ui4_1 = loc10;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(26);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		ur1 = loc3;
		ui4_1 = loc4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3515, dtype))(Current, ur1x, ui4_1x)).it_i4);
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(27);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc1 % ti4_1) != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(28);
			RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
			ui4_1 = loc7;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc6))(loc6, ui4_1x)).it_n4);
			loc11 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(29);
			ur1 = loc6;
			ui4_1 = loc7;
			ur2 = loc3;
			ui4_2 = loc4;
			ui4_3 = loc5;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_4 = (EIF_INTEGER_32) (loc1 % ti4_1);
			ur3 = RTCCL(loc12);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1054, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
			RTHOOK(30);
			RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc12))(loc12)).it_n4);
			loc8 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(31);
			ui4_1 = loc7;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc6))(loc6, ui4_1x)).it_n4);
			uu4_1 = loc11;
			tu4_2 = eif_bit_or(tu4_1,uu4_1);
			uu4_1 = tu4_2;
			ui4_1 = loc7;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc6))(loc6, uu4_1x, ui4_1x);
			RTHOOK(32);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + (EIF_INTEGER_32) (loc5 * ti4_1)) - (EIF_INTEGER_32) (loc1 % ti4_2)) < arg3)) {
				RTHOOK(33);
				uu4_1 = loc8;
				ui4_1 = (EIF_INTEGER_32) (loc7 + loc5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc6))(loc6, uu4_1x, ui4_1x);
			}
		} else {
			RTHOOK(34);
			ur1 = loc3;
			ui4_1 = loc4;
			ui4_2 = loc7;
			ui4_3 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", loc6))(loc6, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
		RTHOOK(35);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ti4_1) != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(36);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (arg2 + (EIF_INTEGER_32) (arg3 / ti4_1));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			tu4_3 = eif_bit_not(tu4_2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (arg3 % ti4_1);
			tu4_2 = eif_bit_shift_left(tu4_3,ui4_1);
			tu4_3 = eif_bit_not(tu4_2);
			uu4_1 = tu4_3;
			tu4_2 = eif_bit_and(tu4_1,uu4_1);
			uu4_1 = tu4_2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (arg2 + (EIF_INTEGER_32) (arg3 / ti4_1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", arg1))(arg1, uu4_1x, ui4_1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(37);
		RTCT("target [target_offset + bits_to_limbs (count) - 1] = 0 or else most_significant_one (target [target_offset + bits_to_limbs (count) - 1]) <= bits_top_limb (count)", EX_POST);
		tb1 = '\01';
		ui4_1 = arg3;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ti4_1) - ((EIF_INTEGER_32) 1L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
		if (!((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) {
			ui4_1 = arg3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ti4_1) - ((EIF_INTEGER_32) 1L));
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", arg1))(arg1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1026, dtype))(Current, uu4_1x)).it_i4);
			ui4_1 = arg3;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1047, dtype))(Current, ui4_1x)).it_i4);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {LINEAR_CONGRUENTIAL_RNG}.lc */
EIF_TYPED_VALUE F238_4289 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "lc";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc17 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc18 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc20 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,loc21);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,loc5);
	RTLR(7,loc1);
	RTLR(8,ur1);
	RTLR(9,ur2);
	RTLR(10,ur3);
	RTLR(11,ur4);
	RTLIU(12);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_UINT32, &loc17);
	RTLU(SK_UINT32, &loc18);
	RTLU(SK_INT32, &loc19);
	RTLU(SK_UINT32, &loc20);
	RTLU(SK_REF, &loc21);
	
	RTEAA(l_feature_name, 237, Current, 21, 2, 7248);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(237, Current, 7248);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,272,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 237, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(21, 0xF80001F0, 0, 0); /* loc21 */
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
	loc21 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3511, "m2exp", tr1));
	loc11 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(3, 0xF800026B, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3507, "seed", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3507, "seed", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(5577, "count", tr2));
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(5, 0xF800026B, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3508, "a", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3508, "a", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(5577, "count", tr2));
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 + loc9) + ((EIF_INTEGER_32) 1L));
	RTHOOK(8);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ui4_1 = loc11;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, ui4_1x)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc7 <= loc8)) {
		RTHOOK(10);
		RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
		loc15 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + loc9);
		RTHOOK(11);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
	}
	RTHOOK(12);
	RTDBGAL(1, 0xF800026B, 0, 0); /* loc1 */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = loc7;
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
	RTNHOOK(12,1);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(13);
	ur1 = loc1;
	ui4_1 = loc2;
	ur2 = loc3;
	ui4_2 = loc4;
	ui4_3 = loc9;
	ur3 = loc5;
	ui4_4 = loc6;
	ui4_5 = loc10;
	ur4 = RTCCL(loc21);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1065, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ur3x, ui4_4x, ui4_5x, ur4x);
	RTHOOK(14);
	RTDBGAL(20, 0x38000000, 1, 0); /* loc20 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc21))(loc21)).it_n4);
	loc20 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(15);
	RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(15,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3509, "cn", tr1));
	loc16 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(16);
	if ((EIF_BOOLEAN)(loc16 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(17);
		ur1 = loc1;
		ui4_1 = loc2;
		ur2 = loc1;
		ui4_2 = loc2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3510, "cp", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur3 = tr2;
		ui4_3 = ((EIF_INTEGER_32) 0L);
		ui4_4 = loc16;
		ur4 = RTCCL(loc21);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1061, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ur3x, ui4_3x, ui4_4x, ur4x);
		RTHOOK(18);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc21))(loc21)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(19);
			RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
			loc13 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(20);
			RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
			loc18 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(21);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc13 != ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc18 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)))) break;
				RTHOOK(22);
				if ((EIF_BOOLEAN) (loc16 >= loc8)) {
					RTHOOK(23);
					RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
					loc13 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(24);
					RTDBGAL(17, 0x38000000, 1, 0); /* loc17 */
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc16);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
					loc17 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(25);
					RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
					loc18 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc17 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
					RTHOOK(26);
					uu4_1 = loc18;
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc16);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc1))(loc1, uu4_1x, ui4_1x);
					RTHOOK(27);
					RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
					loc16++;
				}
			}
		}
	}
	RTHOOK(28);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc2 + (EIF_INTEGER_32) (loc11 / ti4_1));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc1))(loc1, ui4_1x)).it_n4);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1032, dtype))(Current, ui4_1x)).it_n4);
	RTNHOOK(28,1);
	ui4_1 = loc11;
	tu4_3 = eif_bit_shift_left(tu4_2,ui4_1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1032, dtype))(Current, ui4_1x)).it_n4);
	uu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_3 % tu4_2) - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
	tu4_4 = eif_bit_and(tu4_1,uu4_1);
	uu4_1 = tu4_4;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc2 + (EIF_INTEGER_32) (loc11 / ti4_1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc1))(loc1, uu4_1x, ui4_1x);
	RTHOOK(29);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(29,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3507, "seed", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = loc1;
	ui4_1 = loc2;
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = loc8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(30);
	RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
	loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc11 / ((EIF_INTEGER_32) 2L));
	RTHOOK(31);
	RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc12 / ti4_1);
	RTHOOK(32);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	loc8 -= loc14;
	RTHOOK(33);
	if ((EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(34);
		RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
		loc19 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc12 % ti4_1);
		RTHOOK(35);
		if ((EIF_BOOLEAN)(loc19 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(36);
			ur1 = loc1;
			ui4_1 = loc2;
			ur2 = loc1;
			ui4_2 = (EIF_INTEGER_32) (loc2 + loc14);
			ui4_3 = loc8;
			ui4_4 = loc19;
			ur3 = RTCCL(loc21);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1055, dtype))(Current, ur1x, ui4_1x, ur2x, ui4_2x, ui4_3x, ui4_4x, ur3x);
			RTHOOK(37);
			RTDBGAL(20, 0x38000000, 1, 0); /* loc20 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(938, "item", loc21))(loc21)).it_n4);
			loc20 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(38);
			ur1 = loc1;
			ui4_1 = loc2;
			ui4_2 = arg2;
			ui4_3 = (EIF_INTEGER_32) (loc14 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		} else {
			RTHOOK(39);
			ur1 = loc1;
			ui4_1 = (EIF_INTEGER_32) (loc2 + loc14);
			ui4_2 = arg2;
			ui4_3 = loc8;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3644, "copy_data", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		}
	}
	RTHOOK(40);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 + ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(41);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(25);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
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
#undef arg2
#undef arg1
}

void EIF_Minit238 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
