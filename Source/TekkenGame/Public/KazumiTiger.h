#pragma once
#include "GameFramework/Character.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "KazumiTiger.generated.h"

UCLASS(Blueprintable)
class AKazumiTiger : public ACharacter {
    GENERATED_BODY()
public:
    AKazumiTiger();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetMeshBoundScale(float Scale);
    
};

