// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionRuntimeVirtualTextureReplace.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRuntimeVirtualTextureReplace() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionRuntimeVirtualTextureReplace
void UMaterialExpressionRuntimeVirtualTextureReplace::StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureReplace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRuntimeVirtualTextureReplace);
UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_NoRegister()
{
	return UMaterialExpressionRuntimeVirtualTextureReplace::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression to switch logic for a path that renders to runtime virtual texture pages. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionRuntimeVirtualTextureReplace.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureReplace.h" },
		{ "ToolTip", "Material output expression to switch logic for a path that renders to runtime virtual texture pages." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Comment", "/** Used by the default rendering passes. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureReplace.h" },
		{ "ToolTip", "Used by the default rendering passes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureOutput_MetaData[] = {
		{ "Comment", "/** Used by the pass that renders to a runtime virtual texture page. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureReplace.h" },
		{ "ToolTip", "Used by the pass that renders to a runtime virtual texture page." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualTextureOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRuntimeVirtualTextureReplace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureReplace, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::NewProp_VirtualTextureOutput = { "VirtualTextureOutput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureReplace, VirtualTextureOutput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureOutput_MetaData), NewProp_VirtualTextureOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::NewProp_VirtualTextureOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::ClassParams = {
	&UMaterialExpressionRuntimeVirtualTextureReplace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureReplace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureReplace.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureReplace.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRuntimeVirtualTextureReplace>()
{
	return UMaterialExpressionRuntimeVirtualTextureReplace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRuntimeVirtualTextureReplace);
UMaterialExpressionRuntimeVirtualTextureReplace::~UMaterialExpressionRuntimeVirtualTextureReplace() {}
// End Class UMaterialExpressionRuntimeVirtualTextureReplace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureReplace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureReplace, UMaterialExpressionRuntimeVirtualTextureReplace::StaticClass, TEXT("UMaterialExpressionRuntimeVirtualTextureReplace"), &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureReplace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRuntimeVirtualTextureReplace), 2507228500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureReplace_h_3456541116(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureReplace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureReplace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
