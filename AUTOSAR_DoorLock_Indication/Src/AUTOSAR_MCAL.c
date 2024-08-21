/*
 * AUTOSAR_DIO.c
 *
 *  Created on: Aug 10, 2024
 *      Author: Menna Eid
 */

#include "AUTOSAR_MCAL.h"

extern GPIO_PinConfig_t DoorLock1;

extern GPIO_PinConfig_t DoorLock;

u8_t Dio_ReadChannel(u8_t ID)
{
	u8_t pinvalue=0;
	DoorLock.PinId = ID;
	GPIO_enuSetPinMode(&DoorLock);
	GPIO_enuGetPinValue(&DoorLock,&pinvalue);
	return pinvalue;
}

void Dio_WriteChannel(u8_t ID,u8_t Level)
{
	DoorLock.PinId = ID;
	GPIO_enuSetPinMode(&DoorLock1);
	GPIO_enuSetPinValue(&DoorLock1,Level);
}
