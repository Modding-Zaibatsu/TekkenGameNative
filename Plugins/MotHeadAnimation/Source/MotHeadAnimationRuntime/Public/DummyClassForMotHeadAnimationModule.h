#pragma once
#include "UObject.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DummyClassForMotHeadAnimationModule.generated.h"

UCLASS(Blueprintable)
class UDummyClassForMotHeadAnimationModule : public UObject {
    GENERATED_BODY()
public:
    UDummyClassForMotHeadAnimationModule();
};

