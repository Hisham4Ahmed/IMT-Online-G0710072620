/**
 * @file    ADC_Test.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 26, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
/*
 * ADC_Test.c
 *
 *  Created on: Sep 26, 2026
 *      Author: hesham
 */

#include "../../Mcal/ADC/ADC_Interface.h"
#include "../../Hal/LCD/LCD_Interface.h"
void ADCTest_Init()
{
	ADC_Init();
	LCD_Init();
	DIO_DirectionSetForPin(DIO_GroupA,DIO_Pin0,DIO_Input);
	DIO_DirectionSetForPin(DIO_GroupA,DIO_Pin1,DIO_Input);
	/*------------------------*/
	LCD_MoveTo(0,0);
	LCD_WriteString("ADC0(mv): ");
	LCD_MoveTo(1,0);
	LCD_WriteString("ADC1(mv): ");

}
void ADCTest_Runner()
{
	uint16_t ADC0DigitalVolt = 0 ;
	uint16_t ADC1DigitalVolt = 0 ;

	uint16_t ADC0AnalogVolt = 0 ;
	uint16_t ADC1AnalogVolt = 0 ;

	ADC0DigitalVolt =  ADC_GetDigitalVolt(Adc_Channel0,50000UL);
/*	ADC1DigitalVolt =  ADC_GetDigitalVolt(Adc_Channel1,50000UL);*/
	LCD_MoveTo(0,10);
	if(ADC0DigitalVolt==Adc_TimeOutError)
	{
		LCD_WriteString("Error");
	}
	else
	{
		ADC0AnalogVolt= ((uint32_t)ADC0DigitalVolt * 5000UL) / 1024UL ;
		LCD_WriteNumber(ADC0AnalogVolt);
		LCD_WriteString("     ");
	}
/*	LCD_MoveTo(1,10);
	if(ADC1DigitalVolt==Adc_TimeOutError)
	{
		LCD_WriteString("Error");
	}
	else
	{
		ADC1AnalogVolt= ((uint32_t)ADC1DigitalVolt * 5000UL) / 1024UL ;
		LCD_WriteNumber(ADC1AnalogVolt);
		LCD_WriteString("     ");
	}
*/
}













