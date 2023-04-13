#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "TKGenericItemEvent.h"
#include "WazaItemInterface.generated.h"

class USceneComponent;

UINTERFACE(Blueprintable)
class UWazaItemInterface : public UInterface {
    GENERATED_BODY()
};

class IWazaItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    USceneComponent* GetComponentToHold();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool DespawnedAttachedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool DefinableItemEvent(TKGenericItemEvent ItemEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool CancelCurrentItem();
    
};

