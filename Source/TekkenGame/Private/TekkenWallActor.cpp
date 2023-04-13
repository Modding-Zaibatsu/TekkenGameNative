#include "TekkenGameModule.h"
#include "TekkenWallActor.h"

void ATekkenWallActor::SetTKCollisionEnable(bool F) {
}

void ATekkenWallActor::SetRelatedStageSequenceId(int32 ID) {
}







bool ATekkenWallActor::IsTKCollisionEnable() {
    return false;
}

int32 ATekkenWallActor::GetWallAttribute() {
    return 0;
}

int32 ATekkenWallActor::GetRelatedStageSequenceId() {
    return 0;
}

int32 ATekkenWallActor::GetFloorNo() {
    return 0;
}

FVector ATekkenWallActor::GetActorBoundSize() {
    return FVector{};
}

ATekkenWallActor::ATekkenWallActor() {
    this->FloorNo = 0;
    this->RelatedStageSequenceId = 0;
    this->WallAttribute = 0;
    this->TKCollisionEnable = true;
}

