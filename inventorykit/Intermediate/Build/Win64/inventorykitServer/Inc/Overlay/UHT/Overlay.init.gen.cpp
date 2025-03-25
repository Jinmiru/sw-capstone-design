// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlay_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Overlay;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Overlay()
	{
		if (!Z_Registration_Info_UPackage__Script_Overlay.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Overlay",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x75408CD0,
				0x65D9B497,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Overlay.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Overlay.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Overlay(Z_Construct_UPackage__Script_Overlay, TEXT("/Script/Overlay"), Z_Registration_Info_UPackage__Script_Overlay, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x75408CD0, 0x65D9B497));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
