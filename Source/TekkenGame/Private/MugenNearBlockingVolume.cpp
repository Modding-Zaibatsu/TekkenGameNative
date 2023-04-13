#include "TekkenGameModule.h"
#include "MugenNearBlockingVolume.h"

int32 AMugenNearBlockingVolume::GetTileNumber_Implementation() const {
    return 0;
}

AMugenNearBlockingVolume::AMugenNearBlockingVolume() {
    this->TileNumber = 0;
}

static FName InvisibleWall_NAME(TEXT("InvisibleWall"));
static FName InvisibleWallDynamic_NAME(TEXT("InvisibleWallDynamic"));

void AMugenNearBlockingVolume::LoadedFromAnotherClass(const FName& OldClassName)
{
    UObject::LoadedFromAnotherClass(OldClassName);

    if(GetLinkerUE4Version() < VER_UE4_REMOVE_DYNAMIC_VOLUME_CLASSES)
    {
        static FName DynamicBlockingVolume_NAME(TEXT("DynamicBlockingVolume"));

        if(OldClassName == DynamicBlockingVolume_NAME)
        {
            GetBrushComponent()->Mobility = EComponentMobility::Movable;

            if(GetBrushComponent()->GetCollisionProfileName() == InvisibleWall_NAME)
            {
                GetBrushComponent()->SetCollisionProfileName(InvisibleWallDynamic_NAME);
            }
        }
    }
}

void AMugenNearBlockingVolume::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
    UObject::PostEditChangeChainProperty(PropertyChangedEvent);
    
    // Get 'deepest' property name we changed.
    const FName TailPropName = PropertyChangedEvent.PropertyChain.GetTail()->GetValue()->GetFName();
    static FName Mobility_NAME(TEXT("Mobility"));
    if( TailPropName == Mobility_NAME )
    {
        // If the collision profile is one of the 'default' ones for a BlockingVolume, make sure it is the correct one
        // If user has changed it to something else, don't touch it
        FName CurrentProfileName = GetBrushComponent()->GetCollisionProfileName();
        if(	CurrentProfileName == InvisibleWall_NAME ||
            CurrentProfileName == InvisibleWallDynamic_NAME )
        {
            if(GetBrushComponent()->Mobility == EComponentMobility::Movable)
            {
                GetBrushComponent()->SetCollisionProfileName(InvisibleWallDynamic_NAME);
            }
            else
            {
                GetBrushComponent()->SetCollisionProfileName(InvisibleWall_NAME);
            }
        }
    }
}

