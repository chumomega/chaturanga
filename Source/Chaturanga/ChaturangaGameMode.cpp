// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChaturangaGameMode.h"
#include "ChaturangaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChaturangaGameMode::AChaturangaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
