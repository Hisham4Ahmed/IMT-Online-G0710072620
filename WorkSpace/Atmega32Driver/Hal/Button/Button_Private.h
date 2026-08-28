/*
 * Button_Private.h
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#ifndef HAL_BUTTON_BUTTON_PRIVATE_H_
#define HAL_BUTTON_BUTTON_PRIVATE_H_

typedef enum
{
	Btn_InternalPullup,
	Btn_ExternalPullup,
	Btn_ExternalPullDown,
}btn_ConnectionType_t;

typedef enum
{
	PullUp_Pressed,
	PullUp_NotPressed,
	PullDown_NotPressed=0,
	PullDown_Pressed,
}btn_PressingState_t;
#endif /* HAL_BUTTON_BUTTON_PRIVATE_H_ */
