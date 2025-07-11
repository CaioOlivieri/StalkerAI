// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StalkerAI1 : ModuleRules
{
	public StalkerAI1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"StalkerAI1",
			"StalkerAI1/Variant_Platforming",
			"StalkerAI1/Variant_Combat",
			"StalkerAI1/Variant_Combat/AI",
			"StalkerAI1/Variant_SideScrolling",
			"StalkerAI1/Variant_SideScrolling/Gameplay",
			"StalkerAI1/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
