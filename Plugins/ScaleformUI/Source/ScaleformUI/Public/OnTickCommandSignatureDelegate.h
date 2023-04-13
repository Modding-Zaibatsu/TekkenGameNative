#pragma once
#include "Delegate.h"
#include "ObjectBase.h"

#include "OnTickCommandSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTickCommandSignature, float, DeltaTime);

