#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ERenderingLayer.h"
#include "EVisibilityReason.h"
#include "GameFramework/Actor.h"
#include "MRXRageArtsBG.generated.h"

UCLASS(Blueprintable)
class AMRXRageArtsBG : public AActor {
    GENERATED_BODY()
public:
    AMRXRageArtsBG();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ShowHideLayer(ERenderingLayer Layer, bool Show);
    
public:
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetLayerVisibility(ERenderingLayer Layer, EVisibilityReason Reason, bool Visibility);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PushStack();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PopStack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool GetLayerVisibility(ERenderingLayer Layer) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void CollectTargetsNative(ERenderingLayer Layer);
    
};

