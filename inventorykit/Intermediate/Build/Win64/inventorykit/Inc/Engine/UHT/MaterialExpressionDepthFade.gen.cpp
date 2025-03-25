// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDepthFade.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDepthFade() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthFade();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthFade_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDepthFade
void UMaterialExpressionDepthFade::StaticRegisterNativesUMaterialExpressionDepthFade()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDepthFade);
UClass* Z_Construct_UClass_UMaterialExpressionDepthFade_NoRegister()
{
	return UMaterialExpressionDepthFade::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDepthFade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDepthFade.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'OpacityDefault' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'FadeDistanceDefault' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityDefault_MetaData[] = {
		{ "Category", "MaterialExpressionDepthFade" },
		{ "Comment", "/** Opacity which will be scaled by the result of the fade.  This is used when InOpacity is unconnected. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "OverridingInputProperty", "InOpacity" },
		{ "ToolTip", "Opacity which will be scaled by the result of the fade.  This is used when InOpacity is unconnected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeDistanceDefault_MetaData[] = {
		{ "Category", "MaterialExpressionDepthFade" },
		{ "Comment", "/** World space distance over which the fade should take place.  This is used when FadeDistance is unconnected. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "OverridingInputProperty", "FadeDistance" },
		{ "ToolTip", "World space distance over which the fade should take place.  This is used when FadeDistance is unconnected." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FadeDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityDefault;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDistanceDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDepthFade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDepthFade, InOpacity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOpacity_MetaData), NewProp_InOpacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance = { "FadeDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDepthFade, FadeDistance), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeDistance_MetaData), NewProp_FadeDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault = { "OpacityDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDepthFade, OpacityDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityDefault_MetaData), NewProp_OpacityDefault_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault = { "FadeDistanceDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDepthFade, FadeDistanceDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeDistanceDefault_MetaData), NewProp_FadeDistanceDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::ClassParams = {
	&UMaterialExpressionDepthFade::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDepthFade()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDepthFade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDepthFade.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDepthFade.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDepthFade>()
{
	return UMaterialExpressionDepthFade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDepthFade);
UMaterialExpressionDepthFade::~UMaterialExpressionDepthFade() {}
// End Class UMaterialExpressionDepthFade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthFade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDepthFade, UMaterialExpressionDepthFade::StaticClass, TEXT("UMaterialExpressionDepthFade"), &Z_Registration_Info_UClass_UMaterialExpressionDepthFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDepthFade), 1374786029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthFade_h_924327258(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthFade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
