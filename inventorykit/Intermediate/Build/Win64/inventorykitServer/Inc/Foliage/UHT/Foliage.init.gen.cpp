// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliage_init() {}
	FOLIAGE_API UFunction* Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature();
	FOLIAGE_API UFunction* Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Foliage;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Foliage()
	{
		if (!Z_Registration_Info_UPackage__Script_Foliage.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Foliage",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1E57524D,
				0x875E692D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Foliage.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Foliage.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Foliage(Z_Construct_UPackage__Script_Foliage, TEXT("/Script/Foliage"), Z_Registration_Info_UPackage__Script_Foliage, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1E57524D, 0x875E692D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
