/**
 * @file    DC_Private.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef HAL_DCMOTOR_DC_PRIVATE_H_
#define HAL_DCMOTOR_DC_PRIVATE_H_
#include <stdint.h>

typedef enum
{
	DC_OnOffOnly,        /**< need one Pin from MCU*/
	DC_DirectionControl, /**< need Two Pin from MCU*/
}DC_ControlType_t;
typedef enum
{
	DC_NPN,        /**< need one Pin from MCU*/
	DC_PNP,        /**< need Two Pin from MCU*/
	DC_Hybrid,
}DC_ConnectionType_t;

typedef struct
{
	uint8_t ControlType;
	uint8_t ConnectionType;
	uint8_t DC_M1Group;
	uint8_t DC_M1Pin;
	uint8_t DC_M2Group;
	uint8_t DC_M2Pin;
}DC_Config_t;

#endif /* HAL_DCMOTOR_DC_PRIVATE_H_ */
