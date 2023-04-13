#pragma once

#include "Delegate.h"
#include "ObjectBase.h"
#include "BowlAGameStateNewStateDelegateDelegate.generated.h"

class UTkBowlAGameState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FBowlAGameStateNewStateDelegate, UTkBowlAGameState*, new_state);

