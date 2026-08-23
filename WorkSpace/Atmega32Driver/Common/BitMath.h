/*
 * BitMath.h
 *
 *  Created on: Aug 22, 2026
 *      Author: hesham
 */

#ifndef COMMON_BITMATH_H_
#define COMMON_BITMATH_H_

#define SetBit(Reg,BitNo)    Reg|=(1<<BitNo)
#define ClearBit(Reg,BitNo)  Reg&=~(1<<BitNo)
#define ToggleBit(Reg,BitNo) Reg^=(1<<BitNo)
#define ReadBit(Reg,BitNo)  (Reg>>BitNo)&1


#endif /* COMMON_BITMATH_H_ */
