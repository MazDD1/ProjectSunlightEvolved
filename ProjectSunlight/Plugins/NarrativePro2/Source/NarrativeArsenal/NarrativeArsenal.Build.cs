// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NarrativeArsenal : ModuleRules
{
	public NarrativeArsenal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "NarrativeSaveSystem",
				"LevelSequence",
				"MovieScene",
                "CinematicCamera",
                "AIModule",
				"HairStrandsCore",
				"MediaAssets",
				"UMG",
				"PhysicsCore",
                "GameplayAbilities",
				"GameplayCameras",
                "CommonUI",
				"NavigationSystem"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"AIModule",
                "GameplayAbilities", 
				"GameplayTags", 
				"GameplayTasks",
				"MotionWarping",
                "EnhancedInput",
				"NarrativePro",
				"NarrativeCommonUI",
				"MovieSceneTracks",
				// ... add private dependencies that you statically link with here ...	
				
				"HairStrandsCore",
				"Niagara",
                "CommonInput",
				"DeveloperSettings"
            }
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		SetupGameplayDebuggerSupport(Target, true);
		
		// Editor tools
		if (Target.Type == TargetType.Editor)
		{
			PublicDependencyModuleNames.Add("SubobjectDataInterface");
			PublicDependencyModuleNames.Add("UnrealEd");
		}
	}
}
