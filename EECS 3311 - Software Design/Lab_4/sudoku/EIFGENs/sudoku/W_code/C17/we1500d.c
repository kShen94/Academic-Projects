/*
 * Class WEL_BIT_OPERATIONS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1500 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1500 [] = {0xFF01,246,1499,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1500 [] = {0xFF01,1499,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1500 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1500 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1500 [] = {0xFF01,1499,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1500 [] = {0xFF01,1499,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1500 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1500 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1500 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1500 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1500 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1500 [] = {0xFF01,1499,0xFFFF};


static const struct desc_info desc_1500[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1500), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1500), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1500), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1500), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1500), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1500), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1500), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1500), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1500), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1500), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1500), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1500), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0BB7 /*1499*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1500), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 23241, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 23242, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 23243, 0xFFFFFFFF},
};
void Init1500(void)
{
	IDSC(desc_1500, 0, 1499);
	IDSC(desc_1500 + 1, 1, 1499);
	IDSC(desc_1500 + 32, 875, 1499);
}


#ifdef __cplusplus
}
#endif