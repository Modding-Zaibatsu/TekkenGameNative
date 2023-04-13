#pragma once

#include "NetUserStorageRequest.h"
#include "Platform.h"
#include "NetUserStorageRequest_Test.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UNetUserStorageRequest_Test : public UNetUserStorageRequest {
    GENERATED_BODY()
public:
    UNetUserStorageRequest_Test();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    int32 GetValue() const;
    
};

