/**
 * @file    GIE_Program.c
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#include "GIE_Interface.h"
/**
 * @fn
 * @brief
 */
void GIE_Enable()
{
	/*SREG Bit No 7 write Logic One */
	SetBit(SREG_Reg,7);
}
/**
 * @fn
 * @brief
 */
void GIE_Disable()
{
	ClearBit(SREG_Reg,7);

}

