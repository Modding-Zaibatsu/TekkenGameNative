#pragma once

#include "NetTitleStorageRequest.h"
#include "NetTitleStorageRequest_Game.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UNetTitleStorageRequest_Game : public UNetTitleStorageRequest {
    GENERATED_BODY()
public:
    UNetTitleStorageRequest_Game();
    UFUNCTION(BlueprintCallable, Category="Other")
    bool MakeByDownloadData();
    
};

