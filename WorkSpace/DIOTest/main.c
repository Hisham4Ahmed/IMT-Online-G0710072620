/*
 * main.c
 *
 *  Created on: Aug 21, 2026
 *      Author: hesham
 */

#include <util/delay.h>
#include "ATmega32Register.h"
#include "BitMath.h"

// three Switch
	// Button1 control on Led 1
		// if pressed = Led on
		// not Pressed = Led off
	// Button2 control on Led 2
		// if pressed = Led Toggle (for 1 Sec)
		// Not pressed =  Led Off
	// Button3 Control On 7 Segment
		// if pressed => Seven Display Number+1


// External Pull Down
	// Pressed = 1
	// Not Pressed = 0

void main()
{
	// Button1  -> Group -> A  -> Pin 1 -> Connection Type -> External Pull Down
	ClearBit(DDRA_Reg,1); // Input PA1
	// Led1 -> Group -> D -> Pin1 -> Connection -> Source Connection
		// Led On -> 1  // Led off -> 0
	SetBit(DDRD_Reg,1); // Output PD1
	uint8_t ButtonState =  0 ;

	while(1)
	{
		ButtonState=ReadBit(PINA_Reg,1);
		if(ButtonState==0)
		{
			// Led off
			ClearBit(PORTD_Reg,1);
		}
		else if (ButtonState==1)
		{
		   // 	Led on
			SetBit(PORTD_Reg,1);
		}
	}
}


// Connect the sevenSegment and Display Number 2
// Group C -> SevenSegment -> as Output
//
//void main()
//{
////	Update to Group -> DDRD = Value ;
//	//  h g f e d c b a
//	//  7 6 5 4 3 2 1 0
//	// common anode (VCC)(LedON-> 0)  ->
//	//  h g f e d c b a
//	//  7 6 5 4 3 2 1 0
//	//  1 0 1 0 0 1 0 0
//	// common Cathod (gnd)(LedON-> 1)  ->
//	//  h g f e d c b a
//	//  7 6 5 4 3 2 1 0
//	//  0 1 0 1 1 0 1 1
////	DDRC_Reg = 0b11111111;
////	DDRC_Reg = 255;
//	DDRC_Reg = 0xFF;// Best
//	DDRA_Reg = 0xFF;
//	//  h g f e d c b a
//	//  7 6 5 4 3 2 1 0
//	//  0 1 1 0 0 1 1 0 -> 0x66 Cathod Number 4
//	//  1 0 1 1 0 0 0 0 -> 0xB0
//	while(1)
//	{
//		PORTC_Reg=0xB0; //-> 3 anode
//		PORTA_Reg=0x66; //-> 4 cathod (
//	}
//
//
//}






//// Configure a DIO pin as an output and toggle it every 500 ms.
//void main()
//{
//	// DIO Pin -> Group A  -> 3
//	// Direction  DDRA , 3 -> 1
//	SetBit(DDRA_Reg,3); // DIO pin as an output
//	while(1)
//	{
//		ToggleBit(PORTA_Reg,3);
//		_delay_ms(500);
//	}
//
//}




// Comment for you
// if you need control on Specific Pin as Output = 1 ->
	// used SetBit function - Direction Register (DDR) - pin
// if you need control on Specific Pin as Input  = 0 ->
	// used ClearBit function - Direction Register (DDR) - pin










