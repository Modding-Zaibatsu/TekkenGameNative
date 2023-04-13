#pragma once
#include "GameFramework/PlayerController.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "TekkenPlayerController.generated.h"

UCLASS(Blueprintable)
class ATekkenPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ATekkenPlayerController();
};

