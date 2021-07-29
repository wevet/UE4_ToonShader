

using UnrealBuildTool;
using System.Collections.Generic;

public class Custom_ToonShadeEditorTarget : TargetRules
{
	public Custom_ToonShadeEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Custom_ToonShade" } );
	}
}
