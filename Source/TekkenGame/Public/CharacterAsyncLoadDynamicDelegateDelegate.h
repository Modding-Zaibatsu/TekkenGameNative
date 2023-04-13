#pragma once

#include "Delegate.h"
#include "ObjectBase.h"
#include "CharacterAsyncLoadDynamicDelegateDelegate.generated.h"

class UCharacterItemSet;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCharacterAsyncLoadDynamicDelegate, UCharacterItemSet*, NewItemSet);

