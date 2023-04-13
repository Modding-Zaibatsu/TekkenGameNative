#include "TekkenGameModule.h"
#include "MobComManAnimInstance.h"

UMobComManAnimInstance::UMobComManAnimInstance() {
    this->bUseFocus = false;
    this->BaseYaw = 0;
    this->BasePitch = 0;
    this->MobState = EMobState::Idle_State;
    this->IdleAnimation = NULL;
    this->CheerAnimation = NULL;
    this->TerrorAnimation = NULL;
    this->MobActor = NULL;
}

