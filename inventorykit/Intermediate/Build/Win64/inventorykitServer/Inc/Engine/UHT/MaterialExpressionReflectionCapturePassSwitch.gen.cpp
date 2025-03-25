// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionReflectionCapturePassSwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionReflectionCapturePassSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionReflectionCapturePassSwitch
void UMaterialExpressionReflectionCapturePassSwitch::StaticRegisterNativesUMaterialExpressionReflectionCapturePassSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionReflectionCapturePassSwitch);
UClass* Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_NoRegister()
{
	return UMaterialExpressionReflectionCapturePassSwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "ReflectionCapturePassSwitch" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionReflectionCapturePassSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionCapturePassSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionCapturePassSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering into non-reflection passes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reflection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionCapturePassSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering into reflection passes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reflection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionReflectionCapturePassSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionReflectionCapturePassSwitch, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Reflection = { "Reflection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionReflectionCapturePassSwitch, Reflection), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reflection_MetaData), NewProp_Reflection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Reflection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::ClassParams = {
	&UMaterialExpressionReflectionCapturePassSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionReflectionCapturePassSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionReflectionCapturePassSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionReflectionCapturePassSwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionReflectionCapturePassSwitch>()
{
	return UMaterialExpressionReflectionCapturePassSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionReflectionCapturePassSwitch);
UMaterialExpressionReflectionCapturePassSwitch::~UMaterialExpressionReflectionCapturePassSwitch() {}
// End Class UMaterialExpressionReflectionCapturePassSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionCapturePassSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch, UMaterialExpressionReflectionCapturePassSwitch::StaticClass, TEXT("UMaterialExpressionReflectionCapturePassSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionReflectionCapturePassSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionReflectionCapturePassSwitch), 1085956461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionCapturePassSwitch_h_3616815133(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionCapturePassSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionCapturePassSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
