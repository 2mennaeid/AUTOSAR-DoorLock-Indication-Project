/*
 * AUTOSAR_DIO.h
 *
 *  Created on: Aug 10, 2024
 *      Author: Menna Eid
 */

#ifndef AUTOSAR_MCAL_H_
#define AUTOSAR_MCAL_H_

#include "STDTYPES.h"
#include "BIT_MATH.h"
#include "stm32f103xx.h"
#include "errorstate.h"
#include "GPIO_Priv.h"
#include "GPIO_Interface.h"


#define DIO_Door  3
#define Led_ID    7


u8_t Dio_ReadChannel(u8_t ID);

void Dio_WriteChannel(u8_t ID,u8_t Level);






//#define DIO_Door


#endif /* AUTOSAR_MCAL_H_ */
