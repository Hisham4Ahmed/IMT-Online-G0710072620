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
	/*TCCR030
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
	static uint32_t Counter = 0 ;
	Counter++;
	if(Counter==GlobalNoOfOVFCount)
	{
		/*Action*/
		if(GlobalNormalPF!=NULL)
		{
			GlobalNormalPF();
		}
		Counter=0;
		TCNT0_Reg = GeneralPreloadValue;
	}
}
/*CTC*/
static uint8_t Global_OC0Action   = T0_OC0ActionInit;
static uint8_t GlobalCompareValue = T0_CompareValueInit;
static void (*GlobalCTCPF)(void)=NULL;
static uint32_t GlobalNoOfCTCCount = T0_InitNoOfCTCCount;
void T0_CTCInit()
{
	/*
	 * 1- Output compare Value
	 * 2- Enable Interrupt
	 * 3- Mode -> CTC
	 * 3- Clock Select
	 * 4- Output compare Action (HW)
	 * */
	OCR0_Reg  = GlobalCompareValue ;
	T0_InterruptControl(T0_InterruptState);
	TCCR0_Reg = T0_CTCMode |Global_OC0Action|T0_ClockSelectConfig;
}
void T0_SetCompareValue(uint8_t CompareValue)
{
	GlobalCompareValue = CompareValue;
	OCR0_Reg  = GlobalCompareValue ;
}
void T0_CTCCallBack(void(*PF)(void))
{
	if(PF!=NULL)
	{
		GlobalCTCPF=PF;
	}
}

void __vector_10()  __attribute__((signal));
void __vector_10()
{
	static uint32_t Counter = 0 ;
	Counter++;
	if(Counter==GlobalNoOfCTCCount)
	{
		if(GlobalCTCPF!=NULL)
		{
			GlobalCTCPF();
		}
		Counter=0;
	}
}






/*
 * T1 -> Perodic 300msec
 * T2 -> Perodic 2000msec
 *
 * ReqTime -> 100msec
 * ex:
 * Timer 0 8bit / systemfreq -> 8mhz / Prescaller 64
 *
 * Normal Mode
 * ----------
 * CLK time =  Prescaller/SystemFrequ  => 64/8000 000 = 8usec
 * OVF time =  256 * Clktime = 256*8usec => 2048usec
 * NoOfOVFCount = 100 000 / 2048 = 48.828125
 * preload = 256*(1-828125) = >  44
 *
 *
 *
 * CTC Mode
 * Timer 0 8bit / systemfreq -> 8mhz / Prescaller 8
 * Clktime = 1usec
 * No of CTC Count = ReqTime  / CompareValue * ClkTime
 * CompareValue =  ReqTime / No Of CTC COunt
 *
 * CompareValue = 100 000 / 500  = 200
 *
 * */








void T0_PWMInit()
{
	/*
	 * 1- Select PWM Mode
	 * 2- Select Action (Inverting / Non-Inverting )
	 * 3- Clock Select */
	TCCR0_Reg = T0_PWMMode|T0_PWMAction|T0_ClockSelectConfig;
}
void T0_SetDutyCycle(uint8_t DutyCycle)
{
	if(DutyCycle<= 100)
	{
		if(T0_PWMAction == OC0_NonInverting)
		{
			OCR0_Reg = (256 * (uint16_t)DutyCycle) / 100 ;
		}
		else if (T0_PWMAction == OC0_Inverting)
		{
			OCR0_Reg = (256 - ((256 * (uint16_t)DutyCycle) / 100)) ;
		}
	}
}



















