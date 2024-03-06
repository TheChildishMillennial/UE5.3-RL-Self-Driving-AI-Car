// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AI_SelfDrivingCarPawn.h"
#include "AI_SelfDrivingCarSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class AI_SELFDRIVINGCAR_API AAI_SelfDrivingCarSportsCar : public AAI_SelfDrivingCarPawn
{
	GENERATED_BODY()
	
public:

	AAI_SelfDrivingCarSportsCar();
};
