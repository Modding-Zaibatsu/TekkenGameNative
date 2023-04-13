#pragma once
#include "Array.h"
#include "Interface.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "CustomizableItemInterface.generated.h"

class UMeshComponent;

UINTERFACE(Blueprintable)
class UCustomizableItemInterface : public UInterface {
    GENERATED_BODY()
};

class ICustomizableItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    TArray<UMeshComponent*> GetCustomizableMeshComponents();
    
};

