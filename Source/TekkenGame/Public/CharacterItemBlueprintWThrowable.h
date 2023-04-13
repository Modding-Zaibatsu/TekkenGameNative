#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CharacterItemBlueprint.h"
#include "EThrowableLowerAccAnim.h"
#include "EThrowableUpperAccAnim.h"
#include "EWazaItemAnimType.h"
#include "WThrowableItemInterface.h"
#include "WazaItemInterface.h"
#include "CharacterItemBlueprintWThrowable.generated.h"

class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class TEKKENGAME_API ACharacterItemBlueprintWThrowable : public ACharacterItemBlueprint, public IWThrowableItemInterface, public IWazaItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterForwardVec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ItemOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SpawnedDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebrisMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWazaItemAnimType> AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EThrowableUpperAccAnim> UpperAccAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EThrowableLowerAccAnim> LowerAccAnim;
    
    ACharacterItemBlueprintWThrowable();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetInitialParameters(const FTransform& AttachItemOffset, const FName& AttachedBone);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void ReturnToInitialPosition(USceneComponent* AttachableMesh);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void ReleaseAttachedItem(USceneComponent* AttachedItem, const FVector ForwardVec);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void ManageDebris(UObject* DebrisObj);
    
    
    // Fix for true pure virtual functions not being implemented
};

