#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Array.h"
#include "TKCustomizeColorCategory.h"
#include "EquipCustomizeInfo.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FEquipCustomizeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* InstancedDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<TKCustomizeColorCategory>> AssignedColorSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> AssignedColors;
    
    TEKKENGAME_API FEquipCustomizeInfo();
};

