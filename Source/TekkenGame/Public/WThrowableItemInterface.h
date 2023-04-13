#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WThrowableItemInterface.generated.h"

UINTERFACE(Blueprintable)
class UWThrowableItemInterface : public UInterface {
    GENERATED_BODY()
};

class IWThrowableItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool UpdateThrownItem(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool ThrownItemHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool ThrownItemGuard();
    
};

