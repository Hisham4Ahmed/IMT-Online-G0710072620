/*
 * LCD_Interface.h
 *
 *  Created on: Sep 4, 2026
 *      Author: hesham
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_

#include <stdint.h>
#include "../../Mcal/DIO/DIO_Interface.h"
#include "LCD_Private.h"
#include "LCD_Config.h"


void LCD_Init();
void LCD_SendInstruction(uint8_t Instruction);
void LCD_WriteCharacter(uint8_t Character);
void LCD_WriteString(uint8_t *String);
void LCD_WriteNumber(int32_t Number);
void LCD_MoveTo(uint8_t LineNo , uint8_t DigitNo);
void LCD_StoreSpecialCharacter(uint8_t *SpecialChar, uint8_t locationNo);

#endif /* HAL_LCD_LCD_INTERFACE_H_ */
