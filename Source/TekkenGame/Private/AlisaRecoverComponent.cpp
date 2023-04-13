#include "TekkenGameModule.h"
#include "AlisaRecoverComponent.h"

void UAlisaRecoverComponent::RecoverRightArm() {
}

void UAlisaRecoverComponent::RecoverLeftArm() {
}

void UAlisaRecoverComponent::RecoverHead() {
}

void UAlisaRecoverComponent::InitializeParameters() {
}

UAlisaRecoverComponent::UAlisaRecoverComponent() {
    this->Collection = NULL;
    this->AlisaHeadMesh = NULL;
    this->AlisaArmMesh = NULL;
    this->HeadRecoverSpeed = 140700621893344;
    this->ArmRecoverSpeed = 140700621893344;
    this->MaxRadius = 140700621893344;
    this->SafeRadius = 140700621893344;
}

