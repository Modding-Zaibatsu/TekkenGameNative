#include "TekkenGameModule.h"
#include "WazaManagerComponent.h"

class UCustomizeCharacterItem;
class UObject;
class UParticleSystem;

int32 UWazaManagerComponent::RemoveItemEffectAtLocation(TEnumAsByte<ItemSlotPosition> Location) {
    return 0;
}

int32 UWazaManagerComponent::RemoveAbilityItem(TEnumAsByte<ItemSlotPosition> Location) {
    return 0;
}

TEnumAsByte<TKAbilityItemId> UWazaManagerComponent::IntToAbilityID(int32 id_int) {
    return ITEM_NONE;
}

bool UWazaManagerComponent::HasEffectItem(TEnumAsByte<TKAbilityItemId> itemID) {
    return false;
}

bool UWazaManagerComponent::HasAbilityItem(TEnumAsByte<TKAbilityItemId> ID) {
    return false;
}

UParticleSystem* UWazaManagerComponent::GetItemEffect(TEnumAsByte<TKAbilityItemId> itemID, int32 EffectID) {
    return NULL;
}

FTransform UWazaManagerComponent::GetEffectTransform() {
    return FTransform{};
}

TEnumAsByte<TKCharacterSkeletonSocketPos> UWazaManagerComponent::GetEffectSocketValue() {
    return Head_Socket;
}

FVector UWazaManagerComponent::GetEffectOffsetVal() {
    return FVector{};
}

bool UWazaManagerComponent::GetAbilityItemData(TEnumAsByte<TKAbilityItemId> ID, FAbilityItemData& Data) {
    return false;
}

int32 UWazaManagerComponent::AddItemEffectFromCCI(UCustomizeCharacterItem* CCI) {
    return 0;
}

void UWazaManagerComponent::AddItemBPController(TEnumAsByte<TKAbilityItemId> AbilityID, UObject* ItemBPController, TEnumAsByte<AbilityItemBPType> BPType) {
}

int32 UWazaManagerComponent::AddAbilityItem(UCustomizeCharacterItem* CCI, UObject* RegisteredObj, TEnumAsByte<TKAbilityItemId> itemId_Override) {
    return 0;
}

UWazaManagerComponent::UWazaManagerComponent() {
    this->AnimatingID_Now = ITEM_NONE;
}

