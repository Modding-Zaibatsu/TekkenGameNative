#pragma once

#include "EnumAsByte.h"
#include "ItemSlotPosition.h"
#include "BoundMeshInfo.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FBoundMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* BindMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ItemSlotPosition> BindPosition;
    
    TEKKENGAME_API FBoundMeshInfo();
};

