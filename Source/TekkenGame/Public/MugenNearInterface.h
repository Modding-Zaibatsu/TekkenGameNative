#pragma once
#include "Interface.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MugenNearInterface.generated.h"

UINTERFACE(Blueprintable)
class UMugenNearInterface : public UInterface {
    GENERATED_BODY()
};

class IMugenNearInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    int32 GetTileNumber() const;
    
};

