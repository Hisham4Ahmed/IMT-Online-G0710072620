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

#define _SetAddress8bit(Address) *((volatile uint8_t*)Address)
#define _SetAddress16bit(Address) *((volatile uint16_t*)Address)

#define SREG_Reg _SetAddress8bit(0x5F)
#define DDRA_Reg _SetAddress8bit(0x3A)
#define DDRB_Reg _SetAddress8bit(0x37)
#define DDRC_Reg _SetAddress8bit(0x34)
#define DDRD_Reg _SetAddress8bit(0x31)

#define PORTA_Reg _SetAddress8bit(0x3B)
#define PORTB_Reg _SetAddress8bit(0x38)
#define PORTC_Reg _SetAddress8bit(0x35)
#define PORTD_Reg _SetAddress8bit(0x32)

#define PINA_Reg _SetAddress8bit(0x39)
#define PINB_Reg _SetAddress8bit(0x36)
#define PINC_Reg _SetAddress8bit(0x33)
#define PIND_Reg _SetAddress8bit(0x30)



#define MCUCR_Reg      _SetAddress8bit(0x55)
#define MCUCSR_Reg	   _SetAddress8bit(0x54)
#define GICR_Reg       _SetAddress8bit(0x5B)
#define GIFR_Reg       _SetAddress8bit(0x5A)

#define ADMUX_Reg     _SetAddress8bit(0x27)
#define ADCSRA_Reg    _SetAddress8bit(0x26)
#define ADCH_Reg      _SetAddress8bit(0x25)
#define ADCL_Reg      _SetAddress8bit(0x24)
#define ADCData_Reg   _SetAddress16bit0x24)
#define SFIOR_Reg     _SetAddress8bit(0x50)


#define TCCR0_Reg     _SetAddress8bit(0x53)
#define TCNT0_Reg	  _SetAddress8bit(0x52)
#define OCR0_Reg      _SetAddress8bit(0x5C)
#define TIMSK_Reg     _SetAddress8bit(0x59)
#define TIFR_Reg      _SetAddress8bit(0x58)
#define TCCR1A_Reg 	  _SetAddress8bit(0x4F)
#define TCCR1B_Reg 	  _SetAddress8bit(0x4E)
#define TCNT1_Reg	  _SetAddress16bit(0x4C)
#define OCR1A_Reg	  _SetAddress16bit(0x4A)
#define OCR1B_Reg	  _SetAddress16bit(0x48)
#define ICR1_Reg	  _SetAddress16bit(0x46)








#endif /* MCAL_ATMEGA32REGISTERS_H_ */
