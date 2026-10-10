/**
 * @file    T1_Private.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Oct 9, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#ifndef MCAL_TIMER1_T1_PRIVATE_H_
#define MCAL_TIMER1_T1_PRIVATE_H_

typedef enum
{
	/*TCCR1A*/
	WGM10,
	WGM11,
	FOC1B,
	FOC1A,
	COM1B0,
	COM1B1,
	COM1A0,
	COM1A1,
	/*TCCR1B*/
	CS10=0,
	CS11,
	CS12,
	WGM12,
	WGM13,
	Reserved,
	ICES1,
	ICNC1,
	/*TIMSK*/
	TOIE1=2,
	OCIE1B,
	OCIE1A,
	TICIE1,
	/*TIFR*/
	TOV1=2,
	OCF1B,
	OCF1A,
	ICF1,
}T1_BitName_t;


typedef enum
{
	T1_Stopped,
	T1_NoPrescaling,
	T1_Prescaller8,
	T1_Prescaller64,
	T1_Prescaller256,
	T1_Prescaller1024,
	T1_ExternalFalling,
	T1_ExternalRising,
}T1_ClockSelect_t;




/*
* 7 6 5 4 3 2 1 0
* 0 0 0 0 0 0 0 0
* 0 1 0 0 0 0 0 0
* 1 0 0 0 0 0 0 0
* 1 1 0 0 0 0 0 0
* -------------------
* 0 0 1 0 0 0 0 0
* 0 0 1 1 0 0 0 0*/
typedef enum
{

	/*Non PWM for Channel A*/
	OC1A_Disconnect=0x00,
	OC1A_Toggle=0x40,
	OC1A_Clear=0x80,
	OC1A_Set=0xC0,
	/*Non PWM for Channel B*/
	OC1B_Disconnect=0x000,
	OC1B_Toggle=0x10,
	OC1B_Clear=0x20,
	OC1B_Set=0x30,
	/*PWM Channel A */
	OC1A_NonInverting=0x80,
	OC1A_Inverting=0xC0,
	/*PWM Channel B */
	OC1B_NonInverting=0x20,
	OC1B_Inverting=0x30,
}T1_OutputMode_t;



typedef enum
{
	T1_NormalMode = 0 ,
	T1_FastPWM_ICR1 = 14 ,
}T1_ModeSelect_t;

typedef enum
{
	T1_ChannelA,
	T1_ChannelB,
	T1_ChannelAB,
}T1_Channel_t;




#endif /* MCAL_TIMER1_T1_PRIVATE_H_ */
