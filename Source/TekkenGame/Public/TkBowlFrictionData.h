#pragma once
#include "Array.h"
#include "UObject.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TkBowlFrictionData.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTkBowlFrictionData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TexWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TexHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RateDatas;
    
    UTkBowlFrictionData();
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    float GetFrictionRate(int32 X, int32 Y) const;
    
};

