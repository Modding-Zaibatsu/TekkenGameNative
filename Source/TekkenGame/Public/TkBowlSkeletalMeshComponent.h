#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "AssignedItemInfo.h"
#include "ECostumeType.h"
#include "Components/SkeletalMeshComponent.h"
#include "TkBowlSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEKKENGAME_API UTkBowlSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssignedItemInfo> AssignedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquippedIndex;
    
    UTkBowlSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    void EquipNewItem(TEnumAsByte<ECostumeType> ItemCostumeType);
    
};

