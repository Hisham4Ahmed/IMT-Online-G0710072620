/**
 * @file    main.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#include <util/delay.h>
#include "Hal/Led/Led_Interface.h"
#include "Hal/SevSeg/SSD_Interface.h"
#include "Hal/Button/Button_Interface.h"
#include "Mcal/EXTI/EXTI_Interface.h"
#include "Mcal/GIE/GIE_Interface.h"
/**!< @brief Task
 * Led 1 Toggle At 5000 msec  -> Background in side while(1)
 * Led 2 Toggle When Button1 Pressed
 * SevSegment Count 1 When Button2 Pressed
 * */
void Button1LedApp();
void Button2SegmentApp();

void main()
{
	/*Init*/
	Led_Init(DIO_GroupC,DIO_Pin0);
	Led_Init(DIO_GroupC,DIO_Pin1);
	SSD_Init(DIO_GroupA);
	SSD_DisplayNumber1Digit(DIO_GroupA,0,SSD_Cathod);
	Btn_Init(DIO_GroupD,DIO_Pin2,Btn_InternalPullup); /*EXTI0 Pin as Input */
	Btn_Init(DIO_GroupD,DIO_Pin3,Btn_InternalPullup); /*EXTI1 Pin as Input */
	/*EXTI Init*/
	EXTI0_Init(Exti_Falling);
	EXTI1_Init(Exti_Falling);
	EXTI0_CallBackFunction(Button1LedApp);
	EXTI1_CallBackFunction(Button2SegmentApp);
	EXTI0_Enable();
	EXTI1_Enable();
	/*GIE*/
	GIE_Enable(); /*SREG -> 7 */

	while(1)
	{
		/*Ledon
		wait 5000
		LedOff
		wait5000*/
		Led_On(DIO_GroupC,DIO_Pin0,Led_SourceConnection);
		_delay_ms(5000);
		Led_Off(DIO_GroupC,DIO_Pin0,Led_SourceConnection);
		_delay_ms(5000);

	}
}


void Button1LedApp()
{
	Led_Toggle(DIO_GroupC, DIO_Pin1);
}


void Button2SegmentApp()
{
	static uint8_t Count = 0 ;
	Count++;
	if(Count>9)
	{
		Count=0;
	}
	SSD_DisplayNumber1Digit(DIO_GroupA,Count,SSD_Cathod);

}















