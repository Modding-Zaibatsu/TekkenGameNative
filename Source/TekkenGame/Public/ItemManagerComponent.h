#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EItemSearchType.h"
#include "EquipInfo.h"
#include "ItemSlotPosition.h"
#include "MinorEquipInfo.h"
#include "TKCustomizeColorCategory.h"
#include "Components/ActorComponent.h"
#include "ItemManagerComponent.generated.h"

class UCharacterItem;
class UCharacterItemOffsetVariation;
class UCharacterItemSet;
class UCustomizeCharacterItem;
class UMaterialInstanceDynamic;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UItemManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipInfo> CurrentEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinorEquipInfo CurrentMinorEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalHeightOffset;
    
    UItemManagerComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void yoshimitsuSpecialHeadVariation(UCharacterItemSet* item_set);
    
private:
    UFUNCTION(BlueprintCallable, Category="Other")
    bool TryDestroyItemObject(FEquipInfo EquipInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ToggleSuntan(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ResetOwnerHood(bool bHoodUp);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool ReplaceSkin(ItemSlotPosition ItemPosition, bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RemoveEffectItem();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool RemoveCharacterItem(ItemSlotPosition Location, bool bRemoveChildren);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RemoveAuraItem();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 RegisterMaterialColor(UMaterialInstanceDynamic* Mid, TKCustomizeColorCategory ColorCategory, FLinearColor Color, UCustomizeCharacterItem* CCI);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 RegisterCharacterItem(FEquipInfo EquipInfo);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool ModifyItemColorEX(FLinearColor NewColor, ItemSlotPosition ItemPosition, const FString& MaterialInstanceName, int32 ColorSlot);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool ModifyItemColor(FLinearColor NewColor, ItemSlotPosition ItemPosition, TKCustomizeColorCategory ColorPosition, bool bModifyChildren);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool ModifyHoodedCharacterHairColor(FLinearColor NewColor, TKCustomizeColorCategory ColorPosition);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsTargetItemEquipped(const FString& QueryName, EItemSearchType SearchType);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsItemEquippedAtPosition(ItemSlotPosition Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsColorDebugMode();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UCharacterItemSet* GetItemsFromCustomizeCharacterManager();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FString GetItemOffsetVariationPath(UCharacterItem* CharacterItem, UCharacterItem* ProblemItem);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FLinearColor GetItemColor(ItemSlotPosition ItemPosition, TKCustomizeColorCategory ColorPosition);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UObject* GetEquippedItemObject(ItemSlotPosition Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FEquipInfo GetEquipInfoAtPosition(ItemSlotPosition Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<UObject*> GetAllEquippedItemObjects(ItemSlotPosition Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<FEquipInfo> GetAllEquipInfosAtPosition(ItemSlotPosition Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<FEquipInfo> GetAllChildrenOfPosition(ItemSlotPosition Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UCharacterItemOffsetVariation* FindOffsetVariation(UCharacterItem* CharacterItem, UCharacterItem* ProblemItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    USkeletalMeshComponent* FindMeshComponent(ItemSlotPosition Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void EquipCharacterItemSet(UCharacterItemSet* item_set, int32 fighter_id);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AddPrerequisiteTickToMesh(USkeletalMeshComponent* Mesh, ItemSlotPosition PrereqTickLocation);
    
};

