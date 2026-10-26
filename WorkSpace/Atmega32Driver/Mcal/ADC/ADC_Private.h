/**
 * @file    ADC_Private.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 25, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#ifndef _MCAL_ADC_ADC_PRIVATE_H
#define _MCAL_ADC_ADC_PRIVATE_H

/*===============================================================
 * ADC Bit Names
 *===============================================================*/
typedef enum
{
	/**< @brief ADMUX*/
	MUX0,
	MUX1,
	MUX2,
	MUX3,
	MUX4,
	ADLAR,
	REFS0,
	REFS1,
	/**< @brief ADCSRA*/
	ADPS0=0,
	ADPS1,
	ADPS2,
	ADIE,
	ADIF,
	ADATE,
	ADSC,
	ADEN,
	/**< @brief SFIOR*/
	ADTS0=5,
	ADTS1,
	ADTS2
}Adc_BitName_t;

/*===============================================================
 * ADC Channel Selection
 *===============================================================*/
typedef enum
{
    Adc_SingleEndedChannel0,
    Adc_SingleEndedChannel1,
    Adc_SingleEndedChannel2,
    Adc_SingleEndedChannel3,
    Adc_SingleEndedChannel4,
    Adc_SingleEndedChannel5,
    Adc_SingleEndedChannel6,
    Adc_SingleEndedChannel7,
}ADC_Channel_t;

/*===============================================================
 * ADC Voltage Reference Selection
 *===============================================================*/
typedef enum
{
    Adc_Aref =0x00,
    Adc_Avcc =0x40,
    Adc_Internal=0xC0,
}Adc_ArefSelect_t;

/*===============================================================
 * ADC Result Adjustment
 *===============================================================*/
typedef enum
{
    Adc_RightAdjust=0x00,
    Adc_LeftAdjust=0x20,
}Adc_AdjustResult_t;

/*===============================================================
 * ADC Prescaler Selection
 *===============================================================*/
typedef enum
{
    Adc_DivisionFactor2=1,
    Adc_DivisionFactor4,
    Adc_DivisionFactor8,
    Adc_DivisionFactor16,
    Adc_DivisionFactor32,
    Adc_DivisionFactor64,
    Adc_DivisionFactor128,
}Adc_PrescalerSelect_t;

/*===============================================================
 * ADC Interrupt State
 *===============================================================*/
typedef enum
{
    Adc_InterruptDisable=0x00,
    Adc_InterruptEnable=0x08,
}Adc_InterruptState_t;

/*===============================================================
 * ADC Operating Mode
 *===============================================================*/
typedef enum
{
    Adc_SingleMode=0x00,
    Adc_AutoMode=0x20,
}Adc_Mode_t;

/*===============================================================
 * ADC Peripheral State
 *===============================================================*/
typedef enum
{
	Adc_Disable =0x00,
	Adc_Enable  =0x80,
}Adc_State_t;

/*===============================================================
 * ADC Auto Trigger Source
 *===============================================================*/
typedef enum
{
	Adc_FreeRunning=0x00,
	Adc_AnalogComparator=0x20,
	Adc_EXTI0=0x40,
	Adc_T0CM=0x60,
	Adc_T0OV=0x80,
	Adc_T1CMB=0xA0,
	Adc_T1OV=0xC0,
	Adc_T1CaptureEvent=0xE0,
}Adc_AutoTriggerSelect_t;

/*===============================================================
 * ADC Driver Status
 *===============================================================*/
typedef enum
{
    ADC_OK,
    ADC_BUSY,
    ADC_TIMEOUT,
    ADC_INVALID_CHANNEL,
    ADC_NOT_INITIALIZED,
    ADC_NULL_POINTER,
    ADC_CONVERSION_NOT_COMPLETE
} ADC_Status_t;

/*===============================================================
 * ADC Driver State
 *===============================================================*/

typedef enum
{
    ADC_STATE_UNINITIALIZED,
    ADC_STATE_IDLE,
    ADC_STATE_BUSY

} ADC_DriverState_t;


/*===============================================================
 * ADC Masks
 *===============================================================*/
#define Adc_TriggerSourceMask 0xE0
#define Adc_ChannelMask       0x1F
#define Adc_TimeOutError      0xFFFF




#endif
