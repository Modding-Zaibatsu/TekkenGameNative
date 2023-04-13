#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "BowlCharacterUpdatedStateDelegate.h"
#include "FighterId.h"
#include "TkBowlCharacterBowlParam.h"
#include "TkBowlCharacterLoadParam.h"
#include "TkBowlFrameParamStats.h"
#include "GameFramework/Character.h"
#include "TkBowlCharacter.generated.h"

class UObject;
class USceneComponent;
class UTkBowlCharacterSequenceComponent;
class UTkBowlCharacterStateComponent;

UCLASS(Blueprintable)
class TEKKENGAME_API ATkBowlCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTkBowlCharacterSequenceComponent* SequenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTkBowlCharacterStateComponent* CharacterStateComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBowlCharacterUpdatedState OnCharacterStateUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTkBowlCharacterLoadParam CharacterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingRightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTkBowlFrameParamStats CurrentParamInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* player_state_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTkBowlFrameParamStats> BowlParamHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_no_;
    
public:
    ATkBowlCharacter();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SwitchHand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetThrowLineVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetPlayerNo(int32 player_no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetCharacterRotate_Yaw(float AxisOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetCharacterPosition_XVector(float AxisOffset);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetCharacterInfo(const FTkBowlCharacterLoadParam& LoadedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetBowlSpawnYaw(bool bOn, float RotateYaw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetBowlSpawnAxis(bool bOn, float AxisX, float AxisY, float AxisZ);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetBowlParameters(const FTkBowlCharacterBowlParam& BowlParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputAxisMoveRight(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputAxisMoveForward(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputAxisLookUp(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputAxisLookRight(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputActionSwitchHand(bool Pressed, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputActionSkipMovieScene(bool Pressed, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputActionReplayCamera3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputActionReplayCamera2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputActionReplayCamera1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputActionDetermine(bool Pressed, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputActionDebugThrow(bool Pressed, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputActionCharacterCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInputActionCancel(bool Pressed, FKey Key);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsSlotAnimPlaying(FName SlotNodeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool IsPlayerState(UClass* State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    UObject* GetPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    int32 GetPlayerNo() const;
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FVector GetLocationOfComponent(USceneComponent* Component, const FVector& world_location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FVector GetLocalLocation(const FVector& world_location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<FighterId> GetFighterId();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FTkBowlCharacterBowlParam GetBowlParameters();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool ChangePlayerState(UObject* State);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AddCurrentFrameHistory();
    
};

