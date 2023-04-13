#pragma once

#include "Delegate.h"
#include "ObjectBase.h"
#include "AsyncLoadDynamicDelegateOneArgDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAsyncLoadDynamicDelegateOneArg, UObject*, Object, int64, Arg);

