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
    this->CameraUpDistance = 140700621893344;
    this->CameraUpBlendTime = 140700621893344;
    this->CameraUpBlendTimeToGo = 140700621893344;
    this->CameraRollAmplifier = 140700621893344;
    this->CameraRollDesired = 140700621893344;
}

