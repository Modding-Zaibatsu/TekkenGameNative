#pragma once
#include "NameTypes.h"

#include "GFxWidgetBinding.generated.h"

USTRUCT(BlueprintType)
struct FGFxWidgetBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* WidgetClass;
    
    SCALEFORMUI_API FGFxWidgetBinding();
};

