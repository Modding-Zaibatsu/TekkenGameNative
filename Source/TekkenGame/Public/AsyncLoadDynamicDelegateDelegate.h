#pragma once
#include "ObjectBase.h"
#include "Delegate.h"
#include "AsyncLoadDynamicDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAsyncLoadDynamicDelegate, UObject*, Object);

