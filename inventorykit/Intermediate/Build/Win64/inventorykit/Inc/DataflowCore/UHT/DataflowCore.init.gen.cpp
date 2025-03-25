// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DataflowCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DataflowCore()
	{
		if (!Z_Registration_Info_UPackage__Script_DataflowCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DataflowCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3BCB4A7E,
				0xE9EC64EB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DataflowCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DataflowCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DataflowCore(Z_Construct_UPackage__Script_DataflowCore, TEXT("/Script/DataflowCore"), Z_Registration_Info_UPackage__Script_DataflowCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3BCB4A7E, 0xE9EC64EB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
