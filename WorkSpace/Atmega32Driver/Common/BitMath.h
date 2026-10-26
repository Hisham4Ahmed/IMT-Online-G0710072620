/**
 * @file    BitMath.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef COMMON_BITMATH_H_
#define COMMON_BITMATH_H_

#define SetBit(Reg,BitNo)    Reg|=(1<<BitNo)
#define ClearBit(Reg,BitNo)  Reg&=~(1<<BitNo)
#define ToggleBit(Reg,BitNo) Reg^=(1<<BitNo)
#define ReadBit(Reg,BitNo)  (Reg>>BitNo)&1


#endif /* COMMON_BITMATH_H_ */
