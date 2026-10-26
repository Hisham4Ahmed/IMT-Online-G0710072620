/**
 * @file    T0_Private.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Oct 2, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#ifndef MCAL_TIMER0_T0_PRIVATE_H_
#define MCAL_TIMER0_T0_PRIVATE_H_

typedef enum
{
	/*TCCR0*/
	CS00,
	CS01,
	CS02,
	WGM01,
	COM00,
	COM01,
	WGM00,
	FOC0,
	/*TIMSK*/
	TOIE0=0,
	OCIE0,
	/*TIFR*/
	TOV0=0,
	OCF0
}T0_BitName_t;

/*Options
 * 2 1 0 */
typedef enum
{
	T0_Stopped,
	T0_NoPrescaling,
	T0_Prescaller8,
	T0_Prescaller64,
	T0_Prescaller256,
	T0_Prescaller1024,
	T0_ExternalFalling,
	T0_ExternalRising,
}T0_ClockSelect_t;
/*Options
 * 5 4
 * 7 6 5 4 3 2 1 0
 * 0 0 0 0 0 0 0 0
 * 0 0 0 1 0 0 0 0
 * 0 0 1 0 0 0 0 0
 * 0 0 1 1 0 0 0 0
 * -------------------
 * 0 0 1 0 0 0 0 0
 * 0 0 1 1 0 0 0 0*/
typedef enum
{
	OC0_Disconnect,
	OC0_Toggle=0x10,
	OC0_Clear=0x20,
	OC0_Set=0x30,
	/*PWM*/
	OC0_NonInverting=0x20,
	OC0_Inverting=0x30,
}T0_OutputMode_t;


/*Options
 * WGM00(6)  WGM01(3)
 * 7 6 5 4 3 2 1 0
 * 0 0 0 0 0 0 0 0
 * 0 1 0 0 0 0 0 0
 * 0 0 0 0 1 0 0 0
 * 0 1 0 0 1 0 0 0 */
typedef enum
{
	T0_NormalMode,
	T0_PWMPhase=0x40,
	T0_CTCMode=0x08,
	T0_PWMFast=0x48,
}T0_ModeSelect_t;

typedef enum
{
	T0_InterruptDisabled,
	T0_TOVEnable,
	T0_OCEnable,
	T0_BothEnable,
}T0_InterruptState_t;


#define T0_ClockSelectMask 0x07
#define T0_TIMSKMask       0x03




#endif /* MCAL_TIMER0_T0_PRIVATE_H_ */
