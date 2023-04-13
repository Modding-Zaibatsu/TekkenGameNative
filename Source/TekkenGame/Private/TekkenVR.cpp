#include "TekkenGameModule.h"
#include "TekkenVR.h"

class ATekkenVR;

void ATekkenVR::setHudType(TEnumAsByte<ETekkenVRHUDType> Type) {
}

bool ATekkenVR::IsPS4NeoMode() {
    return false;
}

bool ATekkenVR::IsPS4Neo4KMode() {
    return false;
}

bool ATekkenVR::getPlayerCustomized(int32 side) {
    return false;
}

ATekkenVR* ATekkenVR::getInstance() {
    return NULL;
}

TEnumAsByte<ETekkenVRHUDType> ATekkenVR::getHudType() {
    return VRHUD_NONE;
}

ATekkenVR::ATekkenVR() {
    this->CollisionAvailable = 0;
    this->CollideFlag = false;
    this->VRViewerDbg = false;
    this->ParentPawn = NULL;
    this->ViewerCharacterBodyScale = 0;
}

