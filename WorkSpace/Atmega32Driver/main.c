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
#include "Hal/DCMotor/DC_Interface.h"
void main()
{
	DC_Config_t FanMotor = {
			.ControlType = DC_OnOffOnly,
			.ConnectionType=  DC_NPN,
			.DC_M1Group = DIO_GroupA,
			.DC_M1Pin = DIO_Pin0,
	};

	DC_Config_t WindowMotor =
	{
			.ControlType = DC_DirectionControl,
			.ConnectionType = DC_PNP,
			.DC_M1Group = DIO_GroupB,
			.DC_M1Pin = DIO_Pin0,
			.DC_M2Group = DIO_GroupB,
			.DC_M2Pin = DIO_Pin1,
	};

	DC_Init(&FanMotor);
	DC_Init(&WindowMotor);
	while(1)
	{
		DC_On(&FanMotor);
		DC_OnCW(&WindowMotor);
		_delay_ms(4000);
		DC_Off(&FanMotor);
		DC_Off(&WindowMotor);
		_delay_ms(1000);
		DC_On(&FanMotor);
		DC_OnCCW(&WindowMotor);
		_delay_ms(4000);
		DC_Off(&FanMotor);
		DC_Off(&WindowMotor);
		_delay_ms(1000);


	}



}
















