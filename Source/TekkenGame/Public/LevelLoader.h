#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LevelLoader.generated.h"

UCLASS(Blueprintable)
class ALevelLoader : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LevelNames;
    
    ALevelLoader();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void UnloadStreamLevel(const FString& LevelName, bool DirectLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ReloadStreamLevel(FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void LoadStreamLevel(const FString& LevelName, bool DirectLoad);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsExistLevelsPendingPurge();
    
};

