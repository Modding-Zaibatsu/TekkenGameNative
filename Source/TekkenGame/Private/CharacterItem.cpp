#include "TekkenGameModule.h"
#include "CharacterItem.h"

class ACharacterItemBlueprint;
class UAnimBlueprint;
class UPhysicsAsset;
class USkeletalMesh;
class UStaticMesh;

void UCharacterItem::SetDependencyMesh(USkeletalMesh* _DependencyMesh) {
}

bool UCharacterItem::InitCharacterItem(const FString& _InstanceName, TEnumAsByte<CharacterItemEditor::Type> _Character, TEnumAsByte<ItemSlotPosition> _ItemPosition, FCIFLags& flagData, TEnumAsByte<TKCharacterSkeletonSocketPos> _SocketPosition, USkeletalMesh* _SourceSkeletalMesh, UStaticMesh* _SourceStaticMesh, UAnimBlueprint* _AnimBP, TSubclassOf<ACharacterItemBlueprint> _ItemBlueprint) {
    return false;
}

UStaticMesh* UCharacterItem::GetStaticMesh() {
    return NULL;
}

UPhysicsAsset* UCharacterItem::GetSourceSkeletalMeshPhAT() {
    return NULL;
}

USkeletalMesh* UCharacterItem::GetSkeletalMesh() {
    return NULL;
}

TEnumAsByte<ItemSlotPosition> UCharacterItem::GetItemPosition() {
    return HEAD;
}

FTransform UCharacterItem::GetItemOffsets() {
    return FTransform{};
}

UCharacterItem::UCharacterItem() {
    this->InstanceName = TEXT("No name");
    this->MeshType = UNSET;
    this->Character = CharacterItemEditor::ID_LAST;
    this->ItemPosition = UNASSIGNED;
    this->SourceSkeletalMesh = NULL;
    this->DependencyMesh = NULL;
    this->SourceStaticMesh = NULL;
    this->SocketPosition = Head_Socket;
    this->ItemBlueprint = NULL;
    this->bIsAbilityItem = false;
    this->bNeverHandOff = false;
    this->AbilityItemSocket = Head_Socket;
    this->AbilityID = ITEM_NONE;
    this->ItemAB = NULL;
    this->HairAccType = Not_A_Hair_Acc;
    this->bCanChangeClothBlend = false;
    this->ItemHeight = 0;
    this->bUseEquippedHeights = false;
    this->bItemAffectedBySlope = false;
    this->bIsFurItem = false;
    this->NonNeoFurMesh = NULL;
    this->CaptureBankID = 0;
    this->ItemResuability = Usable_As_Is;
    this->bAllowHairAcc = true;
    this->bAllowUpperAcc = true;
    this->bAllowLowerAcc = true;
    this->bOverrideSkel = false;
    this->bDefaultItem = false;
    this->bTestItem = false;
    this->bAllowSales = true;
    this->bEmptyItem = false;
    this->CommonGroup = unassigned_group;
    this->bHideItemPostRageArts = false;
}

