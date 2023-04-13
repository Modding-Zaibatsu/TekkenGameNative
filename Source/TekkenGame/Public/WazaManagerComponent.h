#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AbilityItemBPType.h"
#include "AbilityItemData.h"
#include "ItemEffectInfoArray.h"
#include "ItemSlotPosition.h"
#include "TKAbilityItemId.h"
#include "TKCharacterSkeletonSocketPos.h"
#include "Components/ActorComponent.h"
#include "WazaManagerComponent.generated.h"

class UCustomizeCharacterItem;
class UObject;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWazaManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemEffectInfoArray EffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityItemData> AbilityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TKAbilityItemId> AnimatingID_Now;
    
    UWazaManagerComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 RemoveItemEffectAtLocation(TEnumAsByte<ItemSlotPosition> Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 RemoveAbilityItem(TEnumAsByte<ItemSlotPosition> Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<TKAbilityItemId> IntToAbilityID(int32 id_int);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool HasEffectItem(TEnumAsByte<TKAbilityItemId> itemID);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool HasAbilityItem(TEnumAsByte<TKAbilityItemId> ID);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UParticleSystem* GetItemEffect(TEnumAsByte<TKAbilityItemId> itemID, int32 EffectID);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FTransform GetEffectTransform();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<TKCharacterSkeletonSocketPos> GetEffectSocketValue();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FVector GetEffectOffsetVal();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool GetAbilityItemData(TEnumAsByte<TKAbilityItemId> ID, FAbilityItemData& Data);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 AddItemEffectFromCCI(UCustomizeCharacterItem* CCI);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AddItemBPController(TEnumAsByte<TKAbilityItemId> AbilityID, UObject* ItemBPController, TEnumAsByte<AbilityItemBPType> BPType);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 AddAbilityItem(UCustomizeCharacterItem* CCI, UObject* RegisteredObj, TEnumAsByte<TKAbilityItemId> itemId_Override);
    
};

