/*
 * Code for class YY_COMPRESSED_SCANNER_SKELETON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1775_20243(EIF_REFERENCE);
extern void F1775_20244(EIF_REFERENCE);
extern void F1775_20245(EIF_REFERENCE);
extern void F1775_20246(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20247(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20248(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20249(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20250(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20251(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20252(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20253(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20254(EIF_REFERENCE);
extern void F1775_20255(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1775_20257(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20258(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1775_20259(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20260(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20261(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20262(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20263(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20264(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20265(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20266(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20273(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20275(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20276(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20277(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20278(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1775_20279(EIF_REFERENCE);
extern void F1775_25453(EIF_REFERENCE, int);
extern void EIF_Minit1775(void);

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

/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_initialize */
void F1775_20243 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_initialize";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1774, Current, 0, 0, 26407);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1774, Current, 26407);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16884, 1773))(Current);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 16938, 0xF8000121, 0); /* yy_state_stack */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10516, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16866, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,2);
		tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9285, "content", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
		RTNHOOK(3,3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9210, "count", tr3))(tr3)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7603, "make", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWA(16938, dtype)) = (EIF_REFERENCE) tr2;
	} else {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 16938, 0xF8000121, 0); /* yy_state_stack */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10516, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7603, "make", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + RTWA(16938, dtype)) = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ui4_1
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.reset */
void F1775_20244 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1774, Current, 0, 0, 26408);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1774, Current, 26408);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16834, 1773))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 16937, 0x04000000, 1); /* yy_rejected */
	*(EIF_BOOLEAN *)(Current + RTWA(16937, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 16939, 0x10000000, 1); /* yy_state_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 16940, 0x10000000, 1); /* yy_full_match */
	*(EIF_INTEGER_32 *)(Current + RTWA(16940, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 16941, 0x10000000, 1); /* yy_lp */
	*(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 16942, 0x10000000, 1); /* yy_looking_for_trail_begin */
	*(EIF_INTEGER_32 *)(Current + RTWA(16942, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 16943, 0x10000000, 1); /* yy_full_lp */
	*(EIF_INTEGER_32 *)(Current + RTWA(16943, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 16944, 0x10000000, 1); /* yy_full_state */
	*(EIF_INTEGER_32 *)(Current + RTWA(16944, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.read_token */
void F1775_20245 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_token";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc14);
	RTLR(5,loc15);
	RTLR(6,loc16);
	RTLR(7,loc17);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_BOOL, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	
	RTEAA(l_feature_name, 1774, Current, 17, 0, 26409);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1774, Current, 26409);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16838, 0x10000000, 1); /* last_token */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16883, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16838, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
	loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16952, dtype))(Current)).it_i4);
	loc7 = (EIF_INTEGER_32) loc7;
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16838, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16883, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) break;
		RTHOOK(4);
		switch (loc7) {
			case 1L:
				RTHOOK(5);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(16908, dtype));
				if (tb1) {
					RTHOOK(6);
					RTDBGAA(Current, dtype, 16909, 0x10000000, 1); /* yy_more_len */
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
					ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16904, dtype));
					*(EIF_INTEGER_32 *)(Current + RTWA(16909, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_3 - ti4_4);
					RTHOOK(7);
					RTDBGAA(Current, dtype, 16908, 0x04000000, 1); /* yy_more_flag */
					*(EIF_BOOLEAN *)(Current + RTWA(16908, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(8);
					RTDBGAA(Current, dtype, 16909, 0x10000000, 1); /* yy_more_len */
					*(EIF_INTEGER_32 *)(Current + RTWA(16909, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(9);
					RTDBGAA(Current, dtype, 16927, 0x10000000, 1); /* line */
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(16905, dtype));
					*(EIF_INTEGER_32 *)(Current + RTWA(16927, dtype)) = (EIF_INTEGER_32) ti4_3;
					RTHOOK(10);
					RTDBGAA(Current, dtype, 16926, 0x10000000, 1); /* column */
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(16906, dtype));
					*(EIF_INTEGER_32 *)(Current + RTWA(16926, dtype)) = (EIF_INTEGER_32) ti4_3;
					RTHOOK(11);
					RTDBGAA(Current, dtype, 16925, 0x10000000, 1); /* position */
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(16907, dtype));
					*(EIF_INTEGER_32 *)(Current + RTWA(16925, dtype)) = (EIF_INTEGER_32) ti4_3;
				}
				RTHOOK(12);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
				RTHOOK(13);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc1;
				RTHOOK(14);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16866, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,1);
				tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(9292, "beginning_of_line", tr1));
				if (tb1) {
					RTHOOK(15);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(16900, dtype));
					loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(16);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(16900, dtype));
				}
				RTHOOK(17);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
				if (tb1) {
					RTHOOK(18);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10516, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(18,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					ur1 = tr2;
					ui4_1 = loc3;
					ui4_2 = ((EIF_INTEGER_32) 0L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7608, "force", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
					RTHOOK(19);
					RTDBGAA(Current, dtype, 16939, 0x10000000, 1); /* yy_state_count */
					*(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
				RTHOOK(20);
				RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16953, dtype))(Current)).it_i4);
				loc7 = (EIF_INTEGER_32) loc7;
				break;
			case 2L:
				RTHOOK(21);
				RTDBGAL(Current, 14, 0xF8000206, 0, 0); /* loc14 */
				loc14 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16902, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTHOOK(22);
				RTDBGAL(Current, 13, 0x04000000, 1, 0); /* loc13 */
				loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				for (;;) {
					RTHOOK(23);
					if (loc13) break;
					RTHOOK(24);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16933, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc15 = tr1;
					if (EIF_TEST(loc15)) {
						RTHOOK(25);
						if ((EIF_BOOLEAN)(loc14 != NULL)) {
							RTHOOK(26);
							RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
							ui4_1 = loc1;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", loc14))(loc14, ui4_1x)).it_c1);
							RTNHOOK(26,1);
							ti4_3 = (EIF_INTEGER_32) (tc1);
							ui4_1 = ti4_3;
							ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", loc15))(loc15, ui4_1x)).it_i4);
							loc8 = (EIF_INTEGER_32) ti4_3;
						} else {
							RTHOOK(27);
							RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16901, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(27,1);
							ui4_1 = loc1;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9209, "item", tr1))(tr1, ui4_1x)).it_c1);
							RTNHOOK(27,2);
							ti4_3 = (EIF_INTEGER_32) (tc1);
							ui4_1 = ti4_3;
							ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", loc15))(loc15, ui4_1x)).it_i4);
							loc8 = (EIF_INTEGER_32) ti4_3;
						}
					} else {
						RTHOOK(28);
						if ((EIF_BOOLEAN)(loc14 != NULL)) {
							RTHOOK(29);
							RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
							ui4_1 = loc1;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", loc14))(loc14, ui4_1x)).it_c1);
							RTNHOOK(29,1);
							ti4_3 = (EIF_INTEGER_32) (tc1);
							loc8 = (EIF_INTEGER_32) ti4_3;
						} else {
							RTHOOK(30);
							RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16901, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(30,1);
							ui4_1 = loc1;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9209, "item", tr1))(tr1, ui4_1x)).it_c1);
							RTNHOOK(30,2);
							ti4_3 = (EIF_INTEGER_32) (tc1);
							loc8 = (EIF_INTEGER_32) ti4_3;
						}
					}
					RTHOOK(31);
					tb1 = '\0';
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
					if ((EIF_BOOLEAN) !tb2) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(31,1);
						ui4_1 = loc3;
						ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
						tb1 = (EIF_BOOLEAN)(ti4_3 != ((EIF_INTEGER_32) 0L));
					}
					if (tb1) {
						RTHOOK(32);
						RTDBGAA(Current, dtype, 16910, 0x10000000, 1); /* yy_last_accepting_state */
						*(EIF_INTEGER_32 *)(Current + RTWA(16910, dtype)) = (EIF_INTEGER_32) loc3;
						RTHOOK(33);
						RTDBGAA(Current, dtype, 16911, 0x10000000, 1); /* yy_last_accepting_cpos */
						*(EIF_INTEGER_32 *)(Current + RTWA(16911, dtype)) = (EIF_INTEGER_32) loc1;
					}
					for (;;) {
						RTHOOK(34);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16930, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(34,1);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16931, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						RTNHOOK(34,2);
						ui4_1 = loc3;
						ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr2))(tr2, ui4_1x)).it_i4);
						ui4_1 = (EIF_INTEGER_32) (ti4_3 + loc8);
						ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
						if ((EIF_BOOLEAN)(ti4_3 == loc3)) break;
						RTHOOK(35);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16932, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(35,1);
						ui4_1 = loc3;
						ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
						loc3 = (EIF_INTEGER_32) ti4_4;
						RTHOOK(36);
						tb1 = '\0';
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16934, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc16 = tr1;
						if (EIF_TEST(loc16)) {
							ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16947, dtype))(Current)).it_i4);
							tb1 = (EIF_BOOLEAN) (loc3 >= ti4_4);
						}
						if (tb1) {
							RTHOOK(37);
							RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
							ui4_1 = loc8;
							ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", loc16))(loc16, ui4_1x)).it_i4);
							loc8 = (EIF_INTEGER_32) ti4_4;
						}
					}
					RTHOOK(38);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16929, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(38,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16931, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(38,2);
					ui4_1 = loc3;
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr2))(tr2, ui4_1x)).it_i4);
					ui4_1 = (EIF_INTEGER_32) (ti4_4 + loc8);
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
					loc3 = (EIF_INTEGER_32) ti4_4;
					RTHOOK(39);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
					if (tb1) {
						RTHOOK(40);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10516, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(40,1);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						ur1 = tr2;
						ui4_1 = loc3;
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype));
						ui4_2 = ti4_4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7608, "force", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
						RTHOOK(41);
						RTDBGAA(Current, dtype, 16939, 0x10000000, 1); /* yy_state_count */
						(*(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype)))++;
					}
					RTHOOK(42);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
					RTHOOK(43);
					RTDBGAL(Current, 13, 0x04000000, 1, 0); /* loc13 */
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16946, dtype))(Current)).it_i4);
					loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == ti4_4);
				}
				RTHOOK(44);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(45);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16911, dtype));
					RTHOOK(46);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(16910, dtype));
				}
				RTHOOK(47);
				RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16954, dtype))(Current)).it_i4);
				loc7 = (EIF_INTEGER_32) loc7;
				break;
			case 3L:
				RTHOOK(48);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(49);
					RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(49,1);
					ui4_1 = loc3;
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
					loc6 = (EIF_INTEGER_32) ti4_4;
					RTHOOK(50);
					RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
					loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16955, dtype))(Current)).it_i4);
					loc7 = (EIF_INTEGER_32) loc7;
				} else {
					RTHOOK(51);
					RTDBGAA(Current, dtype, 16939, 0x10000000, 1); /* yy_state_count */
					(*(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype)))--;
					RTHOOK(52);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(52,1);
					ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype));
					ui4_1 = ti4_4;
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
					loc3 = (EIF_INTEGER_32) ti4_4;
					RTHOOK(53);
					RTDBGAA(Current, dtype, 16941, 0x10000000, 1); /* yy_lp */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(53,1);
					ui4_1 = loc3;
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
					*(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype)) = (EIF_INTEGER_32) ti4_4;
					RTHOOK(54);
					RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
					loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16956, dtype))(Current)).it_i4);
					loc7 = (EIF_INTEGER_32) loc7;
				}
				break;
			case 5L:
				RTHOOK(55);
				RTCT0("reject_used", EX_CHECK);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
				if (tb1) {
					RTCK0;
				} else {
					RTCF0;
				}
				RTHOOK(56);
				RTCT0("yy_acclist_not_void", EX_CHECK);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16936, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc17 = tr1;
				if (EIF_TEST(loc17)) {
					RTCK0;
				} else {
					RTCF0;
				}
				RTHOOK(57);
				RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
				loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				for (;;) {
					RTHOOK(58);
					if (loc9) break;
					RTHOOK(59);
					tb1 = '\0';
					ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype));
					if ((EIF_BOOLEAN)(ti4_4 != ((EIF_INTEGER_32) 0L))) {
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(59,1);
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
						tb1 = (EIF_BOOLEAN) (ti4_4 < ti4_5);
					}
					if (tb1) {
						RTHOOK(60);
						RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype));
						ui4_1 = ti4_4;
						ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", loc17))(loc17, ui4_1x)).it_i4);
						loc6 = (EIF_INTEGER_32) ti4_4;
						RTHOOK(61);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16949, dtype))(Current)).it_b);
						if (tb1) {
							RTHOOK(62);
							tb1 = '\01';
							ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16951, dtype))(Current)).it_i4);
							if (!(EIF_BOOLEAN) (loc6 < (EIF_INTEGER_32) -ti4_4)) {
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16942, dtype));
								tb1 = (EIF_BOOLEAN)(ti4_4 != ((EIF_INTEGER_32) 0L));
							}
							if (tb1) {
								RTHOOK(63);
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16942, dtype));
								if ((EIF_BOOLEAN)(loc6 == ti4_4)) {
									RTHOOK(64);
									RTDBGAA(Current, dtype, 16942, 0x10000000, 1); /* yy_looking_for_trail_begin */
									*(EIF_INTEGER_32 *)(Current + RTWA(16942, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
									RTHOOK(65);
									RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
									ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16951, dtype))(Current)).it_i4);
									loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc6 - ti4_4);
									RTHOOK(66);
									RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								} else {
									RTHOOK(67);
									RTDBGAA(Current, dtype, 16941, 0x10000000, 1); /* yy_lp */
									(*(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype)))++;
								}
							} else {
								RTHOOK(68);
								if ((EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 0L))) {
									RTHOOK(69);
									RTDBGAA(Current, dtype, 16942, 0x10000000, 1); /* yy_looking_for_trail_begin */
									ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16951, dtype))(Current)).it_i4);
									*(EIF_INTEGER_32 *)(Current + RTWA(16942, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - ti4_4);
									RTHOOK(70);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16948, dtype))(Current)).it_b);
									if (tb1) {
										RTHOOK(71);
										RTDBGAA(Current, dtype, 16940, 0x10000000, 1); /* yy_full_match */
										*(EIF_INTEGER_32 *)(Current + RTWA(16940, dtype)) = (EIF_INTEGER_32) loc1;
										RTHOOK(72);
										RTDBGAA(Current, dtype, 16944, 0x10000000, 1); /* yy_full_state */
										ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype));
										*(EIF_INTEGER_32 *)(Current + RTWA(16944, dtype)) = (EIF_INTEGER_32) ti4_4;
										RTHOOK(73);
										RTDBGAA(Current, dtype, 16943, 0x10000000, 1); /* yy_full_lp */
										ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype));
										*(EIF_INTEGER_32 *)(Current + RTWA(16943, dtype)) = (EIF_INTEGER_32) ti4_4;
									}
									RTHOOK(74);
									RTDBGAA(Current, dtype, 16941, 0x10000000, 1); /* yy_lp */
									(*(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype)))++;
								} else {
									RTHOOK(75);
									RTDBGAA(Current, dtype, 16940, 0x10000000, 1); /* yy_full_match */
									*(EIF_INTEGER_32 *)(Current + RTWA(16940, dtype)) = (EIF_INTEGER_32) loc1;
									RTHOOK(76);
									RTDBGAA(Current, dtype, 16944, 0x10000000, 1); /* yy_full_state */
									ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype));
									*(EIF_INTEGER_32 *)(Current + RTWA(16944, dtype)) = (EIF_INTEGER_32) ti4_4;
									RTHOOK(77);
									RTDBGAA(Current, dtype, 16943, 0x10000000, 1); /* yy_full_lp */
									ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype));
									*(EIF_INTEGER_32 *)(Current + RTWA(16943, dtype)) = (EIF_INTEGER_32) ti4_4;
									RTHOOK(78);
									RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								}
							}
						} else {
							RTHOOK(79);
							RTDBGAA(Current, dtype, 16940, 0x10000000, 1); /* yy_full_match */
							*(EIF_INTEGER_32 *)(Current + RTWA(16940, dtype)) = (EIF_INTEGER_32) loc1;
							RTHOOK(80);
							RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
					} else {
						RTHOOK(81);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						loc1--;
						RTHOOK(82);
						RTDBGAA(Current, dtype, 16939, 0x10000000, 1); /* yy_state_count */
						(*(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype)))--;
						RTHOOK(83);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(83,1);
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype));
						ui4_1 = ti4_4;
						ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
						loc3 = (EIF_INTEGER_32) ti4_4;
						RTHOOK(84);
						RTDBGAA(Current, dtype, 16941, 0x10000000, 1); /* yy_lp */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(84,1);
						ui4_1 = loc3;
						ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
						*(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype)) = (EIF_INTEGER_32) ti4_4;
					}
				}
				RTHOOK(85);
				RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
				loc10 = *(EIF_INTEGER_32 *)(Current + RTWA(16905, dtype));
				RTHOOK(86);
				RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
				loc11 = *(EIF_INTEGER_32 *)(Current + RTWA(16906, dtype));
				RTHOOK(87);
				RTDBGAL(Current, 12, 0x10000000, 1, 0); /* loc12 */
				loc12 = *(EIF_INTEGER_32 *)(Current + RTWA(16907, dtype));
				RTHOOK(88);
				RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16955, dtype))(Current)).it_i4);
				loc7 = (EIF_INTEGER_32) loc7;
				break;
			case 4L:
				RTHOOK(89);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16909, dtype));
				loc2 -= ti4_4;
				RTHOOK(90);
				RTDBGAA(Current, dtype, 16904, 0x10000000, 1); /* yy_start */
				*(EIF_INTEGER_32 *)(Current + RTWA(16904, dtype)) = (EIF_INTEGER_32) loc2;
				RTHOOK(91);
				RTDBGAA(Current, dtype, 16903, 0x10000000, 1); /* yy_end */
				*(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype)) = (EIF_INTEGER_32) loc1;
				RTHOOK(92);
				RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16952, dtype))(Current)).it_i4);
				loc7 = (EIF_INTEGER_32) loc7;
				RTHOOK(93);
				if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(94);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
					if ((EIF_BOOLEAN) !tb1) {
						RTHOOK(95);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16911, dtype));
						RTHOOK(96);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16909, dtype));
						loc2 += ti4_4;
						RTHOOK(97);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(16910, dtype));
						RTHOOK(98);
						RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
						loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16954, dtype))(Current)).it_i4);
						loc7 = (EIF_INTEGER_32) loc7;
					} else {
						RTHOOK(99);
						RTDBGAA(Current, dtype, 16838, 0x10000000, 1); /* last_token */
						ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16882, dtype))(Current)).it_i4);
						*(EIF_INTEGER_32 *)(Current + RTWA(16838, dtype)) = (EIF_INTEGER_32) ti4_4;
						RTHOOK(100);
						tr1 = RTMS_EX_H("fatal scanner internal error: no action found",45,1022935396);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16879, dtype))(Current, ur1x);
					}
				} else {
					RTHOOK(101);
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16918, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(loc6 == ti4_4)) {
						RTHOOK(102);
						RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc2) - ((EIF_INTEGER_32) 1L));
						RTHOOK(103);
						ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16866, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(103,1);
						ti4_5 = *(EIF_INTEGER_32 *)(tr1 + RTVA(9286, "count", tr1));
						if ((EIF_BOOLEAN) (ti4_4 <= (EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 1L)))) {
							RTHOOK(104);
							RTDBGAA(Current, dtype, 16903, 0x10000000, 1); /* yy_end */
							*(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc5);
							RTHOOK(105);
							RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
							loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16898, dtype))(Current)).it_i4);
							RTHOOK(106);
							RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
							ui4_1 = loc3;
							loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16899, dtype))(Current, ui4_1x)).it_i4);
							RTHOOK(107);
							RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
							ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16909, dtype));
							loc2 += ti4_4;
							RTHOOK(108);
							if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
								RTHOOK(109);
								RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
								loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
								loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
								RTHOOK(110);
								RTDBGAA(Current, dtype, 16903, 0x10000000, 1); /* yy_end */
								*(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype)) = (EIF_INTEGER_32) loc1;
								RTHOOK(111);
								RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
								loc3 = (EIF_INTEGER_32) loc4;
								RTHOOK(112);
								RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
								loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16953, dtype))(Current)).it_i4);
								loc7 = (EIF_INTEGER_32) loc7;
							} else {
								RTHOOK(113);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
								if (tb1) {
									RTHOOK(114);
									RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
									loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
									RTHOOK(115);
									RTDBGAA(Current, dtype, 16939, 0x10000000, 1); /* yy_state_count */
									(*(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype)))--;
								} else {
									RTHOOK(116);
									RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
									loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16911, dtype));
									RTHOOK(117);
									RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
									loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(16910, dtype));
								}
								RTHOOK(118);
								RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
								loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16954, dtype))(Current)).it_i4);
								loc7 = (EIF_INTEGER_32) loc7;
							}
						} else {
							RTHOOK(119);
							RTDBGAA(Current, dtype, 16903, 0x10000000, 1); /* yy_end */
							(*(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype)))--;
							RTHOOK(120);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16886, dtype))(Current);
							RTHOOK(121);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16866, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(121,1);
							tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(9297, "filled", tr1));
							if (tb1) {
								RTHOOK(122);
								RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
								loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16898, dtype))(Current)).it_i4);
								RTHOOK(123);
								RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
								loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
								RTHOOK(124);
								RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
								loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(16904, dtype));
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16909, dtype));
								loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_4);
								RTHOOK(125);
								RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
								loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16953, dtype))(Current)).it_i4);
								loc7 = (EIF_INTEGER_32) loc7;
							} else {
								RTHOOK(126);
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
								ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(16904, dtype));
								ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(16909, dtype));
								if ((EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_4 - ti4_5) - ti4_6) != ((EIF_INTEGER_32) 0L))) {
									RTHOOK(127);
									RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
									loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16898, dtype))(Current)).it_i4);
									RTHOOK(128);
									RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
									loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
									RTHOOK(129);
									RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
									loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(16904, dtype));
									ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16909, dtype));
									loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_4);
									RTHOOK(130);
									RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
									loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16954, dtype))(Current)).it_i4);
									loc7 = (EIF_INTEGER_32) loc7;
								} else {
									RTHOOK(131);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16860, dtype))(Current)).it_b);
									if (tb1) {
										RTHOOK(132);
										RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
										loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(16904, dtype));
										RTHOOK(133);
										RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
										loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
										RTHOOK(134);
										ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16900, dtype));
										ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 2L));
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16892, dtype))(Current, ui4_1x);
									}
								}
							}
						}
					} else {
						RTHOOK(135);
						ui4_1 = loc6;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16891, dtype))(Current, ui4_1x);
						RTHOOK(136);
						tb1 = *(EIF_BOOLEAN *)(Current + RTWA(16937, dtype));
						if (tb1) {
							RTHOOK(137);
							RTDBGAA(Current, dtype, 16937, 0x04000000, 1); /* yy_rejected */
							*(EIF_BOOLEAN *)(Current + RTWA(16937, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(138);
							RTDBGAA(Current, dtype, 16905, 0x10000000, 1); /* yy_line */
							*(EIF_INTEGER_32 *)(Current + RTWA(16905, dtype)) = (EIF_INTEGER_32) loc10;
							RTHOOK(139);
							RTDBGAA(Current, dtype, 16906, 0x10000000, 1); /* yy_column */
							*(EIF_INTEGER_32 *)(Current + RTWA(16906, dtype)) = (EIF_INTEGER_32) loc11;
							RTHOOK(140);
							RTDBGAA(Current, dtype, 16907, 0x10000000, 1); /* yy_position */
							*(EIF_INTEGER_32 *)(Current + RTWA(16907, dtype)) = (EIF_INTEGER_32) loc12;
							RTHOOK(141);
							RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
							loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16940, dtype));
							RTHOOK(142);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16949, dtype))(Current)).it_b);
							if (tb1) {
								RTHOOK(143);
								RTDBGAA(Current, dtype, 16941, 0x10000000, 1); /* yy_lp */
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16943, dtype));
								*(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype)) = (EIF_INTEGER_32) ti4_4;
								RTHOOK(144);
								RTDBGAA(Current, dtype, 16939, 0x10000000, 1); /* yy_state_count */
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16944, dtype));
								*(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype)) = (EIF_INTEGER_32) ti4_4;
								RTHOOK(145);
								RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(145,1);
								ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype));
								ui4_1 = (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L));
								ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
								loc3 = (EIF_INTEGER_32) ti4_4;
							}
							RTHOOK(146);
							RTDBGAA(Current, dtype, 16941, 0x10000000, 1); /* yy_lp */
							(*(EIF_INTEGER_32 *)(Current + RTWA(16941, dtype)))++;
							RTHOOK(147);
							RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
							loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16956, dtype))(Current)).it_i4);
							loc7 = (EIF_INTEGER_32) loc7;
						}
					}
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	if (
		WDBG(1774,"gelex")
	) {
		RTHOOK(148);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16880, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(149);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(19);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.reject */
void F1775_20246 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reject";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1774, Current, 0, 0, 26410);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1774, Current, 26410);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16948, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 16937, 0x04000000, 1); /* yy_rejected */
		*(EIF_BOOLEAN *)(Current + RTWA(16937, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 16838, 0x10000000, 1); /* last_token */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16882, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(16838, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		tr1 = RTMS_EX_H("fatal scanner reject error",26,387775346);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16879, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_nxt */
EIF_TYPED_VALUE F1775_20247 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16929,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_chk */
EIF_TYPED_VALUE F1775_20248 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16930,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_base */
EIF_TYPED_VALUE F1775_20249 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16931,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_def */
EIF_TYPED_VALUE F1775_20250 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16932,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_ec */
EIF_TYPED_VALUE F1775_20251 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16933,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_meta */
EIF_TYPED_VALUE F1775_20252 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16934,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_accept */
EIF_TYPED_VALUE F1775_20253 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16935,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_acclist */
EIF_TYPED_VALUE F1775_20254 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16936,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_set_content */
void F1775_20255 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_set_content";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1774, Current, 1, 1, 26419);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1774, Current, 26419);
	RTCC(arg1, 1774, l_feature_name, 1, RTWCT(16901, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_content_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 16901, 0xF800055E, 0); /* yy_content */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(16901, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 16902, 0xF8000206, 0); /* yy_content_area */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12082, "as_special", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(16902, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9210, "count", arg1))(arg1)).it_i4);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2451, "capacity", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 < loc1)) {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 16938, 0xF8000121, 0); /* yy_state_stack */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10516, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = tr2;
			ui4_1 = loc1;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7611, "aliased_resized_area", tr1))(tr1, ur1x, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(16938, dtype)) = (EIF_REFERENCE) tr2;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("yy_content_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16901, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_previous_state */
EIF_TYPED_VALUE F1775_20257 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_previous_state";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLIU(7);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1774, Current, 6, 0, 26420);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1774, Current, 26420);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16866, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(9292, "beginning_of_line", tr1));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = *(EIF_INTEGER_32 *)(Current + RTWA(16900, dtype));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = *(EIF_INTEGER_32 *)(Current + RTWA(16900, dtype));
	}
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10516, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = tr2;
		ui4_1 = Result;
		ui4_2 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7608, "force", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 16939, 0x10000000, 1); /* yy_state_count */
		*(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTHOOK(7);
	RTDBGAL(Current, 4, 0xF8000206, 0, 0); /* loc4 */
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16902, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(8);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(16904, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16909, dtype));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
	RTHOOK(9);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		RTHOOK(11);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTHOOK(12);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", loc4))(loc4, ui4_1x)).it_c1);
			RTNHOOK(12,1);
			ti4_1 = (EIF_INTEGER_32) (tc1);
			loc3 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(13);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16901, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9209, "item", tr1))(tr1, ui4_1x)).it_c1);
			RTNHOOK(13,2);
			ti4_1 = (EIF_INTEGER_32) (tc1);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(14);
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(15);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16922, dtype))(Current)).it_i4);
		} else {
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16933, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				RTHOOK(17);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", loc5))(loc5, ui4_1x)).it_i4);
				loc3 = (EIF_INTEGER_32) ti4_1;
			}
		}
		RTHOOK(18);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(19,1);
			ui4_1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(20);
				RTDBGAA(Current, dtype, 16910, 0x10000000, 1); /* yy_last_accepting_state */
				*(EIF_INTEGER_32 *)(Current + RTWA(16910, dtype)) = (EIF_INTEGER_32) Result;
				RTHOOK(21);
				RTDBGAA(Current, dtype, 16911, 0x10000000, 1); /* yy_last_accepting_cpos */
				*(EIF_INTEGER_32 *)(Current + RTWA(16911, dtype)) = (EIF_INTEGER_32) loc1;
			}
		}
		for (;;) {
			RTHOOK(22);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16930, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(22,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16931, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(22,2);
			ui4_1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr2))(tr2, ui4_1x)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc3);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == Result)) break;
			RTHOOK(23);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16932, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(23,1);
			ui4_1 = Result;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
			Result = (EIF_INTEGER_32) ti4_2;
			RTHOOK(24);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16934, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = tr1;
			if (EIF_TEST(loc6)) {
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16947, dtype))(Current)).it_i4);
				tb1 = (EIF_BOOLEAN) (Result >= ti4_2);
			}
			if (tb1) {
				RTHOOK(25);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				ui4_1 = loc3;
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", loc6))(loc6, ui4_1x)).it_i4);
				loc3 = (EIF_INTEGER_32) ti4_2;
			}
		}
		RTHOOK(26);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16929, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(26,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16931, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(26,2);
		ui4_1 = Result;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr2))(tr2, ui4_1x)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + loc3);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_2;
		RTHOOK(27);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(28);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10516, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(28,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = tr2;
			ui4_1 = Result;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype));
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7608, "force", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
			RTHOOK(29);
			RTDBGAA(Current, dtype, 16939, 0x10000000, 1); /* yy_state_count */
			(*(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype)))++;
		}
		RTHOOK(30);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_null_trans_state */
EIF_TYPED_VALUE F1775_20258 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_null_trans_state";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1774, Current, 3, 1, 26421);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1774, Current, 26421);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(3);
			RTDBGAA(Current, dtype, 16910, 0x10000000, 1); /* yy_last_accepting_state */
			*(EIF_INTEGER_32 *)(Current + RTWA(16910, dtype)) = (EIF_INTEGER_32) arg1;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 16911, 0x10000000, 1); /* yy_last_accepting_cpos */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16903, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(16911, dtype)) = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTHOOK(5);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) arg1;
	RTHOOK(6);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16922, dtype))(Current)).it_i4);
	for (;;) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16930, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16931, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(7,2);
		ui4_1 = Result;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr2))(tr2, ui4_1x)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == Result)) break;
		RTHOOK(8);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16932, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = Result;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_2;
		RTHOOK(9);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16934, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16947, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (Result >= ti4_2);
		}
		if (tb1) {
			RTHOOK(10);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			ui4_1 = loc1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", loc3))(loc3, ui4_1x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_2;
		}
	}
	RTHOOK(11);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16929, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(11,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16931, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(11,2);
	ui4_1 = Result;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr2))(tr2, ui4_1x)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_2 + loc1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2621, "item", tr1))(tr1, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_2;
	RTHOOK(12);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10516, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = tr2;
		ui4_1 = Result;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7608, "force", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
		RTHOOK(14);
		RTDBGAA(Current, dtype, 16939, 0x10000000, 1); /* yy_state_count */
		(*(EIF_INTEGER_32 *)(Current + RTWA(16939, dtype)))++;
	}
	RTHOOK(15);
	RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16946, dtype))(Current)).it_i4);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN)(Result == ti4_2);
	RTHOOK(16);
	if (loc2) {
		RTHOOK(17);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_rejected */
EIF_TYPED_VALUE F1775_20259 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16937,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_state_stack */
EIF_TYPED_VALUE F1775_20260 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16938,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_state_count */
EIF_TYPED_VALUE F1775_20261 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16939,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_full_match */
EIF_TYPED_VALUE F1775_20262 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16940,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_lp */
EIF_TYPED_VALUE F1775_20263 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16941,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_looking_for_trail_begin */
EIF_TYPED_VALUE F1775_20264 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16942,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_full_lp */
EIF_TYPED_VALUE F1775_20265 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16943,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_full_state */
EIF_TYPED_VALUE F1775_20266 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16944,Dtype(Current)));
	return r;
}


/* {YY_COMPRESSED_SCANNER_SKELETON}.yybacking_up */
EIF_TYPED_VALUE F1775_20273 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yynext_token */
EIF_TYPED_VALUE F1775_20275 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yymatch */
EIF_TYPED_VALUE F1775_20276 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yyfind_action */
EIF_TYPED_VALUE F1775_20277 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yydo_action */
EIF_TYPED_VALUE F1775_20278 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yyfind_rule */
EIF_TYPED_VALUE F1775_20279 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}._invariant */
void F1775_25453 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1774, Current, 0, 25452);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("yy_nxt_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16929, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_chk_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16930, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_base_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_def_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16932, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_accept_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("yy_state_stack_not_void", Current);
	tb1 = '\01';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16950, dtype))(Current)).it_b);
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16938, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit1775 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
