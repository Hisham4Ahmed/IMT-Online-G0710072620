/**
 * @file    T1_Program.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Oct 9, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
/*
 * T1_Program.c
 *
 *  Created on: Oct 9, 2026
 *      Author: hesham
 */

#include "T1_Interface.h"
void T1_PWMInit()
{
	/*Fixed for Mode 14*/
	ClearBit(TCCR1A_Reg,WGM10);
	SetBit(TCCR1A_Reg,WGM11);
	SetBit(TCCR1B_Reg,WGM12);
	SetBit(TCCR1B_Reg,WGM13);
	#if T1_PWMChannel==T1_ChannelA && T1_PWMActionA==OC1A_NonInverting
		SetBit(TCCR1A_Reg,COM1A1);
		ClearBit(TCCR1A_Reg,COM1A0);
	#endif
	/*Clock Select */
	TCCR1B_Reg = TCCR1B_Reg & ~ 0x07 | T1_ClockSelectConfig;
}
void T1_SetTopValue(uint16_t TopValue)/* Set PWM Frequency in ICR1*/
{
	ICR1_Reg = TopValue;
}
void T1_SetFrequencyHz(uint16_t FrequencyHz)
{
	/*
	 * FPWM = FCPU / Prescaler * (1+TopValue)
	 * TopValue = ( FCPU   /  FPWM * Prescaler) - 1 ;
	 * */
	uint16_t Prescaler = 1 ;
	switch(T1_ClockSelectConfig)
	{
		case T1_NoPrescaling: Prescaler=1;break;
		case T1_Prescaller8:  Prescaler=8;break;
		case T1_Prescaller64: Prescaler=64;break;
		case T1_Prescaller256: Prescaler=256;break;
		case T1_Prescaller1024: Prescaler=1024;break;
		default : Prescaler=64;break;
	}
	if(FrequencyHz>0)
	{
		uint32_t TopValue = (FCPU/(Prescaler*FrequencyHz))-1;
		T1_SetTopValue(TopValue);
	}
}

void T1_SetCompareValueChannelA(uint16_t CompareValue)
{
	OCR1A_Reg =  CompareValue ;
}
void T1_SetCompareValueChannelB(uint16_t CompareValue)
{
	OCR1B_Reg = CompareValue;
}
void T1_SetDutyCycleChannelA(uint16_t DutyCycleValue);
void T1_SetDutyCycleChannelB(uint16_t DutyCycleValue);
