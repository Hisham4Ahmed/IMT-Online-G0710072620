/**
 * @file    DIO_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_

#include "../Atmega32Registers.h"
#include <stdint.h>
#include "../../Common/BitMath.h"
#include "../../Common/Definition.h"
#include "../../Common/StdTypes.h"

#include "DIO_Private.h"
#include "DIO_Config.h"

/*API*/
/**
 * @fn
 * @brief
 * @param GroupName
 * @param PinNo
 * @param DirectionState
 */
void DIO_DirectionSetForPin(uint8_t GroupName,uint8_t PinNo, uint8_t DirectionState);
/**
 * @fn
 * @brief
 * @param GroupName
 * @param DirectionState
 */
void DIO_DirectionSetForGroup(uint8_t GroupName, uint8_t DirectionState);
/**
 * @fn
 * @brief
 * @param GroupName
 * @param PinNumber
 * @param OutputValue
 */
void DIO_WriteValueForPin(uint8_t GroupName,uint8_t PinNumber, uint8_t OutputValue );
/**
 * @fn
 * @brief
 * @param GroupName
 * @param OutputValue
 */
void DIO_WriteValueForGroup(uint8_t GroupName, uint8_t OutputValue );
/**
 * @fn
 * @brief
 * @param GroupName
 * @param PinNumber
 * @return
 */
uint8_t DIO_ReadStateInputForPin(uint8_t GroupName,uint8_t PinNumber);
/**
 * @fn
 * @brief
 * @param GroupName
 * @return
 */
uint8_t DIO_ReadStateInputForGroup(uint8_t GroupName);
/**
 * @fn
 * @brief
 * @param GroupName
 * @param PinNumber
 * @param InternalPullUpState
 */
void DIO_InternalPullUpControlForPin(uint8_t GroupName,uint8_t PinNumber,uint8_t InternalPullUpState);
/**
 * @fn
 * @brief
 * @param GroupName
 * @param InternalPullUpState
 */
void DIO_InternalPullUpControlForGroup(uint8_t GroupName,uint8_t InternalPullUpState);
/**
 * @fn
 * @brief
 * @param GroupName
 * @param PinNumber
 */
void DIO_TogglePin(uint8_t GroupName,uint8_t PinNumber);
#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
