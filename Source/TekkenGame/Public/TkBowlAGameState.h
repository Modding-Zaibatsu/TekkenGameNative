#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TkBowlAGameStateInterface.h"
#include "UObject.h"
#include "TkBowlAGameState.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTkBowlAGameState : public UObject, public ITkBowlAGameStateInterface {
    GENERATED_BODY()
public:
    UTkBowlAGameState();
    
    // Fix for true pure virtual functions not being implemented
};

