/*
 * Code for class SHA256_HASH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F326_7072(EIF_REFERENCE);
extern EIF_TYPED_VALUE F326_7073(EIF_REFERENCE);
extern void EIF_Minit326(void);

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

/* {SHA256_HASH}.block_size */
EIF_TYPED_VALUE F326_7072 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {SHA256_HASH}.output_size */
EIF_TYPED_VALUE F326_7073 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

void EIF_Minit326 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
