/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_Type.h
 * Generated on: Sun Aug 4 16:40:13 EET
 ********************************************************************/

#ifndef RTE_TYPE_H
#define RTE_TYPE_H


#include "Rte.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/**************************** datatypes ******************************/

typedef unsigned char uint8;


/********************* mode declaration groups ***********************/


/********************** per instance memories ************************/


/******************* implicit buffer declaration *********************/

typedef struct {
	uint8 value;
} Rte_DE_uint8;


/******************** component data structures **********************/

/*********************************************************************
 * component data structure for SWC: Door_Lock_Indication_SWC 
 *********************************************************************/
typedef struct Rte_CDS_Door_Lock_Indication_SWC
{
	/* Data Handles section*/
	Rte_DE_uint8 *Door_Lock_indication_Runnable_InputState_RPort_Door_State;
	/* Per-Instance Memory Handles section*/
	/* Inter-runnable Variable Handles section*/
	/* Calibration Parameter Handles section*/
	/* Exclusive-area Handles section*/
	/* Port API Handles section*/
	/* Inter Runnable Variable API Handles section*/
} Rte_CDS_Door_Lock_Indication_SWC;

/*********************************************************************
 * component data structure for SWC: DoorIndication_ECU_Abstraction_SWC 
 *********************************************************************/
typedef struct Rte_CDS_DoorIndication_ECU_Abstraction_SWC
{
	/* Data Handles section*/
	Rte_DE_uint8 *Read_Door_State_Runnable_DoorState_PPort_Door_State;
	/* Per-Instance Memory Handles section*/
	/* Inter-runnable Variable Handles section*/
	/* Calibration Parameter Handles section*/
	/* Exclusive-area Handles section*/
	/* Port API Handles section*/
	/* Inter Runnable Variable API Handles section*/
} Rte_CDS_DoorIndication_ECU_Abstraction_SWC;

/*********************************************************************
 * component data structure for SWC: RootSW_Composite 
 *********************************************************************/
typedef struct Rte_CDS_RootSW_Composite
{
	/* Data Handles section*/
	/* Per-Instance Memory Handles section*/
	/* Inter-runnable Variable Handles section*/
	/* Calibration Parameter Handles section*/
	/* Exclusive-area Handles section*/
	/* Port API Handles section*/
	/* Inter Runnable Variable API Handles section*/
	uint8 _dummy;
} Rte_CDS_RootSW_Composite;


#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_TYPE_H */