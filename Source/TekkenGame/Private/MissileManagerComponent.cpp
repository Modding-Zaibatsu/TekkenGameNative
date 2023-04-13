#include "TekkenGameModule.h"
#include "MissileManagerComponent.h"

class ATekkenCharacterMissile;

void UMissileManagerComponent::UpdateMissileInfo(int32 MissileHandle, FVector CurrentLocation, FVector CurrentDirection) {
}

int32 UMissileManagerComponent::SpawnMissileRequest(int32 MissileHandle, int32 MissileEffectID, FVector SpawnLocation, FRotator SpawnRotation) {
    return 0;
}

ATekkenCharacterMissile* UMissileManagerComponent::GetSpawnedMissile(int32 MissileHandle) {
    return NULL;
}

FMissileInstanceInfo UMissileManagerComponent::GetMissileInstanceInfo(int32 MissileHandle) {
    return FMissileInstanceInfo{};
}

int32 UMissileManagerComponent::CancelMissileRequest(int32 MissileHandle) {
    return 0;
}

void UMissileManagerComponent::CancelAllMissiles() {
}

UMissileManagerComponent::UMissileManagerComponent() {
    this->TotalMissileCount = 0;
}

