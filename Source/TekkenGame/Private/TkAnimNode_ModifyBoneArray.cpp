#include "TekkenGameModule.h"
#include "TkAnimNode_ModifyBoneArray.h"

FTkAnimNode_ModifyBoneArray::FTkAnimNode_ModifyBoneArray() {
    this->TranslationMode = BMM_Ignore;
    this->RotationMode = BMM_Ignore;
    this->ScaleMode = BMM_Ignore;
    this->TranslationSpace = BCS_WorldSpace;
    this->RotationSpace = BCS_WorldSpace;
    this->ScaleSpace = BCS_WorldSpace;
}

