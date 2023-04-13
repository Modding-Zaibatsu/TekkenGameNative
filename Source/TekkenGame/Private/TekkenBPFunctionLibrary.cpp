#include "TekkenGameModule.h"
#include "TekkenBPFunctionLibrary.h"

FVector UTekkenBPFunctionLibrary::GetSafeNormal2D(FVector In) {
    return FVector{};
}

float UTekkenBPFunctionLibrary::GetHeading2D(const FVector& InVector, const FVector& FrontVector) {
    return 0.0f;
}

FVector UTekkenBPFunctionLibrary::FlattenVector(FVector In) {
    return FVector{};
}

float UTekkenBPFunctionLibrary::CalcDirectionalScalarFromFrontVec(FVector InVector) {
    return 0.0f;
}

FVector UTekkenBPFunctionLibrary::AbsVector(const FVector& InVector) {
    return FVector{};
}

UTekkenBPFunctionLibrary::UTekkenBPFunctionLibrary() {
}

