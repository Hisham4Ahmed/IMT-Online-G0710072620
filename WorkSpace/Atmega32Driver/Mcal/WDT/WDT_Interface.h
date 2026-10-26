/**
 * @file    WDT_Interface.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief   
 * @version 0.1
 * @date    Oct 10, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */
#ifndef MCAL_WDT_WDT_INTERFACE_H_
#define MCAL_WDT_WDT_INTERFACE_H_



/*
 * Write the WDE Logic one*/
void WDT_Enable();

/*
 * 1- Write the Logic One on WDE & WDTOE at same Operation
 * 	 -> Try Line Code another (WDTCR_Reg |= (1<<WDTOE )| (1<<WDE) ;
 * 2- Write the Logic Zero on WDE within 4CLK (Not Use the Clear Bit )*/

void WDT_Disable();
/*
 * Clear the first 3 bit
 * Set New Time in the first 3 bit
 * */
void WDT_Sleep(uint8_t SleepTime);

#endif /* MCAL_WDT_WDT_INTERFACE_H_ */
