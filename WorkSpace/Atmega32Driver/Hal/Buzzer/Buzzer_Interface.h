/**
 * @file    Buzzer_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef HAL_BUZZER_BUZZER_INTERFACE_H_
#define HAL_BUZZER_BUZZER_INTERFACE_H_
#include <stdint.h>
#include "../../Common/BitMath.h"
#include "../../Common/Definition.h"
#include "../../Mcal/DIO/DIO_Interface.h"

#include "Buzzer_Private.h"
#include "Buzzer_Config.h"
/*
 * API
 * */
/**
 * @fn
 * @brief
 * @param BuzzerGroup
 * @param BuzzerPin
 */
void Buzzer_Init(uint8_t BuzzerGroup,uint8_t BuzzerPin);
/**
 * @fn
 * @brief
 * @param BuzzerGroup
 * @param BuzzerPin
 */
void Buzzer_On(uint8_t BuzzerGroup,uint8_t BuzzerPin);
/**
  * @fn
 * @brief
 * @param BuzzerGroup
 * @param BuzzerPin
 */
void Buzzer_Off(uint8_t BuzzerGroup,uint8_t BuzzerPin);
/**
 * @fn
 * @brief
 * @param BuzzerGroup
 * @param BuzzerPin
 */
void Buzzer_Toggle(uint8_t BuzzerGroup,uint8_t BuzzerPin);

#endif /* HAL_BUZZER_BUZZER_INTERFACE_H_ */
