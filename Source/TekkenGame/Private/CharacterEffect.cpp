#include "TekkenGameModule.h"
#include "CharacterEffect.h"

FCharacterEffect::FCharacterEffect() {
    this->EffectID = 0;
    this->ParticleSystem = NULL;
    this->Blueprint = NULL;
    this->BlueprintLifeSpan = 0;
}

