#pragma once
#include "Delegate.h"
#include "TekkenBowlGameModeDeferredBeginPlaySignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTekkenBowlGameModeDeferredBeginPlaySignature, AActor*, DeferredActor);

