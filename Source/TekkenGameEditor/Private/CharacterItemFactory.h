// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Factories/Factory.h"
#include "CharacterItemFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCharacterItemFactory : public UFactory
{
	GENERATED_BODY()
	
public:
	UCharacterItemFactory();

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
};
