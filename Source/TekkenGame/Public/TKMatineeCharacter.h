#pragma once
#include "GameFramework/Pawn.h"
#include "Matinee/MatineeAnimInterface.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MatineeAnimInterface -FallbackName=MatineeAnimInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "TKMatineeCharacter.generated.h"

class UCapsuleComponent;
class UCharacterItemSet;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ATKMatineeCharacter : public APawn, public IMatineeAnimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterItemSet* SelectedItemSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RootMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HairMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FaceHairMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* UpperMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LowerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNo;
    
    ATKMatineeCharacter();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetVisibilityForAlleSkeletalMesh(bool bVisible);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetupSkeletalMeshComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool isEnableCollision(UPrimitiveComponent* Target);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void CleanupSkeletalMeshComponents();

    virtual void SetAnimPosition(FName SlotName, int32 ChannelIndex, UAnimSequence* InAnimSequence, float InPosition, bool bFireNotifies, bool bLooping) override;
    
    virtual void BeginAnimControl(UInterpGroup* InInterpGroup) override;

    virtual void FinishAnimControl(UInterpGroup* InInterpGroup) override;
    
    // Fix for true pure virtual functions not being implemented
};

