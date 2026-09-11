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
#if Buzzer_Connection==Buzzer_NPNConnection
	DIO_WriteValueForPin(BuzzerGroup,BuzzerPin,DIO_High);
#elif Buzzer_Connection==Buzzer_PNPConnection
	DIO_WriteValueForPin(BuzzerGroup,BuzzerPin,DIO_Low);
#else
#error "Invalid Buzzer Connection"
#endif
}
void Buzzer_Off(uint8_t BuzzerGroup,uint8_t BuzzerPin)
{
#if Buzzer_Connection==Buzzer_NPNConnection
	DIO_WriteValueForPin(BuzzerGroup,BuzzerPin,DIO_Low);
#elif Buzzer_Connection==Buzzer_PNPConnection
	DIO_WriteValueForPin(BuzzerGroup,BuzzerPin,DIO_High);
#else
#error "Invalid Buzzer Connection"
#endif

}
void Buzzer_Toggle(uint8_t BuzzerGroup,uint8_t BuzzerPin)
{
	DIO_TogglePin(BuzzerGroup,BuzzerPin);
}
