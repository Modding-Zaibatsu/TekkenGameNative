#include "TekkenGameModule.h"
#include "CustomizeCharacterItem.h"

class UCharacterItem;
class USkeletalMeshComponent;
class UStaticMeshComponent;

bool UCustomizeCharacterItem::SetCharacterItem(UCharacterItem* SourceCharacterItem) {
    return false;
}

TArray<FCustomizeMaterialInstanceColorData> UCustomizeCharacterItem::GetMeshMaterialInstancesFromStaticMesh(UStaticMeshComponent* TargetMeshComponent) {
    return TArray<FCustomizeMaterialInstanceColorData>();
}

TArray<FCustomizeMaterialInstanceColorData> UCustomizeCharacterItem::GetMeshMaterialInstances(USkeletalMeshComponent* TargetMeshComponent) {
    return TArray<FCustomizeMaterialInstanceColorData>();
}

TArray<FCustomizeMaterialInstanceColorData> UCustomizeCharacterItem::GetItemColorsData() const {
    return TArray<FCustomizeMaterialInstanceColorData>();
}

FLinearColor UCustomizeCharacterItem::GetColorIndex(int32 Index) const {
    return FLinearColor{};
}

UCustomizeCharacterItem::UCustomizeCharacterItem() {
    this->ReleaseVer = ItemFirstRelease;
    this->CharacterItem = NULL;
    this->CCIType = SkeletalMeshAnim;
    this->IndexColors.AddDefaulted(5);
    this->bAllowSales = true;
}

