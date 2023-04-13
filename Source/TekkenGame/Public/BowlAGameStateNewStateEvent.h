#pragma once

#include "BowlAGameStateNewStateDelegateDelegate.h"
#include "BowlAGameStateNewStateEvent.generated.h"

USTRUCT(BlueprintType)
struct FBowlAGameStateNewStateEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBowlAGameStateNewStateDelegate Delegate;
    
    TEKKENGAME_API FBowlAGameStateNewStateEvent();
};

