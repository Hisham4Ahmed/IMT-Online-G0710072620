/**
 * @file    Atmega32Registers.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef MCAL_ATMEGA32REGISTERS_H_
#define MCAL_ATMEGA32REGISTERS_H_


#include <stdint.h>
#define DDRA_Reg *((volatile uint8_t*)0x3A)
#define DDRB_Reg *((volatile uint8_t*)0x37)
#define DDRC_Reg *((volatile uint8_t*)0x34)
#define DDRD_Reg *((volatile uint8_t*)0x31)

#define PORTA_Reg *((volatile uint8_t*)0x3B)
#define PORTB_Reg *((volatile uint8_t*)0x38)
#define PORTC_Reg *((volatile uint8_t*)0x35)
#define PORTD_Reg *((volatile uint8_t*)0x32)

#define PINA_Reg *((volatile uint8_t*)0x39)
#define PINB_Reg *((volatile uint8_t*)0x36)
#define PINC_Reg *((volatile uint8_t*)0x33)
#define PIND_Reg *((volatile uint8_t*)0x30)

#endif /* MCAL_ATMEGA32REGISTERS_H_ */
