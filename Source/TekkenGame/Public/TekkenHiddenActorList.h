#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HiddenParamsDrama.h"
#include "HiddenParamsSequenceProceeded.h"
#include "GameFramework/Actor.h"
#include "TekkenHiddenActorList.generated.h"

UCLASS(Blueprintable)
class ATekkenHiddenActorList : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHiddenParamsSequenceProceeded> ActorList_SequenceProceeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHiddenParamsDrama> ActorList_DramaStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHiddenParamsDrama> ActorList_DramaEnd;
    
    ATekkenHiddenActorList();
protected:
    UFUNCTION(BlueprintCallable, Category="Other")
    void SequenceProceeded(int32 StageSequenceId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnSequenceProceeded(int32 StageSequenceId);
    
protected:
    UFUNCTION(BlueprintCallable, Category="Other")
    void DramaStart(FName Tag);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void DramaEnd(FName Tag);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AddActorSequenceProceeded(int32 Index, AActor* pActor);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AddActorDramaStart(int32 Index, AActor* pActor);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AddActorDramaEnd(int32 Index, AActor* pActor);
    
};

