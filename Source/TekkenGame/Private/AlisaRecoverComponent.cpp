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
    this->HeadRecoverSpeed = 0;
    this->ArmRecoverSpeed = 0;
    this->MaxRadius = 0;
    this->SafeRadius = 0;
}

