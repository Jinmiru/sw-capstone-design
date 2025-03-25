// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSparseVolumeTextureSample() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESamplerSourceMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSparseVolumeTextureSample
void UMaterialExpressionSparseVolumeTextureSample::StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSample()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSparseVolumeTextureSample);
UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_NoRegister()
{
	return UMaterialExpressionSparseVolumeTextureSample::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Material expression for sampling from a runtime virtual texture. */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "Material expression for sampling from a runtime virtual texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "Comment", "/** 3D texture coordinate used to sample the sparse volume texture. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "3D texture coordinate used to sample the sparse volume texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'SparseVolumeTexture' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 0 if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplerSource_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/**\n\x09 * Controls where the sampler for this texture lookup will come from.\n\x09 * Choose 'from texture asset' to make use of the USparseVolumeTexture addressing settings,\n\x09 * Otherwise use one of the global samplers, which will not consume a sampler slot.\n\x09 * This allows materials to use more than 16 unique textures on SM5 platforms.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Controls where the sampler for this texture lookup will come from.\nChoose 'from texture asset' to make use of the USparseVolumeTexture addressing settings,\nOtherwise use one of the global samplers, which will not consume a sampler slot.\nThis allows materials to use more than 16 unique textures on SM5 platforms." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MipLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SamplerSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSparseVolumeTextureSample>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSample, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_TextureObject = { "TextureObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSample, TextureObject), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureObject_MetaData), NewProp_TextureObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_MipLevel = { "MipLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSample, MipLevel), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipLevel_MetaData), NewProp_MipLevel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_SamplerSource = { "SamplerSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSample, SamplerSource), Z_Construct_UEnum_Engine_ESamplerSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplerSource_MetaData), NewProp_SamplerSource_MetaData) }; // 1758857573
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_TextureObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_MipLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_SamplerSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::ClassParams = {
	&UMaterialExpressionSparseVolumeTextureSample::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSparseVolumeTextureSample>()
{
	return UMaterialExpressionSparseVolumeTextureSample::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSparseVolumeTextureSample);
UMaterialExpressionSparseVolumeTextureSample::~UMaterialExpressionSparseVolumeTextureSample() {}
// End Class UMaterialExpressionSparseVolumeTextureSample

// Begin Class UMaterialExpressionSparseVolumeTextureSampleParameter
void UMaterialExpressionSparseVolumeTextureSampleParameter::StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSampleParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSparseVolumeTextureSampleParameter);
UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_NoRegister()
{
	return UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialParameter" },
		{ "Comment", "/** Name to be referenced when we want to find and set this parameter */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "Name to be referenced when we want to find and set this parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
		{ "Comment", "/** GUID that should be unique within the material, this is used for parameter renaming. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "MaterialParameter" },
		{ "Comment", "/** The name of the parameter Group to display in MaterialInstance Editor. Default is None group */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "The name of the parameter Group to display in MaterialInstance Editor. Default is None group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[] = {
		{ "Category", "MaterialParameter" },
		{ "Comment", "/** Controls where the this parameter is displayed in a material instance parameter list. The lower the number the higher up in the parameter list. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "Controls where the this parameter is displayed in a material instance parameter list. The lower the number the higher up in the parameter list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSparseVolumeTextureSampleParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSampleParameter, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSampleParameter, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionGUID_MetaData), NewProp_ExpressionGUID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSampleParameter, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSampleParameter, SortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortPriority_MetaData), NewProp_SortPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ExpressionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_SortPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::ClassParams = {
	&UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSparseVolumeTextureSampleParameter>()
{
	return UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSparseVolumeTextureSampleParameter);
UMaterialExpressionSparseVolumeTextureSampleParameter::~UMaterialExpressionSparseVolumeTextureSampleParameter() {}
// End Class UMaterialExpressionSparseVolumeTextureSampleParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureSample_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample, UMaterialExpressionSparseVolumeTextureSample::StaticClass, TEXT("UMaterialExpressionSparseVolumeTextureSample"), &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSparseVolumeTextureSample), 2770705520U) },
		{ Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter, UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass, TEXT("UMaterialExpressionSparseVolumeTextureSampleParameter"), &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSparseVolumeTextureSampleParameter), 2712745798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureSample_h_3414470178(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureSample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureSample_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
