#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "DramaAutoDofParam.h"
#include "GameFramework/Actor.h"
#include "DramaManager.generated.h"

class UDramaDOFCurve;

UCLASS(Blueprintable)
class ADramaManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDramaDOFCurve* DOFCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDramaAutoDofParam AutoDofParam;
    
    ADramaManager();
    UFUNCTION(BlueprintCallable, Category="Other")
    void StopCheckRageArts();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void StopCheckMotHeadName();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void StartCheckRageArts();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void StartCheckMotHeadName(int32 player_id);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetRageArtDofEndRate(float Rate);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetDisplayMotHeadFrame(int32 player_id, bool Visible);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetCheckRoundPreKOSlowFlag(bool bCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnRoundPreKOSlowEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnRoundPreKOSlowBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnRageArtsStateMid(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnRageArtsDOFEnd(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnRageArtsDOFBeing(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void HeadnameChangeToDrama();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    float GetRageArtsDofFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    FString GetRageArtsDofDataName(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FString GetDramaName(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool GetDofEnable();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FPostProcessSettings GetAutoDofParam(FPostProcessSettings Settings, int32 player_id, bool CheckWPlayer);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FPostProcessSettings FadeLerp(FPostProcessSettings Settings, float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void EnableExtraDemoDof(const FString& DataName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void DisableExtraDemoDof();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool CheckMotHeadName(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ChangeDofEnableFlag(bool flag);
    
};

