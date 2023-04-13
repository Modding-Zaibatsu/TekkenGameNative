#pragma once
#include "Interface.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MeshVariationItemInterface.generated.h"

class USkeletalMeshComponent;

UINTERFACE(Blueprintable)
class UMeshVariationItemInterface : public UInterface {
    GENERATED_BODY()
};

class IMeshVariationItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    TArray<USkeletalMeshComponent*> GetMeshComponentsToSwapOut();
    
};

