/**
 * @file    Button_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef HAL_BUTTON_BUTTON_INTERFACE_H_
#define HAL_BUTTON_BUTTON_INTERFACE_H_

#include <stdint.h>
#include "../../Common/BitMath.h"
#include "../../Common/Definition.h"

#include "../../Mcal/DIO/DIO_Interface.h"

#include "Button_Private.h"
#include "Button_Config.h"

/**
 * @fn
 * @brief
 * @param BtnGroup
 * @param BtnPin
 * @param BtnConnection
 */
void Btn_Init(uint8_t BtnGroup,uint8_t BtnPin,uint8_t BtnConnection);
/**
 * @fn
 * @brief
 * @param BtnGroup
 * @param BtnPin
 * @param BtnConnection
 * @return
 */
uint8_t Btn_IsPressed(uint8_t BtnGroup,uint8_t BtnPin,uint8_t BtnConnection);

#endif /* HAL_BUTTON_BUTTON_INTERFACE_H_ */
