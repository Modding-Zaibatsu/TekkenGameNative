#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TekkenMoviePlayer.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ATekkenMoviePlayer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* MovieTexture;
    
public:
    ATekkenMoviePlayer();
};

