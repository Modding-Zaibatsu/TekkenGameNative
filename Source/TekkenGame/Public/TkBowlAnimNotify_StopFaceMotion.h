#pragma once
#include "Animation/AnimNotifies/AnimNotify.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "TkBowlAnimNotify_StopFaceMotion.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TEKKENGAME_API UTkBowlAnimNotify_StopFaceMotion : public UAnimNotify {
    GENERATED_BODY()
public:
    UTkBowlAnimNotify_StopFaceMotion();
};

