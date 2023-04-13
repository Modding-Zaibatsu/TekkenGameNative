#include "TekkenGameModule.h"
#include "TkBowlFriction.h"

class UBoxComponent;
class UPhysicalMaterial;
class UStaticMeshComponent;
class UTexture2D;
class UTkBowlFrictionData;

float ATkBowlFriction::UpdateFriction(FVector Location) {
    return 0.0f;
}

void ATkBowlFriction::SetTexture(UTexture2D* SourceTexture) {
}

void ATkBowlFriction::SetTargetPhysicalMaterial(UPhysicalMaterial* PhysicalMaterial) {
}

void ATkBowlFriction::SetFrictionData(UTkBowlFrictionData* pData) {
}

void ATkBowlFriction::SetArea(UBoxComponent* Box) {
}

void ATkBowlFriction::EnableUpdateFriction(UStaticMeshComponent* Bowl, bool enable) {
}

ATkBowlFriction::ATkBowlFriction() {
    this->MaxFriction = 0;
    this->MinFriction = 0;
}

