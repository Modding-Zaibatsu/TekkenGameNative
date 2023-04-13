#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharacterLoadedInfo.h"
#include "ECharacterLoadedInfoStatus.h"
#include "ECostumeType.h"
#include "FighterId.h"
#include "PendingCharacterLoadInfo.h"
#include "GameFramework/Actor.h"
#include "TekkenCharacterLoadHelper.generated.h"

class ATekkenPlayer;

UCLASS(Blueprintable)
class ATekkenCharacterLoadHelper : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeterminedLoadStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresPlayerBufferSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterLoadedInfo> LoadedCharacters;
    
    ATekkenCharacterLoadHelper();
    UFUNCTION(BlueprintCallable, Category="Other")
    void UpdateStatusForCharacters();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void UpdateSavedCustomizedColors(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SwapPlayerNumbers(int32 PlayerA, int32 PlayerB);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetPendingLoad(FPendingCharacterLoadInfo PendingLoadInfo, int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetLoadedInfoStatus(TEnumAsByte<ECharacterLoadedInfoStatus> NewLoadStatus, int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetLoadedCharacterInfo(FCharacterLoadedInfo NewLoadedInfo, int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetLoadedCharacterId(TEnumAsByte<FighterId> NewCharacterId, int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetLoadedCharacter(int32 NewCharacterId, int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetCostumeType(TEnumAsByte<ECostumeType> NewCostumeType, int32 PlayerNumber, const FString& UniquePath);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FString GetNextPathToReload(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<ECharacterLoadedInfoStatus> GetLoadedStatus(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<ECostumeType> GetCostumeType(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    ATekkenPlayer* GetCharacterActor(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 CollectItemPathsToReload(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void ClearReloadedItemPaths(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void ClearLoadHelper(bool bDestroyActors);
    
};

