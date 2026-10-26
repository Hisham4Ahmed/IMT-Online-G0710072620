/**
 * @file    T0_Config.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Oct 2, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#ifndef MCAL_TIMER0_T0_CONFIG_H_
#define MCAL_TIMER0_T0_CONFIG_H_
#include "T0_Private.h"
#define T0_InterruptState      T0_OCEnable
#define T0_ClockSelectConfig   T0_Prescaller8
#define T0_InitPreload          44
#define T0_InitNoOfOVFCount     49


#define T0_OC0ActionInit       OC0_Toggle
#define T0_CompareValueInit    200
#define T0_InitNoOfCTCCount    500

/*
 * 1- T0_PWMFast
 * 2- T0_PWMPhase
 * */
#define T0_PWMMode       T0_PWMFast
/*
 * 1- OC0_Inverting
 * 2- OC0_NonInverting */
#define T0_PWMAction     OC0_NonInverting
#endif /* MCAL_TIMER0_T0_CONFIG_H_ */
