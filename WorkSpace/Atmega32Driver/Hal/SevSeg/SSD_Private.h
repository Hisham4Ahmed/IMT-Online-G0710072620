/**
 * @file    SSD_Private.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef HAL_SEVSEG_SSD_PRIVATE_H_
#define HAL_SEVSEG_SSD_PRIVATE_H_

typedef enum
{
	SSD_Anode,
	SSD_Cathod,
}SSDType_t;

typedef enum
{
	SSD_A_Zero=0xC0,
	SSD_A_One=0xF9,
	SSD_A_Two=0xA4,
	SSD_A_Three=0xB0,
	SSD_A_Four=0x99,
	SSD_A_Five=0x92,
	SSD_A_Six=0x82,
	SSD_A_Seven=0xF8,
	SSD_A_Eight=0x80,
	SSD_A_Nine=0x90,
	SSD_A_MaxSize=10
}SSD_Numbers;





#define SSDOutput  0xFF
#endif /* HAL_SEVSEG_SSD_PRIVATE_H_ */
