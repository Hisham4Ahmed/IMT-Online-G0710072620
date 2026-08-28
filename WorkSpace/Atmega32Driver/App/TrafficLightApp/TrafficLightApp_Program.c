/*
 * TrafficLightApp.c
 *
 *  Created on: Aug 28, 2026
 *      Author: hesham
 */



#include "TrafficLightApp_Interface.h"

void TrafficApp_Init()
{
	SSD_Init(SSD_Units);
	SSD_Init(SSD_Tens);

	Btn_Init(StopButtonGroup,StopButtonPin,Btn_InternalPullup);

	Led_Init(RedLedGroup,RedLedPin);
	Led_Init(YellowLedGroup,YellowLedPin);
	Led_Init(GreenLedGroup,GreenLedPin);
}

static void SSD_DisplayNumber2Digit(uint8_t Number)
{
	uint8_t Units = Number%10;
	uint8_t Tens  =  Number/10;
	SSD_DisplayNumber1Digit(SSD_Units,Units,SSD_Anode);
	SSD_DisplayNumber1Digit(SSD_Tens,Tens,SSD_Anode);
}

void TrafficApp_Run()
{
	Led_On(GreenLedGroup,GreenLedPin,Led_SourceConnection);
	Led_Off(RedLedGroup,RedLedPin,Led_SourceConnection);
	Led_Off(YellowLedGroup,YellowLedPin,Led_SourceConnection);
	uint8_t DigitCount=0;
	uint8_t StopRequestFlag=0;
	for(DigitCount = 99 ;DigitCount>=0;DigitCount--)
	{
		SSD_DisplayNumber2Digit(DigitCount);
		for(uint8_t j = 0 ; j<10;j++)
		{
			if(Btn_IsPressed(StopButtonGroup,StopButtonPin,Btn_InternalPullup)
					==PullUp_Pressed)
			{
				StopRequestFlag=1;
				break;
			}
			_delay_ms(100);

		}
		if(StopRequestFlag==1)
		{
			break;
		}
		if(DigitCount == 0) break;
	}
	Led_Off(GreenLedGroup,GreenLedPin,Led_SourceConnection);
	Led_On(YellowLedGroup,YellowLedPin,Led_SourceConnection);
	for (DigitCount=10;DigitCount>=0;DigitCount--)
	{
		SSD_DisplayNumber2Digit(DigitCount);
		_delay_ms(1000);
		if(DigitCount==0){break;}
	}
	Led_On(RedLedGroup,RedLedPin,Led_SourceConnection);
	Led_Off(YellowLedGroup,YellowLedPin,Led_SourceConnection);
	for (DigitCount=30;DigitCount>=0;DigitCount--)
	{
		SSD_DisplayNumber2Digit(DigitCount);
		_delay_ms(1000);
		if(DigitCount==0){break;}

	}

}












