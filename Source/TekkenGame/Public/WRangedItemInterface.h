#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WRangedItemInterface.generated.h"

UINTERFACE(Blueprintable)
class UWRangedItemInterface : public UInterface {
    GENERATED_BODY()
};

class IWRangedItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool RangedItemShoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool RangedItemHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool RangedItemGuard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool RangedBulletUpdate(FVector Location);
    
};

