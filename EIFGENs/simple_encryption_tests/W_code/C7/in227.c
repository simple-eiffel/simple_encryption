/*
 * Code for class INTEGER_X_IO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F227_4211(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F227_4212(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit227(void);

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

/* {INTEGER_X_IO}.output */
void F227_4211 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "output";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc9 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc10 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc18 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc19 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg7);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,Current);
	RTLR(7,loc13);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_UINT32, &loc9);
	RTLU(SK_UINT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_UINT32, &loc18);
	RTLU(SK_BOOL, &loc19);
	
	RTEAA(l_feature_name, 226, Current, 19, 7, 7170);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(226, Current, 7170);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 226, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,255,260,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 226, l_feature_name, 3, typres0, 0x01);
	}
	RTCC(arg7, 226, l_feature_name, 7, eif_new_type(327, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	loc6 = (EIF_INTEGER_32) arg6;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg7 + RTVA(5577, "count", arg7));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		
		eif_put_integer_32_item(RTCW(arg3),1,((EIF_INTEGER_32) 0L));
	} else {
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = eif_abs_int32 (loc1);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg7))(arg7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * arg5);
		RTHOOK(8);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		ur1 = loc2;
		ui4_1 = loc3;
		ui4_2 = loc1;
		ui4_3 = loc5;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2075, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x)).it_i4);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		
		eif_put_integer_32_item(RTCW(arg3),1,loc4);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(11);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
		RTHOOK(12);
		if ((EIF_BOOLEAN)(arg5 == ((EIF_INTEGER_32) 4L))) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) -1L)) && (EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) -1L)))) {
				RTHOOK(14);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) arg2;
				RTHOOK(15);
				RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
				loc8 = (EIF_INTEGER_32) loc3;
				for (;;) {
					RTHOOK(16);
					if ((EIF_BOOLEAN) (loc8 >= (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) - ((EIF_INTEGER_32) 1L)))) break;
					RTHOOK(17);
					ui4_1 = (EIF_INTEGER_32) (loc3 + loc8);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
					uu4_1 = tu4_1;
					ur1 = arg1;
					ui4_1 = (EIF_INTEGER_32) (arg2 + loc7);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1036, dtype))(Current, uu4_1x, ur1x, ui4_1x);
					RTHOOK(18);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					loc7 += ((EIF_INTEGER_32) 4L);
					RTHOOK(19);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8++;
				}
				RTHOOK(20);
				RTDBGAL(19, 0x04000000, 1, 0); /* loc19 */
				loc19 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(21);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) -1L)))) {
					RTHOOK(22);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					loc7 = (EIF_INTEGER_32) arg2;
					RTHOOK(23);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) - ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(24);
						if ((EIF_BOOLEAN) (loc8 < loc3)) break;
						RTHOOK(25);
						ui4_1 = (EIF_INTEGER_32) (loc3 + loc8);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
						uu4_1 = tu4_1;
						ur1 = arg1;
						ui4_1 = (EIF_INTEGER_32) (arg2 + loc7);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1036, dtype))(Current, uu4_1x, ur1x, ui4_1x);
						RTHOOK(26);
						RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
						loc8--;
						RTHOOK(27);
						RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
						loc7 += ((EIF_INTEGER_32) 4L);
					}
					RTHOOK(28);
					RTDBGAL(19, 0x04000000, 1, 0); /* loc19 */
					loc19 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(29);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) -1L)) && (EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 1L)))) {
						RTHOOK(30);
						RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
						loc7 = (EIF_INTEGER_32) arg2;
						RTHOOK(31);
						RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
						loc8 = (EIF_INTEGER_32) loc3;
						for (;;) {
							RTHOOK(32);
							if ((EIF_BOOLEAN) (loc8 >= (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) - ((EIF_INTEGER_32) 1L)))) break;
							RTHOOK(33);
							ui4_1 = (EIF_INTEGER_32) (loc3 + loc8);
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
							uu4_1 = tu4_1;
							ur1 = arg1;
							ui4_1 = (EIF_INTEGER_32) (arg2 + loc7);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1037, dtype))(Current, uu4_1x, ur1x, ui4_1x);
							RTHOOK(34);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8++;
							RTHOOK(35);
							RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
							loc7 += ((EIF_INTEGER_32) 4L);
						}
						RTHOOK(36);
						RTDBGAL(19, 0x04000000, 1, 0); /* loc19 */
						loc19 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						RTHOOK(37);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 1L)))) {
							RTHOOK(38);
							RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
							loc7 = (EIF_INTEGER_32) arg2;
							RTHOOK(39);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) - ((EIF_INTEGER_32) 1L));
							for (;;) {
								RTHOOK(40);
								if ((EIF_BOOLEAN) (loc8 < loc3)) break;
								RTHOOK(41);
								ui4_1 = (EIF_INTEGER_32) (loc3 + loc8);
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
								uu4_1 = tu4_1;
								ur1 = arg1;
								ui4_1 = (EIF_INTEGER_32) (arg2 + loc7);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1037, dtype))(Current, uu4_1x, ur1x, ui4_1x);
								RTHOOK(42);
								RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
								loc8--;
								RTHOOK(43);
								RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
								loc7 += ((EIF_INTEGER_32) 4L);
							}
							RTHOOK(44);
							RTDBGAL(19, 0x04000000, 1, 0); /* loc19 */
							loc19 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
					}
				}
			}
		}
		RTHOOK(45);
		if ((EIF_BOOLEAN) !loc19) {
			RTHOOK(46);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg5 * ((EIF_INTEGER_32) 8L));
			RTHOOK(47);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 / ((EIF_INTEGER_32) 8L));
			RTHOOK(48);
			RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
			loc16 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 % ((EIF_INTEGER_32) 8L));
			RTHOOK(49);
			RTDBGAL(10, 0x38000000, 1, 0); /* loc10 */
			tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
			ui4_1 = loc16;
			tu1_2 = eif_bit_shift_left(tu1_1,ui4_1);
			tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) (tu1_2 - (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L)));
			loc10 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(50);
			if ((EIF_BOOLEAN) (loc6 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(51);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				loc12 = (EIF_INTEGER_32) arg5;
			} else {
				RTHOOK(52);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg5;
			}
			RTHOOK(53);
			if ((EIF_BOOLEAN) (arg4 < ((EIF_INTEGER_32) 0L))) {
				RTHOOK(54);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				loc12 += arg5;
			} else {
				RTHOOK(55);
				RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
				loc12 += (EIF_INTEGER_32) -arg5;
			}
			RTHOOK(56);
			RTDBGAL(13, 0xF800014B, 0, 0); /* loc13 */
			loc13 = (EIF_REFERENCE) arg1;
			RTHOOK(57);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			loc14 = (EIF_INTEGER_32) arg2;
			RTHOOK(58);
			if ((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(59);
				RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
				loc14 += (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)) * arg5);
			} else {
				RTHOOK(60);
				RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
				loc14 += ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(61);
			if ((EIF_BOOLEAN) (loc6 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(62);
				RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
				loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + arg5) - ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(63);
				RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
				loc14 += ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(64);
			RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
			loc17 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc1);
			RTHOOK(65);
			RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
			loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(66);
			RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
			loc9 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(67);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				RTHOOK(68);
				if ((EIF_BOOLEAN) (loc7 >= loc4)) break;
				RTHOOK(69);
				RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
				loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					RTHOOK(70);
					if ((EIF_BOOLEAN) (loc8 >= loc11)) break;
					RTHOOK(71);
					if ((EIF_BOOLEAN) (loc15 >= ((EIF_INTEGER_32) 8L))) {
						RTHOOK(72);
						tu1_1 = (EIF_NATURAL_8) loc9;
						uu1_1 = tu1_1;
						ui4_1 = loc14;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc13))(loc13, uu1_1x, ui4_1x);
						RTHOOK(73);
						RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
						ui4_1 = ((EIF_INTEGER_32) 8L);
						tu4_1 = eif_bit_shift_right(loc9,ui4_1);
						loc9 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(74);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						loc15 -= ((EIF_INTEGER_32) 8L);
					} else {
						RTHOOK(75);
						if ((EIF_BOOLEAN)(loc3 == loc17)) {
							RTHOOK(76);
							RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
							loc18 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
						} else {
							RTHOOK(77);
							RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
							ui4_1 = loc3;
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
							loc18 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(78);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3++;
						}
						RTHOOK(79);
						ui4_1 = loc15;
						tu4_1 = eif_bit_shift_left(loc18,ui4_1);
						uu4_1 = tu4_1;
						tu4_2 = eif_bit_or(loc9,uu4_1);
						tu1_1 = (EIF_NATURAL_8) tu4_2;
						uu1_1 = tu1_1;
						ui4_1 = loc14;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc13))(loc13, uu1_1x, ui4_1x);
						RTHOOK(80);
						RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
						ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) - loc15);
						tu4_1 = eif_bit_shift_right(loc18,ui4_1);
						loc9 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(81);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
						loc15 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc15 + ti4_1) - ((EIF_INTEGER_32) 8L));
					}
					RTHOOK(82);
					RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
					loc14 -= loc6;
					RTHOOK(83);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8++;
				}
				RTHOOK(84);
				if ((EIF_BOOLEAN)(loc16 != ((EIF_INTEGER_32) 0L))) {
					RTHOOK(85);
					if ((EIF_BOOLEAN) (loc15 >= loc16)) {
						RTHOOK(86);
						uu4_1 = loc10;
						tu4_1 = eif_bit_and(loc9,uu4_1);
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						uu1_1 = tu1_1;
						ui4_1 = loc14;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc13))(loc13, uu1_1x, ui4_1x);
						RTHOOK(87);
						RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
						ui4_1 = loc16;
						tu4_1 = eif_bit_shift_right(loc9,ui4_1);
						loc9 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(88);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						loc15 -= loc16;
					} else {
						RTHOOK(89);
						if ((EIF_BOOLEAN)(loc3 == loc17)) {
							RTHOOK(90);
							RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
							loc18 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
						} else {
							RTHOOK(91);
							RTDBGAL(18, 0x38000000, 1, 0); /* loc18 */
							ui4_1 = loc3;
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc2))(loc2, ui4_1x)).it_n4);
							loc18 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(92);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3++;
						}
						RTHOOK(93);
						ui4_1 = loc15;
						tu4_1 = eif_bit_shift_left(loc18,ui4_1);
						uu4_1 = tu4_1;
						tu4_2 = eif_bit_or(loc9,uu4_1);
						uu4_1 = loc10;
						tu4_1 = eif_bit_and(tu4_2,uu4_1);
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						uu1_1 = tu1_1;
						ui4_1 = loc14;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc13))(loc13, uu1_1x, ui4_1x);
						RTHOOK(94);
						RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
						ui4_1 = (EIF_INTEGER_32) (loc16 - loc15);
						tu4_1 = eif_bit_shift_right(loc18,ui4_1);
						loc9 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(95);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
						loc15 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc15 + ti4_1) - loc16);
					}
				}
				for (;;) {
					RTHOOK(96);
					if ((EIF_BOOLEAN) (loc8 >= arg5)) break;
					RTHOOK(97);
					uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
					ui4_1 = loc14;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc13))(loc13, uu1_1x, ui4_1x);
					RTHOOK(98);
					RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
					loc14 -= loc6;
					RTHOOK(99);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8++;
				}
				RTHOOK(100);
				RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
				loc14 += loc12;
				RTHOOK(101);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(102);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(28);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef uu1_1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {INTEGER_X_IO}.input */
void F227_4212 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "input";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_8 loc9 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_r
#define arg7 arg7x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg6);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,loc13);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_UINT8, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	
	RTEAA(l_feature_name, 226, Current, 17, 7, 7171);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(226, Current, 7171);
	RTCC(arg1, 226, l_feature_name, 1, eif_new_type(327, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,293,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg6, 226, l_feature_name, 6, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
	loc17 = (EIF_INTEGER_32) arg5;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 * (EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * arg4)) + ti4_1) - ((EIF_INTEGER_32) 1L)) / ti4_2);
	RTHOOK(3);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5579, "resize", arg1))(arg1, ui4_1x);
	RTHOOK(4);
	RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc17 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
		loc17 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) -1L)) && (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 4L))) && (EIF_BOOLEAN)(loc17 == ((EIF_INTEGER_32) -1L)))) {
		RTHOOK(8);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) loc3;
		RTHOOK(9);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) arg7;
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc4 >= (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc3) - ((EIF_INTEGER_32) 1L)))) break;
			RTHOOK(11);
			ur1 = arg6;
			ui4_1 = (EIF_INTEGER_32) (arg7 + loc5);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1038, dtype))(Current, ur1x, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
			RTHOOK(12);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 += ((EIF_INTEGER_32) 4L);
			RTHOOK(13);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
		RTHOOK(14);
		RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
		loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(15);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) -1L)) && (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 4L))) && (EIF_BOOLEAN)(loc17 == ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(16);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) loc3;
			RTHOOK(17);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) arg7;
			for (;;) {
				RTHOOK(18);
				if ((EIF_BOOLEAN) (loc4 >= (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + loc3) - ((EIF_INTEGER_32) 1L)))) break;
				RTHOOK(19);
				ur1 = arg6;
				ui4_1 = (EIF_INTEGER_32) (arg7 + loc5);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1039, dtype))(Current, ur1x, ui4_1x)).it_n4);
				uu4_1 = tu4_1;
				ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
				RTHOOK(20);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 += ((EIF_INTEGER_32) 4L);
				RTHOOK(21);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4++;
			}
			RTHOOK(22);
			RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
			loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(23);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 4L))) && (EIF_BOOLEAN)(loc17 == ((EIF_INTEGER_32) -1L)))) {
				RTHOOK(24);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + arg2) - ((EIF_INTEGER_32) 1L));
				RTHOOK(25);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) arg7;
				for (;;) {
					RTHOOK(26);
					if ((EIF_BOOLEAN) (loc4 < loc3)) break;
					RTHOOK(27);
					ur1 = arg6;
					ui4_1 = (EIF_INTEGER_32) (arg7 + loc5);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1038, dtype))(Current, ur1x, ui4_1x)).it_n4);
					uu4_1 = tu4_1;
					ui4_1 = (EIF_INTEGER_32) (loc3 + loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
					RTHOOK(28);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					loc5 += ((EIF_INTEGER_32) 4L);
					RTHOOK(29);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4--;
				}
				RTHOOK(30);
				RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTHOOK(31);
	if ((EIF_BOOLEAN) !loc6) {
		RTHOOK(32);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg4 * ((EIF_INTEGER_32) 8L));
		RTHOOK(33);
		RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
		loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 / ((EIF_INTEGER_32) 8L));
		RTHOOK(34);
		RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
		loc16 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 % ((EIF_INTEGER_32) 8L));
		RTHOOK(35);
		RTDBGAL(9, 0x30000000, 1, 0); /* loc9 */
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
		ui4_1 = loc16;
		tu1_2 = eif_bit_shift_left(tu1_1,ui4_1);
		loc9 = (EIF_NATURAL_8) (EIF_NATURAL_8) (tu1_2 - (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L));
		RTHOOK(36);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 7L)) / ((EIF_INTEGER_32) 8L));
		RTHOOK(37);
		if ((EIF_BOOLEAN) (loc17 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(38);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc12;
		}
		RTHOOK(39);
		if ((EIF_BOOLEAN) (arg3 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(40);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12 += arg4;
		} else {
			RTHOOK(41);
			RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
			loc12 += (EIF_INTEGER_32) -arg4;
		}
		RTHOOK(42);
		RTDBGAL(13, 0xF800014B, 0, 0); /* loc13 */
		loc13 = (EIF_REFERENCE) arg6;
		RTHOOK(43);
		RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
		loc14 = (EIF_INTEGER_32) arg7;
		RTHOOK(44);
		if ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(45);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			loc14 += (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) * arg4);
		} else {
			RTHOOK(46);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			loc14 += ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(47);
		if ((EIF_BOOLEAN) (loc17 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(48);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + arg4) - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(49);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			loc14 += ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(50);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		loc7 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(51);
		RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
		loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(52);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(53);
			if ((EIF_BOOLEAN) (loc4 >= arg2)) break;
			RTHOOK(54);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				RTHOOK(55);
				if ((EIF_BOOLEAN) (loc5 >= loc11)) break;
				RTHOOK(56);
				RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
				ui4_1 = loc14;
				tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc13))(loc13, ui4_1x)).it_n1);
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				loc8 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(57);
				RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
				loc14 -= loc17;
				RTHOOK(58);
				RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
				ui4_1 = loc15;
				tu4_1 = eif_bit_shift_left(loc8,ui4_1);
				uu4_1 = tu4_1;
				tu4_2 = eif_bit_or(loc7,uu4_1);
				loc7 = (EIF_NATURAL_32) tu4_2;
				RTHOOK(59);
				RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
				loc15 += ((EIF_INTEGER_32) 8L);
				RTHOOK(60);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN) (loc15 >= ti4_1)) {
					RTHOOK(61);
					uu4_1 = loc7;
					ui4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
					RTHOOK(62);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3++;
					RTHOOK(63);
					RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					loc15 -= ti4_1;
					RTHOOK(64);
					RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
					ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) - loc15);
					tu4_1 = eif_bit_shift_right(loc8,ui4_1);
					loc7 = (EIF_NATURAL_32) tu4_1;
				}
				RTHOOK(65);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5++;
			}
			RTHOOK(66);
			if ((EIF_BOOLEAN)(loc16 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(67);
				RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
				ui4_1 = loc14;
				tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3321, "item", loc13))(loc13, ui4_1x)).it_n1);
				uu1_1 = loc9;
				tu1_2 = eif_bit_and(tu1_1,uu1_1);
				tu4_1 = (EIF_NATURAL_32) tu1_2;
				loc8 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(68);
				RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
				loc14 -= loc17;
				RTHOOK(69);
				RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
				ui4_1 = loc15;
				tu4_1 = eif_bit_shift_left(loc8,ui4_1);
				uu4_1 = tu4_1;
				tu4_2 = eif_bit_or(loc7,uu4_1);
				loc7 = (EIF_NATURAL_32) tu4_2;
				RTHOOK(70);
				RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
				loc15 += loc16;
				RTHOOK(71);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN) (loc15 >= ti4_1)) {
					RTHOOK(72);
					uu4_1 = loc7;
					ui4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
					RTHOOK(73);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3++;
					RTHOOK(74);
					RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1024, dtype))(Current)).it_i4);
					loc15 -= ti4_1;
					RTHOOK(75);
					RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
					ui4_1 = (EIF_INTEGER_32) (loc16 - loc15);
					tu4_1 = eif_bit_shift_right(loc8,ui4_1);
					loc7 = (EIF_NATURAL_32) tu4_1;
				}
			}
			RTHOOK(76);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			loc14 += loc12;
			RTHOOK(77);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
		RTHOOK(78);
		if ((EIF_BOOLEAN)(loc15 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(79);
			uu4_1 = loc7;
			ui4_1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3637, "put", loc2))(loc2, uu4_1x, ui4_1x);
			RTHOOK(80);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
	}
	RTHOOK(81);
	RTDBGAL(2, 0xF800026B, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5575, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(82);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ur1 = loc2;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3414, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(83);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5578, "count_set", arg1))(arg1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(84);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(26);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef uu1_1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit227 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
