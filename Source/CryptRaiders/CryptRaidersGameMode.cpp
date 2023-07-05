// Copyright Epic Games, Inc. All Rights Reserved.

#include "CryptRaidersGameMode.h"
#include "CryptRaidersCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACryptRaidersGameMode::ACryptRaidersGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
