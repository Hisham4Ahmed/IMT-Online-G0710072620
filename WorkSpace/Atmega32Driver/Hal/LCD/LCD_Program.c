#include <util/delay.h>
#include  "LCD_Interface.h"


void LCD_Init()
{
#if Lcd_Mode==Lcd_8BitMode
	// Select Direction For RS & RW & E & Data Pin as Output
	DIO_DirectionSetForPin(Lcd_RSGroup,Lcd_RSPin,DIO_Output);
	DIO_DirectionSetForPin(Lcd_RWGroup,Lcd_RWPin,DIO_Output);
	DIO_DirectionSetForPin(Lcd_EGroup,Lcd_EPin,DIO_Output);
	DIO_DirectionSetForGroup(Lcd_DataGroup,0xFF);
    /*Init*/
    // 1- wait for 35 msec
	_delay_ms(35);
    // 2- Sent the Function set
	LCD_SendInstruction(Lcd_FunctionSet);
    // 3- Wait for 1msec
	_delay_ms(1);
    // 4- Sent the Display on Off
	LCD_SendInstruction(Lcd_DisplayOnOff);
    // 5- Wait for 1msec
	_delay_ms(1);
    // 6- Sent Clear
	LCD_SendInstruction(Lcd_ClearDisplay);
    // 7- Wait for 2msec
	_delay_ms(2);
    // 8- Entry Mode sent
	LCD_SendInstruction(Lcd_EntryMode);
#elif Lcd_Mode==Lcd_4BitMode
#else
#error "Invaild LCD Mode"
#endif
}
void LCD_SendInstruction(uint8_t Instruction)
{
#if Lcd_Mode==Lcd_8BitMode
	//	RS -> 0 -> Low
	DIO_WriteValueForPin(Lcd_RSGroup,Lcd_RSPin,DIO_Low);
	//	RW -> 0 -> Low
	DIO_WriteValueForPin(Lcd_RWGroup,Lcd_RWPin,DIO_Low);
	// Update Instruction
	DIO_WriteValueForGroup(Lcd_DataGroup,Instruction);
	// E -> 1 -> High
	DIO_WriteValueForPin(Lcd_EGroup,Lcd_EPin,DIO_High);
	_delay_ms(1);
	// E -> 1 -> High
	DIO_WriteValueForPin(Lcd_EGroup,Lcd_EPin,DIO_Low);

#elif Lcd_Mode==Lcd_4BitMode
#else
#error "Invaild LCD Mode"
#endif
}
void LCD_WriteCharacter(uint8_t Character)
{
#if Lcd_Mode==Lcd_8BitMode
	//	RS -> 0 -> Low
	DIO_WriteValueForPin(Lcd_RSGroup,Lcd_RSPin,DIO_High);
	//	RW -> 0 -> Low
	DIO_WriteValueForPin(Lcd_RWGroup,Lcd_RWPin,DIO_Low);
	// Update Instruction
	DIO_WriteValueForGroup(Lcd_DataGroup,Character);
	// E -> 1 -> High
	DIO_WriteValueForPin(Lcd_EGroup,Lcd_EPin,DIO_High);
	_delay_ms(1);
	// E -> 1 -> High
	DIO_WriteValueForPin(Lcd_EGroup,Lcd_EPin,DIO_Low);
#elif Lcd_Mode==Lcd_4BitMode
#else
#error "Invaild LCD Mode"
#endif
}
void LCD_WriteString(uint8_t *String)
{
	if(String!=NULL)
	{
		uint8_t Index = 0 ;
		while(String[Index]!='\0')
		{
			LCD_WriteCharacter(String[Index]);
			Index++;
		}
	}
}
void LCD_MoveTo(uint8_t LineNo , uint8_t DigitNo)
{
	uint8_t DDRAMAddress =  0 ;
	switch(LineNo)
	{
	case Lcd_Line1 : DDRAMAddress = Lcd_AddressLine1+DigitNo;break;
	case Lcd_Line2 : DDRAMAddress = Lcd_AddressLine2+DigitNo;break;
	default : return ;
	}
	// Sent to LCD the Address
	LCD_SendInstruction(Lcd_SetDDRAMCommand|DDRAMAddress);
}

void LCD_WriteNumber(int32_t Number)
{
	uint8_t NumberDigits[10]={0};
	uint8_t Index = 0 ;
	int8_t Counter = 0 ;
	if(Number==0)
	{
		LCD_WriteCharacter('0');
		return ;
	}
	if(Number<0)
	{
		LCD_WriteCharacter('-');
		Number = Number * -1;
	}
	while(Number!=0)
	{
		NumberDigits[Index] = (Number%10)+'0';
		Number = Number/10;
		Index++;
	}
	for(Counter = Index-1 ; Counter>=0;Counter--)
	{
		LCD_WriteCharacter(NumberDigits[Counter]);
	}
}




void LCD_StoreSpecialCharacter(uint8_t *SpecialChar, uint8_t LocationNo)
{
	// Calc the Location Address
	uint8_t LocationCGRAMAddress = LocationNo * 8 ;
	// Sent LCD Address in CGRAM
	LCD_SendInstruction(Lcd_SetCGRAMCommand|LocationCGRAMAddress);
	// Start Store byte byte from Array in Address
	for(uint8_t Index = 0 ; Index < 8 ; Index++)
	{
		LCD_WriteCharacter(SpecialChar[Index]);
	}
	// Sent LCD Back to DDRAM
	LCD_MoveTo(Lcd_Line1,0);
//	LCD_SendInstruction(Lcd_SetDDRAMCommand|0x00);

}



