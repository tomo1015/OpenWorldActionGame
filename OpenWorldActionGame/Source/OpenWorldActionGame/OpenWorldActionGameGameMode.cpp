// Copyright Epic Games, Inc. All Rights Reserved.

#include "OpenWorldActionGameGameMode.h"
#include "OpenWorldActionGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOpenWorldActionGameGameMode::AOpenWorldActionGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
