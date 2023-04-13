#pragma once
#include "GameFramework/PlayerController.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "TekkenMovieRenderingController.generated.h"

UCLASS(Blueprintable)
class ATekkenMovieRenderingController : public APlayerController {
    GENERATED_BODY()
public:
    ATekkenMovieRenderingController();
};

