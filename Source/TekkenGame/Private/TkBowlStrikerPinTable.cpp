#include "TekkenGameModule.h"
#include "TkBowlStrikerPinTable.h"

bool UTkBowlStrikerPinTable::IsSplitFrame(int32 FrameNumber) {
    return false;
}

bool UTkBowlStrikerPinTable::IsDefinedFrame(int32 FrameNumber) {
    return false;
}

TEnumAsByte<ETKBowlPinType> UTkBowlStrikerPinTable::GetFramePinType(int32 FrameNumber) {
    return TkBowl_PinType_Normal;
}

TArray<bool> UTkBowlStrikerPinTable::GetDefinedPinFrame(int32 FrameNumber) {
    return TArray<bool>();
}

bool UTkBowlStrikerPinTable::DoesFrameRequireReplay(int32 FrameNumber) {
    return false;
}

UTkBowlStrikerPinTable::UTkBowlStrikerPinTable() {
}

