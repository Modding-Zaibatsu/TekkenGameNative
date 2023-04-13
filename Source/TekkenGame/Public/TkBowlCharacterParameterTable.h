#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Array.h"
#include "ETKBowlCharacterParamRanking.h"
#include "FighterId.h"
#include "TkBowlCharacterBowlParam.h"
#include "UObject.h"
#include "TkBowlCharacterParameterTable.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTkBowlCharacterParameterTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTkBowlCharacterBowlParam> CharacterBowlParameters;
    
    UTkBowlCharacterParameterTable();
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    TEnumAsByte<ETKBowlCharacterParamRanking> GetSpinRank(TEnumAsByte<FighterId> Fighter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    float GetPowerShootThreshold(TEnumAsByte<FighterId> Fighter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    TEnumAsByte<ETKBowlCharacterParamRanking> GetPowerRank(TEnumAsByte<FighterId> Fighter);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FTkBowlCharacterBowlParam GetCharacterBowlParams(TEnumAsByte<FighterId> Fighter);
    
};

