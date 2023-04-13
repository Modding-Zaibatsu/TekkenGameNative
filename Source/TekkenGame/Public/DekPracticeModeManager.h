#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DekPracticeModeManager.generated.h"

class AModularTekkenPlayer;

UCLASS(Blueprintable)
class ADekPracticeModeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AModularTekkenPlayer* DekActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AModularTekkenPlayer* CPUActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenderingPlayerNumber;
    
    ADekPracticeModeManager();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetDekVisibility(bool bIsVisible, bool bToggleCPUVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ReInit(int32 DEK_PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void InitCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void Init(int32 DEK_PlayerNumber);
    
};

