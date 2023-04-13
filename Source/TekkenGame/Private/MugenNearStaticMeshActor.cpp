#include "TekkenGameModule.h"
#include "MugenNearStaticMeshActor.h"

int32 AMugenNearStaticMeshActor::GetTileNumber_Implementation() const {
    return 0;
}

AMugenNearStaticMeshActor::AMugenNearStaticMeshActor() {
    this->TileNumber = 0;
}

