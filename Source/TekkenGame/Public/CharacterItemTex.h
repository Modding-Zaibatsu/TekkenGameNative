#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CharacterItemEditor.h"
#include "EItemCommonGroup.h"
#include "EItemReleaseVer.h"
#include "ItemSlotPosition.h"
#include "UnrealString.h"
#include "UObject.h"
#include "CharacterItemTex.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class TEKKENGAME_API UCharacterItemTex : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EItemReleaseVer> ReleaseVer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<CharacterItemEditor::Type> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SourceDiffuse2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SourceNormal2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ItemSlotPosition> ItemPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAbilityItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EItemCommonGroup> CommonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CaptureBankID;
    
    UCharacterItemTex();
    UFUNCTION(BlueprintCallable, Category="Other")
    bool InitCharacterItemTex(const FString& _InstanceName, TEnumAsByte<CharacterItemEditor::Type> _Character, TEnumAsByte<ItemSlotPosition> _ItemPosition, bool _bIsAbilityItem, UTexture2D* _SourceDiffuse2D, UTexture2D* _SourceNormal2D);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UTexture2D* GetNormal2D();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<ItemSlotPosition> GetItemPosition();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UTexture2D* GetDiffuse2D();
    
};

