#include "TekkenGameModule.h"
#include "ThumbnailOverrides.h"

FThumbnailOverrides::FThumbnailOverrides() {
    this->bUseCameraBank = false;
    this->CCI_Camera_Bank = 0;
    this->Pose_Override = DefaultPose;
}

