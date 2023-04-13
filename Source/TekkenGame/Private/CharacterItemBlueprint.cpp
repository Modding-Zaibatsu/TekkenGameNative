#include "TekkenGameModule.h"
#include "CharacterItemBlueprint.h"

class AModularTekkenPlayer;
class UMaterialInterface;
class UPrimitiveComponent;
class USceneComponent;

void ACharacterItemBlueprint::ResetToDefault_Implementation() {
}


FRotator ACharacterItemBlueprint::LookAtByDir(FVector Dir) {
    return FRotator{};
}

FRotator ACharacterItemBlueprint::LookAt(FVector Start, FVector End) {
    return FRotator{};
}

void ACharacterItemBlueprint::InitializeComponentMaterials(UPrimitiveComponent* Component, int32 ElementIndex, UMaterialInterface* SourceMaterial, bool bUsesOpponentRage) {
}

FTransform ACharacterItemBlueprint::GetOwnerTransform() {
    return FTransform{};
}

FString ACharacterItemBlueprint::GetOwnersActiveMotionName() {
    return TEXT("");
}

int32 ACharacterItemBlueprint::GetOwnerRank() {
    return 0;
}

AModularTekkenPlayer* ACharacterItemBlueprint::GetOwnerMTP() {
    return NULL;
}

int32 ACharacterItemBlueprint::GetOwnerHP() {
    return 0;
}

AModularTekkenPlayer* ACharacterItemBlueprint::GetOpponentMTP() {
    return NULL;
}

USceneComponent* ACharacterItemBlueprint::GetAssignedRoot_Implementation() {
    return NULL;
}

TEnumAsByte<TKAbilityItemId> ACharacterItemBlueprint::GetAssignedAttackAnim() const {
    return ITEM_NONE;
}

void ACharacterItemBlueprint::CleanUp() {
}

FTransform ACharacterItemBlueprint::CalcTransformByOwnerMesh(FName SocketName, FTransform RelativeTransform) {
    return FTransform{};
}

FTransform ACharacterItemBlueprint::CalcTransformByOpponentMesh(FName SocketName, FTransform RelativeTransform) {
    return FTransform{};
}

FTransform ACharacterItemBlueprint::CalcDefaultTransform() {
    return FTransform{};
}

float ACharacterItemBlueprint::AngleDegreeFromOwner(USceneComponent* SceneComponent) {
    return 0.0f;
}

ACharacterItemBlueprint::ACharacterItemBlueprint() {
    this->AttachItemAtRoot = true;
    this->bDontUseOffsetScale = false;
    this->DefaultAttachParent = NULL;
    this->DefaultOwningItem = NULL;
}

