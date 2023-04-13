#include "TekkenGameModule.h"
#include "NSCMaterialComponent.h"

UNSCMaterialComponent::UNSCMaterialComponent() {
    this->Collection = NULL;
    this->IntroFxTransitionCurve = NULL;
    this->IntroFxIntensityCurve = NULL;
    this->LoopFxTransitionCurve = NULL;
    this->LoopFxIntensityCurve = NULL;
    this->LoopFlickerIntensityCurve = NULL;
    this->PlayerNumber = 0;
}

