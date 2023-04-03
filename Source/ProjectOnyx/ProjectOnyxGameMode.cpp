// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectOnyxGameMode.h"
#include "ProjectOnyxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectOnyxGameMode::AProjectOnyxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
