// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_Project0GameMode.h"
#include "Unreal_Project0Character.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_Project0GameMode::AUnreal_Project0GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
