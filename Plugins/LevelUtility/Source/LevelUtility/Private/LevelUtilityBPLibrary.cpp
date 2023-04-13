#include "LevelUtilityModule.h"
#include "LevelUtilityBPLibrary.h"

#include "NameTypes.h"

class ULevelStreaming;
class UObject;

bool ULevelUtilityBPLibrary::RemoveLevel(ULevelStreaming* InLevelStreaming) {
    return false;
}

float ULevelUtilityBPLibrary::GetAsyncLoadLevelPercentage(ULevelStreaming* InLevelStreaming) {
    return 0.0f;
}

FName ULevelUtilityBPLibrary::GetAssetPackageName(ULevelStreaming* InLevelStreaming) {
    return NAME_None;
}

void ULevelUtilityBPLibrary::DumpStreamingLevelName(UObject* WorldContextObject) {
}

bool ULevelUtilityBPLibrary::AddLevel(UObject* WorldContextObject, const FString& LevelPathName) {
    return false;
}

ULevelUtilityBPLibrary::ULevelUtilityBPLibrary() {
}

