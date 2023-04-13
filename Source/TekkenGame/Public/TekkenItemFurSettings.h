#pragma once
#include "UnrealString.h"

#include "TekkenItemFurSettings.generated.h"

class UMaterialInterface;
class UNeoFurAsset;

USTRUCT(BlueprintType)
struct FTekkenItemFurSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FurComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNeoFurAsset* FurAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShellCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShellDistance;
    
    TEKKENGAME_API FTekkenItemFurSettings();
};

