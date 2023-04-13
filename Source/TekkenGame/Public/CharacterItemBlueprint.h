#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TKAbilityItemId.h"
#include "GameFramework/Actor.h"
#include "CharacterItemBlueprint.generated.h"

class AModularTekkenPlayer;
class UCharacterItem;
class UMaterialInterface;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class TEKKENGAME_API ACharacterItemBlueprint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttachItemAtRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontUseOffsetScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultAttachParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DefaultRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterItem* DefaultOwningItem;
    
public:
    ACharacterItemBlueprint();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void ResetToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnRegistered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    FRotator LookAtByDir(FVector Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    FRotator LookAt(FVector Start, FVector End);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void InitializeComponentMaterials(UPrimitiveComponent* Component, int32 ElementIndex, UMaterialInterface* SourceMaterial, bool bUsesOpponentRage);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FTransform GetOwnerTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    FString GetOwnersActiveMotionName();
    
protected:
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetOwnerRank();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    AModularTekkenPlayer* GetOwnerMTP();
    
protected:
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetOwnerHP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    AModularTekkenPlayer* GetOpponentMTP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    USceneComponent* GetAssignedRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    TEnumAsByte<TKAbilityItemId> GetAssignedAttackAnim() const;
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void CleanUp();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FTransform CalcTransformByOwnerMesh(FName SocketName, FTransform RelativeTransform);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FTransform CalcTransformByOpponentMesh(FName SocketName, FTransform RelativeTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    FTransform CalcDefaultTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    float AngleDegreeFromOwner(USceneComponent* SceneComponent);
    
};

