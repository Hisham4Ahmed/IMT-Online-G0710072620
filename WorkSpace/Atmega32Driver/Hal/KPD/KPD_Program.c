/*
 * KPD_Program.c
 *
 *  Created on: Sep 5, 2026
 *      Author: hesham
 */

#include <util/delay.h>
#include "KPD_Interface.h"

static uint8_t KPDValues[Kpd_RowNo][Kpd_ColNo]= Kpd_ValuesConfigured;
static uint8_t KPD_RGroups[Kpd_RowNo]= Kpd_RGroupConfigured;
static uint8_t KPD_RPins[Kpd_RowNo]= Kpd_RPinConfigured;
static uint8_t KPD_CGroups[Kpd_ColNo]= Kpd_CGroupConfigured;
static uint8_t KPD_CPins[Kpd_ColNo]= Kpd_CPinConfigured;
void KPD_Init()
{

	for(uint8_t RIndex = 0 ;RIndex<Kpd_RowNo;RIndex++)
	{
		DIO_DirectionSetForPin(KPD_RGroups[RIndex],KPD_RPins[RIndex],DIO_Input);
		DIO_InternalPullUpControlForPin(KPD_RGroups[RIndex],KPD_RPins[RIndex],Enable);
	}
	for(uint8_t CIndex = 0 ;CIndex<Kpd_ColNo;CIndex++)
	{
		DIO_DirectionSetForPin(KPD_CGroups[CIndex],KPD_CPins[CIndex],DIO_Output);
		DIO_WriteValueForPin(KPD_CGroups[CIndex],KPD_CGroups[CIndex],DIO_High);
	}
}

void KPD_GetKPDValue(uint8_t *KPD_Value)
{

	*KPD_Value = Kpd_BtnValueNotPressed;
	uint8_t IsBtnPressed = Kpd_BtnStateNotPressed ;
	for (uint8_t C = 0 ; C<Kpd_ColNo;C++)
	{
		DIO_WriteValueForPin(KPD_CGroups[C],KPD_CPins[C],DIO_Low);
		for(uint8_t R=0;R<Kpd_RowNo;R++)
		{
			IsBtnPressed= DIO_ReadStateInputForPin(KPD_RGroups[R],KPD_RPins[R]);
			if(IsBtnPressed==Kpd_BtnStatePressed)
			{
				_delay_ms(100);
				IsBtnPressed= DIO_ReadStateInputForPin(KPD_RGroups[R],KPD_RPins[R]);
				if(IsBtnPressed==Kpd_BtnStatePressed)
				{
					*KPD_Value = KPDValues[R][C];
					DIO_WriteValueForPin(KPD_CGroups[C],KPD_CPins[C],DIO_High);
					return ;
				}

			}
		}
		DIO_WriteValueForPin(KPD_CGroups[C],KPD_CPins[C],DIO_High);
	}
}

