/*
 * Class EV_PIXEL_BUFFER_PIXEL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1020 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1020 [] = {0xFF01,246,1019,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1020 [] = {0xFF01,1019,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1020 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1020 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1020 [] = {0xFF01,1019,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1020 [] = {0xFF01,1019,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1020 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1020 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1020 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1020 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1020 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1020 [] = {0xFF01,1019,0xFFFF};


static const struct desc_info desc_1020[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1020), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1020), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1020), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1020), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1020), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1020), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1020), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1020), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1020), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1020), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1020), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1020), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15942, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07F7 /*1019*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1020), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 15943, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 15944, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 15945, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 15946, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A7 /*211*/), 15947, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15948, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15949, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15950, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15951, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15952, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15953, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15954, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15955, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 15956, 8},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 15957, 9},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 15958, 10},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 15959, 11},
	{EIF_GENERIC(NULL), 15960, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A7 /*211*/), 15961, 12},
	{EIF_NON_GENERIC(0x01A7 /*211*/), 15962, 16},
	{EIF_NON_GENERIC(0x01A7 /*211*/), 15940, 20},
	{EIF_NON_GENERIC(0x0CE7 /*1651*/), 15941, 0},
};
void Init1020(void)
{
	IDSC(desc_1020, 0, 1019);
	IDSC(desc_1020 + 1, 1, 1019);
	IDSC(desc_1020 + 32, 573, 1019);
}


#ifdef __cplusplus
}
#endif
