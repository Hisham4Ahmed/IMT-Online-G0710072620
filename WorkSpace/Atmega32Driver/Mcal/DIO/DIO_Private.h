/**
 * @file    DIO_Private.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef MCAL_DIO_DIO_PRIVATE_H_
#define MCAL_DIO_DIO_PRIVATE_H_
/*GroupName*/
typedef enum
{
	DIO_GroupA,
	DIO_GroupB,
	DIO_GroupC,
	DIO_GroupD,
}DIO_GroupName_t;
/*PinNo*/
typedef enum
{
	DIO_Pin0,
	DIO_Pin1,
	DIO_Pin2,
	DIO_Pin3,
	DIO_Pin4,
	DIO_Pin5,
	DIO_Pin6,
	DIO_Pin7,
}DIO_PinNumber_t;
/*DirectionState*/
typedef enum
{
	DIO_Input,
	DIO_Output,
}DIO_Direction_t;
/*OutputValue*/
typedef enum
{
	DIO_Low,
	DIO_High,
}DIO_OutputValue_t;

#endif /* MCAL_DIO_DIO_PRIVATE_H_ */
