

using UnrealBuildTool;
using System.Collections.Generic;

public class Custom_ToonShadeTarget : TargetRules
{
	public Custom_ToonShadeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Custom_ToonShade" } );
	}
}
