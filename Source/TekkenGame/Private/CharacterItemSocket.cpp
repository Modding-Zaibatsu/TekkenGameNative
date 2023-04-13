#include "TekkenGameModule.h"
#include "CharacterItemSocket.h"

class USkeletalMesh;
class UStaticMesh;

bool UCharacterItemSocket::InitCharacterItemSocket(const FString& _InstanceName, TEnumAsByte<CharacterItemEditor::Type> _Character, TEnumAsByte<ItemSlotPosition> _ItemPosition, bool _bIsAbilityItem, UStaticMesh* _SourceStaticMesh, USkeletalMesh* _SourceSkeletalMesh) {
    return false;
}

UStaticMesh* UCharacterItemSocket::GetStaticMesh() {
    return NULL;
}

USkeletalMesh* UCharacterItemSocket::GetSkeletalMesh() {
    return NULL;
}

TEnumAsByte<ItemSlotPosition> UCharacterItemSocket::GetItemPosition() {
    return HEAD;
}

FTransform UCharacterItemSocket::GetItemOffsets() {
    return FTransform{};
}

UCharacterItemSocket::UCharacterItemSocket() {
    this->InstanceName = TEXT("THIRD_NULL_EMPIRE");
    this->Character = CharacterItemEditor::ID_LAST;
    this->SocketType = SkeletalMeshType;
    this->SourceStaticMesh = NULL;
    this->SourceSkeletalMesh = NULL;
    this->ItemPosition = UNASSIGNED;
    this->bIsAbilityItem = false;
}

