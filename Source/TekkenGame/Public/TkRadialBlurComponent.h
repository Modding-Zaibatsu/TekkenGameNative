#pragma once
#include "Components/SceneComponent.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "TkRadialBlurComponent.generated.h"

class UMaterial;
class UMaterialParameterCollection;
class UPostProcessComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTkRadialBlurComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UTkRadialBlurComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetUp(UMaterial* TargetMat, UMaterialParameterCollection* TargetMPC, UPostProcessComponent* TargetPPV);
    
};

