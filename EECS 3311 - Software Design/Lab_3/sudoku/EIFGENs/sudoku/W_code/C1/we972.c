/*
 * Code for class WEL_GDIP_COLOR_ADJUST_TYPE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F972_8773(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8774(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8775(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8776(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8777(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8778(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8779(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8780(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit972(void);

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

/* {WEL_GDIP_COLOR_ADJUST_TYPE}.coloradjusttypedefault */
EIF_TYPED_VALUE F972_8773 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {WEL_GDIP_COLOR_ADJUST_TYPE}.coloradjusttypebitmap */
EIF_TYPED_VALUE F972_8774 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {WEL_GDIP_COLOR_ADJUST_TYPE}.coloradjusttypebrush */
EIF_TYPED_VALUE F972_8775 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {WEL_GDIP_COLOR_ADJUST_TYPE}.coloradjusttypepen */
EIF_TYPED_VALUE F972_8776 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {WEL_GDIP_COLOR_ADJUST_TYPE}.coloradjusttypetext */
EIF_TYPED_VALUE F972_8777 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {WEL_GDIP_COLOR_ADJUST_TYPE}.coloradjusttypecount */
EIF_TYPED_VALUE F972_8778 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {WEL_GDIP_COLOR_ADJUST_TYPE}.coloradjusttypeany */
EIF_TYPED_VALUE F972_8779 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {WEL_GDIP_COLOR_ADJUST_TYPE}.is_valid */
EIF_TYPED_VALUE F972_8780 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 971, Current, 0, 1, 15067);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15067);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6608, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6609, dtype))(Current)).it_i4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6610, dtype))(Current)).it_i4);
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6611, dtype))(Current)).it_i4);
	ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6612, dtype))(Current)).it_i4);
	ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6613, dtype))(Current)).it_i4);
	ti4_7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6614, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ti4_1) || (EIF_BOOLEAN)(arg1 == ti4_2)) || (EIF_BOOLEAN)(arg1 == ti4_3)) || (EIF_BOOLEAN)(arg1 == ti4_4)) || (EIF_BOOLEAN)(arg1 == ti4_5)) || (EIF_BOOLEAN)(arg1 == ti4_6)) || (EIF_BOOLEAN)(arg1 == ti4_7));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit972 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
