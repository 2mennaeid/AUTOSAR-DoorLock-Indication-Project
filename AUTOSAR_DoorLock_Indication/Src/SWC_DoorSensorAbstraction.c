/*
 * SWC_DoorSensorAbstraction.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Menna Eid
 */


#include "Rte_SWC_DoorSensorAbstraction.h"
#include "AUTOSAR_MCAL.h"
#define LEDON   1
#define LEDOF   0


/*****************************************************
 * Runnable: 	DoorSensorState
 * Period:		0.01
 *****************************************************/
void GetDoorState_Runnable(void)
{
	unsigned char doorState =0;
	doorState = Dio_ReadChannel(DIO_Door);
	Rte_IWrite_SWC_DoorSensorAbstraction_DoorSensorState_PP_DoorState_DoorState(doorState);
}


/*****************************************************
 * Port: 		PP_LedSwitch
 * Interface:	CSIF_LedState
 * Operation:	SetLedState
 *****************************************************/
Std_ReturnType Led_Switch_Runnable(u8_t LedState_IN)
{
	if(LedState_IN==LEDON)
	{
            Dio_WriteChannel(Led_ID, LEDON);
            return RTE_E_CSIF_LedState_Error_OK;
	}
	else if(LedState_IN==LEDOF)
	{
		 Dio_WriteChannel(Led_ID, LEDOF);
		 return RTE_E_CSIF_LedState_Error_OK;
	}
	else
	{
		return RTE_E_CSIF_LedState_Error_Not_OK;
	}
}
