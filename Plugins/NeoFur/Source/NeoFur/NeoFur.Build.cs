using UnrealBuildTool;

public class NeoFur : ModuleRules {
    public NeoFur(TargetInfo Target) {
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
