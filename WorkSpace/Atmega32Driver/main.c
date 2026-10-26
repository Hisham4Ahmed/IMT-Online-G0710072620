/**
 * @file    main.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#include <util/delay.h>
#include "Hal/LCD/LCD_Interface.h"
#include "Mcal/Timer1/T1_Interface.h"
#include "Mcal/DIO/DIO_Interface.h"
void ICURoutine(void);
volatile uint8_t MeasureIsDone    = 0 ;
static uint16_t OnTimeValue       = 0 ; /*Ontime*/
static uint16_t PerodicTimeValue  = 0 ; /*Perodic time*/
void main()
{
	/*PD6*/
	DIO_DirectionSetForPin(DIO_GroupD,DIO_Pin6,DIO_Input);
	/*ICU-> Call Back function */
	T1ICU_SetCallBack(ICURoutine);
	T1ICU_Init();
	GIE_Enable();
	/*LCD*/
	LCD_Init();
	/*Frq & DutyCycle */
	uint16_t DutyCycle = 0 ;
	uint16_t Frequency = 0 ;

	while(1)
	{
		if(MeasureIsDone)
		{
			/*DutyCycle*/
			DutyCycle  =  ((uint32_t)OnTimeValue*100) / PerodicTimeValue ;
			/*Freq*/
			Frequency  = FCPU / (64UL*PerodicTimeValue);
			LCD_WriteString("Freq:");
			LCD_WriteNumber(Frequency);
			LCD_WriteString(" Hz");

			LCD_MoveTo(1,0);
			LCD_WriteString("Duty:");
			LCD_WriteNumber(DutyCycle);
			LCD_WriteString(" %");

			MeasureIsDone = 0 ;
			T1ICU_EnableInterrupt();
		}
	}
}

void ICURoutine(void)
{
	static uint8_t Count = 0 ;
	Count++;

	if(Count==1)
	{
		/*Edge Select Falling*/
		T1ICU_SetEdge(T1_FallingEdge);
		/*Reset for TCNT1*/
		T1_TimerRegReset();
	}
	else if (Count==2)
	{
		/*Read1 -> ICR1*/
		OnTimeValue = T1ICU_GetCaptureValue();
		/*Edge Select Rising*/
		T1ICU_SetEdge(T1_RisingEdge);

	}
	else if (Count==3)
	{
		/*Read2 -> ICR1*/
		PerodicTimeValue = T1ICU_GetCaptureValue();
		T1ICU_DisableInterrupt();
		MeasureIsDone = 1 ;
		Count=0;
	}

}


























