/*
 * Code for class KL_BINARY_INPUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1838_20546(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1838_20547(EIF_REFERENCE);
extern void EIF_Minit1838(void);

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

/* {KL_BINARY_INPUT_FILE}.last_character */
EIF_TYPED_VALUE F1838_20546 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17115,Dtype(Current)));
	return r;
}


/* {KL_BINARY_INPUT_FILE}.last_string */
EIF_TYPED_VALUE F1838_20547 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17114,Dtype(Current)));
	return r;
}


void EIF_Minit1838 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
