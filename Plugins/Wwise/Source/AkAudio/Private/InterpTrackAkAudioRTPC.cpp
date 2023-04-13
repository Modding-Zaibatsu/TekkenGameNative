#include "AKAudioModule.h"
#include "InterpTrackAkAudioRTPC.h"

const FString UInterpTrackAkAudioRTPC::GetEdHelperClassName() const
{
	return FString( TEXT("AudiokineticTools.InterpTrackAkAudioRTPCHelper") );
}

const FString UInterpTrackAkAudioRTPC::GetSlateHelperClassName() const
{
	return FString( TEXT("AudiokineticTools.InterpTrackAkAudioRTPCHelper") );
}

UTexture2D* UInterpTrackAkAudioRTPC::GetTrackIcon() const
{
	return (UTexture2D*)StaticLoadObject( UTexture2D::StaticClass(), NULL, TEXT("/Engine/EditorMaterials/MatineeGroups/MAT_Groups_Sound.MAT_Groups_Sound"), NULL, LOAD_None, NULL );
}

UInterpTrackAkAudioRTPC::UInterpTrackAkAudioRTPC() {
    this->bPlayOnReverse = false;
    this->bContinueRTPCOnMatineeEnd = false;
}

