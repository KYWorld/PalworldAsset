// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test1EditorTarget : TargetRules
{
    public Test1EditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
        ExtraModuleNames.Add("Test1");
    }
}
