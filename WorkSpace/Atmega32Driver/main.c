/*
 * main.c
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#include <util/delay.h>
#include "App/TrafficLightApp/TrafficLightApp_Interface.h"
void main()
{
	TrafficApp_Init();
	while(1)
	{
		TrafficApp_Run();
	}

}
