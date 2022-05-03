// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShooterAI : ModuleRules
{
	public ShooterAI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
