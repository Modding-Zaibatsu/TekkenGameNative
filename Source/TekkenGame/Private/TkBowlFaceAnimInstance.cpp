#include "TekkenGameModule.h"
#include "TkBowlFaceAnimInstance.h"

void UTkBowlFaceAnimInstance::EnableFaceMontage() {
}

void UTkBowlFaceAnimInstance::DisableFaceMontage() {
}

UTkBowlFaceAnimInstance::UTkBowlFaceAnimInstance() {
    this->bPlayingFaceMontage = false;
    this->FaceBlendWeight = 0;
    this->FaceAnimMontage = NULL;
}

