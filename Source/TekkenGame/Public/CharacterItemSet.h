#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Array.h"
#include "CustomizeOverrides.h"
#include "ECostumeType.h"
#include "EnumAsByte.h"
#include "ItemSlotPosition.h"
#include "TKAbilityItemId.h"
#include "UObject.h"
#include "CharacterItemSet.generated.h"

class UAuraCharacterItem;
class UCharacterExtraItems;
class UCharacterItemTex;
class UCustomizeCharacterItem;
class UEffectCharacterItem;
class USkeletalMesh;

UCLASS(Blueprintable)
class TEKKENGAME_API UCharacterItemSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECostumeType> CostumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomizeCharacterItem*> CustomCharacterItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterExtraItems* ExtraItemSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterItemTex* MakeUpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffectCharacterItem* EffectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAuraCharacterItem* AuraItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSunTanned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizeOverrides UserCustomizedColors;
    
    UCharacterItemSet();
    UFUNCTION(BlueprintCallable, Category="Other")
    void RemoveItemAtPos(TEnumAsByte<ItemSlotPosition> Pos);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    USkeletalMesh* GetMeshAtPosition(TEnumAsByte<ItemSlotPosition> Pos);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<TEnumAsByte<ItemSlotPosition>> GetItemPositions();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UCustomizeCharacterItem* GetCustomizeItemAtPosition(TEnumAsByte<ItemSlotPosition> Pos);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool ContainsItemAtPos(TEnumAsByte<ItemSlotPosition> Pos);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool ContainsAbilityItemID(TEnumAsByte<TKAbilityItemId> ID);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool ContainsAbilityItem();
    
};

