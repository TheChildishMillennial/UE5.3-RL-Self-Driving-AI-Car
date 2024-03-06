// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AI_SelfDrivingCar : ModuleRules
{
	public AI_SelfDrivingCar(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore" });
	}
}
