/*
 * Led_Program.c
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#include "Led_Interface.h"


void Led_Init(uint8_t LedGroup,uint8_t LedPin)
{
	DIO_DirectionSetForPin(LedGroup,LedPin,DIO_Output);
}
void Led_On(uint8_t LedGroup,uint8_t LedPin,uint8_t ConnectionType)
{
	// Source Connection Led On by 1
	if(ConnectionType==Led_SourceConnection)
	{
		DIO_WriteValueForPin(LedGroup,LedPin,DIO_High);
	}
	// Sink Connection Led On By 0
	else if(ConnectionType==Led_SinkConnection)
	{
		DIO_WriteValueForPin(LedGroup,LedPin,DIO_Low);
	}
}
void Led_Off(uint8_t LedGroup,uint8_t LedPin,uint8_t ConnectionType)
{
	// Source Connection Led Off by 0
	if(ConnectionType==Led_SourceConnection)
	{
		DIO_WriteValueForPin(LedGroup,LedPin,DIO_Low);
	}
	// Sink Connection Led off By 1
	else if(ConnectionType==Led_SinkConnection)
	{
		DIO_WriteValueForPin(LedGroup,LedPin,DIO_High);
	}
}
void Led_Toggle(uint8_t LedGroup,uint8_t LedPin)
{
	DIO_TogglePin(LedGroup,LedPin);
}
