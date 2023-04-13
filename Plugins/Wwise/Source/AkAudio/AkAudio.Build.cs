using UnrealBuildTool;

public class AkAudio : ModuleRules {
    public AkAudio(TargetInfo Target) {
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
