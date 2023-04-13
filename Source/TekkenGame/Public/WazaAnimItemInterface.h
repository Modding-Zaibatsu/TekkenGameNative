#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "WazaAnimItemInterface.generated.h"

UINTERFACE(Blueprintable)
class UWazaAnimItemInterface : public UInterface {
    GENERATED_BODY()
};

class IWazaAnimItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool AnimationStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool AnimationStart();
    
};

