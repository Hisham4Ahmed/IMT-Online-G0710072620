/**
 * @file    LCD_Config.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef HAL_LCD_LCD_CONFIG_H_
#define HAL_LCD_LCD_CONFIG_H_
#include "../../Mcal/DIO/DIO_Interface.h"

#define Lcd_Mode      Lcd_8BitMode
#define Lcd_RSPin     DIO_Pin0
#define Lcd_RSGroup   DIO_GroupA

#define Lcd_RWPin     DIO_Pin1
#define Lcd_RWGroup   DIO_GroupA

#define Lcd_EPin      DIO_Pin2
#define Lcd_EGroup    DIO_GroupA

#if Lcd_Mode==Lcd_8BitMode
	#define Lcd_DataGroup   DIO_GroupC
#elif Lcd_Mode==Lcd_4BitMode
	#define Lcd_D4Pin      DIO_Pin4
	#define Lcd_D4Group    DIO_GroupC
	#define Lcd_D5Pin      DIO_Pin5
	#define Lcd_D5Group    DIO_GroupC
	#define Lcd_D6Pin      DIO_Pin6
	#define Lcd_D6Group    DIO_GroupC
	#define Lcd_D7Pin      DIO_Pin7
	#define Lcd_D7Group    DIO_GroupC
#else
#error "Invalid LCD Mode"
#endif


#define Lcd_FunctionSet     Lcd_8bit2Line5x8F
#define Lcd_DisplayOnOff    Lcd_CursorBlinking
#define Lcd_EntryMode       Lcd_RightNoShift

#endif /* HAL_LCD_LCD_CONFIG_H_ */
