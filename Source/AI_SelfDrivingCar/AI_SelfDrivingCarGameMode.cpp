// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_SelfDrivingCarGameMode.h"
#include "AI_SelfDrivingCarPlayerController.h"

AAI_SelfDrivingCarGameMode::AAI_SelfDrivingCarGameMode()
{
	PlayerControllerClass = AAI_SelfDrivingCarPlayerController::StaticClass();
}
