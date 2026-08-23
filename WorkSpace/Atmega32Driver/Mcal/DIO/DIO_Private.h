/*
 * DIO_Private.h
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#ifndef MCAL_DIO_DIO_PRIVATE_H_
#define MCAL_DIO_DIO_PRIVATE_H_
/*GroupName*/
//#define DIO_GroupA  0
//#define DIO_GroupB  1
//#define DIO_GroupC  2
//#define DIO_GroupD  3
typedef enum
{
	DIO_GroupA,
	DIO_GroupB,
	DIO_GroupC,
	DIO_GroupD,
}DIO_GroupName_t;
/*PinNo*/
//#define DIO_Pin0    0
//#define DIO_Pin1    1
//#define DIO_Pin2    2
//#define DIO_Pin3    3
//#define DIO_Pin4    4
//#define DIO_Pin5    5
//#define DIO_Pin6    6
//#define DIO_Pin7    7
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
//#define DIO_Input   0
//#define DIO_Output  1
typedef enum
{
	DIO_Input,
	DIO_Output,
}DIO_Direction_t;
/*OutputValue*/
//#define DIO_Low     0
//#define DIO_High    1
typedef enum
{
	DIO_Low,
	DIO_High,
}DIO_OutputValue_t;

#endif /* MCAL_DIO_DIO_PRIVATE_H_ */
