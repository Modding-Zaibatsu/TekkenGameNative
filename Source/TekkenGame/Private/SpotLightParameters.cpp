#include "TekkenGameModule.h"
#include "SpotLightParameters.h"

FSpotLightParameters::FSpotLightParameters() {
    this->Intensity = 0;
    this->ConeAngle = 0;
    this->ConeRadius = 0;
    this->FalloffExponent = 0;
    this->bUseInverseSquaredFalloff = false;
}

