#include "ScaleformUIModule.h"
#include "GCReference.h"

FGCReference::FGCReference() {
    this->Object = NULL;
    this->RefCount = 0;
}

