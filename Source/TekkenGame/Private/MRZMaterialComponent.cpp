#include "TekkenGameModule.h"
#include "MRZMaterialComponent.h"

void UMRZMaterialComponent::OnChangeFresnelWeight(int32 PlayerNumber, float TargetValue, float TimeSeconds) {
}

void UMRZMaterialComponent::OnChangeFresnelExponentScale(int32 PlayerNumber, float TargetValue, float TimeSeconds) {
}

void UMRZMaterialComponent::OnChangeEmissiveAlpha(int32 PlayerNumber, float TargetValue, float TimeSeconds) {
}

void UMRZMaterialComponent::OnChangeBaseAlpha(int32 PlayerNumber, float TargetValue, float TimeSeconds) {
}

void UMRZMaterialComponent::Initialize() {
}

UMRZMaterialComponent::UMRZMaterialComponent() {
    this->Collection = NULL;
}

