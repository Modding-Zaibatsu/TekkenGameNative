#pragma once

#include "Delegate.h"
#include "ObjectBase.h"
#include "Platform.h"
#include "OnFocusCommandSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusCommandSignature, int32, LocalPlayerIndex);

