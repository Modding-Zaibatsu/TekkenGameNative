#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "WDropItemInterface.generated.h"

class USceneComponent;

UINTERFACE(Blueprintable)
class UWDropItemInterface : public UInterface {
    GENERATED_BODY()
};

class IWDropItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool UnattachDropItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    USceneComponent* GetComponentToDrop();
    
};

