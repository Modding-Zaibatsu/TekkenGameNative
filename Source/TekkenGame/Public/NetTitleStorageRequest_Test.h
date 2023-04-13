#pragma once

#include "Array.h"
#include "NetTitleStorageRequest.h"
#include "NetTitleStorageRequest_Test.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UNetTitleStorageRequest_Test : public UNetTitleStorageRequest {
    GENERATED_BODY()
public:
    UNetTitleStorageRequest_Test();
    UFUNCTION(BlueprintCallable, Category="Other")
    bool MakeByDownloadData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    void GetBanList(TArray<FString>& BanList) const;
    
};

