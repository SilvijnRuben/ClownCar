// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClownCarGameMode.h"
#include "ClownCarPlayerController.h"
#include "ClownCarCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClownCarGameMode::AClownCarGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AClownCarPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}