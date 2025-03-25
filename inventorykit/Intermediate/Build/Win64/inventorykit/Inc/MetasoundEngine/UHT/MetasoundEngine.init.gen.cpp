// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundEngine_init() {}
	METASOUNDENGINE_API UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature();
	METASOUNDENGINE_API UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature();
	METASOUNDENGINE_API UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MetasoundEngine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MetasoundEngine()
	{
		if (!Z_Registration_Info_UPackage__Script_MetasoundEngine.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChangedMulticast__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MetasoundEngine",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF74B6A3D,
				0x91DFEB7B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MetasoundEngine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MetasoundEngine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MetasoundEngine(Z_Construct_UPackage__Script_MetasoundEngine, TEXT("/Script/MetasoundEngine"), Z_Registration_Info_UPackage__Script_MetasoundEngine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF74B6A3D, 0x91DFEB7B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
