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
#define SREG_Reg *((volatile uint8_t*)0x5F)
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



#define MCUCR_Reg      *((volatile uint8_t*)0x55)
#define MCUCSR_Reg	   *((volatile uint8_t*)0x54)
#define GICR_Reg       *((volatile uint8_t*)0x5B)
#define GIFR_Reg       *((volatile uint8_t*)0x5A)




#define ADMUX_Reg     *((volatile uint8_t*)0x27)
#define ADCSRA_Reg    *((volatile uint8_t*)0x26)
#define ADCH_Reg      *((volatile uint8_t*)0x25)
#define ADCL_Reg      *((volatile uint8_t*)0x24)
#define ADCData_Reg   *((volatile uint16_t*)0x24)
#define SFIOR_Reg     *((volatile uint8_t*)0x50)


#define TCCR0_Reg     *((volatile uint8_t*)0x53)
#define TCNT0_Reg	  *((volatile uint8_t*)0x52)
#define OCR0_Reg      *((volatile uint8_t*)0x5C)
#define TIMSK_Reg     *((volatile uint8_t*)0x59)
#define TIFR_Reg      *((volatile uint8_t*)0x58)

#endif /* MCAL_ATMEGA32REGISTERS_H_ */
