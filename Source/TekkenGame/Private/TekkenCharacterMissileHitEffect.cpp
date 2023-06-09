#include "TekkenGameModule.h"
#include "TekkenCharacterMissileHitEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent

ATekkenCharacterMissileHitEffect::ATekkenCharacterMissileHitEffect() {
    this->HitFX = NULL;
    this->GuardFX = NULL;
    this->ExpireFX = NULL;
    this->ClashFX = NULL;
    this->FloorHitFX = NULL;
    this->HitLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("HitLight"));
    this->ClashFXForwardVectorOffset = 0;
    this->HitLightFadeOut = 0;
}

