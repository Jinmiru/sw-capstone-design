// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeGameProjectGameMode.h"
#include "LifeGameProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALifeGameProjectGameMode::ALifeGameProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
