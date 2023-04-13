#pragma once
#include "UObject.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TekkenGameSingleton.generated.h"

class UNetDataStoreManager;

UCLASS(Blueprintable, NotPlaceable, Config=Game)
class UTekkenGameSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetDataStoreManager* mDataStoreManager;
    
public:
    UTekkenGameSingleton();
};

