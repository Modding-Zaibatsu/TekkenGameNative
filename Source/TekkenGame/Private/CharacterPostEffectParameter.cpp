#include "TekkenGameModule.h"
#include "CharacterPostEffectParameter.h"

FCharacterPostEffectParameter::FCharacterPostEffectParameter() {
    this->FresnelExponent = 0;
    this->FresnelIntensity = 0;
    this->FresnelDirectivity = false;
    this->FresnelDirectivitySharpness = 0;
    this->FresnelDirectivitySuppression = 0;
}

