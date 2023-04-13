#pragma once
#include "Components/SceneComponent.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "TkTraceComponent.generated.h"

class UTkTraceColorPalletDataAsset;
class UTkTraceDataAsset;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEKKENGAME_API UTkTraceComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceColorPalletDataAsset* TraceColorPalletDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTkTraceDataAsset* TraceDataAsset;
    
public:
    UTkTraceComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetUp(UTkTraceDataAsset* InTraceDataAsset);
    
private:
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnVFxFinished(int32 InstanceId);
    
public:
    UFUNCTION(BlueprintCallable, Category="Other")
    void Attach(USceneComponent* ParentComponent);
    
};

