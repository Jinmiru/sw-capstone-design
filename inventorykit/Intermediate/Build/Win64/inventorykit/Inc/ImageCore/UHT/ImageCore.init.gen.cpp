// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ImageCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ImageCore()
	{
		if (!Z_Registration_Info_UPackage__Script_ImageCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ImageCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x303FC2B2,
				0x326C5608,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ImageCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ImageCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ImageCore(Z_Construct_UPackage__Script_ImageCore, TEXT("/Script/ImageCore"), Z_Registration_Info_UPackage__Script_ImageCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x303FC2B2, 0x326C5608));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
