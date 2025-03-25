// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolWidgets_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ToolWidgets;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ToolWidgets()
	{
		if (!Z_Registration_Info_UPackage__Script_ToolWidgets.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ToolWidgets",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0xBE82E949,
				0x4D34A7B8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ToolWidgets.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ToolWidgets.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ToolWidgets(Z_Construct_UPackage__Script_ToolWidgets, TEXT("/Script/ToolWidgets"), Z_Registration_Info_UPackage__Script_ToolWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBE82E949, 0x4D34A7B8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
