#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Array.h"
#include "ItemVariationAssign.h"
#include "UObject.h"
#include "CharacterItemVariation.generated.h"

class UCharacterItem;
class USkeletalMesh;

UCLASS(Blueprintable)
class TEKKENGAME_API UCharacterItemVariation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterItem* BaseCharacterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> VariationMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCharacterItem*> WeakProblemItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ItemVariationAssign>> VariationIDs;
    
    UCharacterItemVariation();
    UFUNCTION(BlueprintCallable, Category="Other")
    void RewriteAssetMap();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    USkeletalMesh* CheckForValueInVariationMap(UCharacterItem* Key);
    
};

