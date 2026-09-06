/*
 * main.c
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#include <util/delay.h>
#include "App/TrafficLightApp/TrafficLightApp_Interface.h"
#include "Hal/LCD/LCD_Interface.h"
#include "Hal/KPD/KPD_Interface.h"
void main()
{
	LCD_Init();
	KPD_Init();
	uint8_t ButtonValue = 0 ;
	LCD_WriteString("System Ready.....");
	_delay_ms(1000);
	LCD_SendInstruction(Lcd_ClearDisplay);
	_delay_ms(2);
	while(1)
	{
		KPD_GetKPDValue(&ButtonValue);
		if(ButtonValue!=Kpd_BtnValueNotPressed)
		{
			LCD_WriteCharacter(ButtonValue);
		}
	}

}
