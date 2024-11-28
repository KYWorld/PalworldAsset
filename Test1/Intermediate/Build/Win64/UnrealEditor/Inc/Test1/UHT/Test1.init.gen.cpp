// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest1_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Test1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Test1()
	{
		if (!Z_Registration_Info_UPackage__Script_Test1.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Test1",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4A87594F,
				0x79E19946,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Test1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Test1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Test1(Z_Construct_UPackage__Script_Test1, TEXT("/Script/Test1"), Z_Registration_Info_UPackage__Script_Test1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4A87594F, 0x79E19946));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
