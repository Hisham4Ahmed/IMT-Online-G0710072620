/**
 * @file    Led_Program.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#include "Led_Interface.h"


void Led_Init(uint8_t LedGroup,uint8_t LedPin)
{
	DIO_DirectionSetForPin(LedGroup,LedPin,DIO_Output);
}
void Led_On(uint8_t LedGroup,uint8_t LedPin,uint8_t ConnectionType)
{
	if(ConnectionType==Led_SourceConnection)
	{
		DIO_WriteValueForPin(LedGroup,LedPin,DIO_High);
	}
	else if(ConnectionType==Led_SinkConnection)
	{
		DIO_WriteValueForPin(LedGroup,LedPin,DIO_Low);
	}
}
void Led_Off(uint8_t LedGroup,uint8_t LedPin,uint8_t ConnectionType)
{
	if(ConnectionType==Led_SourceConnection)
	{
		DIO_WriteValueForPin(LedGroup,LedPin,DIO_Low);
	}
	else if(ConnectionType==Led_SinkConnection)
	{
		DIO_WriteValueForPin(LedGroup,LedPin,DIO_High);
	}
}
void Led_Toggle(uint8_t LedGroup,uint8_t LedPin)
{
	DIO_TogglePin(LedGroup,LedPin);
}
