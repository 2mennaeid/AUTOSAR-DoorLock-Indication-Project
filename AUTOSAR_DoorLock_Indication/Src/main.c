/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include "AUTOSAR_MCAL.h"
#include "GPIO_Priv.h"
#include "GPIO_Interface.h"
#include "RCC_Interface.h"
#include "FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "task.h"
#include "semphr.h"


TaskHandle_t Task_GetStateRunnable_Handel = NULLPTR;
TaskHandle_t Task_LedSwitchRunnable_Handel = NULLPTR;


void vTask_GetStateRunnable(void*parm);

void vTask_LedSwitchRunnable(void*parm);


GPIO_PinConfig_t DoorLock1;

GPIO_PinConfig_t DoorLock;

int main(void)
{

		RCC_voidSelectClock(HSI);
		RCC_voidEnablePeriphralCLK(RCC_u8_APB2_BUS,2);
		RCC_voidEnablePeriphralCLK(RCC_u8_APB2_BUS,3);
		DoorLock.PortId = PORTA;
		DoorLock.PinId  = PIN3;
		DoorLock.PinMode =INPUT_PULLUP;
		GPIO_enuSetPinMode(&DoorLock);

		DoorLock1.PortId  = PORTB;
		DoorLock1.PinId  = PIN7;
		DoorLock1.PinMode =OUTPUT_PUSHPULL_2MHZ;
		GPIO_enuSetPinMode(&DoorLock1);
		xTaskCreate(vTask_GetStateRunnable,NULLPTR,128,NULLPTR,1,Task_GetStateRunnable_Handel);
		xTaskCreate(vTask_LedSwitchRunnable,NULLPTR,128,NULLPTR,2,Task_LedSwitchRunnable_Handel);
		vTaskStartScheduler();
		while(1);
}
void vTask_GetStateRunnable(void*parm)
{
	while(1)
	{
		GetDoorState_Runnable();
		vTaskDelay(10);
	}
}
void vTask_LedSwitchRunnable(void*parm)
{
	while(1)
	{
		DoorLock_Indication_Runnable();
		vTaskDelay(12);
	}
}
