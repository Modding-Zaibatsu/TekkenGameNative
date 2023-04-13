#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Array.h"
#include "CharacterItemEditor.h"
#include "EnumAsByte.h"
#include "UObject.h"
#include "CharacterExtraItems.generated.h"

class UCustomizeCharacterItem;

UCLASS(Blueprintable)
class TEKKENGAME_API UCharacterExtraItems : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<CharacterItemEditor::Type> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomizeCharacterItem*> ExtraItems;
    
    UCharacterExtraItems();
};

