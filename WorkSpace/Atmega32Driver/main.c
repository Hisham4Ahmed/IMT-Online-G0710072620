/**
 * @file    main.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#include <util/delay.h>
#include "App/TrafficLightApp/TrafficLightApp_Interface.h"
#include "Hal/LCD/LCD_Interface.h"
#include "Hal/KPD/KPD_Interface.h"
#include "Hal/DCMotor/DC_Interface.h"
void main()
{
	TrafficApp_Init();
	while(1)
	{
		TrafficApp_Run();


	}



}



