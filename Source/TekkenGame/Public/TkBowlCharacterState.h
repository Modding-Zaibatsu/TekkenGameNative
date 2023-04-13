#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TkBowlCharacterStateInterface.h"
#include "UObject.h"
#include "TkBowlCharacterState.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTkBowlCharacterState : public UObject, public ITkBowlCharacterStateInterface {
    GENERATED_BODY()
public:
    UTkBowlCharacterState();
    
    // Fix for true pure virtual functions not being implemented
};

