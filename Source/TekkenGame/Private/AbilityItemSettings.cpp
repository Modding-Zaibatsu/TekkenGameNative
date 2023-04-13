#include "TekkenGameModule.h"
#include "AbilityItemSettings.h"

FAbilityItemSettings::FAbilityItemSettings() {
    this->AbilityItemBP = NOT_SET;
    this->MeshToDrop = NULL;
    this->bRandomizeColor = false;
    this->MaxDropCount = 0;
    this->DropFromSocket = Head_Socket;
    this->NumToDrop = 0;
    this->bScaleItemRandomly = false;
    this->scaleFloor = 0;
    this->scaleCeiling = 0;
    this->MaxSpawnedDebris = 0;
    this->DebrisSpawnPerHit = 0;
    this->bCustomRotate = false;
    this->CustomRotateSpeed = 0;
    this->bImpusleVelChange = false;
    this->ImpulseStrMin = 0;
    this->ImpulseStrMax = 0;
    this->bPseudoHitOnCancel = false;
    this->bDropOnCancel = false;
}

