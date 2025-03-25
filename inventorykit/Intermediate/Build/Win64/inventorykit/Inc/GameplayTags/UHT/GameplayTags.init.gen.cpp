// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTags_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameplayTags;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameplayTags()
	{
		if (!Z_Registration_Info_UPackage__Script_GameplayTags.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameplayTags",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x42AECC03,
				0xCC325081,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameplayTags.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameplayTags.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameplayTags(Z_Construct_UPackage__Script_GameplayTags, TEXT("/Script/GameplayTags"), Z_Registration_Info_UPackage__Script_GameplayTags, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x42AECC03, 0xCC325081));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
