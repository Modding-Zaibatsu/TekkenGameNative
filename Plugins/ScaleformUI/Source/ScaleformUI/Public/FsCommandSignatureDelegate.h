#pragma once

#include "Delegate.h"
#include "ObjectBase.h"
#include "FsCommandSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFsCommandSignature, const FString&, Cmd, const FString&, Arg);

