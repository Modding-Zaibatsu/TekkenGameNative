#include "TekkenGameModule.h"
#include "CharacterItemBlueprintWThrowable.h"

class UObject;
class USceneComponent;

void ACharacterItemBlueprintWThrowable::SetInitialParameters(const FTransform& AttachItemOffset, const FName& AttachedBone) {
}

void ACharacterItemBlueprintWThrowable::ReturnToInitialPosition(USceneComponent* AttachableMesh) {
}

void ACharacterItemBlueprintWThrowable::ReleaseAttachedItem(USceneComponent* AttachedItem, const FVector ForwardVec) {
}

void ACharacterItemBlueprintWThrowable::ManageDebris(UObject* DebrisObj) {
}

ACharacterItemBlueprintWThrowable::ACharacterItemBlueprintWThrowable() {
    this->bIsFlying = false;
    this->DebrisMax = 0;
    this->AnimType = EWazaItemAnimType::Unassigned;
    this->UpperAccAnim = EThrowableUpperAccAnim::Unassigned;
    this->LowerAccAnim = EThrowableLowerAccAnim::Unassigned;
}

