/*
 * Code for class WEL_UDM_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1052_10006(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10007(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10008(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10009(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10010(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10011(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10012(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10013(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10014(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10015(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10016(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10017(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10018(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1052_10019(EIF_REFERENCE);
extern void EIF_Minit1052(void);

#ifdef __cplusplus
}
#endif

#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_UDM_CONSTANTS}.udm_getaccel */
EIF_TYPED_VALUE F1052_10006 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getaccel";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16343);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16343);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETACCEL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_getbase */
EIF_TYPED_VALUE F1052_10007 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getbase";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16344);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16344);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETBASE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_getbuddy */
EIF_TYPED_VALUE F1052_10008 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getbuddy";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16345);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16345);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETBUDDY;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_getpos */
EIF_TYPED_VALUE F1052_10009 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getpos";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16346);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16346);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETPOS;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_getrange */
EIF_TYPED_VALUE F1052_10010 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getrange";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16347);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16347);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETRANGE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_getrange32 */
EIF_TYPED_VALUE F1052_10011 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getrange32";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16348);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16348);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETRANGE32;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setaccel */
EIF_TYPED_VALUE F1052_10012 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setaccel";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16349);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16349);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETACCEL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setbase */
EIF_TYPED_VALUE F1052_10013 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setbase";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16336);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16336);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETBASE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setbuddy */
EIF_TYPED_VALUE F1052_10014 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setbuddy";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16337);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16337);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETBUDDY;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setpos */
EIF_TYPED_VALUE F1052_10015 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setpos";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16338);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16338);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETPOS;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setrange */
EIF_TYPED_VALUE F1052_10016 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setrange";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1051, Current, 0, 0, 16339);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1051, Current, 16339);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETRANGE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_UDM_CONSTANTS}.udm_setrange32 */
EIF_TYPED_VALUE F1052_10017 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1135L);
	return r;
}

/* {WEL_UDM_CONSTANTS}.udm_getpos32 */
EIF_TYPED_VALUE F1052_10018 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1138L);
	return r;
}

/* {WEL_UDM_CONSTANTS}.udm_setpos32 */
EIF_TYPED_VALUE F1052_10019 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1137L);
	return r;
}

void EIF_Minit1052 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
