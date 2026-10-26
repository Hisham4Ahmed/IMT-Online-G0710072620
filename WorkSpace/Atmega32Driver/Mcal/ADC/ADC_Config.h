/**
 * @file    ADC_Config.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 25, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef _MCAL_ADC_ADC_CONFIG_H
#define _MCAL_ADC_ADC_CONFIG_H

#include "ADC_Private.h"


/*===============================================================
 * ADC Initial State
 *===============================================================*/

/**
 * @brief Options:
 *        - Adc_Enable
 *        - Adc_Disable
 */
#define Adc_InitialState     Adc_Enable


/*===============================================================
 * Voltage Reference Selection
 *===============================================================*/

/**
 * @def   Adc_VrefSelection
 * @brief Options:
 *        - Adc_Aref
 *        - Adc_Avcc
 *        - Adc_Internal
 */
#define Adc_VrefSelection    Adc_Avcc


/**
 * @def   Adc_VrefValue_mV
 * @brief ADC Reference Voltage in mV
 */
#define Adc_VrefValue_mV      5000UL


/*===============================================================
 * ADC Prescaler
 *===============================================================*/

/**
 * @def   Adc_DivisionFactorSelection
 * @brief Options:
 *        - Adc_DivisionFactor2
 *        - Adc_DivisionFactor4
 *        - Adc_DivisionFactor8
 *        - Adc_DivisionFactor16
 *        - Adc_DivisionFactor32
 *        - Adc_DivisionFactor64
 *        - Adc_DivisionFactor128
 */
#define Adc_DivisionFactorSelection    Adc_DivisionFactor8


/*===============================================================
 * ADC Result Adjustment
 *===============================================================*/

/**
 * @def   Adc_AdjustSelection 
 * @brief Options:
 *        - Adc_RightAdjust
 *        - Adc_LeftAdjust
 */
#define Adc_AdjustSelection    Adc_RightAdjust


/*===============================================================
 * ADC Operating Mode
 *===============================================================*/

/**
 * @def   Adc_ModeSelect
 * @brief Options:
 *        - Adc_SingleMode
 *        - Adc_AutoMode
 */
#define Adc_ModeSelect    Adc_SingleMode


/*===============================================================
 * ADC Auto Trigger Source
 *===============================================================*/

#if Adc_ModeSelect == Adc_AutoMode

/**
 * @def   Adc_TriggerSource   
 * @brief Options:
 *        - Adc_FreeRunning
 *        - Adc_AnalogComparator
 *        - Adc_EXTI0
 *        - Adc_T0CM
 *        - Adc_T0OV
 *        - Adc_T1CMB
 *        - Adc_T1OV
 *        - Adc_T1CaptureEvent
 */
#define Adc_TriggerSource    Adc_FreeRunning

#endif


/*===============================================================
 * ADC Interrupt
 *===============================================================*/

/**
 * @def   Adc_InterruptState    
 * @brief Options:
 *        - Adc_InterruptDisable
 *        - Adc_InterruptEnable
 */
#define Adc_InterruptState    Adc_InterruptDisable

#endif
