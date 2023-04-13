#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BowlPin.h"
#include "BowlPlayer.h"
#include "BowlScoreResult.h"
#include "BowlThrowType.h"
#include "Components/ActorComponent.h"
#include "TkBowlScoreComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEKKENGAME_API UTkBowlScoreComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTkBowlScoreComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<BowlScoreResult> set_score(TEnumAsByte<BowlPlayer> Player, int32 Frame, int32 Num, TArray<TEnumAsByte<BowlPin>> score, TEnumAsByte<BowlThrowType> throw_type);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void clear_score();
    
};

