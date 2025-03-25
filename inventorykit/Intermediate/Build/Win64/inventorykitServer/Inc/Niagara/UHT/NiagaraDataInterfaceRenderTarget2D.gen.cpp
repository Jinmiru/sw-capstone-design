// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceRenderTarget2D.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTarget2D() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceRenderTarget2D
void UNiagaraDataInterfaceRenderTarget2D::StaticRegisterNativesUNiagaraDataInterfaceRenderTarget2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceRenderTarget2D);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_NoRegister()
{
	return UNiagaraDataInterfaceRenderTarget2D::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Rendering" },
		{ "DisplayName", "Render Target 2D" },
		{ "IncludePath", "NiagaraDataInterfaceRenderTarget2D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipMapGeneration_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/** Controls if and when we generate mips for the render target. */" },
		{ "DisplayPriority", "20" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
		{ "ToolTip", "Controls if and when we generate mips for the render target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipMapGenerationType_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "21" },
		{ "EditCondition", "!bInheritUserParameterSettings && MipMapGeneration != ENiagaraMipMapGeneration::Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRenderTargetFormat_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/** When enabled overrides the format of the render target, otherwise uses the project default setting. */" },
		{ "DisplayPriority", "11" },
		{ "EditCondition", "!bInheritUserParameterSettings && bOverrideFormat" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
		{ "ToolTip", "When enabled overrides the format of the render target, otherwise uses the project default setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRenderTargetFilter_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/** When enabled overrides the filter of the render target, otherwise uses the project default setting. */" },
		{ "DisplayPriority", "12" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
		{ "ToolTip", "When enabled overrides the filter of the render target, otherwise uses the project default setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritUserParameterSettings_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/**\n\x09When enabled texture parameters (size / etc) are taken from the user provided render target.\n\x09If no valid user parameter is set the system will be invalid.\n\x09Note: The resource will be recreated if UAV access is not available, which will reset the contents.\n\x09*/" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
		{ "ToolTip", "When enabled texture parameters (size / etc) are taken from the user provided render target.\nIf no valid user parameter is set the system will be invalid.\nNote: The resource will be recreated if UAV access is not available, which will reset the contents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFormat_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "10" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewRenderTarget_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "30" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetUserParameter_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2D.h" },
		{ "ToolTip", "When valid the user parameter is used as the render target rather than creating one internal, note that the input render target will be adjusted by the Niagara simulation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipMapGeneration_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MipMapGeneration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipMapGenerationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MipMapGenerationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideRenderTargetFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideRenderTargetFilter;
	static void NewProp_bInheritUserParameterSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritUserParameterSettings;
	static void NewProp_bOverrideFormat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFormat;
#if WITH_EDITORONLY_DATA
	static void NewProp_bPreviewRenderTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewRenderTarget;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetUserParameter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceRenderTarget2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration = { "MipMapGeneration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, MipMapGeneration), Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipMapGeneration_MetaData), NewProp_MipMapGeneration_MetaData) }; // 1487393809
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType = { "MipMapGenerationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, MipMapGenerationType), Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipMapGenerationType_MetaData), NewProp_MipMapGenerationType_MetaData) }; // 3002231801
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFormat = { "OverrideRenderTargetFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideRenderTargetFormat_MetaData), NewProp_OverrideRenderTargetFormat_MetaData) }; // 338846453
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFilter = { "OverrideRenderTargetFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFilter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideRenderTargetFilter_MetaData), NewProp_OverrideRenderTargetFilter_MetaData) }; // 525537855
void Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceRenderTarget2D*)Obj)->bInheritUserParameterSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings = { "bInheritUserParameterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTarget2D), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritUserParameterSettings_MetaData), NewProp_bInheritUserParameterSettings_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceRenderTarget2D*)Obj)->bOverrideFormat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat = { "bOverrideFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTarget2D), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideFormat_MetaData), NewProp_bOverrideFormat_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceRenderTarget2D*)Obj)->bPreviewRenderTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget = { "bPreviewRenderTarget", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTarget2D), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewRenderTarget_MetaData), NewProp_bPreviewRenderTarget_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_RenderTargetUserParameter = { "RenderTargetUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2D, RenderTargetUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetUserParameter_MetaData), NewProp_RenderTargetUserParameter_MetaData) }; // 174428838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_MipMapGenerationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_OverrideRenderTargetFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bInheritUserParameterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bPreviewRenderTarget,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_RenderTargetUserParameter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister, (int32)VTABLE_OFFSET(UNiagaraDataInterfaceRenderTarget2D, INiagaraSimCacheCustomStorageInterface), false },  // 2941118379
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::ClassParams = {
	&UNiagaraDataInterfaceRenderTarget2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceRenderTarget2D>()
{
	return UNiagaraDataInterfaceRenderTarget2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceRenderTarget2D);
UNiagaraDataInterfaceRenderTarget2D::~UNiagaraDataInterfaceRenderTarget2D() {}
// End Class UNiagaraDataInterfaceRenderTarget2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D, UNiagaraDataInterfaceRenderTarget2D::StaticClass, TEXT("UNiagaraDataInterfaceRenderTarget2D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceRenderTarget2D), 619162253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_342797460(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
