#pragma once
#include "Engine/GameViewportClient.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "TekkenViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class TEKKENGAME_API UTekkenViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UTekkenViewportClient();
};

