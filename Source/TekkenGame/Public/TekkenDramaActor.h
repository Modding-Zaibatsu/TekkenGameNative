#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MatineeVar.h"
#include "GameFramework/Actor.h"
#include "TekkenDramaActor.generated.h"

UCLASS(Blueprintable)
class ATekkenDramaActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameSpeedDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatineeVar> MatineeList;
    
    ATekkenDramaActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnDramaStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnDramaEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnDramaDilationMultiplier(float dilation);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    float GetGameSpeedDilation();
    
};

