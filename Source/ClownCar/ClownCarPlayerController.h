// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ClownCarPlayerController.generated.h"

UCLASS()
class AClownCarPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AClownCarPlayerController();

protected:
	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

};


