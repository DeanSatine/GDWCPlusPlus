using UnrealBuildTool;

public class GDW2 : ModuleRules
{
    public GDW2(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "EnhancedInput",
            "AIModule",
            "GameplayTasks",
            "NavigationSystem",
            "UMG"              // ✅ Required for UUserWidget
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Slate",            // ✅ Required for UMG internals
            "SlateCore"
        });
    }
}
