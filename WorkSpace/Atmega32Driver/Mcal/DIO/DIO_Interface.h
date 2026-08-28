/*
 * DIO_Interface.h
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
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
// API To Select Direction (Input/Output)
void DIO_DirectionSetForPin(uint8_t GroupName,uint8_t PinNo, uint8_t DirectionState);
void DIO_DirectionSetForGroup(uint8_t GroupName, uint8_t DirectionState);
// API To Provide Output Value (High / Low )
void DIO_WriteValueForPin(uint8_t GroupName,uint8_t PinNumber, uint8_t OutputValue );
void DIO_WriteValueForGroup(uint8_t GroupName, uint8_t OutputValue );
// API To Read the Input State
uint8_t DIO_ReadStateInputForPin(uint8_t GroupName,uint8_t PinNumber);
uint8_t DIO_ReadStateInputForGroup(uint8_t GroupName);
//API To Enable/Disable the Internal PullUp
void DIO_InternalPullUpControlForPin(uint8_t GroupName,uint8_t PinNumber,uint8_t InternalPullUpState);
void DIO_InternalPullUpControlForGroup(uint8_t GroupName,uint8_t InternalPullUpState);
// API To Toggle Pin
void DIO_TogglePin(uint8_t GroupName,uint8_t PinNumber);
#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
