#pragma once
#include "NameTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "TkBowlAnimNotify_PlayFaceMotion.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TEKKENGAME_API UTkBowlAnimNotify_PlayFaceMotion : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UTkBowlAnimNotify_PlayFaceMotion();
};

