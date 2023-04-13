#pragma once

#include "CharacterItemBlueprint.h"
#include "EMeleeLowerAccAnim.h"
#include "EMeleeUpperAccAnim.h"
#include "EWazaItemAnimType.h"
#include "WMeleeItemInterface.h"
#include "WazaItemInterface.h"
#include "CharacterItemBlueprintWMelee.generated.h"

class UObject;

UCLASS(Blueprintable)
class TEKKENGAME_API ACharacterItemBlueprintWMelee : public ACharacterItemBlueprint, public IWMeleeItemInterface, public IWazaItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SpawnedDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebrisMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWazaItemAnimType> AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMeleeUpperAccAnim> UpperAccAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMeleeLowerAccAnim> LowerAccAnim;
    
    ACharacterItemBlueprintWMelee();
    UFUNCTION(BlueprintCallable, Category="Other")
    void ManageDebris(UObject* DebrisObj);
    
    
    // Fix for true pure virtual functions not being implemented
};

