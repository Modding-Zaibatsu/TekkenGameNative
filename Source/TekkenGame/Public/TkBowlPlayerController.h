#pragma once
#include "GameFramework/PlayerController.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "TkBowlPlayerController.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API ATkBowlPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ATkBowlPlayerController();
};

