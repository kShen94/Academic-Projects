/*
 * Class WEL_INSTANCE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1440 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1440 [] = {0xFF01,246,1439,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1440 [] = {0xFF01,1439,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1440 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1440 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1440 [] = {0xFF01,1439,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1440 [] = {0xFF01,1439,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1440 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1440 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1440 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1440 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1440 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1440 [] = {0xFF01,1439,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1440 [] = {0xFF01,237,0xFFFF};


static const struct desc_info desc_1440[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1440), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1440), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1440), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1440), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1440), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1440), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1440), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1440), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1440), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1440), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1440), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1440), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0B3F /*1439*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1440), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 21395, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 9242, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 21387, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 21388, 8},
	{EIF_NON_GENERIC(0x0195 /*202*/), 21389, 0},
	{EIF_NON_GENERIC(0x0195 /*202*/), 21390, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 21391, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 21392, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 21393, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 21394, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 21402, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 21386, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 21400, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1440), 21401, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 21403, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 21404, 0xFFFFFFFF},
};
void Init1440(void)
{
	IDSC(desc_1440, 0, 1439);
	IDSC(desc_1440 + 1, 1, 1439);
	IDSC(desc_1440 + 32, 213, 1439);
	IDSC(desc_1440 + 34, 788, 1439);
	IDSC(desc_1440 + 44, 1049, 1439);
}


#ifdef __cplusplus
}
#endif
