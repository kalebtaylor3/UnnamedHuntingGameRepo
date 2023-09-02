// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnnamedHuntingGameGameMode.h"
#include "UnnamedHuntingGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnnamedHuntingGameGameMode::AUnnamedHuntingGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

}
