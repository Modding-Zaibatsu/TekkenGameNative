#pragma once
#include "GameFramework/HUD.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "TestGFxHUD.generated.h"

class UGFxMoviePlayer;
class USwfMovie;

UCLASS(Blueprintable, NonTransient)
class ATestGFxHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfMovie_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxMoviePlayer* SwfPlayer_;
    
    ATestGFxHUD();
};

