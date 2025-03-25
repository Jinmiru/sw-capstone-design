// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversalObjectLocator_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UniversalObjectLocator;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UniversalObjectLocator()
	{
		if (!Z_Registration_Info_UPackage__Script_UniversalObjectLocator.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UniversalObjectLocator",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xAB3F3A87,
				0xA6778899,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UniversalObjectLocator.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UniversalObjectLocator.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UniversalObjectLocator(Z_Construct_UPackage__Script_UniversalObjectLocator, TEXT("/Script/UniversalObjectLocator"), Z_Registration_Info_UPackage__Script_UniversalObjectLocator, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAB3F3A87, 0xA6778899));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
