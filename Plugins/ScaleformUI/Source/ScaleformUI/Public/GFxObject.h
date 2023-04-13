#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Array.h"
#include "ASColorTransform.h"
#include "ASDisplayInfo.h"
#include "ASValue.h"
#include "Platform.h"
#include "UObject.h"
#include "GFxObject.generated.h"

class UGFxMoviePlayer;

UCLASS(Blueprintable, Transient)
class SCALEFORMUI_API UGFxObject : public UObject {
    GENERATED_BODY()
public:
    UGFxObject();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetScale(float XScale, float YScale);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetRotation(float rot);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetPosition(float X, float Y);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetMemberValueArray(UGFxMoviePlayer* MoviePlayer, const FString& MemberName, const TArray<FASValue>& Input);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetMemberValue(const FString& MemberName, const FASValue& Input);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetDisplayTransform(const FTransform& DisplayTransform);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetDisplayInfo(const FASDisplayInfo& UnrealDisplayInfo);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetColorTransform(const FASColorTransform& UnrealColorTransform);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FASValue Invoke(const FString& FunctionName, const TArray<FASValue>& Params);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void GotoAndStopI(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void GotoAndStop(const FString& FrameString);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void GotoAndPlayI(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void GotoAndPlay(const FString& FrameString);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool GetVisible();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool GetScale(float& XScale, float& YScale);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool GetRotation(float& XRot, float& YRot);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool GetPosition(float& X, float& Y);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<FASValue> GetMemberValueArray(const FString& MemberName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FASValue GetMemberValue(const FString& MemberName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FTransform GetDisplayTransform();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FASDisplayInfo GetDisplayInfo();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FASColorTransform GetColorTransform();
    
};

