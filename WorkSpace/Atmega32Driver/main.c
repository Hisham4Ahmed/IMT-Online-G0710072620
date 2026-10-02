/**
 * @file    main.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#include <util/delay.h>
#include "App/ADC_Test/ADC_Test.h"
/**!< @brief Task
 * Led 1 Toggle At 5000 msec  -> Background in side while(1)
 * Led 2 Toggle When Button1 Pressed
 * SevSegment Count 1 When Button2 Pressed
 * */

void main()
{
	ADCTest_Init();
	while(1)
	{
		ADCTest_Runner();
		_delay_ms(250);
	}
}


















