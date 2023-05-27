// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "CustomizeCharacterItemFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCustomizeCharacterItemFactory : public UFactory
{
	GENERATED_BODY()
	
public:
	UCustomizeCharacterItemFactory();

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
};
