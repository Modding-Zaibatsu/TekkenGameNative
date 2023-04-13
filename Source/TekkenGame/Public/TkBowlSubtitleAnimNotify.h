#pragma once
#include "UnrealString.h"
#include "Animation/AnimNotifies/AnimNotify.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "TkBowlSubtitleAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UTkBowlSubtitleAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UTkBowlSubtitleAnimNotify();
};

