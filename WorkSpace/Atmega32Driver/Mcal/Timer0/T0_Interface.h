/**
 * @file    T0_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Oct 2, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#ifndef MCAL_TIMER0_T0_INTERFACE_H_
#define MCAL_TIMER0_T0_INTERFACE_H_
#include "../../Common/BitMath.h"
#include "../../Common/Definition.h"
#include "../Atmega32Registers.h"

#include "T0_Private.h"
#include "T0_Config.h"



void T0_ClockSelect(uint8_t ClockSelect);
void T0_Disable();
void T0_InterruptControl(uint8_t InterruptState);
/*Normal*/
void T0_NormalInit();
void T0_SetPreload(uint8_t PreloadValue);
void T0_NormalCallBack(void(*PF)(void));
/*CTC*/
void T0_CTCInit();
void T0_SetCompareValue(uint8_t CompareValue);
void T0_CTCCallBack(void(*PF)(void));
/*PWM*/
void T0_PWMInit();
void T0_SetDutyCycle(uint8_t DutyCycle);





#endif /* MCAL_TIMER0_T0_INTERFACE_H_ */
