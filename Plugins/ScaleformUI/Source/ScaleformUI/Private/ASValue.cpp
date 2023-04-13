#include "ScaleformUIModule.h"
#include "ASValue.h"

FASValue::FASValue() {
    this->ASType = EASType::Undefined;
    this->ASBoolean = false;
    this->ASInt = 0;
    this->ASNumber = 0;
    this->ASObject = NULL;
}

