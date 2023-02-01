// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlayfabGameMode.h"
#include "PlayfabCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlayfabGameMode::APlayfabGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
