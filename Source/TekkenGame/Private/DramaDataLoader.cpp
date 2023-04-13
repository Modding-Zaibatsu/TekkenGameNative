#include "TekkenGameModule.h"
#include "DramaDataLoader.h"

class AActor;
class UDramaDOFCurve;

void UDramaDataLoader::SetUp() {
}

void UDramaDataLoader::RequestAsyncLoad(int32 player_id, TEnumAsByte<FighterId> fighter_id) {
}

void UDramaDataLoader::RemoveData() {
}

void UDramaDataLoader::RemoveBP(AActor* Actor) {
}

AActor* UDramaDataLoader::GetDramaBP(const FString& DramaName) {
    return NULL;
}

UDramaDOFCurve* UDramaDataLoader::GetCurveData(const FString& DramaName) {
    return NULL;
}

UDramaDataLoader::UDramaDataLoader() {
    this->LoadFinished = false;
}

