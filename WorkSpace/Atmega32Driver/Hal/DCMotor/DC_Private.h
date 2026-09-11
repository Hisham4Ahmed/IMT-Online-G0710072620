/*
 * DC_Private.h
 *
 *  Created on: Sep 11, 2026
 *      Author: hesham
 */

#ifndef HAL_DCMOTOR_DC_PRIVATE_H_
#define HAL_DCMOTOR_DC_PRIVATE_H_
#include <stdint.h>

typedef enum
{
	DC_OnOffOnly,        // need one Pin from MCU
	DC_DirectionControl, // need Two Pin from MCU
}DC_ControlType_t;
typedef enum
{
	DC_NPN,        // need one Pin from MCU
	DC_PNP, // need Two Pin from MCU
	DC_Hybrid,
}DC_ConnectionType_t;

typedef struct
{
	uint8_t ControlType;
	uint8_t ConnectionType;
	uint8_t DC_M1Group; // A1
	uint8_t DC_M1Pin;
	uint8_t DC_M2Group; // A2
	uint8_t DC_M2Pin;
}DC_Config_t;

#endif /* HAL_DCMOTOR_DC_PRIVATE_H_ */
