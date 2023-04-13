#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LevelUtilityBPLibrary.generated.h"

class ULevelStreaming;
class UObject;

UCLASS(Blueprintable)
class ULevelUtilityBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelUtilityBPLibrary();
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool RemoveLevel(ULevelStreaming* InLevelStreaming);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static float GetAsyncLoadLevelPercentage(ULevelStreaming* InLevelStreaming);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FName GetAssetPackageName(ULevelStreaming* InLevelStreaming);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void DumpStreamingLevelName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool AddLevel(UObject* WorldContextObject, const FString& LevelPathName);
    
};

