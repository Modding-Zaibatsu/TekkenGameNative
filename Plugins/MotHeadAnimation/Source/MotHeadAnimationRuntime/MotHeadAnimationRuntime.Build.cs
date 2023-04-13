using UnrealBuildTool;

public class MotHeadAnimationRuntime : ModuleRules {
    public MotHeadAnimationRuntime(TargetInfo Target) {
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
