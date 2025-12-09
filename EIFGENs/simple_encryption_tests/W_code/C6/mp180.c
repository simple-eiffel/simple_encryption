/*
 * Code for class MP_BASES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F180_2321(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F180_2322(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F180_2323(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F180_2324(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit180(void);

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

/* {MP_BASES}.chars_per_limb */
EIF_TYPED_VALUE F180_2321 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "chars_per_limb";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 179, Current, 0, 1, 2318);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(179, Current, 2318);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base >= 2", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("base <= 256", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 256L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	switch (arg1) {
		case 2L:
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
			break;
		case 3L:
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
			break;
		case 4L:
			RTHOOK(6);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
			break;
		case 5L:
			RTHOOK(7);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
			break;
		case 6L:
			RTHOOK(8);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
			break;
		case 7L:
			RTHOOK(9);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
			break;
		case 8L:
		case 9L:
			RTHOOK(10);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
			break;
		case 10L:
		case 11L:
			RTHOOK(11);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			break;
		case 12L:
		case 13L:
		case 14L:
		case 15L:
		case 16L:
			RTHOOK(12);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
			break;
		case 17L:
		case 18L:
		case 19L:
		case 20L:
		case 21L:
		case 22L:
		case 23L:
			RTHOOK(13);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			break;
		case 24L:
		case 25L:
		case 26L:
		case 27L:
		case 28L:
		case 29L:
		case 30L:
		case 31L:
		case 32L:
		case 33L:
		case 34L:
		case 35L:
		case 36L:
		case 37L:
		case 38L:
		case 39L:
		case 40L:
			RTHOOK(14);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
			break;
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
		case 79L:
		case 80L:
		case 81L:
		case 82L:
		case 83L:
		case 84L:
			RTHOOK(15);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
			break;
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
		case 99L:
		case 100L:
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
		case 239L:
		case 240L:
		case 241L:
		case 242L:
		case 243L:
		case 244L:
		case 245L:
		case 246L:
		case 247L:
		case 248L:
		case 249L:
		case 250L:
		case 251L:
		case 252L:
		case 253L:
		case 254L:
		case 255L:
		case 256L:
			RTHOOK(16);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {MP_BASES}.chars_per_bit_exactly */
EIF_TYPED_VALUE F180_2322 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "chars_per_bit_exactly";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 179, Current, 0, 1, 2319);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(179, Current, 2319);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base >= 2", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("base <= 256", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 256L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	switch (arg1) {
		case 2L:
			RTHOOK(4);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 1.0000000000000000;
			break;
		case 3L:
			RTHOOK(5);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.6309297535714574;
			break;
		case 4L:
			RTHOOK(6);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.5000000000000000;
			break;
		case 5L:
			RTHOOK(7);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.4306765580733931;
			break;
		case 6L:
			RTHOOK(8);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.3868528072345416;
			break;
		case 7L:
			RTHOOK(9);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.3562071871080222;
			break;
		case 8L:
			RTHOOK(10);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.3333333333333334;
			break;
		case 9L:
			RTHOOK(11);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.3154648767857287;
			break;
		case 10L:
			RTHOOK(12);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.3010299956639811;
			break;
		case 11L:
			RTHOOK(13);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2890648263178878;
			break;
		case 12L:
			RTHOOK(14);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2789429456511298;
			break;
		case 13L:
			RTHOOK(15);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2702381544273197;
			break;
		case 14L:
			RTHOOK(16);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2626495350371936;
			break;
		case 15L:
			RTHOOK(17);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2559580248098155;
			break;
		case 16L:
			RTHOOK(18);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2500000000000000;
			break;
		case 17L:
			RTHOOK(19);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2446505421182260;
			break;
		case 18L:
			RTHOOK(20);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2398124665681315;
			break;
		case 19L:
			RTHOOK(21);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2354089133666382;
			break;
		case 20L:
			RTHOOK(22);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2313782131597592;
			break;
		case 21L:
			RTHOOK(23);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2276702486969530;
			break;
		case 22L:
			RTHOOK(24);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2242438242175754;
			break;
		case 23L:
			RTHOOK(25);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2210647294575037;
			break;
		case 24L:
			RTHOOK(26);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2181042919855316;
			break;
		case 25L:
			RTHOOK(27);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2153382790366965;
			break;
		case 26L:
			RTHOOK(28);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2127460535533632;
			break;
		case 27L:
			RTHOOK(29);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2103099178571525;
			break;
		case 28L:
			RTHOOK(30);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2080145976765095;
			break;
		case 29L:
			RTHOOK(31);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2058468324604345;
			break;
		case 30L:
			RTHOOK(32);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2037950470905062;
			break;
		case 31L:
			RTHOOK(33);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2018490865820999;
			break;
		case 32L:
			RTHOOK(34);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.2000000000000000;
			break;
		case 33L:
			RTHOOK(35);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1982398631705605;
			break;
		case 34L:
			RTHOOK(36);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1965616322328226;
			break;
		case 35L:
			RTHOOK(37);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1949590218937863;
			break;
		case 36L:
			RTHOOK(38);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1934264036172708;
			break;
		case 37L:
			RTHOOK(39);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1919587200065601;
			break;
		case 38L:
			RTHOOK(40);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1905514124267734;
			break;
		case 39L:
			RTHOOK(41);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1892003595168700;
			break;
		case 40L:
			RTHOOK(42);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1879018247091076;
			break;
		case 41L:
			RTHOOK(43);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1866524112389434;
			break;
		case 42L:
			RTHOOK(44);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1854490234153689;
			break;
		case 43L:
			RTHOOK(45);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1842888331487062;
			break;
		case 44L:
			RTHOOK(46);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1831692509136336;
			break;
		case 45L:
			RTHOOK(47);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1820879004699383;
			break;
		case 46L:
			RTHOOK(48);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1810425967800402;
			break;
		case 47L:
			RTHOOK(49);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1800313266566926;
			break;
		case 48L:
			RTHOOK(50);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1790522317510414;
			break;
		case 49L:
			RTHOOK(51);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1781035935540111;
			break;
		case 50L:
			RTHOOK(52);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1771838201355579;
			break;
		case 51L:
			RTHOOK(53);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1762914343888821;
			break;
		case 52L:
			RTHOOK(54);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1754250635819545;
			break;
		case 53L:
			RTHOOK(55);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1745834300480449;
			break;
		case 54L:
			RTHOOK(56);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1737653428714400;
			break;
		case 55L:
			RTHOOK(57);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1729696904450771;
			break;
		case 56L:
			RTHOOK(58);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1721954337940981;
			break;
		case 57L:
			RTHOOK(59);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1714416005739134;
			break;
		case 58L:
			RTHOOK(60);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1707072796637201;
			break;
		case 59L:
			RTHOOK(61);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1699916162869140;
			break;
		case 60L:
			RTHOOK(62);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1692938075987814;
			break;
		case 61L:
			RTHOOK(63);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1686130986895011;
			break;
		case 62L:
			RTHOOK(64);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1679487789570419;
			break;
		case 63L:
			RTHOOK(65);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1673001788101741;
			break;
		case 64L:
			RTHOOK(66);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1666666666666667;
			break;
		case 65L:
			RTHOOK(67);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1660476462159378;
			break;
		case 66L:
			RTHOOK(68);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1654425539190583;
			break;
		case 67L:
			RTHOOK(69);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1648508567221604;
			break;
		case 68L:
			RTHOOK(70);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1642720499620502;
			break;
		case 69L:
			RTHOOK(71);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1637056554452156;
			break;
		case 70L:
			RTHOOK(72);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1631512196835108;
			break;
		case 71L:
			RTHOOK(73);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1626083122716341;
			break;
		case 72L:
			RTHOOK(74);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1620765243931223;
			break;
		case 73L:
			RTHOOK(75);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1615554674429964;
			break;
		case 74L:
			RTHOOK(76);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1610447717564444;
			break;
		case 75L:
			RTHOOK(77);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1605440854340214;
			break;
		case 76L:
			RTHOOK(78);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1600530732548214;
			break;
		case 77L:
			RTHOOK(79);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1595714156699382;
			break;
		case 78L:
			RTHOOK(80);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1590988078692942;
			break;
		case 79L:
			RTHOOK(81);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1586349589155960;
			break;
		case 80L:
			RTHOOK(82);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1581795909397823;
			break;
		case 81L:
			RTHOOK(83);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1577324383928644;
			break;
		case 82L:
			RTHOOK(84);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1572932473495469;
			break;
		case 83L:
			RTHOOK(85);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1568617748594410;
			break;
		case 84L:
			RTHOOK(86);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1564377883420716;
			break;
		case 85L:
			RTHOOK(87);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1560210650222250;
			break;
		case 86L:
			RTHOOK(88);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1556113914024940;
			break;
		case 87L:
			RTHOOK(89);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1552085627701551;
			break;
		case 88L:
			RTHOOK(90);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1548123827357682;
			break;
		case 89L:
			RTHOOK(91);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1544226628011101;
			break;
		case 90L:
			RTHOOK(92);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1540392219542636;
			break;
		case 91L:
			RTHOOK(93);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1536618862898642;
			break;
		case 92L:
			RTHOOK(94);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1532904886526781;
			break;
		case 93L:
			RTHOOK(95);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1529248683028321;
			break;
		case 94L:
			RTHOOK(96);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1525648706011593;
			break;
		case 95L:
			RTHOOK(97);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1522103467132434;
			break;
		case 96L:
			RTHOOK(98);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1518611533308632;
			break;
		case 97L:
			RTHOOK(99);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1515171524096389;
			break;
		case 98L:
			RTHOOK(100);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1511782109217764;
			break;
		case 99L:
			RTHOOK(101);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1508442006228941;
			break;
		case 100L:
			RTHOOK(102);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1505149978319906;
			break;
		case 101L:
			RTHOOK(103);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1501904832236879;
			break;
		case 102L:
			RTHOOK(104);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1498705416319474;
			break;
		case 103L:
			RTHOOK(105);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1495550618645152;
			break;
		case 104L:
			RTHOOK(106);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1492439365274121;
			break;
		case 105L:
			RTHOOK(107);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1489370618588283;
			break;
		case 106L:
			RTHOOK(108);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1486343375718350;
			break;
		case 107L:
			RTHOOK(109);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1486343375718350;
			break;
		case 108L:
			RTHOOK(110);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1480409554829326;
			break;
		case 109L:
			RTHOOK(111);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1477501131786861;
			break;
		case 110L:
			RTHOOK(112);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1474630519902391;
			break;
		case 111L:
			RTHOOK(113);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1471796869179853;
			break;
		case 112L:
			RTHOOK(114);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1468999356504447;
			break;
		case 113L:
			RTHOOK(115);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1466237184553111;
			break;
		case 114L:
			RTHOOK(116);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1463509580758620;
			break;
		case 115L:
			RTHOOK(117);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1460815796324244;
			break;
		case 116L:
			RTHOOK(118);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1458155105286054;
			break;
		case 117L:
			RTHOOK(119);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1455526803620167;
			break;
		case 118L:
			RTHOOK(120);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1452930208392428;
			break;
		case 119L:
			RTHOOK(121);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1450364656948130;
			break;
		case 120L:
			RTHOOK(122);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1447829506139581;
			break;
		case 121L:
			RTHOOK(123);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1445324131589439;
			break;
		case 122L:
			RTHOOK(124);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1442847926987864;
			break;
		case 123L:
			RTHOOK(125);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1440400303421672;
			break;
		case 124L:
			RTHOOK(126);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1437980688733775;
			break;
		case 125L:
			RTHOOK(127);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1435588526911310;
			break;
		case 126L:
			RTHOOK(128);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1433223277500932;
			break;
		case 127L:
			RTHOOK(129);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1430884415049874;
			break;
		case 128L:
			RTHOOK(130);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1428571428571429;
			break;
		case 129L:
			RTHOOK(131);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1426283821033600;
			break;
		case 130L:
			RTHOOK(132);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1424021108869747;
			break;
		case 131L:
			RTHOOK(133);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1421782821510107;
			break;
		case 132L:
			RTHOOK(134);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1419568500933153;
			break;
		case 133L:
			RTHOOK(135);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1417377701235801;
			break;
		case 134L:
			RTHOOK(136);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1415209988221527;
			break;
		case 135L:
			RTHOOK(137);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1413064939005528;
			break;
		case 136L:
			RTHOOK(138);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1410942141636095;
			break;
		case 137L:
			RTHOOK(139);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1408841194731412;
			break;
		case 138L:
			RTHOOK(140);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1406761707131039;
			break;
		case 139L:
			RTHOOK(141);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1404703297561400;
			break;
		case 140L:
			RTHOOK(142);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1402665594314587;
			break;
		case 141L:
			RTHOOK(143);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1400648234939879;
			break;
		case 142L:
			RTHOOK(144);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1398650865947379;
			break;
		case 143L:
			RTHOOK(145);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1396673142523192;
			break;
		case 144L:
			RTHOOK(146);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1394714728255649;
			break;
		case 145L:
			RTHOOK(147);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1392775294872041;
			break;
		case 146L:
			RTHOOK(148);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1390854521985406;
			break;
		case 147L:
			RTHOOK(149);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1388952096850913;
			break;
		case 148L:
			RTHOOK(150);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1387067714131417;
			break;
		case 149L:
			RTHOOK(151);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1385201075671775;
			break;
		case 150L:
			RTHOOK(152);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1383351890281540;
			break;
		case 151L:
			RTHOOK(153);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1381519873525671;
			break;
		case 152L:
			RTHOOK(154);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1379704747522905;
			break;
		case 153L:
			RTHOOK(155);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1377906240751463;
			break;
		case 154L:
			RTHOOK(156);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1376124087861776;
			break;
		case 155L:
			RTHOOK(157);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1374358029495937;
			break;
		case 156L:
			RTHOOK(158);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1372607812113589;
			break;
		case 157L:
			RTHOOK(159);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1370873187823978;
			break;
		case 158L:
			RTHOOK(160);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1369153914223921;
			break;
		case 159L:
			RTHOOK(161);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1367449754241439;
			break;
		case 160L:
			RTHOOK(162);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1365760475984821;
			break;
		case 161L:
			RTHOOK(163);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1364085852596902;
			break;
		case 162L:
			RTHOOK(164);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1362425662114337;
			break;
		case 163L:
			RTHOOK(165);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1360779687331669;
			break;
		case 164L:
			RTHOOK(166);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1359147715670014;
			break;
		case 165L:
			RTHOOK(167);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1357529539050150;
			break;
		case 166L:
			RTHOOK(168);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1355924953769863;
			break;
		case 167L:
			RTHOOK(169);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1354333760385373;
			break;
		case 168L:
			RTHOOK(170);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1352755763596663;
			break;
		case 169L:
			RTHOOK(171);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1351190772136599;
			break;
		case 170L:
			RTHOOK(172);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1349638598663645;
			break;
		case 171L:
			RTHOOK(173);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1348099059658079;
			break;
		case 172L:
			RTHOOK(174);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1346571975321549;
			break;
		case 173L:
			RTHOOK(175);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1345057169479844;
			break;
		case 174L:
			RTHOOK(176);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1343554469488779;
			break;
		case 175L:
			RTHOOK(177);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1342063706143054;
			break;
		case 176L:
			RTHOOK(178);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1340584713587980;
			break;
		case 177L:
			RTHOOK(179);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1339117329233981;
			break;
		case 178L:
			RTHOOK(180);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1337661393673756;
			break;
		case 179L:
			RTHOOK(181);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1336216750601997;
			break;
		case 180L:
			RTHOOK(182);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1334783246737591;
			break;
		case 181L:
			RTHOOK(183);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1333360731748201;
			break;
		case 182L:
			RTHOOK(184);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1331949058177136;
			break;
		case 183L:
			RTHOOK(185);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1330548081372441;
			break;
		case 184L:
			RTHOOK(186);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1329157659418126;
			break;
		case 185L:
			RTHOOK(187);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1327777653067443;
			break;
		case 186L:
			RTHOOK(188);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1326407925678156;
			break;
		case 187L:
			RTHOOK(189);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1325048343149731;
			break;
		case 188L:
			RTHOOK(190);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1323698773862368;
			break;
		case 189L:
			RTHOOK(191);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1322359088617821;
			break;
		case 190L:
			RTHOOK(192);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1321029160581950;
			break;
		case 191L:
			RTHOOK(193);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1319708865228925;
			break;
		case 192L:
			RTHOOK(194);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1318398080287045;
			break;
		case 193L:
			RTHOOK(195);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1317096685686114;
			break;
		case 194L:
			RTHOOK(196);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1315804563506306;
			break;
		case 195L:
			RTHOOK(197);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1314521597928493;
			break;
		case 196L:
			RTHOOK(198);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1313247675185968;
			break;
		case 197L:
			RTHOOK(199);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1311982683517524;
			break;
		case 198L:
			RTHOOK(200);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1310726513121844;
			break;
		case 199L:
			RTHOOK(201);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1309479056113158;
			break;
		case 200L:
			RTHOOK(202);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1308240206478128;
			break;
		case 201L:
			RTHOOK(203);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1307009860033912;
			break;
		case 202L:
			RTHOOK(204);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1305787914387386;
			break;
		case 203L:
			RTHOOK(205);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1304574268895465;
			break;
		case 204L:
			RTHOOK(206);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1303368824626505;
			break;
		case 205L:
			RTHOOK(207);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1302171484322746;
			break;
		case 206L:
			RTHOOK(208);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1300982152363760;
			break;
		case 207L:
			RTHOOK(209);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1299800734730872;
			break;
		case 208L:
			RTHOOK(210);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1298627138972530;
			break;
		case 209L:
			RTHOOK(211);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1297461274170591;
			break;
		case 210L:
			RTHOOK(212);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1296303050907487;
			break;
		case 211L:
			RTHOOK(213);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1295152381234257;
			break;
		case 212L:
			RTHOOK(214);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1294009178639407;
			break;
		case 213L:
			RTHOOK(215);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1292873358018581;
			break;
		case 214L:
			RTHOOK(216);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1291744835645007;
			break;
		case 215L:
			RTHOOK(217);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1290623529140715;
			break;
		case 216L:
			RTHOOK(218);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1289509357448472;
			break;
		case 217L:
			RTHOOK(219);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1288402240804449;
			break;
		case 218L:
			RTHOOK(220);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1287302100711567;
			break;
		case 219L:
			RTHOOK(221);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1286208859913518;
			break;
		case 220L:
			RTHOOK(222);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1285122442369443;
			break;
		case 221L:
			RTHOOK(223);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1284042773229231;
			break;
		case 222L:
			RTHOOK(224);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1282969778809442;
			break;
		case 223L:
			RTHOOK(225);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1281903386569819;
			break;
		case 224L:
			RTHOOK(226);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1280843525090381;
			break;
		case 225L:
			RTHOOK(227);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1279790124049078;
			break;
		case 226L:
			RTHOOK(228);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1278743114199984;
			break;
		case 227L:
			RTHOOK(229);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1277702427352035;
			break;
		case 228L:
			RTHOOK(230);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1276667996348261;
			break;
		case 229L:
			RTHOOK(231);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1275639755045533;
			break;
		case 230L:
			RTHOOK(232);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1274617638294791;
			break;
		case 231L:
			RTHOOK(233);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1273601581921741;
			break;
		case 232L:
			RTHOOK(234);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1272591522708010;
			break;
		case 233L:
			RTHOOK(235);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1271587398372755;
			break;
		case 234L:
			RTHOOK(236);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1270589147554692;
			break;
		case 235L:
			RTHOOK(237);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1269596709794558;
			break;
		case 236L:
			RTHOOK(238);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1268610025517973;
			break;
		case 237L:
			RTHOOK(239);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1267629036018709;
			break;
		case 238L:
			RTHOOK(240);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1266653683442337;
			break;
		case 239L:
			RTHOOK(241);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1265683910770258;
			break;
		case 240L:
			RTHOOK(242);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1264719661804097;
			break;
		case 241L:
			RTHOOK(243);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1263760881150453;
			break;
		case 242L:
			RTHOOK(244);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1262807514205999;
			break;
		case 243L:
			RTHOOK(245);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1261859507142915;
			break;
		case 244L:
			RTHOOK(246);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1260916806894653;
			break;
		case 245L:
			RTHOOK(247);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1259979361142023;
			break;
		case 246L:
			RTHOOK(248);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1259047118299582;
			break;
		case 247L:
			RTHOOK(249);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1258120027502338;
			break;
		case 248L:
			RTHOOK(250);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1257198038592741;
			break;
		case 249L:
			RTHOOK(251);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1256281102107963;
			break;
		case 250L:
			RTHOOK(252);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1255369169267456;
			break;
		case 251L:
			RTHOOK(253);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1254462191960791;
			break;
		case 252L:
			RTHOOK(254);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1253560122735751;
			break;
		case 253L:
			RTHOOK(255);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1252662914786691;
			break;
		case 254L:
			RTHOOK(256);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1251770521943144;
			break;
		case 255L:
			RTHOOK(257);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1250882898658682;
			break;
		case 256L:
			RTHOOK(258);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.1250000000000000;
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(259);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {MP_BASES}.big_base */
EIF_TYPED_VALUE F180_2323 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "big_base";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 179, Current, 0, 1, 2320);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(179, Current, 2320);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 2L:
			RTHOOK(2);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			break;
		case 3L:
			RTHOOK(3);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3486784401));
			break;
		case 4L:
			RTHOOK(4);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L);
			break;
		case 5L:
			RTHOOK(5);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1220703125L);
			break;
		case 6L:
			RTHOOK(6);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2176782336));
			break;
		case 7L:
			RTHOOK(7);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1977326743L);
			break;
		case 8L:
			RTHOOK(8);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L);
			break;
		case 9L:
			RTHOOK(9);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3486784401));
			break;
		case 10L:
			RTHOOK(10);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1000000000L);
			break;
		case 11L:
			RTHOOK(11);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2357947691));
			break;
		case 12L:
			RTHOOK(12);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 429981696L);
			break;
		case 13L:
			RTHOOK(13);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 815730721L);
			break;
		case 14L:
			RTHOOK(14);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1475789056L);
			break;
		case 15L:
			RTHOOK(15);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2562890625));
			break;
		case 16L:
			RTHOOK(16);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 4L);
			break;
		case 17L:
			RTHOOK(17);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 410338673L);
			break;
		case 18L:
			RTHOOK(18);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 612220032L);
			break;
		case 19L:
			RTHOOK(19);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 893871739L);
			break;
		case 20L:
			RTHOOK(20);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1280000000L);
			break;
		case 21L:
			RTHOOK(21);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1801088541L);
			break;
		case 22L:
			RTHOOK(22);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2494357888));
			break;
		case 23L:
			RTHOOK(23);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3404825447));
			break;
		case 24L:
			RTHOOK(24);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 191102976L);
			break;
		case 25L:
			RTHOOK(25);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 244140625L);
			break;
		case 26L:
			RTHOOK(26);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 308915776L);
			break;
		case 27L:
			RTHOOK(27);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 387420489L);
			break;
		case 28L:
			RTHOOK(28);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 481890304L);
			break;
		case 29L:
			RTHOOK(29);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 594823321L);
			break;
		case 30L:
			RTHOOK(30);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 729000000L);
			break;
		case 31L:
			RTHOOK(31);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 887503681L);
			break;
		case 32L:
			RTHOOK(32);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L);
			break;
		case 33L:
			RTHOOK(33);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1291467969L);
			break;
		case 34L:
			RTHOOK(34);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1544804416L);
			break;
		case 35L:
			RTHOOK(35);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1838265625L);
			break;
		case 36L:
			RTHOOK(36);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2176782336));
			break;
		case 37L:
			RTHOOK(37);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2565726409));
			break;
		case 38L:
			RTHOOK(38);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3010936384));
			break;
		case 39L:
			RTHOOK(39);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3518743761));
			break;
		case 40L:
			RTHOOK(40);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4096000000));
			break;
		case 41L:
			RTHOOK(41);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 115856201L);
			break;
		case 42L:
			RTHOOK(42);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 130691232L);
			break;
		case 43L:
			RTHOOK(43);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 147008443L);
			break;
		case 44L:
			RTHOOK(44);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 164916224L);
			break;
		case 45L:
			RTHOOK(45);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 184528125L);
			break;
		case 46L:
			RTHOOK(46);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 205962976L);
			break;
		case 47L:
			RTHOOK(47);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 229345007L);
			break;
		case 48L:
			RTHOOK(48);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 254803968L);
			break;
		case 49L:
			RTHOOK(49);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 282475249L);
			break;
		case 50L:
			RTHOOK(50);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 312500000L);
			break;
		case 51L:
			RTHOOK(51);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 345025251L);
			break;
		case 52L:
			RTHOOK(52);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 380204032L);
			break;
		case 53L:
			RTHOOK(53);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 418195493L);
			break;
		case 54L:
			RTHOOK(54);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 459165024L);
			break;
		case 55L:
			RTHOOK(55);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 503284375L);
			break;
		case 56L:
			RTHOOK(56);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 550731776L);
			break;
		case 57L:
			RTHOOK(57);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 601692057L);
			break;
		case 58L:
			RTHOOK(58);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 656356768L);
			break;
		case 59L:
			RTHOOK(59);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 714924299L);
			break;
		case 60L:
			RTHOOK(60);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 777600000L);
			break;
		case 61L:
			RTHOOK(61);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 844596301L);
			break;
		case 62L:
			RTHOOK(62);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 916132832L);
			break;
		case 63L:
			RTHOOK(63);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 992436543L);
			break;
		case 64L:
			RTHOOK(64);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 6L);
			break;
		case 65L:
			RTHOOK(65);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1160290625L);
			break;
		case 66L:
			RTHOOK(66);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1252332576L);
			break;
		case 67L:
			RTHOOK(67);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1350125107L);
			break;
		case 68L:
			RTHOOK(68);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1453933568L);
			break;
		case 69L:
			RTHOOK(69);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1564031349L);
			break;
		case 70L:
			RTHOOK(70);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1680700000L);
			break;
		case 71L:
			RTHOOK(71);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1804229351L);
			break;
		case 72L:
			RTHOOK(72);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1934917632L);
			break;
		case 73L:
			RTHOOK(73);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2073071593L);
			break;
		case 74L:
			RTHOOK(74);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2219006624));
			break;
		case 75L:
			RTHOOK(75);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2373046875));
			break;
		case 76L:
			RTHOOK(76);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2535525376));
			break;
		case 77L:
			RTHOOK(77);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2706784157));
			break;
		case 78L:
			RTHOOK(78);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2887174368));
			break;
		case 79L:
			RTHOOK(79);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3077056399));
			break;
		case 80L:
			RTHOOK(80);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3276800000));
			break;
		case 81L:
			RTHOOK(81);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3486784401));
			break;
		case 82L:
			RTHOOK(82);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3707398432));
			break;
		case 83L:
			RTHOOK(83);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3939040643));
			break;
		case 84L:
			RTHOOK(84);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4182119424));
			break;
		case 85L:
			RTHOOK(85);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 52200625L);
			break;
		case 86L:
			RTHOOK(86);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 54700816L);
			break;
		case 87L:
			RTHOOK(87);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 57289761L);
			break;
		case 88L:
			RTHOOK(88);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 59969536L);
			break;
		case 89L:
			RTHOOK(89);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 62742241L);
			break;
		case 90L:
			RTHOOK(90);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 65610000L);
			break;
		case 91L:
			RTHOOK(91);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 68574961L);
			break;
		case 92L:
			RTHOOK(92);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 71639296L);
			break;
		case 93L:
			RTHOOK(93);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 74805201L);
			break;
		case 94L:
			RTHOOK(94);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 78074896L);
			break;
		case 95L:
			RTHOOK(95);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 81450625L);
			break;
		case 96L:
			RTHOOK(96);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 84934656L);
			break;
		case 97L:
			RTHOOK(97);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 88529281L);
			break;
		case 98L:
			RTHOOK(98);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 92236816L);
			break;
		case 99L:
			RTHOOK(99);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 96059601L);
			break;
		case 100L:
			RTHOOK(100);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 100000000L);
			break;
		case 101L:
			RTHOOK(101);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 104060401L);
			break;
		case 102L:
			RTHOOK(102);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 108243216L);
			break;
		case 103L:
			RTHOOK(103);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 112550881L);
			break;
		case 104L:
			RTHOOK(104);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 116985856L);
			break;
		case 105L:
			RTHOOK(105);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 121550625L);
			break;
		case 106L:
			RTHOOK(106);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 126247696L);
			break;
		case 107L:
			RTHOOK(107);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 126247696L);
			break;
		case 108L:
			RTHOOK(108);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 136048896L);
			break;
		case 109L:
			RTHOOK(109);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 141158161L);
			break;
		case 110L:
			RTHOOK(110);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 146410000L);
			break;
		case 111L:
			RTHOOK(111);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 151807041L);
			break;
		case 112L:
			RTHOOK(112);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 157351936L);
			break;
		case 113L:
			RTHOOK(113);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 163047361L);
			break;
		case 114L:
			RTHOOK(114);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 168896016L);
			break;
		case 115L:
			RTHOOK(115);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 174900625L);
			break;
		case 116L:
			RTHOOK(116);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 181063936L);
			break;
		case 117L:
			RTHOOK(117);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 187388721L);
			break;
		case 118L:
			RTHOOK(118);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 193877776L);
			break;
		case 119L:
			RTHOOK(119);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 200533921L);
			break;
		case 120L:
			RTHOOK(120);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 207360000L);
			break;
		case 121L:
			RTHOOK(121);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 214358881L);
			break;
		case 122L:
			RTHOOK(122);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 221533456L);
			break;
		case 123L:
			RTHOOK(123);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 228886641L);
			break;
		case 124L:
			RTHOOK(124);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 236421376L);
			break;
		case 125L:
			RTHOOK(125);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 244140625L);
			break;
		case 126L:
			RTHOOK(126);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 252047376L);
			break;
		case 127L:
			RTHOOK(127);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 260144641L);
			break;
		case 128L:
			RTHOOK(128);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
			break;
		case 129L:
			RTHOOK(129);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 276922881L);
			break;
		case 130L:
			RTHOOK(130);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 285610000L);
			break;
		case 131L:
			RTHOOK(131);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 294499921L);
			break;
		case 132L:
			RTHOOK(132);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 303595776L);
			break;
		case 133L:
			RTHOOK(133);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 312900721L);
			break;
		case 134L:
			RTHOOK(134);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 322417936L);
			break;
		case 135L:
			RTHOOK(135);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 332150625L);
			break;
		case 136L:
			RTHOOK(136);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 342102016L);
			break;
		case 137L:
			RTHOOK(137);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 352275361L);
			break;
		case 138L:
			RTHOOK(138);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 362673936L);
			break;
		case 139L:
			RTHOOK(139);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 373301041L);
			break;
		case 140L:
			RTHOOK(140);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 384160000L);
			break;
		case 141L:
			RTHOOK(141);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 395254161L);
			break;
		case 142L:
			RTHOOK(142);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 406586896L);
			break;
		case 143L:
			RTHOOK(143);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 418161601L);
			break;
		case 144L:
			RTHOOK(144);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 429981696L);
			break;
		case 145L:
			RTHOOK(145);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 442050625L);
			break;
		case 146L:
			RTHOOK(146);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 454371856L);
			break;
		case 147L:
			RTHOOK(147);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 466948881L);
			break;
		case 148L:
			RTHOOK(148);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 479785216L);
			break;
		case 149L:
			RTHOOK(149);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 492884401L);
			break;
		case 150L:
			RTHOOK(150);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 506250000L);
			break;
		case 151L:
			RTHOOK(151);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 519885601L);
			break;
		case 152L:
			RTHOOK(152);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 533794816L);
			break;
		case 153L:
			RTHOOK(153);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 547981281L);
			break;
		case 154L:
			RTHOOK(154);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 562448656L);
			break;
		case 155L:
			RTHOOK(155);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 577200625L);
			break;
		case 156L:
			RTHOOK(156);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 592240896L);
			break;
		case 157L:
			RTHOOK(157);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 607573201L);
			break;
		case 158L:
			RTHOOK(158);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 623201296L);
			break;
		case 159L:
			RTHOOK(159);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 639128961L);
			break;
		case 160L:
			RTHOOK(160);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 655360000L);
			break;
		case 161L:
			RTHOOK(161);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 671898241L);
			break;
		case 162L:
			RTHOOK(162);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 688747536L);
			break;
		case 163L:
			RTHOOK(163);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 705911761L);
			break;
		case 164L:
			RTHOOK(164);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 723394816L);
			break;
		case 165L:
			RTHOOK(165);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 741200625L);
			break;
		case 166L:
			RTHOOK(166);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 759333136L);
			break;
		case 167L:
			RTHOOK(167);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 777796321L);
			break;
		case 168L:
			RTHOOK(168);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 796594176L);
			break;
		case 169L:
			RTHOOK(169);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 815730721L);
			break;
		case 170L:
			RTHOOK(170);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 835210000L);
			break;
		case 171L:
			RTHOOK(171);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 855036081L);
			break;
		case 172L:
			RTHOOK(172);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 875213056L);
			break;
		case 173L:
			RTHOOK(173);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 895745041L);
			break;
		case 174L:
			RTHOOK(174);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 916636176L);
			break;
		case 175L:
			RTHOOK(175);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 937890625L);
			break;
		case 176L:
			RTHOOK(176);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 959512576L);
			break;
		case 177L:
			RTHOOK(177);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 981506241L);
			break;
		case 178L:
			RTHOOK(178);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1003875856L);
			break;
		case 179L:
			RTHOOK(179);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1026625681L);
			break;
		case 180L:
			RTHOOK(180);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1049760000L);
			break;
		case 181L:
			RTHOOK(181);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1073283121L);
			break;
		case 182L:
			RTHOOK(182);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1097199376L);
			break;
		case 183L:
			RTHOOK(183);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1121513121L);
			break;
		case 184L:
			RTHOOK(184);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1146228736L);
			break;
		case 185L:
			RTHOOK(185);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1171350625L);
			break;
		case 186L:
			RTHOOK(186);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1196883216L);
			break;
		case 187L:
			RTHOOK(187);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1222830961L);
			break;
		case 188L:
			RTHOOK(188);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1249198336L);
			break;
		case 189L:
			RTHOOK(189);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1275989841L);
			break;
		case 190L:
			RTHOOK(190);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1303210000L);
			break;
		case 191L:
			RTHOOK(191);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1330863361L);
			break;
		case 192L:
			RTHOOK(192);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1358954496L);
			break;
		case 193L:
			RTHOOK(193);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1387488001L);
			break;
		case 194L:
			RTHOOK(194);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1416468496L);
			break;
		case 195L:
			RTHOOK(195);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1445900625L);
			break;
		case 196L:
			RTHOOK(196);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1475789056L);
			break;
		case 197L:
			RTHOOK(197);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1506138481L);
			break;
		case 198L:
			RTHOOK(198);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1536953616L);
			break;
		case 199L:
			RTHOOK(199);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1568239201L);
			break;
		case 200L:
			RTHOOK(200);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1600000000L);
			break;
		case 201L:
			RTHOOK(201);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1632240801L);
			break;
		case 202L:
			RTHOOK(202);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1664966416L);
			break;
		case 203L:
			RTHOOK(203);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1698181681L);
			break;
		case 204L:
			RTHOOK(204);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1731891456L);
			break;
		case 205L:
			RTHOOK(205);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1766100625L);
			break;
		case 206L:
			RTHOOK(206);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1800814096L);
			break;
		case 207L:
			RTHOOK(207);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1836036801L);
			break;
		case 208L:
			RTHOOK(208);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1871773696L);
			break;
		case 209L:
			RTHOOK(209);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1908029761L);
			break;
		case 210L:
			RTHOOK(210);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1944810000L);
			break;
		case 211L:
			RTHOOK(211);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1982119441L);
			break;
		case 212L:
			RTHOOK(212);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2019963136L);
			break;
		case 213L:
			RTHOOK(213);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2058346161L);
			break;
		case 214L:
			RTHOOK(214);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2097273616L);
			break;
		case 215L:
			RTHOOK(215);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2136750625L);
			break;
		case 216L:
			RTHOOK(216);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2176782336));
			break;
		case 217L:
			RTHOOK(217);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2217373921));
			break;
		case 218L:
			RTHOOK(218);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2258530576));
			break;
		case 219L:
			RTHOOK(219);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2300257521));
			break;
		case 220L:
			RTHOOK(220);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2342560000));
			break;
		case 221L:
			RTHOOK(221);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2385443281));
			break;
		case 222L:
			RTHOOK(222);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2428912656));
			break;
		case 223L:
			RTHOOK(223);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2472973441));
			break;
		case 224L:
			RTHOOK(224);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2517630976));
			break;
		case 225L:
			RTHOOK(225);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2562890625));
			break;
		case 226L:
			RTHOOK(226);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2608757776));
			break;
		case 227L:
			RTHOOK(227);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2655237841));
			break;
		case 228L:
			RTHOOK(228);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2702336256));
			break;
		case 229L:
			RTHOOK(229);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2750058481));
			break;
		case 230L:
			RTHOOK(230);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2798410000));
			break;
		case 231L:
			RTHOOK(231);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2847396321));
			break;
		case 232L:
			RTHOOK(232);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2897022976));
			break;
		case 233L:
			RTHOOK(233);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2947295521));
			break;
		case 234L:
			RTHOOK(234);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2998219536));
			break;
		case 235L:
			RTHOOK(235);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3049800625));
			break;
		case 236L:
			RTHOOK(236);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3102044416));
			break;
		case 237L:
			RTHOOK(237);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3154956561));
			break;
		case 238L:
			RTHOOK(238);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3208542736));
			break;
		case 239L:
			RTHOOK(239);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3262808641));
			break;
		case 240L:
			RTHOOK(240);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3317760000));
			break;
		case 241L:
			RTHOOK(241);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3373402561));
			break;
		case 242L:
			RTHOOK(242);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3429742096));
			break;
		case 243L:
			RTHOOK(243);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3486784401));
			break;
		case 244L:
			RTHOOK(244);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3544535296));
			break;
		case 245L:
			RTHOOK(245);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3603000625));
			break;
		case 246L:
			RTHOOK(246);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3662186256));
			break;
		case 247L:
			RTHOOK(247);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3722098081));
			break;
		case 248L:
			RTHOOK(248);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3782742016));
			break;
		case 249L:
			RTHOOK(249);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3844124001));
			break;
		case 250L:
			RTHOOK(250);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3906250000));
			break;
		case 251L:
			RTHOOK(251);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3969126001));
			break;
		case 252L:
			RTHOOK(252);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4032758016));
			break;
		case 253L:
			RTHOOK(253);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4097152081));
			break;
		case 254L:
			RTHOOK(254);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4162314256));
			break;
		case 255L:
			RTHOOK(255);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4228250625));
			break;
		case 256L:
			RTHOOK(256);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 8L);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(257);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg1
}

/* {MP_BASES}.big_base_inverted */
EIF_TYPED_VALUE F180_2324 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "big_base_inverted";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 179, Current, 0, 1, 2321);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(179, Current, 2321);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base >= 2", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("base <= 256", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 256L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	switch (arg1) {
		case 2L:
			RTHOOK(4);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			break;
		case 3L:
			RTHOOK(5);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 995507236L);
			break;
		case 4L:
			RTHOOK(6);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			break;
		case 5L:
			RTHOOK(7);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3260819076));
			break;
		case 6L:
			RTHOOK(8);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4179349942));
			break;
		case 7L:
			RTHOOK(9);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 369599179L);
			break;
		case 8L:
			RTHOOK(10);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			break;
		case 9L:
			RTHOOK(11);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 995507236L);
			break;
		case 10L:
			RTHOOK(12);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 316718722L);
			break;
		case 11L:
			RTHOOK(13);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3528252932));
			break;
		case 12L:
			RTHOOK(14);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1067686581L);
			break;
		case 13L:
			RTHOOK(15);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1358474335L);
			break;
		case 14L:
			RTHOOK(16);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1954822942L);
			break;
		case 15L:
			RTHOOK(17);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2902664898));
			break;
		case 16L:
			RTHOOK(18);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			break;
		case 17L:
			RTHOOK(19);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1324398269L);
			break;
		case 18L:
			RTHOOK(20);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3237759137));
			break;
		case 19L:
			RTHOOK(21);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 864258370L);
			break;
		case 20L:
			RTHOOK(22);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2910792107));
			break;
		case 21L:
			RTHOOK(23);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 826031381L);
			break;
		case 22L:
			RTHOOK(24);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3100420576));
			break;
		case 23L:
			RTHOOK(25);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1122856425L);
			break;
		case 24L:
			RTHOOK(26);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1738018315L);
			break;
		case 25L:
			RTHOOK(27);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 427399186L);
			break;
		case 26L:
			RTHOOK(28);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3169342358));
			break;
		case 27L:
			RTHOOK(29);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1656816553L);
			break;
		case 28L:
			RTHOOK(30);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 490028355L);
			break;
		case 29L:
			RTHOOK(31);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3458067690));
			break;
		case 30L:
			RTHOOK(32);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2031076625L);
			break;
		case 31L:
			RTHOOK(33);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 901277088L);
			break;
		case 32L:
			RTHOOK(34);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			break;
		case 33L:
			RTHOOK(35);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2846806451));
			break;
		case 34L:
			RTHOOK(36);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1675608617L);
			break;
		case 35L:
			RTHOOK(37);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 722464304L);
			break;
		case 36L:
			RTHOOK(38);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4179349942));
			break;
		case 37L:
			RTHOOK(39);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2894709673));
			break;
		case 38L:
			RTHOOK(40);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1831613182L);
			break;
		case 39L:
			RTHOOK(41);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 947455945L);
			break;
		case 40L:
			RTHOOK(42);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 208632331L);
			break;
		case 41L:
			RTHOOK(43);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 680690004L);
			break;
		case 42L:
			RTHOOK(44);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 115892893L);
			break;
		case 43L:
			RTHOOK(45);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3547585696));
			break;
		case 44L:
			RTHOOK(46);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2695985301));
			break;
		case 45L:
			RTHOOK(47);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1952977317L);
			break;
		case 46L:
			RTHOOK(48);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1302745103L);
			break;
		case 47L:
			RTHOOK(49);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 732050818L);
			break;
		case 48L:
			RTHOOK(50);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 229771912L);
			break;
		case 49L:
			RTHOOK(51);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3868024036));
			break;
		case 50L:
			RTHOOK(52);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3083730333));
			break;
		case 51L:
			RTHOOK(53);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2388146483));
			break;
		case 52L:
			RTHOOK(54);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1769784298L);
			break;
		case 53L:
			RTHOOK(55);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1218824812L);
			break;
		case 54L:
			RTHOOK(56);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 726850326L);
			break;
		case 55L:
			RTHOOK(57);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 286623398L);
			break;
		case 56L:
			RTHOOK(58);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4078775094));
			break;
		case 57L:
			RTHOOK(59);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3369561369));
			break;
		case 58L:
			RTHOOK(60);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2731220660));
			break;
		case 59L:
			RTHOOK(61);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2155626179));
			break;
		case 60L:
			RTHOOK(62);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1635698879L);
			break;
		case 61L:
			RTHOOK(63);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1165257918L);
			break;
		case 62L:
			RTHOOK(64);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 738894451L);
			break;
		case 63L:
			RTHOOK(65);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 351864837L);
			break;
		case 64L:
			RTHOOK(66);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			break;
		case 65L:
			RTHOOK(67);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3654223913));
			break;
		case 66L:
			RTHOOK(68);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3069986881));
			break;
		case 67L:
			RTHOOK(69);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2536527051));
			break;
		case 68L:
			RTHOOK(70);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2048769611L);
			break;
		case 69L:
			RTHOOK(71);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1602211199L);
			break;
		case 70L:
			RTHOOK(72);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1192848516L);
			break;
		case 71L:
			RTHOOK(73);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 817116725L);
			break;
		case 72L:
			RTHOOK(74);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 471836150L);
			break;
		case 73L:
			RTHOOK(75);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 154166090L);
			break;
		case 74L:
			RTHOOK(76);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4018096700));
			break;
		case 75L:
			RTHOOK(77);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3478475474));
			break;
		case 76L:
			RTHOOK(78);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2980347022));
			break;
		case 77L:
			RTHOOK(79);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2520036414));
			break;
		case 78L:
			RTHOOK(80);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2094236029L);
			break;
		case 79L:
			RTHOOK(81);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1699964769L);
			break;
		case 80L:
			RTHOOK(82);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1334532238L);
			break;
		case 81L:
			RTHOOK(83);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 995507236L);
			break;
		case 82L:
			RTHOOK(84);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 680690004L);
			break;
		case 83L:
			RTHOOK(85);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 388087728L);
			break;
		case 84L:
			RTHOOK(86);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 115892893L);
			break;
		case 85L:
			RTHOOK(87);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1226621308L);
			break;
		case 86L:
			RTHOOK(88);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 974247995L);
			break;
		case 87L:
			RTHOOK(89);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 736130253L);
			break;
		case 88L:
			RTHOOK(90);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 511312615L);
			break;
		case 89L:
			RTHOOK(91);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 298913501L);
			break;
		case 90L:
			RTHOOK(92);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 98118760L);
			break;
		case 91L:
			RTHOOK(93);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4111318962));
			break;
		case 92L:
			RTHOOK(94);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3751744278));
			break;
		case 93L:
			RTHOOK(95);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3411191428));
			break;
		case 94L:
			RTHOOK(96);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3088465559));
			break;
		case 95L:
			RTHOOK(97);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2782458473));
			break;
		case 96L:
			RTHOOK(98);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2492141517));
			break;
		case 97L:
			RTHOOK(99);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2216559125));
			break;
		case 98L:
			RTHOOK(100);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1954822942L);
			break;
		case 99L:
			RTHOOK(101);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1706106478L);
			break;
		case 100L:
			RTHOOK(102);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1469640227L);
			break;
		case 101L:
			RTHOOK(103);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1244707227L);
			break;
		case 102L:
			RTHOOK(104);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1030638996L);
			break;
		case 103L:
			RTHOOK(105);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 826811824L);
			break;
		case 104L:
			RTHOOK(106);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 632643374L);
			break;
		case 105L:
			RTHOOK(107);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 447589579L);
			break;
		case 106L:
			RTHOOK(108);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 271141794L);
			break;
		case 107L:
			RTHOOK(109);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 271141794L);
			break;
		case 108L:
			RTHOOK(110);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4179349942));
			break;
		case 109L:
			RTHOOK(111);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3872619306));
			break;
		case 110L:
			RTHOOK(112);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3579641710));
			break;
		case 111L:
			RTHOOK(113);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3299683762));
			break;
		case 112L:
			RTHOOK(114);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3032057295));
			break;
		case 113L:
			RTHOOK(115);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2776116207));
			break;
		case 114L:
			RTHOOK(116);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2531253546));
			break;
		case 115L:
			RTHOOK(117);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2296898825));
			break;
		case 116L:
			RTHOOK(118);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2072515539L);
			break;
		case 117L:
			RTHOOK(119);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1857598869L);
			break;
		case 118L:
			RTHOOK(120);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1651673563L);
			break;
		case 119L:
			RTHOOK(121);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1454291975L);
			break;
		case 120L:
			RTHOOK(122);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1265032243L);
			break;
		case 121L:
			RTHOOK(123);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1083496611L);
			break;
		case 122L:
			RTHOOK(124);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 909309861L);
			break;
		case 123L:
			RTHOOK(125);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 742117872L);
			break;
		case 124L:
			RTHOOK(126);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 581586271L);
			break;
		case 125L:
			RTHOOK(127);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 427399186L);
			break;
		case 126L:
			RTHOOK(128);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 279258085L);
			break;
		case 127L:
			RTHOOK(129);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 136880695L);
			break;
		case 128L:
			RTHOOK(130);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			break;
		case 129L:
			RTHOOK(131);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4031693906));
			break;
		case 130L:
			RTHOOK(132);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3778430026));
			break;
		case 131L:
			RTHOOK(133);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3534722441));
			break;
		case 132L:
			RTHOOK(134);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3300141699));
			break;
		case 133L:
			RTHOOK(135);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3074280693));
			break;
		case 134L:
			RTHOOK(136);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2856753349));
			break;
		case 135L:
			RTHOOK(137);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2647193385));
			break;
		case 136L:
			RTHOOK(138);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2445253168));
			break;
		case 137L:
			RTHOOK(139);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2250602631));
			break;
		case 138L:
			RTHOOK(140);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2062928268L);
			break;
		case 139L:
			RTHOOK(141);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1881932192L);
			break;
		case 140L:
			RTHOOK(142);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1707331249L);
			break;
		case 141L:
			RTHOOK(143);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1538856194L);
			break;
		case 142L:
			RTHOOK(144);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1376250915L);
			break;
		case 143L:
			RTHOOK(145);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1219271705L);
			break;
		case 144L:
			RTHOOK(146);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1067686581L);
			break;
		case 145L:
			RTHOOK(147);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 921274642L);
			break;
		case 146L:
			RTHOOK(148);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 779825472L);
			break;
		case 147L:
			RTHOOK(149);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 643138571L);
			break;
		case 148L:
			RTHOOK(150);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 511022826L);
			break;
		case 149L:
			RTHOOK(151);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 383296013L);
			break;
		case 150L:
			RTHOOK(152);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 259784327L);
			break;
		case 151L:
			RTHOOK(153);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 140321938L);
			break;
		case 152L:
			RTHOOK(154);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 24750580L);
			break;
		case 153L:
			RTHOOK(155);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4120805611));
			break;
		case 154L:
			RTHOOK(156);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3904334043));
			break;
		case 155L:
			RTHOOK(157);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3694778069));
			break;
		case 156L:
			RTHOOK(158);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3491874257));
			break;
		case 157L:
			RTHOOK(159);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3295370807));
			break;
		case 158L:
			RTHOOK(160);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3105026972));
			break;
		case 159L:
			RTHOOK(161);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2920612500));
			break;
		case 160L:
			RTHOOK(162);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2741907121));
			break;
		case 161L:
			RTHOOK(163);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2568700052));
			break;
		case 162L:
			RTHOOK(164);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2400789534));
			break;
		case 163L:
			RTHOOK(165);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2237982391));
			break;
		case 164L:
			RTHOOK(166);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2080093620L);
			break;
		case 165L:
			RTHOOK(167);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1926945992L);
			break;
		case 166L:
			RTHOOK(168);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1778369688L);
			break;
		case 167L:
			RTHOOK(169);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1634201940L);
			break;
		case 168L:
			RTHOOK(170);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1494286702L);
			break;
		case 169L:
			RTHOOK(171);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1358474335L);
			break;
		case 170L:
			RTHOOK(172);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1226621308L);
			break;
		case 171L:
			RTHOOK(173);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1098589912L);
			break;
		case 172L:
			RTHOOK(174);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 974247995L);
			break;
		case 173L:
			RTHOOK(175);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 853468706L);
			break;
		case 174L:
			RTHOOK(176);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 736130253L);
			break;
		case 175L:
			RTHOOK(177);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 622115672L);
			break;
		case 176L:
			RTHOOK(178);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 511312615L);
			break;
		case 177L:
			RTHOOK(179);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 403613136L);
			break;
		case 178L:
			RTHOOK(180);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 298913501L);
			break;
		case 179L:
			RTHOOK(181);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 197113998L);
			break;
		case 180L:
			RTHOOK(182);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 98118760L);
			break;
		case 181L:
			RTHOOK(183);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1835596L);
			break;
		case 182L:
			RTHOOK(184);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4111318962));
			break;
		case 183L:
			RTHOOK(185);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3929075619));
			break;
		case 184L:
			RTHOOK(186);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3751744278));
			break;
		case 185L:
			RTHOOK(187);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3579166921));
			break;
		case 186L:
			RTHOOK(188);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3411191428));
			break;
		case 187L:
			RTHOOK(189);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3247671327));
			break;
		case 188L:
			RTHOOK(190);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3088465559));
			break;
		case 189L:
			RTHOOK(191);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2933438244));
			break;
		case 190L:
			RTHOOK(192);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2782458473));
			break;
		case 191L:
			RTHOOK(193);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2635400093));
			break;
		case 192L:
			RTHOOK(194);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2492141517));
			break;
		case 193L:
			RTHOOK(195);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2352565533));
			break;
		case 194L:
			RTHOOK(196);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2216559125));
			break;
		case 195L:
			RTHOOK(197);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2084013304L);
			break;
		case 196L:
			RTHOOK(198);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1954822942L);
			break;
		case 197L:
			RTHOOK(199);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1828886621L);
			break;
		case 198L:
			RTHOOK(200);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1706106478L);
			break;
		case 199L:
			RTHOOK(201);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1586388068L);
			break;
		case 200L:
			RTHOOK(202);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1469640227L);
			break;
		case 201L:
			RTHOOK(203);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1355774942L);
			break;
		case 202L:
			RTHOOK(204);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1244707227L);
			break;
		case 203L:
			RTHOOK(205);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1136355005L);
			break;
		case 204L:
			RTHOOK(206);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1030638996L);
			break;
		case 205L:
			RTHOOK(207);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 927482606L);
			break;
		case 206L:
			RTHOOK(208);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 826811824L);
			break;
		case 207L:
			RTHOOK(209);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 728555125L);
			break;
		case 208L:
			RTHOOK(210);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 632643374L);
			break;
		case 209L:
			RTHOOK(211);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 539009733L);
			break;
		case 210L:
			RTHOOK(212);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 447589579L);
			break;
		case 211L:
			RTHOOK(213);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 358320415L);
			break;
		case 212L:
			RTHOOK(214);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 271141794L);
			break;
		case 213L:
			RTHOOK(215);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 185995241L);
			break;
		case 214L:
			RTHOOK(216);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 102824182L);
			break;
		case 215L:
			RTHOOK(217);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 21573871L);
			break;
		case 216L:
			RTHOOK(218);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4179349942));
			break;
		case 217L:
			RTHOOK(219);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4024217799));
			break;
		case 218L:
			RTHOOK(220);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3872619306));
			break;
		case 219L:
			RTHOOK(221);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3724458314));
			break;
		case 220L:
			RTHOOK(222);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3579641710));
			break;
		case 221L:
			RTHOOK(223);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3438079312));
			break;
		case 222L:
			RTHOOK(224);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3299683762));
			break;
		case 223L:
			RTHOOK(225);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3164370425));
			break;
		case 224L:
			RTHOOK(226);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3032057295));
			break;
		case 225L:
			RTHOOK(227);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2902664898));
			break;
		case 226L:
			RTHOOK(228);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2776116207));
			break;
		case 227L:
			RTHOOK(229);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2652336553));
			break;
		case 228L:
			RTHOOK(230);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2531253546));
			break;
		case 229L:
			RTHOOK(231);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2412796993));
			break;
		case 230L:
			RTHOOK(232);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2296898825));
			break;
		case 231L:
			RTHOOK(233);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2183493021));
			break;
		case 232L:
			RTHOOK(234);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 2072515539L);
			break;
		case 233L:
			RTHOOK(235);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1963904249L);
			break;
		case 234L:
			RTHOOK(236);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1857598869L);
			break;
		case 235L:
			RTHOOK(237);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1753540899L);
			break;
		case 236L:
			RTHOOK(238);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1651673563L);
			break;
		case 237L:
			RTHOOK(239);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1551941755L);
			break;
		case 238L:
			RTHOOK(240);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1454291975L);
			break;
		case 239L:
			RTHOOK(241);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1358672283L);
			break;
		case 240L:
			RTHOOK(242);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1265032243L);
			break;
		case 241L:
			RTHOOK(243);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1173322876L);
			break;
		case 242L:
			RTHOOK(244);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1083496611L);
			break;
		case 243L:
			RTHOOK(245);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 995507236L);
			break;
		case 244L:
			RTHOOK(246);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 909309861L);
			break;
		case 245L:
			RTHOOK(247);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 824860867L);
			break;
		case 246L:
			RTHOOK(248);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 742117872L);
			break;
		case 247L:
			RTHOOK(249);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 661039685L);
			break;
		case 248L:
			RTHOOK(250);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 581586271L);
			break;
		case 249L:
			RTHOOK(251);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 503718716L);
			break;
		case 250L:
			RTHOOK(252);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 427399186L);
			break;
		case 251L:
			RTHOOK(253);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 352590899L);
			break;
		case 252L:
			RTHOOK(254);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 279258085L);
			break;
		case 253L:
			RTHOOK(255);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 207365961L);
			break;
		case 254L:
			RTHOOK(256);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 136880695L);
			break;
		case 255L:
			RTHOOK(257);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 67769379L);
			break;
		case 256L:
			RTHOOK(258);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(259);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg1
}

void EIF_Minit180 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
