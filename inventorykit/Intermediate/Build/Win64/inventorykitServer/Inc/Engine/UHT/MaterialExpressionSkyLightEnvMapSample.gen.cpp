// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSkyLightEnvMapSample.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSkyLightEnvMapSample() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSkyLightEnvMapSample
void UMaterialExpressionSkyLightEnvMapSample::StaticRegisterNativesUMaterialExpressionSkyLightEnvMapSample()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyLightEnvMapSample);
UClass* Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_NoRegister()
{
	return UMaterialExpressionSkyLightEnvMapSample::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyLightEnvMapSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyLightEnvMapSample.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyLightEnvMapSample.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "The direction to sample the cubemap from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyLightEnvMapSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "The roughness used to specifiy the sharpness of the sample." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Roughness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyLightEnvMapSample>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSkyLightEnvMapSample, Direction), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSkyLightEnvMapSample, Roughness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roughness_MetaData), NewProp_Roughness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::NewProp_Roughness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::ClassParams = {
	&UMaterialExpressionSkyLightEnvMapSample::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSkyLightEnvMapSample.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyLightEnvMapSample.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSkyLightEnvMapSample.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyLightEnvMapSample>()
{
	return UMaterialExpressionSkyLightEnvMapSample::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyLightEnvMapSample);
UMaterialExpressionSkyLightEnvMapSample::~UMaterialExpressionSkyLightEnvMapSample() {}
// End Class UMaterialExpressionSkyLightEnvMapSample

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyLightEnvMapSample_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSkyLightEnvMapSample, UMaterialExpressionSkyLightEnvMapSample::StaticClass, TEXT("UMaterialExpressionSkyLightEnvMapSample"), &Z_Registration_Info_UClass_UMaterialExpressionSkyLightEnvMapSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyLightEnvMapSample), 3733763696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyLightEnvMapSample_h_347159487(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyLightEnvMapSample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyLightEnvMapSample_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
