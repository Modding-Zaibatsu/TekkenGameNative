#pragma once
#include "UObject.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TekkenAvatarLoadHelper.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTekkenAvatarLoadHelper : public UObject {
    GENERATED_BODY()
public:
    UTekkenAvatarLoadHelper();
};

