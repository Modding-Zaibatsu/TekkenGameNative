#include "TekkenGameModule.h"
#include "WallBarrierGroup.h"

FWallBarrierGroup::FWallBarrierGroup() {
    this->LocalFacade = false;
    this->DisableBarrierIfBroken = false;
    this->EffectAlphaOffset = 0;
}

