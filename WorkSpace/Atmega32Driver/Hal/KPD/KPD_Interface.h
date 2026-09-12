/**
 * @file    KPD_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef HAL_KPD_KPD_INTERFACE_H_
#define HAL_KPD_KPD_INTERFACE_H_

#include <stdint.h>
#include "../../Mcal/DIO/DIO_Interface.h"
#include "KPD_Private.h"
#include "KPD_Config.h"

/**
 * @fn
 * @brief
 */
void KPD_Init();
/**
 * @fn
 * @brief
 * @param KPD_Value
 */
void KPD_GetKPDValue(uint8_t *KPD_Value);

#endif /* HAL_KPD_KPD_INTERFACE_H_ */
