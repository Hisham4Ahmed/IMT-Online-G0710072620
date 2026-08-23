/*
 * ATmega32Register.h
 *
 *  Created on: Aug 21, 2026
 *      Author: hesham
 */

#ifndef ATMEGA32REGISTER_H_
#define ATMEGA32REGISTER_H_

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

#endif /* ATMEGA32REGISTER_H_ */
