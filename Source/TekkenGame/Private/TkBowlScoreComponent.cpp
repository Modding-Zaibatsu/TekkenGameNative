#include "TekkenGameModule.h"
#include "TkBowlScoreComponent.h"

TEnumAsByte<BowlScoreResult> UTkBowlScoreComponent::set_score(TEnumAsByte<BowlPlayer> Player, int32 Frame, int32 Num, TArray<TEnumAsByte<BowlPin>> score, TEnumAsByte<BowlThrowType> throw_type) {
    return BOWL_SCORE_RESULT_NORMAL;
}

void UTkBowlScoreComponent::clear_score() {
}

UTkBowlScoreComponent::UTkBowlScoreComponent() {
}

