/**
 * @file    T1_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Oct 9, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#ifndef MCAL_TIMER1_T1_INTERFACE_H_
#define MCAL_TIMER1_T1_INTERFACE_H_
#include <stdint.h>
#include "../../Common/BitMath.h"
#include "../../Common/Definition.h"
#include "../../Common/StdTypes.h"

#include "../Atmega32Registers.h"

#include "T1_Private.h"
#include "T1_Config.h"
void T1_TimerRegReset();

/*PWM */
void T1_PWMInit();
void T1_SetTopValue(uint16_t TopValue);/* Set PWM Frequency in ICR1*/
void T1_SetFrequencyHz(uint16_t FrequencyHz);
void T1_SetCompareValueChannelA(uint16_t CompareValue);
void T1_SetCompareValueChannelB(uint16_t CompareValue);
void T1_SetDutyCycleChannelA(uint16_t DutyCycleValue);
void T1_SetDutyCycleChannelB(uint16_t DutyCycleValue);



/*ICU*/


void T1ICU_Init();
void T1ICU_EnableInterrupt();
void T1ICU_DisableInterrupt();
uint16_t T1ICU_GetCaptureValue();
void T1ICU_SetCallBack(void (*PF)(void));
void T1ICU_SetEdge(uint8_t Edge);







#endif /* MCAL_TIMER1_T1_INTERFACE_H_ */
