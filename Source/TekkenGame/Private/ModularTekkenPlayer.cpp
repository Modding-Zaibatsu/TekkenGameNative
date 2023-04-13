#include "TekkenGameModule.h"
#include "ModularTekkenPlayer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

class UCharacterItem;
class UCharacterItemSet;
class UCharacterItemVariation;
class UStaticMeshComponent;


void AModularTekkenPlayer::SetAsyncLoadMeshVariationsFromItemSet(const UCharacterItemSet* ItemSet) {
}





bool AModularTekkenPlayer::PlayerOnRightSide() {
    return false;
}

bool AModularTekkenPlayer::IsAlisaKoreanVersion() {
    return false;
}

void AModularTekkenPlayer::InitCustomizeMeshComponent(USkeletalMeshComponent* AddedComponent, TEnumAsByte<ItemSlotPosition> Location) {
}

void AModularTekkenPlayer::InitalizeAddedStaticMeshComponent(UStaticMeshComponent* AddedComponent) {
}

void AModularTekkenPlayer::InitalizeAddedSkelMeshComponent(USkeletalMeshComponent* AddedComponent) {
}




UCapsuleComponent* AModularTekkenPlayer::GetPlayerCapsuleComponent() {
    return NULL;
}



USkeletalMeshComponent* AModularTekkenPlayer::GetMeshComponent(TEnumAsByte<ItemSlotPosition> Pos) {
    return NULL;
}

FString AModularTekkenPlayer::GetItemVariationPath(UCharacterItem* CharacterItem) {
    return TEXT("");
}






UCharacterItemVariation* AModularTekkenPlayer::FindItemVariation(UCharacterItem* CharacterItem) {
    return NULL;
}


AModularTekkenPlayer::AModularTekkenPlayer() {
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->FaceMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FaceMesh"));
    this->HairMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HairMesh"));
    this->FaceHairMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FaceHairMesh"));
    this->UpperMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UpperMesh"));
    this->LowerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LowerMesh"));
}

