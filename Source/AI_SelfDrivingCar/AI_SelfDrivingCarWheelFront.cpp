// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_SelfDrivingCarWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UAI_SelfDrivingCarWheelFront::UAI_SelfDrivingCarWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}