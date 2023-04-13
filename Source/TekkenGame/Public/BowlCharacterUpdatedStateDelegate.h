#pragma once

#include "Delegate.h"
#include "ObjectBase.h"
#include "BowlCharacterUpdatedStateDelegate.generated.h"

class ATkBowlCharacter;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBowlCharacterUpdatedState, ATkBowlCharacter*, Character, UObject*, OldState, UObject*, NewState);

