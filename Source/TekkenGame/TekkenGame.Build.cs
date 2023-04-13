using UnrealBuildTool;

public class TekkenGame : ModuleRules {
	public TekkenGame(TargetInfo Target)
    {
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
        });
    }
}
