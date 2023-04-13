#pragma once

#include "CharacterItemBlueprint.h"
#include "ERangedLowerAccAnim.h"
#include "ERangedUpperAccAnim.h"
#include "EWazaItemAnimType.h"
#include "WRangedItemInterface.h"
#include "WazaItemInterface.h"
#include "CharacterItemBlueprintWRanged.generated.h"

class UObject;

UCLASS(Blueprintable)
class TEKKENGAME_API ACharacterItemBlueprintWRanged : public ACharacterItemBlueprint, public IWRangedItemInterface, public IWazaItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWazaItemAnimType> AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERangedUpperAccAnim> UpperAccAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERangedLowerAccAnim> LowerAccAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SpawnedDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebrisMax;
    
    ACharacterItemBlueprintWRanged();
    UFUNCTION(BlueprintCallable, Category="Other")
    void ManageDebris(UObject* DebrisObj);
    
    
    // Fix for true pure virtual functions not being implemented
};

