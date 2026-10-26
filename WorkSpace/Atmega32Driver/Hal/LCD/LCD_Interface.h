/**
 * @file    LCD_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_

#include <stdint.h>
#include "../../Mcal/DIO/DIO_Interface.h"
#include "LCD_Private.h"
#include "LCD_Config.h"

/**
 * @fn
 * @brief
 */
void LCD_Init();
/**
 * @fn
 * @brief
 * @param Instruction
 */
void LCD_SendInstruction(uint8_t Instruction);
/**
 * @fn
 * @brief
 * @param Character
 */
void LCD_WriteCharacter(uint8_t Character);
/**
 * @fn
 * @brief
 * @param String
 */
void LCD_WriteString(uint8_t *String);
/**
 * @fn
 * @brief
 * @param Number
 */
void LCD_WriteNumber(int32_t Number);
/**
 * @fn
 * @brief
 * @param LineNo
 * @param DigitNo
 */
void LCD_MoveTo(uint8_t LineNo , uint8_t DigitNo);
/**
 * @fn
 * @brief
 * @param SpecialChar
 * @param LocationNo
 */
void LCD_StoreSpecialCharacter(uint8_t *SpecialChar, uint8_t LocationNo);

#endif /* HAL_LCD_LCD_INTERFACE_H_ */
