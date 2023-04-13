#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Array.h"
#include "EMrzWeaponItemType.h"
#include "ItemSlotPosition.h"
#include "TekkenPlayer.h"
#include "ModularTekkenPlayer.generated.h"

class UCapsuleComponent;
class UCharacterItem;
class UCharacterItemSet;
class UCharacterItemVariation;
class UItemManagerComponent;
class UMissileManagerComponent;
class UNSCMaterialComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UTkRadialBlurComponent;
class UTkTraceComponent;
class UWazaManagerComponent;

UCLASS(Blueprintable)
class AModularTekkenPlayer : public ATekkenPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
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
    
    AModularTekkenPlayer();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void setMrzWeaponVisibility(EMrzWeaponItemType Item, bool NewVisibility);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetAsyncLoadMeshVariationsFromItemSet(const UCharacterItemSet* ItemSet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetAsyncLoadMeshVariations(const TArray<UCharacterItemVariation*>& Variations);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetAsyncLoadCustomizeItemSet(const UCharacterItemSet* ItemSet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetAllyLocationAndRotation(FVector loc, FRotator rot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetAllyAnimFrame(float Frame);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool PlayerOnRightSide();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsAlisaKoreanVersion();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void InitCustomizeMeshComponent(USkeletalMeshComponent* AddedComponent, TEnumAsByte<ItemSlotPosition> Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void InitalizeAddedStaticMeshComponent(UStaticMeshComponent* AddedComponent);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void InitalizeAddedSkelMeshComponent(USkeletalMeshComponent* AddedComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    UWazaManagerComponent* GetWazaManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    UTkTraceComponent* GetTraceComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    UTkRadialBlurComponent* GetRadialBlurComponent();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UCapsuleComponent* GetPlayerCapsuleComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    UNSCMaterialComponent* GetNSCMaterialComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    UMissileManagerComponent* GetMissileManagerComponent();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    USkeletalMeshComponent* GetMeshComponent(TEnumAsByte<ItemSlotPosition> Pos);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FString GetItemVariationPath(UCharacterItem* CharacterItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    UItemManagerComponent* GetItemManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FRotator GetAllyRot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FVector GetAllyPos();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    float GetAllyAnimFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ForceStopAllyAnim();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UCharacterItemVariation* FindItemVariation(UCharacterItem* CharacterItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ClearAsyncLoadMeshVariations();
    
};

