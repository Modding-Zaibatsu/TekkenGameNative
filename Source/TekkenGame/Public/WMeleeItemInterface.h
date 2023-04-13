#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "WMeleeItemInterface.generated.h"

UINTERFACE(Blueprintable)
class UWMeleeItemInterface : public UInterface {
    GENERATED_BODY()
};

class IWMeleeItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool MeleeItemHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool MeleeItemGuard();
    
};

