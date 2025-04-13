using UnrealBuildTool;

public class EntityConfigEditor : ModuleRules
{
	public EntityConfigEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "EntityConfigEditor", "ECS" });
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"UnrealEd", "PropertyEditor", "ECS"
		});
		
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
	}
}