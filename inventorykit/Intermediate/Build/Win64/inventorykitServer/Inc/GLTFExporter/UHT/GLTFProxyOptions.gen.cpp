// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Options/GLTFProxyOptions.h"
#include "GLTFExporter/Public/UserData/GLTFMaterialUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFProxyOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFProxyOptions();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFProxyOptions_NoRegister();
GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup();
GLTFEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFMaterialBakeSize();
GLTFEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin Class UGLTFProxyOptions Function ResetToDefault
struct Z_Construct_UFunction_UGLTFProxyOptions_ResetToDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Options/GLTFProxyOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLTFProxyOptions_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLTFProxyOptions, nullptr, "ResetToDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFProxyOptions_ResetToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLTFProxyOptions_ResetToDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLTFProxyOptions_ResetToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLTFProxyOptions_ResetToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLTFProxyOptions::execResetToDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefault();
	P_NATIVE_END;
}
// End Class UGLTFProxyOptions Function ResetToDefault

// Begin Class UGLTFProxyOptions
void UGLTFProxyOptions::StaticRegisterNativesUGLTFProxyOptions()
{
	UClass* Class = UGLTFProxyOptions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetToDefault", &UGLTFProxyOptions::execResetToDefault },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFProxyOptions);
UClass* Z_Construct_UClass_UGLTFProxyOptions_NoRegister()
{
	return UGLTFProxyOptions::StaticClass();
}
struct Z_Construct_UClass_UGLTFProxyOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "Options/GLTFProxyOptions.h" },
		{ "ModuleRelativePath", "Public/Options/GLTFProxyOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeMaterialInputs_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, a material input may be baked out to a texture (using a simple quad). Baking is only used for non-trivial material inputs (i.e. not simple texture or constant expressions). */" },
		{ "ModuleRelativePath", "Public/Options/GLTFProxyOptions.h" },
		{ "ToolTip", "If enabled, a material input may be baked out to a texture (using a simple quad). Baking is only used for non-trivial material inputs (i.e. not simple texture or constant expressions)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseThinTranslucentShadingModel_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials with shading model thin translucency will be used. Conversion is only partial.*/" },
		{ "ModuleRelativePath", "Public/Options/GLTFProxyOptions.h" },
		{ "ToolTip", "If enabled, materials with shading model thin translucency will be used. Conversion is only partial." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialBakeSize_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Default size of the baked out texture (containing the material input). Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions. */" },
		{ "EditCondition", "bBakeMaterialInputs" },
		{ "ModuleRelativePath", "Public/Options/GLTFProxyOptions.h" },
		{ "ToolTip", "Default size of the baked out texture (containing the material input). Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialBakeFilter_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Default filtering mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions. */" },
		{ "EditCondition", "bBakeMaterialInputs" },
		{ "ModuleRelativePath", "Public/Options/GLTFProxyOptions.h" },
		{ "ToolTip", "Default filtering mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions." },
		{ "ValidEnumValues", "TF_Nearest, TF_Bilinear, TF_Trilinear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialBakeTiling_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Default addressing mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions. */" },
		{ "EditCondition", "bBakeMaterialInputs" },
		{ "ModuleRelativePath", "Public/Options/GLTFProxyOptions.h" },
		{ "ToolTip", "Default addressing mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputBakeSettings_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Input-specific default bake settings that override the general defaults above. */" },
		{ "EditCondition", "bBakeMaterialInputs" },
		{ "ModuleRelativePath", "Public/Options/GLTFProxyOptions.h" },
		{ "ToolTip", "Input-specific default bake settings that override the general defaults above." },
	};
#endif // WITH_METADATA
	static void NewProp_bBakeMaterialInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeMaterialInputs;
	static void NewProp_bUseThinTranslucentShadingModel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseThinTranslucentShadingModel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMaterialBakeSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMaterialBakeFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMaterialBakeTiling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputBakeSettings_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultInputBakeSettings_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultInputBakeSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultInputBakeSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLTFProxyOptions_ResetToDefault, "ResetToDefault" }, // 3734191402
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFProxyOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_bBakeMaterialInputs_SetBit(void* Obj)
{
	((UGLTFProxyOptions*)Obj)->bBakeMaterialInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_bBakeMaterialInputs = { "bBakeMaterialInputs", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFProxyOptions), &Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_bBakeMaterialInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeMaterialInputs_MetaData), NewProp_bBakeMaterialInputs_MetaData) };
void Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_bUseThinTranslucentShadingModel_SetBit(void* Obj)
{
	((UGLTFProxyOptions*)Obj)->bUseThinTranslucentShadingModel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_bUseThinTranslucentShadingModel = { "bUseThinTranslucentShadingModel", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGLTFProxyOptions), &Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_bUseThinTranslucentShadingModel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseThinTranslucentShadingModel_MetaData), NewProp_bUseThinTranslucentShadingModel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultMaterialBakeSize = { "DefaultMaterialBakeSize", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFProxyOptions, DefaultMaterialBakeSize), Z_Construct_UScriptStruct_FGLTFMaterialBakeSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterialBakeSize_MetaData), NewProp_DefaultMaterialBakeSize_MetaData) }; // 3894204209
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultMaterialBakeFilter = { "DefaultMaterialBakeFilter", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFProxyOptions, DefaultMaterialBakeFilter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterialBakeFilter_MetaData), NewProp_DefaultMaterialBakeFilter_MetaData) }; // 525537855
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultMaterialBakeTiling = { "DefaultMaterialBakeTiling", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFProxyOptions, DefaultMaterialBakeTiling), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterialBakeTiling_MetaData), NewProp_DefaultMaterialBakeTiling_MetaData) }; // 2220430387
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultInputBakeSettings_ValueProp = { "DefaultInputBakeSettings", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, METADATA_PARAMS(0, nullptr) }; // 1666532053
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp = { "DefaultInputBakeSettings_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup, METADATA_PARAMS(0, nullptr) }; // 4087595200
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultInputBakeSettings = { "DefaultInputBakeSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFProxyOptions, DefaultInputBakeSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputBakeSettings_MetaData), NewProp_DefaultInputBakeSettings_MetaData) }; // 4087595200 1666532053
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLTFProxyOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_bBakeMaterialInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_bUseThinTranslucentShadingModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultMaterialBakeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultMaterialBakeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultMaterialBakeTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultInputBakeSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_DefaultInputBakeSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFProxyOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLTFProxyOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFProxyOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFProxyOptions_Statics::ClassParams = {
	&UGLTFProxyOptions::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGLTFProxyOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFProxyOptions_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFProxyOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFProxyOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFProxyOptions()
{
	if (!Z_Registration_Info_UClass_UGLTFProxyOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFProxyOptions.OuterSingleton, Z_Construct_UClass_UGLTFProxyOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFProxyOptions.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFProxyOptions>()
{
	return UGLTFProxyOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFProxyOptions);
UGLTFProxyOptions::~UGLTFProxyOptions() {}
// End Class UGLTFProxyOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFProxyOptions, UGLTFProxyOptions::StaticClass, TEXT("UGLTFProxyOptions"), &Z_Registration_Info_UClass_UGLTFProxyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFProxyOptions), 1273268100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_3393862300(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
