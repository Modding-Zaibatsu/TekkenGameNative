#include "TekkenGameModule.h"
#include "TekkenFloorActor.h"

void ATekkenFloorActor::SetRelatedStageSequenceId(int32 ID) {
}






bool ATekkenFloorActor::IsFloorBreakable() {
    return false;
}

int32 ATekkenFloorActor::GetRelatedStageSequenceId() {
    return 0;
}

int32 ATekkenFloorActor::GetFloorNo() {
    return 0;
}

ATekkenFloorActor::ATekkenFloorActor() {
    this->FloorNo = 0;
    this->RelatedStageSequenceId = 0;
    this->bFloorBreakable = true;
    this->bHaveValidHeight = true;
}

