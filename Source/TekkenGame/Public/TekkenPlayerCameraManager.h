#pragma once
#include "Camera/PlayerCameraManager.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "TekkenPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class ATekkenPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ATekkenPlayerCameraManager();
};

