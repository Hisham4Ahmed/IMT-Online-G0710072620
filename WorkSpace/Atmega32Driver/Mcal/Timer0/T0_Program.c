/**
 * @file    T0_Program.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Oct 2, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#include "T0_Interface.h"

void T0_ClockSelect(uint8_t ClockSelect)
{
	/*TCCR0
	 * 7 6 5 4 3 2 1 0
	 * 0 0 0 0 0 1 1 1 -> 0x07
	 * */
	TCCR0_Reg = (TCCR0_Reg &~ T0_ClockSelectMask) | ClockSelect;
}
void T0_Disable()
{
	TCCR0_Reg = (TCCR0_Reg &~ T0_ClockSelectMask) | T0_Stopped;
}
void T0_InterruptControl(uint8_t InterruptState)
{
	/*
	 *  7 6 5 4 3 2 1 0
	 *  0 0 0 0 0 0 1 1 -> 0x03
	 *  */
	if(InterruptState>=T0_InterruptDisabled && InterruptState <= T0_BothEnable)
	{
		TIMSK_Reg = (TIMSK_Reg &~ T0_TIMSKMask) | InterruptState;
	}
}
/*Normal*/
static uint8_t GeneralPreloadValue = T0_InitPreload;
static uint8_t GlobalNoOfOVFCount  = T0_InitNoOfOVFCount;
static void (*GlobalNormalPF)(void)=NULL;
void T0_NormalInit()
{
	/*
	 * 1- Mode
	 * 2- Disconnect Output compare
	 * 3- Clock Select
	 * 4- Enable Interrupt */
	TCCR0_Reg = T0_NormalMode | OC0_Disconnect | T0_ClockSelectConfig ;
	T0_InterruptControl(T0_InterruptState);
}
void T0_SetPreload(uint8_t PreloadValue)
{
	TCNT0_Reg =  PreloadValue ;
	GeneralPreloadValue =  PreloadValue;
}
void T0_NormalCallBack(void(*PF)(void))
{
	if(PF!=NULL)
	{
		GlobalNormalPF =  PF;
	}
}
void __vector_11()  __attribute__((signal));
void __vector_11()
{
	/* Code*/
}
/*CTC*/
void T0_CTCInit()
{

}
void T0_SetCompareValue(uint8_t CompareValue)
{

}
void T0_CTCCallBack(void(*PF)(void))
{

}
