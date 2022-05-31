/*
 * Code for class WEL_FIND_ARGUMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1438_15307(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1438_15308(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1438_15309(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1438_15310(EIF_REFERENCE);
extern void F1438_15311(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1438_15312(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1438_15313(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1438_15314(EIF_REFERENCE);
extern void F1438_15315(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1438_15316(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1438_15317(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1438_15318(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1438_15319(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1438_15320(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1438_15321(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1438(void);

#ifdef __cplusplus
}
#endif

#include "wel_find_argument.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_FIND_ARGUMENT}.make */
void F1438_15307 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1437, Current, 1, 2, 22019);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1437, Current, 22019);
	RTCC(arg1, 1437, l_feature_name, 1, eif_new_type(1466, 0x01), 0x01);
	RTCC(arg2, 1437, l_feature_name, 2, eif_new_type(228, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_range_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_range_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12172, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("string_to_find_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12528, dtype))(Current);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF8000523, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1315, 0x01).id);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2888, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12775, dtype))(Current, ur1x);
	RTHOOK(7);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12774, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef arg2
#undef arg1
}

/* {WEL_FIND_ARGUMENT}.range */
EIF_TYPED_VALUE F1438_15308 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "range";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 0, 22020);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1437, Current, 22020);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80005BA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1466, 0x01).id);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12170, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12781, dtype))(Current, up1x)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12169, Dtype(tr1)))(tr1, up1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {WEL_FIND_ARGUMENT}.string_to_find */
EIF_TYPED_VALUE F1438_15309 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12772,Dtype(Current)));
	return r;
}


/* {WEL_FIND_ARGUMENT}.range_out */
EIF_TYPED_VALUE F1438_15310 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "range_out";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 0, 22022);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1437, Current, 22022);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80005BA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1466, 0x01).id);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12170, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12783, dtype))(Current, up1x)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12169, Dtype(tr1)))(tr1, up1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {WEL_FIND_ARGUMENT}.set_range */
void F1438_15311 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_range";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 1, 22023);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1437, Current, 22023);
	RTCC(arg1, 1437, l_feature_name, 1, eif_new_type(1466, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_range_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_range_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12172, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12170, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(arg1 + RTVA(12170, "item", arg1));
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12779, dtype))(Current, up1x, up2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef arg1
}

/* {WEL_FIND_ARGUMENT}.set_string_to_find */
void F1438_15312 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_string_to_find";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 1, 22024);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1437, Current, 22024);
	RTCC(arg1, 1437, l_feature_name, 1, eif_new_type(1315, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_to_find_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_to_find_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11658, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 12772, 0xF8000523, 0); /* string_to_find */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(12772, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12170, dtype));
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2895, "item", arg1))(arg1)).it_p);
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12780, dtype))(Current, up1x, up2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef arg1
}

/* {WEL_FIND_ARGUMENT}.structure_size */
RTOID (F1438_15313)
EIF_TYPED_VALUE F1438_15313 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "structure_size";
	RTEX;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F1438_15313);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 0, 22025);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1437, Current, 22025);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12776, dtype))(Current)).it_i4);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef Result
}

/* {WEL_FIND_ARGUMENT}.c_size_of_findargument */
EIF_TYPED_VALUE F1438_15314 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_size_of_findargument";
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
	
	RTEAA(l_feature_name, 1437, Current, 0, 0, 22011);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1437, Current, 22011);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) sizeof (FINDTEXTEX);
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

/* {WEL_FIND_ARGUMENT}.cwel_findargument_initialize_range_out_min */
void F1438_15315 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_findargument_initialize_range_out_min";
	RTEX;
#define arg1 arg1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 1, 22012);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1437, Current, 22012);
	RTIV(Current, RTAL);
	cwel_findargument_initialize_range_out_min((arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WEL_FIND_ARGUMENT}.cwel_findargument_initialize_range_out_max */
void F1438_15316 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_findargument_initialize_range_out_max";
	RTEX;
#define arg1 arg1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 1, 22013);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1437, Current, 22013);
	RTIV(Current, RTAL);
	cwel_findargument_initialize_range_out_max((arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WEL_FIND_ARGUMENT}.cwel_findargument_set_range */
void F1438_15317 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_findargument_set_range";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 2, 22014);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1437, Current, 22014);
	RTIV(Current, RTAL);
	cwel_findargument_set_range((arg1), (arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_FIND_ARGUMENT}.cwel_findargument_set_string_to_find */
void F1438_15318 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_findargument_set_string_to_find";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 2, 22015);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1437, Current, 22015);
	RTIV(Current, RTAL);
	cwel_findargument_set_string_to_find((arg1), (arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_FIND_ARGUMENT}.cwel_findargument_get_range */
EIF_TYPED_VALUE F1438_15319 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_findargument_get_range";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 1, 22016);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1437, Current, 22016);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) cwel_findargument_get_range(((FINDTEXTEX*) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {WEL_FIND_ARGUMENT}.cwel_findargument_get_string_to_find */
EIF_TYPED_VALUE F1438_15320 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_findargument_get_string_to_find";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 1, 22017);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1437, Current, 22017);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) cwel_findargument_get_string_to_find(((FINDTEXTEX*) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {WEL_FIND_ARGUMENT}.cwel_findargument_get_range_out */
EIF_TYPED_VALUE F1438_15321 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_findargument_get_range_out";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1437, Current, 0, 1, 22018);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1437, Current, 22018);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) cwel_findargument_get_range_out(((FINDTEXTEX*) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

void EIF_Minit1438 (void)
{
	GTCX
	RTOTS (15313,F1438_15313)
}


#ifdef __cplusplus
}
#endif
