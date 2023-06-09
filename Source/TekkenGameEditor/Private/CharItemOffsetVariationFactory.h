// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "CharItemOffsetVariationFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCharItemOffsetVariationFactory : public UFactory
{
	GENERATED_BODY()
	
	
	UCharItemOffsetVariationFactory();

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
	
};
