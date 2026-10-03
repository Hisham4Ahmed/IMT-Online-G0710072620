/**
 * @file    main.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#include <util/delay.h>
#include "Hal/Led/Led_Interface.h"
#include "Hal/Buzzer/Buzzer_Interface.h"
#include "Mcal/Timer0/T0_Interface.h"

void main()
{
	Led_Init(DIO_GroupB,DIO_Pin3);
	T0_PWMInit();
	uint8_t LightIntensity = 0 ;
	while(1)
	{
		for(LightIntensity = 0 ; LightIntensity <=100 ; LightIntensity++)
		{
			T0_SetDutyCycle(LightIntensity);
			_delay_ms(20);
		}
		for(LightIntensity = 100 ; LightIntensity > 0 ; LightIntensity--)
		{
			T0_SetDutyCycle(LightIntensity);
			_delay_ms(20);
		}
	}

}

/*static volatile uint32_t SystemTick =  0 ;
void App_TickUpdate()
{
	SystemTick++;
}

void main()
{
	Led_Init(DIO_GroupA,DIO_Pin0);
	Buzzer_Init(DIO_GroupC,DIO_Pin0);
	T0_CTCCallBack(App_TickUpdate);
	T0_CTCInit();
	GIE_Enable();
	uint32_t LastTimeofLed     = 0;
	uint32_t LastTimeofBuzzer  = 0;
	while(1)
	{
		if((SystemTick-LastTimeofLed)>=20)
		{
			Led_Toggle(DIO_GroupA,DIO_Pin0);
			LastTimeofLed = SystemTick;
		}
		if((SystemTick-LastTimeofBuzzer)>=3)
		{
			Buzzer_Toggle(DIO_GroupC, DIO_Pin0);
			LastTimeofBuzzer = SystemTick;
		}
	}
}
*/

















