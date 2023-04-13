#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlockingVolume -FallbackName=BlockingVolume
#include "MugenNearInterface.h"
#include "Engine/BlockingVolume.h"
#include "MugenNearBlockingVolume.generated.h"

UCLASS(Blueprintable)
class AMugenNearBlockingVolume : public ABlockingVolume, public IMugenNearInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileNumber;
    
    AMugenNearBlockingVolume();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure, Category="Other")
    int32 GetTileNumber() const;

    virtual void LoadedFromAnotherClass(const FName& OldClassName) override;    
    virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;    

    // Fix for true pure virtual functions not being implemented
};

