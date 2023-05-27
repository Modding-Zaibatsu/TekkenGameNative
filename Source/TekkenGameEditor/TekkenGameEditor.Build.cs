using UnrealBuildTool;

public class TekkenGameEditor : ModuleRules {
	public TekkenGameEditor(TargetInfo Target)
    {
        PrivateIncludePaths.Add("TekkenGameEditor/Private");
        
        PrivateDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "Slate",
            "SlateCore",
            "TekkenGame",
        });
        
        PrivateIncludePathModuleNames.AddRange(
            new string[] {
                "AssetTools"
            }
        );
    }
}
