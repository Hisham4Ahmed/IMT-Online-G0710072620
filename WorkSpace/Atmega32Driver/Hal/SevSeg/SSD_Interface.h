/*
 * SSD_Interface.h
 *
 *  Created on: Aug 28, 2026
 *      Author: hesham
 */

#ifndef HAL_SEVSEG_SSD_INTERFACE_H_
#define HAL_SEVSEG_SSD_INTERFACE_H_


#include <stdint.h>
#include "../../Mcal/DIO/DIO_Interface.h"
#include "SSD_Private.h"
#include "SSD_Config.h"

void SSD_Init(uint8_t SSDGroup);
/*Display Number form 0 to 9 */
void SSD_DisplayNumber1Digit(uint8_t SSDGroup,uint8_t Number, uint8_t SSDType);

#endif /* HAL_SEVSEG_SSD_INTERFACE_H_ */
