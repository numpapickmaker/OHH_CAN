#ifndef CANIF_CBK_H_
#define CANIF_CBK_H_

#include "Can.h"
void CanIf_TxConfirmation(PduIdType CanTxPduId);
void CanIf_RxIndication(Can_HwHandleType Hrh, Can_IdType CanId, uint8 CanDlc, const uint8* CanSduPtr);
#if CANIF_CTRLDRV_TX_CANCELLATION
void CanIf_CancelTxConfirmation(const Can_PduType* PduInfoPtr);
#endif
void CanIf_ControllerBusOff(uint8 Controller);
void CanIf_ControllerModeIndication(uint8 Controller, CanIf_ControllerModeType ControllerMode);

void CanIf_TrcvModeIndication(uint8 Transceiver, CanTrcv_TrcvModeType TransceiverMode);

#endif 