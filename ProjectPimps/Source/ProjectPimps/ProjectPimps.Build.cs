// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectPimps : ModuleRules
{
	public ProjectPimps(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "ECS" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
