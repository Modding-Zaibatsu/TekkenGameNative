#pragma once
#include "Array.h"
#include "Interface.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SkinWeightedItemInterface.generated.h"

class USkeletalMeshComponent;

UINTERFACE(Blueprintable)
class USkinWeightedItemInterface : public UInterface {
    GENERATED_BODY()
};

class ISkinWeightedItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    TArray<USkeletalMeshComponent*> GetWeightedSkeletalMeshComponents();
    
};

