#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TraceActiveParam.h"
#include "TraceInactiveParam.h"
#include "TkTraceManager.generated.h"

class USceneComponent;
class UTkTraceDataAsset;

UCLASS(Blueprintable)
class TEKKENGAME_API ATkTraceManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceDataAsset* TraceDataAsset;
    
    ATkTraceManager();
    UFUNCTION(BlueprintCallable, Category="Other")
    void Stop();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetVisibility(int32 InAttachIndex, bool bVisibility);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetUp(int32 InAttachIndex, AActor* InAttachActor, USceneComponent* InAttachComponent);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetElapsedTime(float InElapsedTime, float InElapsedTimeWithStop);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void Inactive(const FTraceInactiveParam& Param);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void Active(const FTraceActiveParam& Param);
    
};

