// Copyright Epic Games, Inc. All Rights Reserved.

#include "CH3Project2GameMode.h"
#include "CH3Project2Character.h"
#include "UObject/ConstructorHelpers.h"

ACH3Project2GameMode::ACH3Project2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
