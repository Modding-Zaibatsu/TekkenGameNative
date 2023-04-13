using UnrealBuildTool;

public class ScaleformUI : ModuleRules {
    public ScaleformUI(TargetInfo Target) {
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
        });
    }
}
