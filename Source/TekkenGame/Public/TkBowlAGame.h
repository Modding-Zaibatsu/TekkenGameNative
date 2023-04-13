#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TkBowlAGame.generated.h"

class UTkBowlAGameStateComponent;

UCLASS(Blueprintable)
class TEKKENGAME_API ATkBowlAGame : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTkBowlAGameStateComponent* AGameStateComponent;
    
    ATkBowlAGame();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetStartPins(const TArray<bool>& Pins);
    
};

