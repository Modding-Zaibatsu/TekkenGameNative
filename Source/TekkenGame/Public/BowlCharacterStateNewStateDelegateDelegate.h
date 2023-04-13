#pragma once

#include "Delegate.h"
#include "ObjectBase.h"
#include "BowlCharacterStateNewStateDelegateDelegate.generated.h"

class UTkBowlCharacterState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FBowlCharacterStateNewStateDelegate, UTkBowlCharacterState*, new_state);

