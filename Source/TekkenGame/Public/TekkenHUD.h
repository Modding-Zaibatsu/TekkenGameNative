#pragma once
#include "GameFramework/HUD.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "TekkenHUD.generated.h"

class ATekkenMoviePlayer;
class UFont;

UCLASS(Blueprintable, NonTransient)
class ATekkenHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* NormalFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* StaffrollFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* StaffrollFont_Bold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATekkenMoviePlayer* MoviePlayer;
    
public:
    ATekkenHUD();
};

