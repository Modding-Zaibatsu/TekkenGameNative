#pragma once
#include "Engine/StaticMeshActor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "TekkenFloorActor.generated.h"

UCLASS(Blueprintable)
class ATekkenFloorActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RelatedStageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFloorBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaveValidHeight;
    
    ATekkenFloorActor();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetRelatedStageSequenceId(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnResetFloor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnFloorHit(const FVector& HitPosition, float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnFloorHiddenEnable(int32 relatedStgSeqId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnFloorHiddenDisable(int32 relatedStgSeqId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnFloorBroken(const FVector& HitPosition, float Damage);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsFloorBreakable();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetRelatedStageSequenceId();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetFloorNo();
    
};

