#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Array.h"
#include "ASValue.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ScaleformBlueprintLibrary.generated.h"

class UGFxMoviePlayer;
class UGFxObject;
class UObject;
class USwfMovie;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class SCALEFORMUI_API UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UScaleformBlueprintLibrary();
    UFUNCTION(BlueprintCallable, Category="Other")
    static UGFxMoviePlayer* OpenMovie(USwfMovie* Movie, UObject* ExternalInterface, UTextureRenderTarget2D* RenderTexture, UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static FASValue InvokeNoParams(UGFxMoviePlayer* MoviePlayer, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static FASValue Invoke(UGFxMoviePlayer* MoviePlayer, const FString& FunctionName, const TArray<FASValue>& Params);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static UGFxObject* GetVariable(UGFxMoviePlayer* MoviePlayer, const FString& VariablePath);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static UGFxObject* GetMovieClip(UGFxMoviePlayer* MoviePlayer, const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static UGFxObject* GetMember(UGFxMoviePlayer* MoviePlayer, const FString& MemberName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void CloseMovie(UGFxMoviePlayer* MoviePlayer);
    
};

