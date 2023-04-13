#include "TekkenGameModule.h"
#include "TkBowlSpringArmComponent.h"

class USceneComponent;

void UTkBowlSpringArmComponent::SetRollCameraAngleByBallVelocity(bool is_enable, USceneComponent* target_scene_component) {
}

void UTkBowlSpringArmComponent::PositionUpCameraStart(bool is_start) {
}

void UTkBowlSpringArmComponent::LockUpdateArmLocation(bool is_locked) {
}

UTkBowlSpringArmComponent::UTkBowlSpringArmComponent() {
    this->bChangePositionToUpCamera = false;
    this->bLockToUpdateTargetLocation = false;
    this->bRollCameraAngleByBallVelocity = false;
    this->CameraUpDistance = 0;
    this->CameraUpBlendTime = 0;
    this->CameraUpBlendTimeToGo = 0;
    this->CameraRollAmplifier = 0;
    this->CameraRollDesired = 0;
}

