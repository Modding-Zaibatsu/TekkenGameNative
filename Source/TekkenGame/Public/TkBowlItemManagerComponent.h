#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BoundMeshInfo.h"
#include "EquipInfo.h"
#include "ItemSlotPosition.h"
#include "MinorEquipInfo.h"
#include "Components/ActorComponent.h"
#include "TkBowlItemManagerComponent.generated.h"

class ACharacterItemBlueprint;
class UCharacterItemSet;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEKKENGAME_API UTkBowlItemManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipInfo> CurrentEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinorEquipInfo CurrentMinorEquip;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoundMeshInfo> BoundMeshes;
    
public:
    UTkBowlItemManagerComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    bool HasValidBoundMesh(TEnumAsByte<ItemSlotPosition> Position);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<UMeshComponent*> GetBoundMeshes(TEnumAsByte<ItemSlotPosition> Position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void EquipCharacterItemSet(UCharacterItemSet* ItemSet);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void BindMeshComponent(UMeshComponent* BindComponent, TEnumAsByte<ItemSlotPosition> Position);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void BindItemBlueprint(ACharacterItemBlueprint* BindItemBP, TEnumAsByte<ItemSlotPosition> Position);
    
};

