/*
 * Class WEL_RGN_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1252 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1252 [] = {0xFF01,246,1251,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1252 [] = {0xFF01,1251,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1252 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1252 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1252 [] = {0xFF01,1251,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1252 [] = {0xFF01,1251,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1252 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1252 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1252 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1252 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1252 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1252 [] = {0xFF01,1251,0xFFFF};


static const struct desc_info desc_1252[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1252), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1252), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1252), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1252), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1252), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1252), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1252), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1252), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1252), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1252), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1252), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1252), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09C7 /*1251*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1252), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19070, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19071, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19072, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19073, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19074, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19075, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19063, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19064, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19065, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19066, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19067, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19068, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19069, 0xFFFFFFFF},
};
void Init1252(void)
{
	IDSC(desc_1252, 0, 1251);
	IDSC(desc_1252 + 1, 1, 1251);
	IDSC(desc_1252 + 32, 1064, 1251);
}


#ifdef __cplusplus
}
#endif
