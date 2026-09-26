/**
 * @file    EXTI_Private.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 19, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#ifndef MCAL_EXTI_EXTI_PRIVATE_H_
#define MCAL_EXTI_EXTI_PRIVATE_H_

/**< @brief BitName */
typedef enum
{
	/*MCUCR*/
	ISC00,
	ISC01,
	ISC10,
	ISC11,
	/*MCUCSR*/
	ISC2=6,
	/*GICR*/
	INT2=5,
	INT0,
	INT1,
	/*GIFR*/
	INTF2=5,
	INTF0,
	INTF1,
}Exti_BitName_t;

typedef enum
{
	Exti_LowLevel,
	Exti_AnyLogic,
	Exti_Falling,
	Exti_Rising,
}Exti_SensControl;



#endif /* MCAL_EXTI_EXTI_PRIVATE_H_ */
