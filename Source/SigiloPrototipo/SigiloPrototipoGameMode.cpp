// Copyright Epic Games, Inc. All Rights Reserved.

#include "SigiloPrototipoGameMode.h"
#include "SigiloPrototipoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASigiloPrototipoGameMode::ASigiloPrototipoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
