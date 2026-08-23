/*
 * main.c
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

//00001111->
#include "Mcal/DIO/DIO_Interface.h"
void main()
{
//	DIO_DirectionSetForPin(DIO_GroupB,DIO_Pin1,DIO_Output);
////	DIO_DirectionSetForGroup(DIO_GroupD,0x0F);
//	DIO_WriteValueForPin(DIO_GroupB,DIO_Pin1,DIO_High);
	Led_Init
	Button_Init
	Buzzer_Init
	while(1)
	{
		BtnState=Btn_GetState();
		if(BtnState==Pressed)
		{
			Led_On();
		}
	}

}
