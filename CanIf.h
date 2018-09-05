#ifndef CANIF_H_
#define CANIF_H_

#include "CanIf_Cfg.h"
#include "CanIf_Types.h"

/** @name Error Codes */
/** Development Errors */
///////////////{
#define CANIF_E_PARAM_CANID 			10
#define CANIF_E_PARAM_HOH				12
#define CANIF_E_PARAM_LPDU				13
#define CANIF_E_PARAM_CONTROLLERID		15	
#define CANIF_E_PARAM_WAKEUPSOURCE		16
#define CANIF_E_PARAM_TRCV				17
#define CANIF_E_PARAM_TRCVMODE 			18
#define CANIF_E_PARAM_TRCVWAKEUPMODE	19
#define CANIF_E_PARAM_CTRLMODE			21
#define CANIF_E_PARAM_PDU_MODE			22
#define CANIF_E_PARAM_POINTER			20
#define CANIF_E_UNINIT 					30
#define CANIF_E_INVALID_TXPDUID			50
#define CANIF_E_INVALID_RXPDUID 		60
#define CANIF_E_INIT_FAILED 			80

/** Runtime Errors */
#define CANIF_E_INVALID_DATA_LENGTH		61
#define CANIF_E_DATA_LENGTH_MISMATCH	62
#define CANIF_E_STOPPED					70
#define CANIF_E_TXPDU_LENGTH_EXCEEDED	90
///////////////}

void CanIf_Init(const CanIf_ConfigType *ConfigPtr);

void CanIf_DeInit(void);

Std_ReturnType CanIf_SetControllerMode(uint8 ControllerId, Can_ControllerStateType ControllerMode);

Std_ReturnType CanIf_GetControllerMode(uint8 Controller, CanIf_ControllerModeType *ControllerModePtr);

Std_ReturnType CanIf_GetControllerErrorState(uint8 ControllerId, Can_ErrorStateType* ErrorStatePtr);


Std_ReturnType CanIf_Transmit(PduIdType CanTxPduId, const PduInfoType *PduInfoPtr);

Std_ReturnType CanIf_CancelTransmit(PduIdType TxPduId);

Std_ReturnType CanIf_ReadRxPduData(PduIdType CanRxPduId, PduInfoType *PduInfoPtr);

CanIf_NotifStatusType CanIf_ReadTxNotifStatus(PduIdType CanTxPduId);

CanIf_NotifStatusType CanIf_ReadRxNotifStatus(PduIdType CanRxPduId);

Std_ReturnType CanIf_SetPduMode( uint8 Controller, CanIf_ChannelSetModeType PduModeRequest );

Std_ReturnType CanIf_GetPduMode( uint8 Controller, CanIf_ChannelGetModeType *PduModePtr );

void CanIf_SetDynamicTxId( PduIdType CanTxPduId, Can_IdType CanId );