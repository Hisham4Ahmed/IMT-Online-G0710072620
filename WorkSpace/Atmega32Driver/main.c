/*
 * main.c
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#include <util/delay.h>
#include "App/TrafficLightApp/TrafficLightApp_Interface.h"
#include "Hal/LCD/LCD_Interface.h"
void main()
{
LCD_Init();
LCD_WriteString("Ayman&");
LCD_WriteString("Marwan");

while(1);

}
