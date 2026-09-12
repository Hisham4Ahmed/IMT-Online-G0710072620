/**
 * @file    SSD_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef HAL_SEVSEG_SSD_INTERFACE_H_
#define HAL_SEVSEG_SSD_INTERFACE_H_


#include <stdint.h>
#include "../../Mcal/DIO/DIO_Interface.h"
#include "SSD_Private.h"
#include "SSD_Config.h"


/**
 * @fn
 * @brief
 * @param SSDGroup
 */
void SSD_Init(uint8_t SSDGroup);
/**
 * @fn
 * @brief
 * @param SSDGroup
 * @param Number
 * @param SSDType
 */
void SSD_DisplayNumber1Digit(uint8_t SSDGroup,uint8_t Number, uint8_t SSDType);

#endif /* HAL_SEVSEG_SSD_INTERFACE_H_ */
