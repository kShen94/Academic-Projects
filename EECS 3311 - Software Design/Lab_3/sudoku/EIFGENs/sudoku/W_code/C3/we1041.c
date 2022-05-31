/*
 * Code for class WEL_SC_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1041_9880(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9881(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9882(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9883(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9884(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9885(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9886(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9887(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9888(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9889(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9890(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9891(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9892(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9893(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9894(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9895(EIF_REFERENCE);
extern void EIF_Minit1041(void);

#ifdef __cplusplus
}
#endif

#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SC_CONSTANTS}.sc_size */
EIF_TYPED_VALUE F1041_9880 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_size";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16220);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16220);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_SIZE;
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

/* {WEL_SC_CONSTANTS}.sc_move */
EIF_TYPED_VALUE F1041_9881 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_move";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16221);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16221);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MOVE;
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

/* {WEL_SC_CONSTANTS}.sc_minimize */
EIF_TYPED_VALUE F1041_9882 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_minimize";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16222);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16222);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MINIMIZE;
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

/* {WEL_SC_CONSTANTS}.sc_maximize */
EIF_TYPED_VALUE F1041_9883 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_maximize";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16223);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16223);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MAXIMIZE;
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

/* {WEL_SC_CONSTANTS}.sc_nextwindow */
EIF_TYPED_VALUE F1041_9884 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_nextwindow";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16224);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16224);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_NEXTWINDOW;
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

/* {WEL_SC_CONSTANTS}.sc_prevwindow */
EIF_TYPED_VALUE F1041_9885 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_prevwindow";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16225);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16225);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_PREVWINDOW;
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

/* {WEL_SC_CONSTANTS}.sc_close */
EIF_TYPED_VALUE F1041_9886 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_close";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16226);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16226);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_CLOSE;
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

/* {WEL_SC_CONSTANTS}.sc_vscroll */
EIF_TYPED_VALUE F1041_9887 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_vscroll";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16227);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16227);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_VSCROLL;
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

/* {WEL_SC_CONSTANTS}.sc_hscroll */
EIF_TYPED_VALUE F1041_9888 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_hscroll";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16228);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16228);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_HSCROLL;
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

/* {WEL_SC_CONSTANTS}.sc_mousemenu */
EIF_TYPED_VALUE F1041_9889 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_mousemenu";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16213);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16213);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MOUSEMENU;
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

/* {WEL_SC_CONSTANTS}.sc_keymenu */
EIF_TYPED_VALUE F1041_9890 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_keymenu";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16214);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16214);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_KEYMENU;
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

/* {WEL_SC_CONSTANTS}.sc_arrange */
EIF_TYPED_VALUE F1041_9891 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_arrange";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16215);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16215);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_ARRANGE;
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

/* {WEL_SC_CONSTANTS}.sc_restore */
EIF_TYPED_VALUE F1041_9892 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_restore";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16216);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16216);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_RESTORE;
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

/* {WEL_SC_CONSTANTS}.sc_tasklist */
EIF_TYPED_VALUE F1041_9893 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_tasklist";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16217);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16217);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_TASKLIST;
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

/* {WEL_SC_CONSTANTS}.sc_screensave */
EIF_TYPED_VALUE F1041_9894 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_screensave";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16218);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16218);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_SCREENSAVE;
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

/* {WEL_SC_CONSTANTS}.sc_hotkey */
EIF_TYPED_VALUE F1041_9895 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_hotkey";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16219);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16219);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_HOTKEY;
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

void EIF_Minit1041 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
