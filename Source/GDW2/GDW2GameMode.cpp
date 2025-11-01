// Copyright Epic Games, Inc. All Rights Reserved.

#include "GDW2GameMode.h"
#include "GDW2Character.h"
#include "UObject/ConstructorHelpers.h"

AGDW2GameMode::AGDW2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
