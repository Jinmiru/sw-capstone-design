// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelingComponents_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModelingComponents;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModelingComponents()
	{
		if (!Z_Registration_Info_UPackage__Script_ModelingComponents.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModelingComponents",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x25E22FAD,
				0x56DD10F5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModelingComponents.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ModelingComponents.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModelingComponents(Z_Construct_UPackage__Script_ModelingComponents, TEXT("/Script/ModelingComponents"), Z_Registration_Info_UPackage__Script_ModelingComponents, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x25E22FAD, 0x56DD10F5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
