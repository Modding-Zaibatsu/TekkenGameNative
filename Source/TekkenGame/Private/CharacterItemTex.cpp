#include "TekkenGameModule.h"
#include "CharacterItemTex.h"

class UTexture2D;

bool UCharacterItemTex::InitCharacterItemTex(const FString& _InstanceName, TEnumAsByte<CharacterItemEditor::Type> _Character, TEnumAsByte<ItemSlotPosition> _ItemPosition, bool _bIsAbilityItem, UTexture2D* _SourceDiffuse2D, UTexture2D* _SourceNormal2D) {
    return false;
}

UTexture2D* UCharacterItemTex::GetNormal2D() {
    return NULL;
}

TEnumAsByte<ItemSlotPosition> UCharacterItemTex::GetItemPosition() {
    return HEAD;
}

UTexture2D* UCharacterItemTex::GetDiffuse2D() {
    return NULL;
}

UCharacterItemTex::UCharacterItemTex() {
    this->InstanceName = TEXT("No name");
    this->ReleaseVer = ItemFirstRelease;
    this->Character = CharacterItemEditor::ID_LAST;
    this->SourceDiffuse2D = NULL;
    this->SourceNormal2D = NULL;
    this->ItemPosition = UNASSIGNED;
    this->bIsAbilityItem = false;
    this->bTestItem = false;
    this->bAllowSales = true;
    this->CommonGroup = unassigned_group;
    this->CaptureBankID = 0;
}

