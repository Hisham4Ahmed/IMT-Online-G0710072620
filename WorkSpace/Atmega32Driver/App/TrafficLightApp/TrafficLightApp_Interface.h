/**
 * @file    TrafficLightApp_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
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

/**
 * @brief
 * @note
 */
void TrafficApp_Init();
/**
 * @brief
 * @note
 */
void TrafficApp_Run();


#endif /* APP_TRAFFICLIGHTAPP_TRAFFICLIGHTAPP_INTERFACE_H_ */
