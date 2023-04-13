#include "TekkenGameModule.h"
#include "TKMatineeCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

class UPrimitiveComponent;

void ATKMatineeCharacter::SetVisibilityForAlleSkeletalMesh(bool bVisible) {
}

void ATKMatineeCharacter::SetupSkeletalMeshComponents() {
}

bool ATKMatineeCharacter::isEnableCollision(UPrimitiveComponent* Target) {
    return false;
}

void ATKMatineeCharacter::CleanupSkeletalMeshComponents() {
}

void ATKMatineeCharacter::SetAnimPosition(FName SlotName, int32 ChannelIndex, UAnimSequence* InAnimSequence,
    float InPosition, bool bFireNotifies, bool bLooping)
{
}

void ATKMatineeCharacter::BeginAnimControl(UInterpGroup* InInterpGroup)
{
}

void ATKMatineeCharacter::FinishAnimControl(UInterpGroup* InInterpGroup)
{
}

ATKMatineeCharacter::ATKMatineeCharacter() {
    this->SelectedItemSet = NULL;
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->RootMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RootMesh"));
    this->FaceMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FaceMesh"));
    this->HairMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HairMesh"));
    this->FaceHairMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FaceHairMesh"));
    this->UpperMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UpperMesh"));
    this->LowerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LowerMesh"));
    this->PlayerNo = 0;
}

