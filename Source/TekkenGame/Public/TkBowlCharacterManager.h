#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ETKBowlCharacterManagerLoadState.h"
#include "TkBowlCharacterLoadParam.h"
#include "GameFramework/Actor.h"
#include "TkBowlCharacterManager.generated.h"

class ATkBowlCharacter;

UCLASS(Blueprintable)
class TEKKENGAME_API ATkBowlCharacterManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETKBowlCharacterManagerLoadState> LoadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATkBowlCharacter*> Bowling_CharacterActors;
    
    ATkBowlCharacterManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RequestCharacterLoad(const TArray<FTkBowlCharacterLoadParam>& LoadParams, bool bDestroyAllCharacterActors);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    ATkBowlCharacter* GetCharacter(int32 AssignedPlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool AreCharactersLoading();
    
};

