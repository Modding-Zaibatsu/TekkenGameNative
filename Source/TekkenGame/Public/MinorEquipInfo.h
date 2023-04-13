#pragma once

#include "MinorEquipInfo.generated.h"

class UAuraCharacterItem;
class UCharacterItemTex;
class UEffectCharacterItem;

USTRUCT(BlueprintType)
struct FMinorEquipInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterItemTex* FaceMakeup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAuraCharacterItem* AuraItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitAuraItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffectCharacterItem* EffectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSunTanFlag;
    
    TEKKENGAME_API FMinorEquipInfo();
};

