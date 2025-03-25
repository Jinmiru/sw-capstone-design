// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequence_init() {}
	LEVELSEQUENCE_API UFunction* Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature();
	LEVELSEQUENCE_API UFunction* Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LevelSequence;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LevelSequence()
	{
		if (!Z_Registration_Info_UPackage__Script_LevelSequence.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LevelSequence",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDA1943D2,
				0x89813A33,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LevelSequence.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LevelSequence.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LevelSequence(Z_Construct_UPackage__Script_LevelSequence, TEXT("/Script/LevelSequence"), Z_Registration_Info_UPackage__Script_LevelSequence, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDA1943D2, 0x89813A33));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
