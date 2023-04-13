#pragma once
#include "Engine/DataAsset.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TkTraceKindDataAsset.generated.h"

class UMaterialInterface;
class UTkTraceEffectCurve;
class UTkTraceMeshDataAsset;

UCLASS(Blueprintable)
class TEKKENGAME_API UTkTraceKindDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceMeshDataAsset* MeshSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleSystemTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceEffectCurve* EffectCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceEffectCurve* EffectDeltaCurve;
    
    UTkTraceKindDataAsset();
};

