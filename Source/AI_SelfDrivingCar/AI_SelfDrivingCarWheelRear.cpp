// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_SelfDrivingCarWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UAI_SelfDrivingCarWheelRear::UAI_SelfDrivingCarWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}