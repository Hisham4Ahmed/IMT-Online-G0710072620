/**
 * @file    TrafficLightApp_Config.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef APP_TRAFFICLIGHTAPP_TRAFFICLIGHTAPP_CONFIG_H_
#define APP_TRAFFICLIGHTAPP_TRAFFICLIGHTAPP_CONFIG_H_



#define SSD_Units      DIO_GroupB
#define SSD_Tens       DIO_GroupA

#define GreenLedGroup  DIO_GroupD
#define GreenLedPin    DIO_Pin2

#define YellowLedGroup    DIO_GroupD
#define YellowLedPin      DIO_Pin1

#define RedLedGroup     DIO_GroupD
#define RedLedPin	    DIO_Pin0



#define StopButtonGroup   DIO_GroupC
#define StopButtonPin     DIO_Pin6


#endif /* APP_TRAFFICLIGHTAPP_TRAFFICLIGHTAPP_CONFIG_H_ */
