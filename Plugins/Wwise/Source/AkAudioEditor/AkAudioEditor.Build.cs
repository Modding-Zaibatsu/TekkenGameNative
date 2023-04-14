using UnrealBuildTool;

public class AkAudioEditor : ModuleRules {
    public AkAudioEditor(TargetInfo Target) {
        
        PublicIncludePaths.AddRange(
            new string[]
            {
                "AkAudioEditor/Public",
            }
        );

        PrivateIncludePaths.AddRange(
            new string[] 
            {
                "AkAudioEditor/Private",
            }
        );
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "UnrealEd",
            "AkAudio",
        });
    }
}
