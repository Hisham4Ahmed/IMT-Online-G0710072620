/*
 * LCD_Private.h
 *
 *  Created on: Sep 4, 2026
 *      Author: hesham
 */

#ifndef HAL_LCD_LCD_PRIVATE_H_
#define HAL_LCD_LCD_PRIVATE_H_



#define Lcd_4BitMode    1
#define Lcd_8BitMode    2
/*LCD Command */
#define Lcd_ClearDisplay   0x01
#define Lcd_ReturnHome     0x02
/**
 *  I/D=1, Increment AC (Cursor moves right)
    I/D=0, Decrement AC (Cursor moves left)
    S=1, screen shifting on
    S=0, screen shifting off
    0 0 0 0 0 1 I/D S
    0 0 0 0 0 1  0  0
    0 0 0 0 0 1  1  0
 */
#define Lcd_LeftNoShift    0x04
#define Lcd_LeftShift      0x05
#define Lcd_RightNoShift   0x06
#define Lcd_RightShift     0x07

/*
 *  DisplayOnOFF
    D=1, display on; D=0, display off
    C=1, cursor on; C=0, cursor off
    B=1, cursor blinking on; B=0, cursor blinking off
    0 0 0 0 1 D C B
    0 0 0 0 1 0 0 0
    0 0 0 0 1 1 0 0
    0 0 0 0 1 1 1 0
    0 0 0 0 1 1 1 1
 * */
#define Lcd_DisplayOff        0x08
#define Lcd_DisplayOn         0x0C
#define Lcd_CursorOn          0x0E
#define Lcd_CursorBlinking    0x0F

/*
 * Function Set
 *  DL=1, 8-bit interface; DL=0, 4-bit interface
    N=1, 2-line display; N=0, 1-line display
    F=1, 5x11 dots font; F=0, 5x8 dots font
  */
//0 0 1 DL N F x x
//0 0 1 1  1 1 0 0
#define Lcd_8bit2Line5x11F 0x3C
//0 0 1 DL N F x x
//0 0 1 1  1 0 0 0
#define Lcd_8bit2Line5x8F 0x38
//0 0 1 DL N F x x
//0 0 1 1  0 1 0 0
#define Lcd_8bit1Line5x11F 0x34
//0 0 1 DL N F x x
//0 0 1 1  0 0 0 0
#define Lcd_8bit1Line5x8F 0x30
//0 0 1 DL N F x x
//0 0 1 0  1 1 0 0
#define Lcd_4bit2Line5x11F 0x2C
//0 0 1 DL N F x x
//0 0 1 0  1 0 0 0
#define Lcd_4bit2Line5x8F 0x28
//0 0 1 DL N F x x
//0 0 1 0  0 1 0 0
#define Lcd_4bit1Line5x11F 0x24
//0 0 1 DL N F x x
//0 0 1 0  0 0 0 0
#define Lcd_4bit1Line5x8F 0x20

/*Set CGRAM */
#define Lcd_SetCGRAMCommand  0x40
/*Set DDRAM*/
#define Lcd_SetDDRAMCommand  0x80
#endif /* HAL_LCD_LCD_PRIVATE_H_ */
