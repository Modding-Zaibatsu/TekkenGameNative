#pragma once

#include "TkTraceOne.generated.h"

class ATkTraceMeshActor;
class UCurveFloat;
class UTkTraceAttachComponent;
class UTkTraceEffectCurve;

USTRUCT(BlueprintType)
struct TEKKENGAME_API FTkTraceOne {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATkTraceMeshActor* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FrameScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceEffectCurve* EffectCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceEffectCurve* EffectDeltaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleSystemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTkTraceAttachComponent* AttachComponent;
    
    FTkTraceOne();
};

