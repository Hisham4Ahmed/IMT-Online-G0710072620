/**
 * @file    KPD_Config.h
 * @author  Hesham Ahmed (Email: Hisham.ah.hamed@gmail.com)
 * @brief
 * @version 0.1
 * @date    Sep 12, 2026
 * @copyright Copyright (c) 2026 Gestell-Co. All rights reserved.
 */

#ifndef HAL_KPD_KPD_CONFIG_H_
#define HAL_KPD_KPD_CONFIG_H_

#define Kpd_ColNo  4
#define Kpd_RowNo  4

#define Kpd_R0Pin      DIO_Pin0
#define Kpd_R0Group    DIO_GroupB

#define Kpd_R1Pin      DIO_Pin1
#define Kpd_R1Group    DIO_GroupB

#define Kpd_R2Pin      DIO_Pin2
#define Kpd_R2Group    DIO_GroupB

#define Kpd_R3Pin      DIO_Pin3
#define Kpd_R3Group    DIO_GroupB

#define Kpd_RGroupConfigured  {Kpd_R0Group,Kpd_R1Group,Kpd_R2Group,Kpd_R3Group}
#define Kpd_RPinConfigured	   {Kpd_R0Pin,Kpd_R1Pin,Kpd_R2Pin,Kpd_R3Pin}

#define Kpd_C0Pin      DIO_Pin4
#define Kpd_C0Group    DIO_GroupB

#define Kpd_C1Pin      DIO_Pin5
#define Kpd_C1Group    DIO_GroupB

#define Kpd_C2Pin      DIO_Pin6
#define Kpd_C2Group    DIO_GroupB

#define Kpd_C3Pin      DIO_Pin7
#define Kpd_C3Group    DIO_GroupB
#define Kpd_CGroupConfigured  {Kpd_C0Group,Kpd_C1Group,Kpd_C2Group,Kpd_C3Group}
#define Kpd_CPinConfigured	   {Kpd_C0Pin,Kpd_C1Pin,Kpd_C2Pin,Kpd_C3Pin}





#define Kpd_ValuesConfigured  { {'1','2','3','+'},\
								{'4','5','6','-'},\
								{'7','8','9','*'},\
								{'C','0','E','/'}}













#endif /* HAL_KPD_KPD_CONFIG_H_ */
