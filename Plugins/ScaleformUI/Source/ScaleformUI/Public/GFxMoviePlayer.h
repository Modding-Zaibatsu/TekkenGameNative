#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ASColorTransform.h"
#include "ASDisplayInfo.h"
#include "ASPerspectiveTransform.h"
#include "ASValue.h"
#include "EGFxAlign.h"
#include "EGFxRenderTextureMode.h"
#include "EGFxScaleMode.h"
#include "EGFxTimingMode.h"
#include "ExternalTexture.h"
#include "FsCommandSignatureDelegate.h"
#include "GFxHitTestType.h"
#include "GFxWidgetBinding.h"
#include "OnFocusCommandSignatureDelegate.h"
#include "OnStartCommandSignatureDelegate.h"
#include "OnTickCommandSignatureDelegate.h"
#include "GFxMoviePlayer.generated.h"

class UGFxMoviePlayer;
class UGFxObject;
class USwfMovie;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class SCALEFORMUI_API UGFxMoviePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SwfAssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayWithHudOff: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableGammaCorrection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowFocus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCloseOnLevelChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyOwnerFocusable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDiscardNonOwnerInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCaptureKeyboardInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCaptureMouseInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCaptureGamepadInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCaptureTouchInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSplitscreenLayoutModified: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDefaultMouseCursor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlurLesserMovies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideLesserMovies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPriorityBlurred: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPriorityHidden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreVisibilityEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreBlurEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRefreshed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformHitTest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<GFxHitTestType::Type> HitTestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* ExternalInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> CaptureKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> FocusIgnoreKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExternalTexture> ExternalTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGFxRenderTextureMode::Type> RenderTextureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGFxWidgetBinding> WidgetBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplitscreenLayoutYAdjust;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFsCommandSignature OnFsCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartCommandSignature OnStartCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartCommandSignature OnCloseCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTickCommandSignature OnTickCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusCommandSignature OnFocusGainedCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusCommandSignature OnFocusLostCommand;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGFxObject*> CachedMovieClipsArray;
    
public:
    UGFxMoviePlayer();
    UFUNCTION(BlueprintCallable, Category="Other")
    bool Start(bool bRefresh);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetVisibility(const FString& MovieClipName, bool bVisible);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetViewScaleMode(TEnumAsByte<EGFxScaleMode::Type> ScaleMode);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetViewport(int32 X, int32 Y, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetView3D(const FTransform& ViewTransform);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetVariableValueArray(const FString& MovieClipName, const FString& MemberName, const TArray<FASValue>& Value);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetVariableValue(const FString& MovieClipName, const FString& MemberName, const FASValue& Value);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetTimingMode(TEnumAsByte<EGFxTimingMode::Type> TimingMode);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetScale(const FString& MovieClipName, float XScale, float YScale);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetPosition(const FString& MovieClipName, float X, float Y);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetPerspective3D(const FASPerspectiveTransform& PerspectiveTransform);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetPause(bool bPausePlayback);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetMovieCanReceiveInput(bool bCanReceiveInput);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetFocusIgnoreKeys(const TArray<FKey>& Keys);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool SetExternalTexture(const FString& Resource, UTexture* Texture);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetDisplayTransform(const FString& MovieClipName, const FTransform& DisplayTransform);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetDisplayInfo(const FString& MovieClipName, const FASDisplayInfo& Info);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetColorTransform(const FString& MovieClipName, const FASColorTransform& UnrealColorTransform);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetCaptureKeys(const TArray<FKey>& Keys);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetAlignment(TEnumAsByte<EGFxAlign::Type> Align);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void ReceiveGFxCommand(const FString& Command, const FString& Arguments);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static UGFxMoviePlayer* OpenMovie(USwfMovie* SwfMovie, UObject* ExternalScriptInterface, UTextureRenderTarget2D* RenderToTexture, UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnStart();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnFocusLost(int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnFocusGained(int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnClose();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool LoadAndStart(const FString& InSwfAssetName, bool bRefresh);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FASValue Invoke(const FString& MovieClipName, const FString& FunctionName, const TArray<FASValue>& Params);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void GotoAndStopI(const FString& MovieClipName, int32 Frame);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void GotoAndStop(const FString& MovieClipName, const FString& Frame);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void GotoAndPlayI(const FString& MovieClipName, int32 Frame);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void GotoAndPlay(const FString& MovieClipName, const FString& Frame);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool GetVisibility(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FTransform GetView3D();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<FASValue> GetVariableValueArray(const FString& MovieClipName, const FString& MemberName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FASValue GetVariableValue(const FString& MovieClipName, const FString& MemberName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool GetScale(const FString& MovieClipName, float& XScale, float& YScale);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool GetPosition(const FString& MovieClipName, float& X, float& Y);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FASPerspectiveTransform GetPerspective3D();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UGFxObject* GetMovieClip(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FTransform GetDisplayTransform(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FASDisplayInfo GetDisplayInfo(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FASColorTransform GetColorTransform(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void Close(bool Unload);
    
};

