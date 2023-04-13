#include "MotHeadAnimationRuntimeModule.h"
#include "AnimNode_MotHead.h"

FAnimNode_MotHead::FAnimNode_MotHead() {
    this->MotHeadMatrixSpace = MHM_WorldSpace;
    this->ControlSpace = BCS_WorldSpace;
    this->SpaceScaling = 0;
    this->PlayerNumber = 0;
}

