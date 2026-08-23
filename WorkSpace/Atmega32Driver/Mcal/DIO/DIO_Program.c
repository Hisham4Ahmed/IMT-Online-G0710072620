/*
 * DIO_Program.c
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#include "DIO_Interface.h"

// DDR
// Direction -> Input  -> 0 -> ClearBit
// Direction -> Output -> 1 -> SetBit
void DIO_DirectionSetForPin(uint8_t GroupName,uint8_t PinNo, uint8_t DirectionState)
{
	if(PinNo<=DIO_Pin7)
	{
		if(DirectionState==DIO_Input)
		{
			switch(GroupName)
			{
				case DIO_GroupA:ClearBit(DDRA_Reg,PinNo);break;
				case DIO_GroupB:ClearBit(DDRB_Reg,PinNo);break;
				case DIO_GroupC:ClearBit(DDRC_Reg,PinNo);break;
				case DIO_GroupD:ClearBit(DDRD_Reg,PinNo);break;
				default : break;
			}
		}
		else if (DirectionState==DIO_Output)
		{
			switch(GroupName)
			{
			case DIO_GroupA:SetBit(DDRA_Reg,PinNo);break;
			case DIO_GroupB:SetBit(DDRB_Reg,PinNo);break;
			case DIO_GroupC:SetBit(DDRC_Reg,PinNo);break;
			case DIO_GroupD:SetBit(DDRD_Reg,PinNo);break;
			default : break;
			}
		}
		else
		{

		}
	}
	else
	{

	}
}

//SevSeg->
//DDRA=0xFF;

void DIO_DirectionSetForGroup(uint8_t GroupName, uint8_t DirectionState)
{
	switch(GroupName)
	{
	case DIO_GroupA: DDRA_Reg=DirectionState;break;
	case DIO_GroupB: DDRB_Reg=DirectionState;break;
	case DIO_GroupC: DDRC_Reg=DirectionState;break;
	case DIO_GroupD: DDRD_Reg=DirectionState;break;
	default:break;
	}
}

// PORT
// OuputValue-> High -> 1 -> SetBit
// OuputValue-> Low  -> 0 -> ClearBit

void DIO_WriteValueForPin(uint8_t GroupName,uint8_t PinNumber, uint8_t OutputValue )
{
	if(PinNumber<=DIO_Pin7)
	{
		if(OutputValue==DIO_Low)
		{
			switch(GroupName)
			{
			case DIO_GroupA:ClearBit(PORTA_Reg,PinNumber);break;
			case DIO_GroupB:ClearBit(PORTB_Reg,PinNumber);break;
			case DIO_GroupC:ClearBit(PORTC_Reg,PinNumber);break;
			case DIO_GroupD:ClearBit(PORTD_Reg,PinNumber);break;
			default:break;
			}
		}
		else if (OutputValue==DIO_High)
		{
			switch(GroupName)
			{
			case DIO_GroupA:SetBit(PORTA_Reg,PinNumber);break;
			case DIO_GroupB:SetBit(PORTB_Reg,PinNumber);break;
			case DIO_GroupC:SetBit(PORTC_Reg,PinNumber);break;
			case DIO_GroupD:SetBit(PORTD_Reg,PinNumber);break;
			default:break;
			}
		}
		else
		{
		}
	}
}


void DIO_WriteValueForGroup(uint8_t GroupName, uint8_t OutputValue )
{
	switch(GroupName)
	{
	case DIO_GroupA: PORTA_Reg=OutputValue;break;
	case DIO_GroupB: PORTB_Reg=OutputValue;break;
	case DIO_GroupC: PORTC_Reg=OutputValue;break;
	case DIO_GroupD: PORTD_Reg=OutputValue;break;
	default:break;
	}
}


uint8_t DIO_ReadStateInputForPin(uint8_t GroupName,uint8_t PinNumber)
{
	uint8_t InputState = 0xFF;
	if(PinNumber<=DIO_Pin7)
	{
		switch(GroupName)
		{
		case DIO_GroupA:InputState=ReadBit(PINA_Reg,PinNumber);break;
		case DIO_GroupB:InputState=ReadBit(PINB_Reg,PinNumber);break;
		case DIO_GroupC:InputState=ReadBit(PINC_Reg,PinNumber);break;
		case DIO_GroupD:InputState=ReadBit(PIND_Reg,PinNumber);break;
		default:break;
		}
	}
	return InputState;
}

