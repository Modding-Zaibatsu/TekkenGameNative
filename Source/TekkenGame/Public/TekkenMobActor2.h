#pragma once
#include "GameFramework/Pawn.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "TekkenMobActor2.generated.h"

UCLASS(Blueprintable)
class ATekkenMobActor2 : public APawn {
    GENERATED_BODY()
public:
    ATekkenMobActor2();
};

