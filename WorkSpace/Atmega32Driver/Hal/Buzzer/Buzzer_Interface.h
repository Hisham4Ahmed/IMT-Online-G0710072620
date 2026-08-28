/*
 * Buzzer_Interface.h
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#ifndef HAL_BUZZER_BUZZER_INTERFACE_H_
#define HAL_BUZZER_BUZZER_INTERFACE_H_
#include <stdint.h>
#include "../../Common/BitMath.h"
#include "../../Common/Definition.h"
#include "../../Mcal/DIO/DIO_Interface.h"


//API
void Buzzer_Init(uint8_t BuzzerGroup,uint8_t BuzzerPin);
void Buzzer_On(uint8_t BuzzerGroup,uint8_t BuzzerPin);
void Buzzer_Off(uint8_t BuzzerGroup,uint8_t BuzzerPin);
void Buzzer_Toggle(uint8_t BuzzerGroup,uint8_t BuzzerPin);

#endif /* HAL_BUZZER_BUZZER_INTERFACE_H_ */
