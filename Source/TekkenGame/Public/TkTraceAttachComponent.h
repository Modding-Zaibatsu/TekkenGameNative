#pragma once
#include "Components/SceneComponent.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "TkTraceAttachComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEKKENGAME_API UTkTraceAttachComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UTkTraceAttachComponent();
};

