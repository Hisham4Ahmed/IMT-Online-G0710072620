/**
 * @file    DC_Program.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#include "DC_Interface.h"


void DC_Init(DC_Config_t * MyConfig)
{
	if(MyConfig!=NULL)
	{
		if(MyConfig->ControlType==DC_OnOffOnly)
		{
			DIO_DirectionSetForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_Output);
		}
		else if(MyConfig->ControlType==DC_DirectionControl)
		{
			DIO_DirectionSetForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_Output);
			DIO_DirectionSetForPin(MyConfig->DC_M2Group,MyConfig->DC_M2Pin,DIO_Output);
		}
		else
		{
			/**< @todo We Need to add the Error State Machinsem */
		}
	}
}

void DC_On(DC_Config_t *MyConfig)
{
	if(MyConfig!=NULL)
	{
		if(MyConfig->ConnectionType == DC_NPN)
		{
			DIO_WriteValueForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_High);
		}
		else if (MyConfig->ConnectionType ==DC_PNP)
		{
			DIO_WriteValueForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_Low);
		}
		else
		{

		}
	}
	else
	{

	}
}


void DC_OnCW(DC_Config_t *MyConfig)
{
	if(MyConfig!=NULL)
	{
		if(MyConfig->ConnectionType==DC_NPN)
		{
			DIO_WriteValueForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_High);
			DIO_WriteValueForPin(MyConfig->DC_M2Group,MyConfig->DC_M2Pin,DIO_Low);
		}
		else if(MyConfig->ConnectionType==DC_PNP
				||MyConfig->ConnectionType==DC_Hybrid )
		{
			DIO_WriteValueForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_Low);
			DIO_WriteValueForPin(MyConfig->DC_M2Group,MyConfig->DC_M2Pin,DIO_High);
		}


	}
	else
	{

	}
}
void DC_OnCCW(DC_Config_t *MyConfig)
{
	if (MyConfig!=NULL)
	{
		if(MyConfig->ConnectionType==DC_NPN)
		{
			DIO_WriteValueForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_Low);
			DIO_WriteValueForPin(MyConfig->DC_M2Group,MyConfig->DC_M2Pin,DIO_High);
		}
		else if (MyConfig->ConnectionType==DC_PNP||MyConfig->ConnectionType==DC_Hybrid)
		{
			DIO_WriteValueForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_High);
			DIO_WriteValueForPin(MyConfig->DC_M2Group,MyConfig->DC_M2Pin,DIO_Low);
		}
		else
		{

		}
	}
	else
	{

	}
}







void DC_Off(DC_Config_t *MyConfig)
{
	if(MyConfig!=NULL)
	{
		if (MyConfig->ControlType==DC_OnOffOnly)
		{
			if(MyConfig->ConnectionType==DC_NPN)
			{
				DIO_WriteValueForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_Low);
			}
			else if (MyConfig-> ConnectionType==DC_PNP)
			{
				DIO_WriteValueForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_High);
			}
			else
			{

			}
		}
		else if (MyConfig-> ControlType== DC_DirectionControl)
		{
			if(MyConfig->ConnectionType==DC_NPN)
			{
				DIO_WriteValueForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_Low);
				DIO_WriteValueForPin(MyConfig->DC_M2Group,MyConfig->DC_M2Pin,DIO_Low);

			}
			else if (MyConfig-> ConnectionType==DC_PNP)
			{
				DIO_WriteValueForPin(MyConfig->DC_M1Group,MyConfig->DC_M1Pin,DIO_High);
				DIO_WriteValueForPin(MyConfig->DC_M2Group,MyConfig->DC_M2Pin,DIO_High);
			}
			else if(MyConfig->ConnectionType==DC_Hybrid)
			{
				/**< @bug  the Hybrid Connection we have corner case  we can't Stop Motor*/
				/**< M1 -> Q1-> PNP    Q4 -> NPN*/
				/**< M2 -> Q2-> PNP    Q3 -> NPN*/
			}
		}
	}
	else
	{

	}
}


