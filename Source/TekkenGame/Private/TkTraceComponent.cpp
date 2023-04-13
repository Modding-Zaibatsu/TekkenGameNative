#include "TekkenGameModule.h"
#include "TkTraceComponent.h"

class USceneComponent;
class UTkTraceDataAsset;

void UTkTraceComponent::SetUp(UTkTraceDataAsset* InTraceDataAsset) {
}

void UTkTraceComponent::OnVFxFinished(int32 InstanceId) {
}

void UTkTraceComponent::Attach(USceneComponent* ParentComponent) {
}

UTkTraceComponent::UTkTraceComponent() {
    this->TraceColorPalletDataAsset = NULL;
    this->TraceDataAsset = NULL;
}

