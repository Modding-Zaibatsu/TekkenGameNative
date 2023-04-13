using UnrealBuildTool;

public class NVIDIAGfeSDK : ModuleRules {
    public NVIDIAGfeSDK(TargetInfo Target) {
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
