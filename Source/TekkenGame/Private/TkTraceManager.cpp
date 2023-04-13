#include "TekkenGameModule.h"
#include "TkTraceManager.h"

class AActor;
class USceneComponent;

void ATkTraceManager::Stop() {
}

void ATkTraceManager::SetVisibility(int32 InAttachIndex, bool bVisibility) {
}

void ATkTraceManager::SetUp(int32 InAttachIndex, AActor* InAttachActor, USceneComponent* InAttachComponent) {
}

void ATkTraceManager::SetElapsedTime(float InElapsedTime, float InElapsedTimeWithStop) {
}

void ATkTraceManager::Inactive(const FTraceInactiveParam& Param) {
}

void ATkTraceManager::Active(const FTraceActiveParam& Param) {
}

ATkTraceManager::ATkTraceManager() {
    this->TraceDataAsset = NULL;
}

