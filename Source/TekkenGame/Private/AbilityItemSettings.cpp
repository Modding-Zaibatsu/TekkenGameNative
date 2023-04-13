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
    this->scaleFloor = 140700621893344;
    this->scaleCeiling = 140700621893344;
    this->MaxSpawnedDebris = 0;
    this->DebrisSpawnPerHit = 0;
    this->bCustomRotate = false;
    this->CustomRotateSpeed = 140700621893344;
    this->bImpusleVelChange = false;
    this->ImpulseStrMin = 140700621893344;
    this->ImpulseStrMax = 140700621893344;
    this->bPseudoHitOnCancel = false;
    this->bDropOnCancel = false;
}

