#include "TekkenGameModule.h"
#include "TekkenPlayerStart.h"

int32 ATekkenPlayerStart::GetStageSequenceID() {
    return 0;
}

int32 ATekkenPlayerStart::GetStagePositionType() {
    return 0;
}

int32 ATekkenPlayerStart::GetFloorNo() {
    return 0;
}

ATekkenPlayerStart::ATekkenPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    this->FloorNo = 0;
    this->StageSequenceId = 0;
    this->PosType = ETekkenPlayerStart::SPT_GAME_START;
}

