// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Unreal_Project0 : ModuleRules
{
	public Unreal_Project0(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
