#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Array.h"
#include "CustomizeMaterialInstanceColorData.h"
#include "EItemReleaseVer.h"
#include "Platform.h"
#include "TKCharacterCIType.h"
#include "UObject.h"
#include "CustomizeCharacterItem.generated.h"

class UCharacterItem;
class UCustomizeCharacterItem;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TEKKENGAME_API UCustomizeCharacterItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EItemReleaseVer> ReleaseVer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterItem* CharacterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TKCharacterCIType> CCIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizeMaterialInstanceColorData> ItemColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> IndexColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> Index0Colors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomizeCharacterItem*> DependencyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSales;
    
    UCustomizeCharacterItem();
    UFUNCTION(BlueprintCallable, Category="Other")
    bool SetCharacterItem(UCharacterItem* SourceCharacterItem);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<FCustomizeMaterialInstanceColorData> GetMeshMaterialInstancesFromStaticMesh(UStaticMeshComponent* TargetMeshComponent);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<FCustomizeMaterialInstanceColorData> GetMeshMaterialInstances(USkeletalMeshComponent* TargetMeshComponent);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<FCustomizeMaterialInstanceColorData> GetItemColorsData() const;
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FLinearColor GetColorIndex(int32 Index) const;
    
};

