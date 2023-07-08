// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class C_SC_RTD_MT_NSCTarget : TargetRules
{
	public C_SC_RTD_MT_NSCTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "C_SC_RTD_MT_NSC" } );
	}
}
