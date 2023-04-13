#include "TekkenGameModule.h"
#include "ItemManagerComponent.h"

class UCharacterItem;
class UCharacterItemOffsetVariation;
class UCharacterItemSet;
class UCustomizeCharacterItem;
class UMaterialInstanceDynamic;
class UObject;
class USkeletalMeshComponent;


bool UItemManagerComponent::TryDestroyItemObject(FEquipInfo EquipInfo) {
    return false;
}



bool UItemManagerComponent::ReplaceSkin(ItemSlotPosition ItemPosition, bool enable) {
    return false;
}


bool UItemManagerComponent::RemoveCharacterItem(ItemSlotPosition Location, bool bRemoveChildren) {
    return false;
}


int32 UItemManagerComponent::RegisterMaterialColor(UMaterialInstanceDynamic* Mid, TKCustomizeColorCategory ColorCategory, FLinearColor Color, UCustomizeCharacterItem* CCI) {
    return 0;
}

int32 UItemManagerComponent::RegisterCharacterItem(FEquipInfo EquipInfo) {
    return 0;
}

bool UItemManagerComponent::ModifyItemColorEX(FLinearColor NewColor, ItemSlotPosition ItemPosition, const FString& MaterialInstanceName, int32 ColorSlot) {
    return false;
}

bool UItemManagerComponent::ModifyItemColor(FLinearColor NewColor, ItemSlotPosition ItemPosition, TKCustomizeColorCategory ColorPosition, bool bModifyChildren) {
    return false;
}


bool UItemManagerComponent::IsTargetItemEquipped(const FString& QueryName, EItemSearchType SearchType) {
    return false;
}

bool UItemManagerComponent::IsItemEquippedAtPosition(ItemSlotPosition Location) {
    return false;
}

bool UItemManagerComponent::IsColorDebugMode() {
    return false;
}

UCharacterItemSet* UItemManagerComponent::GetItemsFromCustomizeCharacterManager() {
    return NULL;
}

FString UItemManagerComponent::GetItemOffsetVariationPath(UCharacterItem* CharacterItem, UCharacterItem* ProblemItem) {
    return TEXT("");
}

FLinearColor UItemManagerComponent::GetItemColor(ItemSlotPosition ItemPosition, TKCustomizeColorCategory ColorPosition) {
    return FLinearColor{};
}

UObject* UItemManagerComponent::GetEquippedItemObject(ItemSlotPosition Location) {
    return NULL;
}

FEquipInfo UItemManagerComponent::GetEquipInfoAtPosition(ItemSlotPosition Location) {
    return FEquipInfo{};
}

TArray<UObject*> UItemManagerComponent::GetAllEquippedItemObjects(ItemSlotPosition Location) {
    return TArray<UObject*>();
}

TArray<FEquipInfo> UItemManagerComponent::GetAllEquipInfosAtPosition(ItemSlotPosition Location) {
    return TArray<FEquipInfo>();
}

TArray<FEquipInfo> UItemManagerComponent::GetAllChildrenOfPosition(ItemSlotPosition Location) {
    return TArray<FEquipInfo>();
}

UCharacterItemOffsetVariation* UItemManagerComponent::FindOffsetVariation(UCharacterItem* CharacterItem, UCharacterItem* ProblemItem) {
    return NULL;
}



void UItemManagerComponent::AddPrerequisiteTickToMesh(USkeletalMeshComponent* Mesh, ItemSlotPosition PrereqTickLocation) {
}

UItemManagerComponent::UItemManagerComponent() {
    this->TotalHeightOffset = 140700621893344;
}

