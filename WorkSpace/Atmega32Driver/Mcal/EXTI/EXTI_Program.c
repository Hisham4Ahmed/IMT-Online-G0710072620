/**
 * @file    EXTI_Program.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 19, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
/*
 * EXTI_Program.c
 *
 *  Created on: Sep 19, 2026
 *      Author: hesham
 */

#include "EXTI_Interface.h"
/*PostBuild*/
/*EXTI0*/
void (*GlobalPFEXTI0)(void)=NULL;
void EXTI0_Init(uint8_t SensControl)
{
	/**< @brief Select the SensControl Configuration
	 * @details MCUCR -> ISC01, ISC00*/
	/*if(SensControl==Exti_LowLevel)
	{
		ClearBit(MCUCR_Reg,ISC00);
		ClearBit(MCUCR_Reg,ISC01);
	}
	else if(SensControl==Exti_AnyLogic)
	{
		SetBit(MCUCR_Reg,ISC00);
		ClearBit(MCUCR_Reg,ISC01);
	}
	else if(SensControl==Exti_Falling)
	{
		ClearBit(MCUCR_Reg,ISC00);
		SetBit(MCUCR_Reg,ISC01);
	}
	else if(SensControl==Exti_Rising)
	{
		SetBit(MCUCR_Reg,ISC00);
		SetBit(MCUCR_Reg,ISC01);
	}*/
	/*
	 * Reg = Reg & ~ Mask | Value << StartBit
	 * MCUCR
	 * Bit 0 ,1  , ISC00
	 * Mask =  0000 0011*/
	   MCUCR_Reg = (MCUCR_Reg&~0x03)|(SensControl<<ISC00);
}
void EXTI0_Enable()
{
	/**< @brief Enable the PIE for Exti0
	 * @details GICR -> INT0 -> 1*/
	SetBit(GICR_Reg,INT0);
}
void EXTI0_Disable()
{
	/**< @brief Disable the PIE for Exti0
	 * @details GICR -> INT0 -> 0*/
	ClearBit(GICR_Reg,INT0);
}
void EXTI0_CallBackFunction(void (*PF)(void))
{
	if(PF!=NULL)
	{
		GlobalPFEXTI0=PF;
	}
}
void __vector_1(void) __attribute__((signal));
void __vector_1(void)
{
	if(GlobalPFEXTI0!=NULL)
	{
		GlobalPFEXTI0();
	}
}

/***************************/
/*EXTI1*/
void (*GlobalPFEXTI1)(void)=NULL;
void EXTI1_Init(uint8_t SensControl)
{
	/**< @brief Select the SensControl Configuration
	 * @details MCUCR -> ISC11, ISC10*/
/*	if(SensControl==Exti_LowLevel)
	{
		ClearBit(MCUCR_Reg,ISC10);
		ClearBit(MCUCR_Reg,ISC11);
	}
	else if(SensControl==Exti_AnyLogic)
	{
		SetBit(MCUCR_Reg,ISC10);
		ClearBit(MCUCR_Reg,ISC11);
	}
	else if(SensControl==Exti_Falling)
	{
		ClearBit(MCUCR_Reg,ISC10);
		SetBit(MCUCR_Reg,ISC11);
	}
	else if(SensControl==Exti_Rising)
	{
		SetBit(MCUCR_Reg,ISC10);
		SetBit(MCUCR_Reg,ISC11);
	}
*/
	/*
	 * Reg = Reg & ~ Mask | Value << StartBit
	 * MCUCR
	 * Bit 2 ,3  , ISC10
	 * Mask =  0000 1100*/
	   MCUCR_Reg = (MCUCR_Reg&~0x0C)|(SensControl<<ISC10);

}
void EXTI1_Enable()
{
	/**< @brief Enable the PIE for Exti1
	 * @details GICR -> INT1*/
	SetBit(GICR_Reg,INT1);
}
void EXTI1_Disable()
{
	/**< @brief Disable the PIE for Exti1
	 * @details GICR -> INT1 -> 0*/
	ClearBit(GICR_Reg,INT1);
}
void EXTI1_CallBackFunction(void (*PF)(void))
{
	if(PF!=NULL)
	{
		GlobalPFEXTI1=PF;
	}
}
void __vector_2(void) __attribute__((signal));
void __vector_2(void)
{
	if(GlobalPFEXTI1!=NULL)
	{
		GlobalPFEXTI1();
	}
}
/***************************/
/*EXTI2*/
void (*GlobalPFEXTI2)(void)=NULL;

void EXTI2_Init(uint8_t SensControl)
{
	if(SensControl==Exti_Falling)
	{
		ClearBit(MCUCSR_Reg,ISC2);
	}
	else if(SensControl==Exti_Rising)
	{
		SetBit(MCUCSR_Reg,ISC2);
	}
}
void EXTI2_Enable()
{
	/**< @brief Enable the PIE for Exti2
	 * @details GICR -> INT2*/
	SetBit(GICR_Reg,INT2);
}
void EXTI2_Disable()
{
	/**< @brief Disable the PIE for Exti2
	 * @details GICR -> INT2 -> 0*/
	ClearBit(GICR_Reg,INT2);
}
void EXTI2_CallBackFunction(void (*PF)(void))
{
	if(PF!=NULL)
	{
		GlobalPFEXTI2=PF;
	}
}
void __vector_3(void) __attribute__((signal));
void __vector_3(void)
{
	if(GlobalPFEXTI2!=NULL)
	{
		GlobalPFEXTI2();
	}
}
/***************************/


















