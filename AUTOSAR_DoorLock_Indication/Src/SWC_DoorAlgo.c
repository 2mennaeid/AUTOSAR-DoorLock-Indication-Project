/*
 * SWC_DoorAlgo.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Menna Eid
 */

#include "Rte_SWC_DoorAlgo.h"

#define LEDON   1
#define LEDOF   0

void DoorLock_Indication_Runnable(void)
{
	unsigned char doorstate =0 ;

	// Read door state
	doorstate =Rte_IRead_SWC_DoorAlgo_DoorLock_Indication_RP_DoorState_DoorState();
	if(doorstate)
	{
		// invoke operation
		Rte_Call_SWC_DoorAlgo_RP_CS_LedState_SetLedState(LEDON);
	}
	else if(doorstate==0)
	{
		Rte_Call_SWC_DoorAlgo_RP_CS_LedState_SetLedState(LEDOF);
	}
}
