/*
 * App.c
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#include "ATmega32Register.h"
#include "BitMath.h"
#include <util/delay.h>
#include <stdint.h>
#include "App.h"

//Button State Internal PullUp
typedef enum
{
	PullUp_Pressed=0,
	PullUp_NotPressed=1,
	PullDown_NotPressed = 0,
	PullDown_Pressed = 1 ,

}Btn_State;




void AppLedToggle()
{
	// Led -> Group A  , pin 4
	// Direction A 4 -> Output = 1
	SetBit(DDRA_Reg,4);// Output
	while(1)
	{
		ToggleBit(PORTA_Reg,4);
		_delay_ms(1000);
	}
}

void AppControlLedByButton()
{
	// Button -> A  -> Pin 0  -> Input = 0  -> Internal Pull up
	ClearBit(DDRA_Reg,0);// Select Pin as Input
	SetBit(PORTA_Reg,0);// Enable the Internal Pull up
	// Led -> B ->Pin 0 -> Output = 1 -> Source Connection
	SetBit(DDRB_Reg,0); // Select pin as Output
	uint8_t ButtonState = PullUp_NotPressed ;
	while(1)
	{
		ButtonState=ReadBit(PINA_Reg,0);
		if (ButtonState==PullUp_Pressed)
		{
			//LedOn -> PORT -> High -> 1
			SetBit(PORTB_Reg,0);// Provide the High value
		}
		else if (ButtonState==PullUp_NotPressed)
		{
			//LedOff
			ClearBit(PORTB_Reg,0);
		}
	}

}

void AppToggleLedByButton()
{
	// Button -> A  -> Pin 0  -> Input = 0  -> Internal Pull up
	ClearBit(DDRA_Reg,0);// Select Pin as Input
	SetBit(PORTA_Reg,0);// Enable the Internal Pull up
	// Led -> B ->Pin 0 -> Output = 1 -> Source Connection
	SetBit(DDRB_Reg,0); // Select pin as Output
	uint8_t ButtonState = PullUp_NotPressed ;
	while(1)
	{
		ButtonState=ReadBit(PINA_Reg,0);
		if (ButtonState==PullUp_Pressed)
		{
			//LedOn -> PORT -> High -> 1
			ToggleBit(PORTB_Reg,0);// Provide the High value
		}

	}

}

void AppBuzzerToneControlByButton()
{
	//	Button -> GroupA -> Pin0 -> Input = 0 -> Connection Internal PullUp
	//  Buzzer -> GroupB -> Pin0 -> Output = 1  -> Connection Soruce Connection
	ClearBit(DDRA_Reg,0);// input
	SetBit(PORTA_Reg,0);// Enable Internal
	uint8_t ButtonState=PullUp_NotPressed;
	SetBit(DDRB_Reg,0);
	while(1)
	{
		ButtonState=ReadBit(PINA_Reg,0);
		if(ButtonState==PullUp_Pressed)
		{
			ToggleBit(PORTB_Reg,0);
			_delay_ms(500);
		}
		else if (ButtonState==PullUp_NotPressed)
		{
			ClearBit(PORTB_Reg,0);
		}
	}

}

//7 6 5 4 3 2 1 0
//h g f e d c b a
//

typedef enum
{
	Anode_Zero=0xC0,
	Anode_One=0xF9,
	Anode_Two=0xA4,
	Anode_Three=0xB0,
	Anode_Four=0x99,
	Anode_Five=0x92,
	Anode_Six=0x82,
	Anode_Seven=0xF8,
	Anode_Eight=0x80,
	Anode_Nine=0x90,
	Anode_NoSize=10
}Anode_Number;
uint8_t AnodeNumber[Anode_NoSize]=
{
		Anode_Zero,
		Anode_One,
		Anode_Two,
		Anode_Three,
		Anode_Four,
		Anode_Five,
		Anode_Six ,
		Anode_Seven,
		Anode_Eight,
		Anode_Nine
};
void AppCountNumberOnSegmentByButton()
{
	//	Button -> GroupC -> Pin0 -> Input = 0 -> Connection Internal PullUp
	ClearBit(DDRC_Reg,0);// input
	SetBit(PORTC_Reg,0);// Enable Internal
	uint8_t ButtonState=PullUp_NotPressed;
	// Segment -> Common Anode -> GroupA ->
	DDRA_Reg=0xFF;
	uint8_t SegmentCount=0;
	PORTA_Reg=AnodeNumber[SegmentCount];
	while(1)
	{
		ButtonState=ReadBit(PINC_Reg,0);

		if(ButtonState==PullUp_Pressed)
		{
			_delay_ms(150);
			ButtonState=ReadBit(PINC_Reg,0);
			if(ButtonState==PullUp_Pressed)
			{
				//				Count Number on SevenSegment
				SegmentCount++;
				if(SegmentCount>9)
				{
					SegmentCount=0;
				}
				PORTA_Reg=AnodeNumber[SegmentCount];
			}
		}

	}
}



