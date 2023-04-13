#pragma once
#include "GameFramework/GameMode.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "NeoFurGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class NEOFUR_API ANeoFurGameMode : public AGameMode {
    GENERATED_BODY()
public:
    ANeoFurGameMode();
};

