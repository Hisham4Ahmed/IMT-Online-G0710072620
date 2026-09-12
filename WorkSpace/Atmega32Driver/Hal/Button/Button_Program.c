/**
 * @file    Button_Program.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
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
