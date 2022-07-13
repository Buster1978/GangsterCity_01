// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GangsterCity_01 : ModuleRules
{
	public GangsterCity_01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
