/**
 * @file    Button_Private.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef HAL_BUTTON_BUTTON_PRIVATE_H_
#define HAL_BUTTON_BUTTON_PRIVATE_H_


typedef enum
{
	Btn_InternalPullup,  /**< Btn_InternalPullup */
	Btn_ExternalPullup,  /**< Btn_ExternalPullup */
	Btn_ExternalPullDown,/**< Btn_ExternalPullDown */
}btn_ConnectionType_t;

typedef enum
{
	PullUp_Pressed,
	PullUp_NotPressed,
	PullDown_NotPressed=0,
	PullDown_Pressed,
}btn_PressingState_t;
#endif /* HAL_BUTTON_BUTTON_PRIVATE_H_ */
