/*
 * TrafficLightApp.h
 *
 *  Created on: Aug 28, 2026
 *      Author: hesham
 */

#ifndef APP_TRAFFICLIGHTAPP_TRAFFICLIGHTAPP_INTERFACE_H_
#define APP_TRAFFICLIGHTAPP_TRAFFICLIGHTAPP_INTERFACE_H_

#include "../../Hal/Button/Button_Interface.h"
#include "../../Hal/Buzzer/Buzzer_Interface.h"
#include "../../Hal/Led/Led_Interface.h"
#include "../../Hal/SevSeg/SSD_Interface.h"
#include <util/delay.h>

#include "TrafficLightApp_Private.h"
#include "TrafficLightApp_Config.h"

void TrafficApp_Init();
void TrafficApp_Run();//=> Supoer Loop


#endif /* APP_TRAFFICLIGHTAPP_TRAFFICLIGHTAPP_INTERFACE_H_ */
