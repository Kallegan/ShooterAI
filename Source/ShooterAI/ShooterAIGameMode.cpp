// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterAIGameMode.h"
#include "ShooterAICharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooterAIGameMode::AShooterAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Player/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
