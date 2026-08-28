/*
 * SSD_Program.c
 *
 *  Created on: Aug 28, 2026
 *      Author: hesham
 */


#include "SSD_Interface.h"

static uint8_t SSDNumber[SSD_A_MaxSize]=
{
		SSD_A_Zero,
		SSD_A_One,
		SSD_A_Two,
		SSD_A_Three,
		SSD_A_Four,
		SSD_A_Five,
		SSD_A_Six ,
		SSD_A_Seven,
		SSD_A_Eight,
		SSD_A_Nine
};
void SSD_Init(uint8_t SSDGroup)
{
	DIO_DirectionSetForGroup(SSDGroup,SSDOutput);
}
/*Display Number form 0 to 9 */
void SSD_DisplayNumber1Digit(uint8_t SSDGroup,uint8_t Number, uint8_t SSDType)
{
	if(SSDType==SSD_Anode)
	{
		DIO_WriteValueForGroup(SSDGroup,SSDNumber[Number]);
	}
	else if (SSDType==SSD_Cathod)
	{
		DIO_WriteValueForGroup(SSDGroup,~SSDNumber[Number]);
	}
}
