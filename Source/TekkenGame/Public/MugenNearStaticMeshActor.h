#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "MugenNearInterface.h"
#include "Engine/StaticMeshActor.h"
#include "MugenNearStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class AMugenNearStaticMeshActor : public AStaticMeshActor, public IMugenNearInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileNumber;
    
    AMugenNearStaticMeshActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure, Category="Other")
    int32 GetTileNumber() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

