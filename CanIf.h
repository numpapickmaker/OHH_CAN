#include "CanIf_Cfg.h"
#include "CanIf_Types.h"

void CanIf_Init(const CanIf_ConfigType *ConfigPtr)
void CanIf_DeInit(void)
Std_ReturnType CanIf_SetControllerMode(uint8 Controller,
		CanIf_ControllerModeType ControllerMode);

Std_ReturnType CanIf_GetControllerMode(uint8 Controller,
		CanIf_ControllerModeType *ControllerModePtr);

Std_ReturnType CanIf_Transmit(PduIdType CanTxPduId,
		const PduInfoType *PduInfoPtr);

Std_ReturnType CanIf_ReadRxPduData(PduIdType CanRxPduId,
		PduInfoType *PduInfoPtr);

CanIf_NotifStatusType CanIf_ReadTxNotifStatus(PduIdType CanTxPduId);

CanIf_NotifStatusType CanIf_ReadRxNotifStatus(PduIdType CanRxPduId);

Std_ReturnType CanIf_SetPduMode( uint8 Controller, CanIf_ChannelSetModeType PduModeRequest );
Std_ReturnType CanIf_GetPduMode( uint8 Controller, CanIf_ChannelGetModeType *PduModePtr );

void CanIf_SetDynamicTxId( PduIdType CanTxPduId, Can_IdType CanId );