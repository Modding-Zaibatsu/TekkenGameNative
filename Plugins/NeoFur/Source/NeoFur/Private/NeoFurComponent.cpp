#include "NeoFurModule.h"
#include "NeoFurComponent.h"

class UNeoFurAsset;
class UObject;

void UNeoFurComponent::SetVisibleLengthScale(float NewVisibleLengthScale) {
}

void UNeoFurComponent::SetShellDistance(float NewDistance) {
}

void UNeoFurComponent::SetShellCount(int32 NewShellCount) {
}

void UNeoFurComponent::SetFurPhysicsParameters(const FNeoFurPhysicsParameters& Parameters) {
}

void UNeoFurComponent::SetFurAsset(UNeoFurAsset* NewFurAsset) {
}

int32 UNeoFurComponent::GetTotalActiveShellCount(UObject* WorldContextObject) {
    return 0;
}

FNeoFurPhysicsParameters UNeoFurComponent::GetFurPhysicsParameters() const {
    return FNeoFurPhysicsParameters{};
}

UNeoFurComponent::UNeoFurComponent() {
    this->FurAsset = NULL;
    this->ShellCount = 0;
    this->ShellDistance = 0;
    this->LODStartDistance = 0;
    this->LODEndDistance = 0;
    this->LODMinimumShellCount = 0;
    this->MaximumDistanceFromCamera = 0;
    this->VisibleLengthScale = 0;
    this->ShellOffsetTextureCoordinateIndex = 0;
    this->ActiveShellCountScale = 0;
    this->bForceCPUSimulation = false;
    this->bSkipSimulation = false;
    this->bSkipRendering = false;
    this->bDrawSplines = false;
    this->BodySetup = NULL;
    this->ActiveShellCount = 0;
}

