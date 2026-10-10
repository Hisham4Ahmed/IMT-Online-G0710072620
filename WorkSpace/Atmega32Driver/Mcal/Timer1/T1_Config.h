/**
 * @file    T1_Config.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Oct 9, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#ifndef MCAL_TIMER1_T1_CONFIG_H_
#define MCAL_TIMER1_T1_CONFIG_H_

#define T1_ClockSelectConfig  T1_Prescaller64

#define T1_PWMMode    T1_FastPWM_ICR1
#define T1_PWMChannel T1_ChannelA
#define T1_PWMActionA OC1A_NonInverting
#define T1_PWMActionB OC1B_NonInverting

#endif /* MCAL_TIMER1_T1_CONFIG_H_ */
