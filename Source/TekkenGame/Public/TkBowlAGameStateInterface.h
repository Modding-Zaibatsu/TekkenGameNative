#pragma once
#include "Interface.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "TkBowlAGameStateInterface.generated.h"

class ATekkenBowlGameMode;
class ATkBowlAGame;

UINTERFACE(Blueprintable)
class UTkBowlAGameStateInterface : public UInterface {
    GENERATED_BODY()
};

class ITkBowlAGameStateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void TickState(ATekkenBowlGameMode* GameMode, ATkBowlAGame* a_game, float delta_time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void EndState(ATekkenBowlGameMode* GameMode, ATkBowlAGame* a_game);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void BeginState(ATekkenBowlGameMode* GameMode, ATkBowlAGame* a_game);
    
};

