/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_SWC_DoorSensorAbstraction_.c
 * Generated on: Tue Aug 13 7:34:13 EET
 ********************************************************************/

#include "string.h"
#include "Rte_SWC_DoorSensorAbstraction.h"


extern Rte_DE_u8_t DoorSensorState_PP_DoorState_DoorState;


const Rte_CDS_SWC_DoorSensorAbstraction Rte_Instance_SWC_DoorSensorAbstraction = {
&DoorSensorState_PP_DoorState_DoorState
};

const Rte_CDS_SWC_DoorSensorAbstraction * const Rte_Inst_SWC_DoorSensorAbstraction = &Rte_Instance_SWC_DoorSensorAbstraction;




void Rte_IWrite_SWC_DoorSensorAbstraction_DoorSensorState_PP_DoorState_DoorState (u8_t DoorState)
{
	(Rte_Inst_SWC_DoorSensorAbstraction)->DoorSensorState_PP_DoorState_DoorState->value = DoorState;
}
u8_t* Rte_IWriteRef_SWC_DoorSensorAbstraction_DoorSensorState_PP_DoorState_DoorState(void)
{
	return &(Rte_Inst_SWC_DoorSensorAbstraction)->DoorSensorState_PP_DoorState_DoorState->value;
}
