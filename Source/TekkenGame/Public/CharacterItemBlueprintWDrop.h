#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CharacterItemBlueprint.h"
#include "EDropLowerAccAnim.h"
#include "EDropUpperAccAnim.h"
#include "EWazaItemAnimType.h"
#include "WDropItemInterface.h"
#include "WazaItemInterface.h"
#include "CharacterItemBlueprintWDrop.generated.h"

class AModularTekkenPlayer;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class TEKKENGAME_API ACharacterItemBlueprintWDrop : public ACharacterItemBlueprint, public IWDropItemInterface, public IWazaItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWazaItemAnimType> AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDropUpperAccAnim> UpperAccAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDropLowerAccAnim> LowerAccAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleLowerLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleUpperLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleFromList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ItemScales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemDropMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> DroppedItems;
    
    ACharacterItemBlueprintWDrop();
    UFUNCTION(BlueprintCallable, Category="Other")
    void UnattachAndDropItem(USceneComponent* ObjToDrop, FVector LocationToDrop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnUnattachedItemEvent(USceneComponent* UnattachedComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnAddedDropItemEvent(UObject* DroppingThisItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    FVector GetRandomItemScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    FTransform GetItemDropLocation(AModularTekkenPlayer* PlayerOwner, FName AttachSocket) const;
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<UObject*> GetDropItems();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AddDropItem(UObject* DropItem);
    
    
    // Fix for true pure virtual functions not being implemented
};

