#include "TekkenGameModule.h"
#include "CharacterItemSet.h"

class UCustomizeCharacterItem;
class USkeletalMesh;

void UCharacterItemSet::RemoveItemAtPos(TEnumAsByte<ItemSlotPosition> Pos) {
}

USkeletalMesh* UCharacterItemSet::GetMeshAtPosition(TEnumAsByte<ItemSlotPosition> Pos) {
    return NULL;
}

TArray<TEnumAsByte<ItemSlotPosition>> UCharacterItemSet::GetItemPositions() {
    return TArray<TEnumAsByte<ItemSlotPosition>>();
}

UCustomizeCharacterItem* UCharacterItemSet::GetCustomizeItemAtPosition(TEnumAsByte<ItemSlotPosition> Pos) {
    return NULL;
}

bool UCharacterItemSet::ContainsItemAtPos(TEnumAsByte<ItemSlotPosition> Pos) {
    return false;
}

bool UCharacterItemSet::ContainsAbilityItemID(TEnumAsByte<TKAbilityItemId> ID) {
    return false;
}

bool UCharacterItemSet::ContainsAbilityItem() {
    return false;
}

UCharacterItemSet::UCharacterItemSet() {
    this->CostumeType = UniqueSet;
    this->ExtraItemSet = NULL;
    this->MakeUpItem = NULL;
    this->EffectItem = NULL;
    this->AuraItem = NULL;
    this->bSunTanned = false;
}

