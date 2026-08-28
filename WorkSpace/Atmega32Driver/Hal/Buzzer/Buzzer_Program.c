/*
 * Buzzer_Program.c
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#include "Buzzer_Interface.h"

void Buzzer_Init(uint8_t BuzzerGroup,uint8_t BuzzerPin)
{
	DIO_DirectionSetForPin(BuzzerGroup,BuzzerPin,DIO_Output);
}
void Buzzer_On(uint8_t BuzzerGroup,uint8_t BuzzerPin)
{
	DIO_WriteValueForPin(BuzzerGroup,BuzzerPin,DIO_High);
}
void Buzzer_Off(uint8_t BuzzerGroup,uint8_t BuzzerPin)
{
	DIO_WriteValueForPin(BuzzerGroup,BuzzerPin,DIO_Low);
}
void Buzzer_Toggle(uint8_t BuzzerGroup,uint8_t BuzzerPin)
{
	DIO_TogglePin(BuzzerGroup,BuzzerPin);
}
