// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveCoding_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LiveCoding;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LiveCoding()
	{
		if (!Z_Registration_Info_UPackage__Script_LiveCoding.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LiveCoding",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0x4554DAF1,
				0x7C956E3B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LiveCoding.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LiveCoding.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LiveCoding(Z_Construct_UPackage__Script_LiveCoding, TEXT("/Script/LiveCoding"), Z_Registration_Info_UPackage__Script_LiveCoding, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4554DAF1, 0x7C956E3B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
