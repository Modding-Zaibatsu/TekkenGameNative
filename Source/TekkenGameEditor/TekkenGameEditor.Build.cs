using UnrealBuildTool;

public class TekkenGameEditor : ModuleRules {
	public TekkenGameEditor(TargetInfo Target)
    {
        PublicIncludePaths.AddRange(
            new string[] {
                "TekkenGameEditor"
            }
        );
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "LevelSequence",
            "MovieScene",
            "MovieSceneTracks",
            "NeoFur",
            "ScaleformUI",
            "Slate",
            "SlateCore",
            "UMG",
            "TekkenGame",
        });
    }
}
