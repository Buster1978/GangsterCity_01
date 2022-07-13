// Copyright Epic Games, Inc. All Rights Reserved.

#include "GangsterCity_01GameMode.h"
#include "GangsterCity_01Character.h"
#include "UObject/ConstructorHelpers.h"

AGangsterCity_01GameMode::AGangsterCity_01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
