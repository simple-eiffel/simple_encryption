/*
 * Code for class CASE_SENSITIVE_STRATEGY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F66_1128(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F66_1129(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit66(void);

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

/* {CASE_SENSITIVE_STRATEGY}.text_to_number */
EIF_TYPED_VALUE F66_1128 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "text_to_number";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1164);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(65, Current, 1164);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 48U:
			RTHOOK(2);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			break;
		case 49U:
			RTHOOK(3);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
			break;
		case 50U:
			RTHOOK(4);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 2L);
			break;
		case 51U:
			RTHOOK(5);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 3L);
			break;
		case 52U:
			RTHOOK(6);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 4L);
			break;
		case 53U:
			RTHOOK(7);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 5L);
			break;
		case 54U:
			RTHOOK(8);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 6L);
			break;
		case 55U:
			RTHOOK(9);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 7L);
			break;
		case 56U:
			RTHOOK(10);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L);
			break;
		case 57U:
			RTHOOK(11);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 9L);
			break;
		case 65U:
			RTHOOK(12);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
			break;
		case 66U:
			RTHOOK(13);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 11L);
			break;
		case 67U:
			RTHOOK(14);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 12L);
			break;
		case 68U:
			RTHOOK(15);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 13L);
			break;
		case 69U:
			RTHOOK(16);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 14L);
			break;
		case 70U:
			RTHOOK(17);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 15L);
			break;
		case 71U:
			RTHOOK(18);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L);
			break;
		case 72U:
			RTHOOK(19);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 17L);
			break;
		case 73U:
			RTHOOK(20);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 18L);
			break;
		case 74U:
			RTHOOK(21);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 19L);
			break;
		case 75U:
			RTHOOK(22);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 20L);
			break;
		case 76U:
			RTHOOK(23);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 21L);
			break;
		case 77U:
			RTHOOK(24);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 22L);
			break;
		case 78U:
			RTHOOK(25);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 23L);
			break;
		case 79U:
			RTHOOK(26);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 24L);
			break;
		case 80U:
			RTHOOK(27);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 25L);
			break;
		case 81U:
			RTHOOK(28);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 26L);
			break;
		case 82U:
			RTHOOK(29);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 27L);
			break;
		case 83U:
			RTHOOK(30);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 28L);
			break;
		case 84U:
			RTHOOK(31);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 29L);
			break;
		case 85U:
			RTHOOK(32);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
			break;
		case 86U:
			RTHOOK(33);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 31L);
			break;
		case 87U:
			RTHOOK(34);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 32L);
			break;
		case 88U:
			RTHOOK(35);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 33L);
			break;
		case 89U:
			RTHOOK(36);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 34L);
			break;
		case 90U:
			RTHOOK(37);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 35L);
			break;
		case 97U:
			RTHOOK(38);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 36L);
			break;
		case 98U:
			RTHOOK(39);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 37L);
			break;
		case 99U:
			RTHOOK(40);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 38L);
			break;
		case 100U:
			RTHOOK(41);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 39L);
			break;
		case 101U:
			RTHOOK(42);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 40L);
			break;
		case 102U:
			RTHOOK(43);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 41L);
			break;
		case 103U:
			RTHOOK(44);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 42L);
			break;
		case 104U:
			RTHOOK(45);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 43L);
			break;
		case 105U:
			RTHOOK(46);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 44L);
			break;
		case 106U:
			RTHOOK(47);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 45L);
			break;
		case 107U:
			RTHOOK(48);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
			break;
		case 108U:
			RTHOOK(49);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 47L);
			break;
		case 109U:
			RTHOOK(50);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 48L);
			break;
		case 110U:
			RTHOOK(51);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 49L);
			break;
		case 111U:
			RTHOOK(52);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 50L);
			break;
		case 112U:
			RTHOOK(53);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 51L);
			break;
		case 113U:
			RTHOOK(54);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 52L);
			break;
		case 114U:
			RTHOOK(55);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 53L);
			break;
		case 115U:
			RTHOOK(56);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 54L);
			break;
		case 116U:
			RTHOOK(57);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 55L);
			break;
		case 117U:
			RTHOOK(58);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 56L);
			break;
		case 118U:
			RTHOOK(59);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 57L);
			break;
		case 119U:
			RTHOOK(60);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 58L);
			break;
		case 120U:
			RTHOOK(61);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 59L);
			break;
		case 121U:
			RTHOOK(62);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 60L);
			break;
		case 122U:
			RTHOOK(63);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 61L);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(64);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {CASE_SENSITIVE_STRATEGY}.number_to_text */
EIF_TYPED_VALUE F66_1129 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "number_to_text";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1165);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(65, Current, 1165);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 0U:
			RTHOOK(2);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 48L);
			break;
		case 1U:
			RTHOOK(3);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 49L);
			break;
		case 2U:
			RTHOOK(4);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 50L);
			break;
		case 3U:
			RTHOOK(5);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 51L);
			break;
		case 4U:
			RTHOOK(6);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 52L);
			break;
		case 5U:
			RTHOOK(7);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 53L);
			break;
		case 6U:
			RTHOOK(8);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 54L);
			break;
		case 7U:
			RTHOOK(9);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 55L);
			break;
		case 8U:
			RTHOOK(10);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 56L);
			break;
		case 9U:
			RTHOOK(11);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 57L);
			break;
		case 10U:
			RTHOOK(12);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 65L);
			break;
		case 11U:
			RTHOOK(13);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 66L);
			break;
		case 12U:
			RTHOOK(14);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 67L);
			break;
		case 13U:
			RTHOOK(15);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 68L);
			break;
		case 14U:
			RTHOOK(16);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 69L);
			break;
		case 15U:
			RTHOOK(17);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 70L);
			break;
		case 16U:
			RTHOOK(18);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 71L);
			break;
		case 17U:
			RTHOOK(19);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 72L);
			break;
		case 18U:
			RTHOOK(20);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 73L);
			break;
		case 19U:
			RTHOOK(21);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 74L);
			break;
		case 20U:
			RTHOOK(22);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 75L);
			break;
		case 21U:
			RTHOOK(23);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 76L);
			break;
		case 22U:
			RTHOOK(24);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 77L);
			break;
		case 23U:
			RTHOOK(25);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 78L);
			break;
		case 24U:
			RTHOOK(26);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 79L);
			break;
		case 25U:
			RTHOOK(27);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 80L);
			break;
		case 26U:
			RTHOOK(28);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 81L);
			break;
		case 27U:
			RTHOOK(29);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 82L);
			break;
		case 28U:
			RTHOOK(30);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 83L);
			break;
		case 29U:
			RTHOOK(31);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 84L);
			break;
		case 30U:
			RTHOOK(32);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 85L);
			break;
		case 31U:
			RTHOOK(33);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 86L);
			break;
		case 32U:
			RTHOOK(34);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 87L);
			break;
		case 33U:
			RTHOOK(35);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 88L);
			break;
		case 34U:
			RTHOOK(36);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 89L);
			break;
		case 35U:
			RTHOOK(37);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 90L);
			break;
		case 36U:
			RTHOOK(38);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 97L);
			break;
		case 37U:
			RTHOOK(39);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 98L);
			break;
		case 38U:
			RTHOOK(40);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 99L);
			break;
		case 39U:
			RTHOOK(41);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 100L);
			break;
		case 40U:
			RTHOOK(42);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 101L);
			break;
		case 41U:
			RTHOOK(43);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 102L);
			break;
		case 42U:
			RTHOOK(44);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 103L);
			break;
		case 43U:
			RTHOOK(45);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 104L);
			break;
		case 44U:
			RTHOOK(46);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 105L);
			break;
		case 45U:
			RTHOOK(47);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 106L);
			break;
		case 46U:
			RTHOOK(48);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 107L);
			break;
		case 47U:
			RTHOOK(49);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 108L);
			break;
		case 48U:
			RTHOOK(50);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 109L);
			break;
		case 49U:
			RTHOOK(51);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 110L);
			break;
		case 50U:
			RTHOOK(52);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 111L);
			break;
		case 51U:
			RTHOOK(53);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 112L);
			break;
		case 52U:
			RTHOOK(54);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 113L);
			break;
		case 53U:
			RTHOOK(55);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 114L);
			break;
		case 54U:
			RTHOOK(56);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 115L);
			break;
		case 55U:
			RTHOOK(57);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 116L);
			break;
		case 56U:
			RTHOOK(58);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 117L);
			break;
		case 57U:
			RTHOOK(59);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 118L);
			break;
		case 58U:
			RTHOOK(60);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 119L);
			break;
		case 59U:
			RTHOOK(61);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 120L);
			break;
		case 60U:
			RTHOOK(62);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 121L);
			break;
		case 61U:
			RTHOOK(63);
			RTDBGAL(0, 0x30000000, 1,0); /* Result */
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 122L);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(64);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

void EIF_Minit66 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
