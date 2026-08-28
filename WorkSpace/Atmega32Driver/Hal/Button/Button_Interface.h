/*
 * Button_Interface.h
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#ifndef HAL_BUTTON_BUTTON_INTERFACE_H_
#define HAL_BUTTON_BUTTON_INTERFACE_H_

#include <stdint.h>
#include "../../Common/BitMath.h"
#include "../../Common/Definition.h"

#include "../../Mcal/DIO/DIO_Interface.h"

#include "Button_Private.h"
#include "Button_Config.h"


void Btn_Init(uint8_t BtnGroup,uint8_t BtnPin,uint8_t BtnConnection);
uint8_t Btn_IsPressed(uint8_t BtnGroup,uint8_t BtnPin,uint8_t BtnConnection);

#endif /* HAL_BUTTON_BUTTON_INTERFACE_H_ */
