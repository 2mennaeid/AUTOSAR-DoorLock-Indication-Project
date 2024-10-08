/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_SWC_DoorSensorAbstraction.h
 * Generated on: Tue Aug 13 7:34:13 EET
 ********************************************************************/

#ifndef RTE_SWC_DOORSENSORABSTRACTION_H
#define RTE_SWC_DOORSENSORABSTRACTION_H

#include "Rte_SWC_DoorSensorAbstraction_Type.h"

#ifdef __cplusplus
	extern "C" {
#endif /* __cplusplus */

/**************** component data structure definition ****************/

#ifndef IN_RTE_C
typedef const Rte_CDS_SWC_DoorSensorAbstraction * const Rte_Instance;
#endif

/************************* instance handle ***************************/

extern const Rte_CDS_SWC_DoorSensorAbstraction * const Rte_Inst_SWC_DoorSensorAbstraction;

/************************ application errors *************************/

#define RTE_E_CSIF_LedState_Error_Not_OK ((Std_ReturnType)1)
#define RTE_E_CSIF_LedState_Error_OK ((Std_ReturnType)0)

/*************************** init values *****************************/


/****************** per instance memory definition *******************/


/************************* exclusive areas ***************************/


/************************* RTE API mapping ***************************/

/*****************************************************
 * Port: 		PP_DoorState
 * Interface:	SRI_DoorState
 * DataElement:	DoorState
 * Runnable:	DoorSensorState
 *****************************************************/
extern void Rte_IWrite_SWC_DoorSensorAbstraction_DoorSensorState_PP_DoorState_DoorState (u8_t DoorState);
#ifndef IN_RTE_C
#define Rte_IWrite_DoorSensorState_PP_DoorState_DoorState(RTEData) \
	Rte_IWrite_SWC_DoorSensorAbstraction_DoorSensorState_PP_DoorState_DoorState(RTEData)
#endif
extern u8_t* Rte_IWriteRef_SWC_DoorSensorAbstraction_DoorSensorState_PP_DoorState_DoorState(void);
#ifndef IN_RTE_C
#define Rte_IWriteRef_DoorSensorState_PP_DoorState_DoorState() \
	Rte_IWriteRef_SWC_DoorSensorAbstraction_DoorSensorState_PP_DoorState_DoorState()
#endif

/*****************************************************
 * Port: 		PP_LedSwitch
 * Interface:	CSIF_LedState
 * Operation:	SetLedState
 *****************************************************/
extern Std_ReturnType Led_Switch_Runnable(u8_t LedState_IN) ;


/**************** event triggered runnable entities *******************/

/*****************************************************
 * Runnable: 	DoorSensorState
 * Period:		0.01
 *****************************************************/
extern void GetDoorState_Runnable(void);


/******** ARUnit-specific function pointers for server call delegates *********/


#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_SWC_DOORSENSORABSTRACTION_H */
