#pragma once
#include "Engine/StaticMeshActor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "TekkenWallActor.generated.h"

UCLASS(Blueprintable)
class ATekkenWallActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RelatedStageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WallAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorBoundSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TKCollisionEnable;
    
    ATekkenWallActor();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetTKCollisionEnable(bool F);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetRelatedStageSequenceId(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnWallHit(const FVector& HitPosition, float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnWallHiddenEnable(int32 relatedStgSeqId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnWallHiddenDisable(int32 relatedStgSeqId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnWallBroken(const FVector& HitPosition, float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnResetWall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnBalconyBroken(const FVector& HitPosition, float Damage);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsTKCollisionEnable();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetWallAttribute();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetRelatedStageSequenceId();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetFloorNo();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FVector GetActorBoundSize();
    
};

