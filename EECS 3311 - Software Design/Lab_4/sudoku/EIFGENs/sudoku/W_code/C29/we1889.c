/*
 * Code for class WEL_BITMAP_BUTTON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1889_22899(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1889_22900(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1889_22901(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1889_22902(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1889_22903(EIF_REFERENCE);
extern void F1889_22904(EIF_REFERENCE);
extern void F1889_22905(EIF_REFERENCE);
extern void F1889_22906(EIF_REFERENCE);
extern void F1889_22907(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1889_22908(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1889_22909(EIF_REFERENCE);
extern void F1889_22910(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1889_22911(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1889_22912(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1889_22913(EIF_REFERENCE);
extern void EIF_Minit1889(void);

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

/* {WEL_BITMAP_BUTTON}.make */
void F1889_22899 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1888, Current, 0, 7, 28940);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28940);
	RTCC(arg1, 1888, l_feature_name, 1, eif_new_type(1856, 0x01), 0x01);
	RTCC(arg2, 1888, l_feature_name, 2, eif_new_type(228, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_parent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_parent_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12164, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = arg3;
	ui4_2 = arg4;
	ui4_3 = arg5;
	ui4_4 = arg6;
	ui4_5 = arg7;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19001, 1885))(Current, ur1x, ur2x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 19008, 0x10000000, 1); /* current_pixmap */
	*(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("parent_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("exists", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11737, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("name_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18316, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ur1 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4626, "same_string_general", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("id_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18679, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg7)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("pixmap_not_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10593, dtype))(Current)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10592, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != ti4_2) && (EIF_BOOLEAN)(ti4_3 != ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_BITMAP_BUTTON}.make_by_id */
void F1889_22900 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_by_id";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1888, Current, 0, 2, 28941);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28941);
	RTCC(arg1, 1888, l_feature_name, 1, eif_new_type(1858, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_parent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_id", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18678, 1885))(Current, ur1x, ui4_1x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 19008, 0x10000000, 1); /* current_pixmap */
	*(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("parent_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("id_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18679, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("pixmap_not_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10593, dtype))(Current)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10592, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != ti4_2) && (EIF_BOOLEAN)(ti4_3 != ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {WEL_BITMAP_BUTTON}.bitmap */
EIF_TYPED_VALUE F1889_22901 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bitmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1888, Current, 1, 0, 28942);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28942);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10592, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800057E, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19016, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTCT0("l_bitmap_attached", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF800057E, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {WEL_BITMAP_BUTTON}.icon */
EIF_TYPED_VALUE F1889_22902 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "icon";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1888, Current, 1, 0, 28943);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28943);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10593, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000582, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19017, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTCT0("l_icon_attached", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF8000582, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {WEL_BITMAP_BUTTON}.current_pixmap */
EIF_TYPED_VALUE F1889_22903 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(19008,Dtype(Current)));
	return r;
}


/* {WEL_BITMAP_BUTTON}.show_text */
void F1889_22904 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "show_text";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1888, Current, 0, 0, 28945);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28945);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11737, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19016, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18320, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10744, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13933, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18346, dtype))(Current, ui4_1x);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18387, dtype))(Current);
	} else {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19017, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(6);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18320, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10743, dtype))(Current)).it_i4);
			ui4_2 = ti4_2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13933, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18346, dtype))(Current, ui4_1x);
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18387, dtype))(Current);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
}

/* {WEL_BITMAP_BUTTON}.show_bitmap */
void F1889_22905 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "show_bitmap";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1888, Current, 0, 0, 28946);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28946);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11737, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_bitmap", EX_PRE);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10592, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19006, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18320, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10744, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13932, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18346, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
}

/* {WEL_BITMAP_BUTTON}.show_icon */
void F1889_22906 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "show_icon";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1888, Current, 0, 0, 28947);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28947);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11737, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_icon", EX_PRE);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10593, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19007, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18320, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10743, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13932, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18346, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
}

/* {WEL_BITMAP_BUTTON}.set_bitmap */
void F1889_22907 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_bitmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1888, Current, 1, 1, 28948);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28948);
	RTCC(arg1, 1888, l_feature_name, 1, eif_new_type(1406, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11737, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_bitmap", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800057E, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19016, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = *(EIF_BOOLEAN *)(loc1 + RTVA(11483, "reference_tracked", loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11489, "decrement_reference", loc1))(loc1);
	}
	RTHOOK(6);
	RTDBGAL(Current, 1, 0xF800057E, 0, 0); /* loc1 */
	loc1 = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 19016, 0xF800057E, 0); /* internal_bitmap */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(19016, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(11483, "reference_tracked", loc1));
	if (tb1) {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11490, "increment_reference", loc1))(loc1);
	}
	RTHOOK(10);
	RTDBGAA(Current, dtype, 19008, 0x10000000, 1); /* current_pixmap */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10592, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19010, dtype))(Current);
	RTHOOK(12);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12162, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10726, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10592, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10876, dtype))(Current, ui4_2x)).it_p);
	up2 = tp2;
	tp3 = *(EIF_POINTER *)(arg1 + RTVA(12162, "item", arg1));
	up3 = tp3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7428, 1017))(Current, up1x, ui4_1x, up2x, up3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {WEL_BITMAP_BUTTON}.set_icon */
void F1889_22908 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_icon";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1888, Current, 1, 1, 28949);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28949);
	RTCC(arg1, 1888, l_feature_name, 1, eif_new_type(1410, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11737, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_icon", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000582, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19017, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = *(EIF_BOOLEAN *)(loc1 + RTVA(11483, "reference_tracked", loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11489, "decrement_reference", loc1))(loc1);
	}
	RTHOOK(6);
	RTDBGAL(Current, 1, 0xF8000582, 0, 0); /* loc1 */
	loc1 = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 19017, 0xF8000582, 0); /* internal_icon */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(19017, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(11483, "reference_tracked", loc1));
	if (tb1) {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11490, "increment_reference", loc1))(loc1);
	}
	RTHOOK(10);
	RTDBGAA(Current, dtype, 19008, 0x10000000, 1); /* current_pixmap */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10593, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19011, dtype))(Current);
	RTHOOK(12);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12162, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10726, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10593, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10876, dtype))(Current, ui4_2x)).it_p);
	up2 = tp2;
	tp3 = *(EIF_POINTER *)(arg1 + RTVA(12162, "item", arg1));
	up3 = tp3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7428, 1017))(Current, up1x, ui4_1x, up2x, up3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {WEL_BITMAP_BUTTON}.unset_bitmap */
void F1889_22909 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unset_bitmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1888, Current, 2, 0, 28935);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28935);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11737, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_bitmap", EX_PRE);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19006, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!(EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19007, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19009, dtype))(Current);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF800057E, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19016, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(6);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(11483, "reference_tracked", loc1));
		if (tb1) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11489, "decrement_reference", loc1))(loc1);
		}
		RTHOOK(8);
		RTDBGAA(Current, dtype, 19016, 0xF800057E, 0); /* internal_bitmap */
		*(EIF_REFERENCE *)(Current + RTWA(19016, dtype)) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(10);
		tb1 = *(EIF_BOOLEAN *)(loc2 + RTVA(11483, "reference_tracked", loc2));
		if (tb1) {
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11489, "decrement_reference", loc2))(loc2);
		}
		RTHOOK(12);
		RTDBGAA(Current, dtype, 19017, 0xF8000582, 0); /* internal_icon */
		*(EIF_REFERENCE *)(Current + RTWA(19017, dtype)) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(13);
	RTDBGAA(Current, dtype, 19008, 0x10000000, 1); /* current_pixmap */
	*(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("pixmap_not_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10593, dtype))(Current)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10592, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != ti4_2) && (EIF_BOOLEAN)(ti4_3 != ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
}

/* {WEL_BITMAP_BUTTON}.unset_icon */
void F1889_22910 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unset_icon";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1888, Current, 2, 0, 28936);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28936);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11737, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_bitmap", EX_PRE);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19006, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!(EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19007, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19009, dtype))(Current);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF800057E, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19016, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(6);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(11483, "reference_tracked", loc1));
		if (tb1) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11489, "decrement_reference", loc1))(loc1);
		}
		RTHOOK(8);
		RTDBGAA(Current, dtype, 19016, 0xF800057E, 0); /* internal_bitmap */
		*(EIF_REFERENCE *)(Current + RTWA(19016, dtype)) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(10);
		tb1 = *(EIF_BOOLEAN *)(loc2 + RTVA(11483, "reference_tracked", loc2));
		if (tb1) {
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11489, "decrement_reference", loc2))(loc2);
		}
		RTHOOK(12);
		RTDBGAA(Current, dtype, 19017, 0xF8000582, 0); /* internal_icon */
		*(EIF_REFERENCE *)(Current + RTWA(19017, dtype)) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(13);
	RTDBGAA(Current, dtype, 19008, 0x10000000, 1); /* current_pixmap */
	*(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("pixmap_not_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10593, dtype))(Current)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(19008, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10592, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != ti4_2) && (EIF_BOOLEAN)(ti4_3 != ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
}

/* {WEL_BITMAP_BUTTON}.default_style */
RTOID (F1889_22911)
EIF_TYPED_VALUE F1889_22911 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_style";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F1889_22911);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1888, Current, 0, 0, 28937);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1888, Current, 28937);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10052, dtype))(Current)).it_i4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10049, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10067, dtype))(Current)).it_i4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10068, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) + ti4_2) + ti4_3);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef Result
}

/* {WEL_BITMAP_BUTTON}.internal_bitmap */
EIF_TYPED_VALUE F1889_22912 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(19016,Dtype(Current)));
	return r;
}


/* {WEL_BITMAP_BUTTON}.internal_icon */
EIF_TYPED_VALUE F1889_22913 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(19017,Dtype(Current)));
	return r;
}


void EIF_Minit1889 (void)
{
	GTCX
	RTOTS (22911,F1889_22911)
}


#ifdef __cplusplus
}
#endif
