#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ETKBowlCharacterSequenceAllowance.h"
#include "ETKBowlCharacterSequenceType.h"
#include "ETKBowlSequenceCameraType.h"
#include "TkBowlCharacterSequenceInfo.h"
#include "Components/ActorComponent.h"
#include "TkBowlCharacterSequenceComponent.generated.h"

class ULevelSequencePlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEKKENGAME_API UTkBowlCharacterSequenceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTkBowlCharacterSequenceInfo> AssignedSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETKBowlSequenceCameraType> PreparedCameraType;
    
    UTkBowlCharacterSequenceComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    void StopSequence();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool PrepareSequence(FName MontageSectionLabel, TEnumAsByte<ETKBowlCharacterSequenceAllowance> Allowance, TEnumAsByte<ETKBowlCharacterSequenceType> SequenceType);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    ULevelSequencePlayer* PlayPreparedSequence();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsSequenceUnique();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FName GetSequenceMontageSection();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<FName> GetAllSequenceMontageSections(TEnumAsByte<ETKBowlCharacterSequenceType> SequenceType, TEnumAsByte<ETKBowlCharacterSequenceAllowance> Allowance);
    
};

