/**
 * @file    Led_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#ifndef HAL_LED_LED_INTERFACE_H_
#define HAL_LED_LED_INTERFACE_H_

#include <stdint.h>
#include "../../Mcal/DIO/DIO_Interface.h"
#include "Led_Private.h"
#include "Led_Config.h"

/**
 * @fn
 * @brief
 * @param LedGroup
 * @param LedPin
 */
void Led_Init(uint8_t LedGroup,uint8_t LedPin);
/**
 * @fn
 * @brief
 * @param LedGroup
 * @param LedPin
 * @param ConnectionType
 */
void Led_On(uint8_t LedGroup,uint8_t LedPin,uint8_t ConnectionType);
/**
 * @fn
 * @brief
 * @param LedGroup
 * @param LedPin
 * @param ConnectionType
 */
void Led_Off(uint8_t LedGroup,uint8_t LedPin,uint8_t ConnectionType);
/**
 * @fn
 * @brief
 * @param LedGroup
 * @param LedPin
 */
void Led_Toggle(uint8_t LedGroup,uint8_t LedPin);

#endif /* HAL_LED_LED_INTERFACE_H_ */
