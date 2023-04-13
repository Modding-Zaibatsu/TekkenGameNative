#pragma once
#include "Animation/SkeletalMeshActor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshActor -FallbackName=SkeletalMeshActor
#include "TkTraceMeshActor.generated.h"

UCLASS(Blueprintable)
class ATkTraceMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    ATkTraceMeshActor();
};

