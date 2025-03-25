// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneMaterialSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieScenePreAnimatedMaterialParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters;
class UScriptStruct* FMovieScenePreAnimatedMaterialParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScenePreAnimatedMaterialParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScenePreAnimatedMaterialParameters>()
{
	return FMovieScenePreAnimatedMaterialParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMaterial_MetaData[] = {
		{ "Comment", "/** Strong ptr to the previously assigned material interface (used when Sequencer.UseSoftObjectPtrsForPreAnimatedMaterial is false) */" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialSystem.h" },
		{ "ToolTip", "Strong ptr to the previously assigned material interface (used when Sequencer.UseSoftObjectPtrsForPreAnimatedMaterial is false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftPreviousMaterial_MetaData[] = {
		{ "Comment", "/** Soft ptr to the previously assigned material interface (used when Sequencer.UseSoftObjectPtrsForPreAnimatedMaterial is true) */" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialSystem.h" },
		{ "ToolTip", "Soft ptr to the previously assigned material interface (used when Sequencer.UseSoftObjectPtrsForPreAnimatedMaterial is true)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftPreviousMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePreAnimatedMaterialParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousMaterial = { "PreviousMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePreAnimatedMaterialParameters, PreviousMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousMaterial_MetaData), NewProp_PreviousMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_SoftPreviousMaterial = { "SoftPreviousMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePreAnimatedMaterialParameters, SoftPreviousMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftPreviousMaterial_MetaData), NewProp_SoftPreviousMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_SoftPreviousMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieScenePreAnimatedMaterialParameters",
	Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::PropPointers),
	sizeof(FMovieScenePreAnimatedMaterialParameters),
	alignof(FMovieScenePreAnimatedMaterialParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.InnerSingleton;
}
// End ScriptStruct FMovieScenePreAnimatedMaterialParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialSystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieScenePreAnimatedMaterialParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewStructOps, TEXT("MovieScenePreAnimatedMaterialParameters"), &Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePreAnimatedMaterialParameters), 1576397997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialSystem_h_205685276(TEXT("/Script/MovieSceneTracks"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialSystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
