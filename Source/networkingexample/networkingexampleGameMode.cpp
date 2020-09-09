// Copyright Epic Games, Inc. All Rights Reserved.

#include "networkingexampleGameMode.h"
#include "networkingexampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AnetworkingexampleGameMode::AnetworkingexampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
