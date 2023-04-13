#include "AKAudioModule.h"
#include "InterpTrackAkAudioEvent.h"

const FString UInterpTrackAkAudioEvent::GetEdHelperClassName() const
{
    return FString( TEXT("AudiokineticTools.InterpTrackAkAudioEventHelper") );
}

const FString UInterpTrackAkAudioEvent::GetSlateHelperClassName() const
{
    return FString( TEXT("AudiokineticTools.InterpTrackAkAudioEventHelper") );
}

UTexture2D* UInterpTrackAkAudioEvent::GetTrackIcon() const
{
    return (UTexture2D*)StaticLoadObject( UTexture2D::StaticClass(), NULL, TEXT("/Engine/EditorMaterials/MatineeGroups/MAT_Groups_Sound.MAT_Groups_Sound"), NULL, LOAD_None, NULL );
}

UInterpTrackAkAudioEvent::UInterpTrackAkAudioEvent() {
    this->bContinueEventOnMatineeEnd = false;
}
