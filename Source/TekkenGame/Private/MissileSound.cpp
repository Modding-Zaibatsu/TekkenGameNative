#include "TekkenGameModule.h"
#include "MissileSound.h"

FMissileSound::FMissileSound() {
    this->EventType = EMissileSoundEventType::MissileSoundEventType_None;
    this->EventSound = NULL;
}

