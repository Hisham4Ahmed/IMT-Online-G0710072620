/**
 * @file    main.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
/*
 * 20hz
 *TopValue = ( FCPU   /  FPWM * Prescaler) - 1
 *TopValue = (8000000 / (20*64))-1 =6249
 *DutyCycle 50% => 6249 / 2 => Compare Value = 3125  */
#include <util/delay.h>
#include "Hal/Led/Led_Interface.h"
#include "Hal/Buzzer/Buzzer_Interface.h"
#include "Mcal/Timer0/T0_Interface.h"
#include "Mcal/Timer1/T1_Interface.h"
#include "Mcal/DIO/DIO_Interface.h"
void main()
{
	DIO_DirectionSetForPin(DIO_GroupD,DIO_Pin5,DIO_Output);
	T1_SetFrequencyHz(50);
	/*50 -> perodic time */
	T1_SetCompareValueChannelA(1562);
	T1_PWMInit();
	while(1)
	{

	}

}
