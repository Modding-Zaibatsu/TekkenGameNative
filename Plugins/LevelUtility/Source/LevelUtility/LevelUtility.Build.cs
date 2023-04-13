using UnrealBuildTool;

public class LevelUtility : ModuleRules {
    public LevelUtility(TargetInfo Target) {
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
