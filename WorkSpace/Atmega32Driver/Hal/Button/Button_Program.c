/*
 * Button_Program.c
 *
 *  Created on: Aug 28, 2026
 *      Author: hesham
 */


#include "Button_Interface.h"

void Btn_Init(uint8_t BtnGroup,uint8_t BtnPin,uint8_t BtnConnection)
{
	DIO_DirectionSetForPin(BtnGroup,BtnPin,DIO_Input);
	if(BtnConnection==Btn_InternalPullup)
	{
		DIO_InternalPullUpControlForPin(BtnGroup,BtnPin,Enable);
	}
	else
	{
		DIO_InternalPullUpControlForPin(BtnGroup,BtnPin,Disable);
	}
}
uint8_t Btn_IsPressed(uint8_t BtnGroup,uint8_t BtnPin,uint8_t BtnConnection)
{
	uint8_t BtnState ;
	BtnState=DIO_ReadStateInputForPin(BtnGroup,BtnPin);
	return BtnState;
}
