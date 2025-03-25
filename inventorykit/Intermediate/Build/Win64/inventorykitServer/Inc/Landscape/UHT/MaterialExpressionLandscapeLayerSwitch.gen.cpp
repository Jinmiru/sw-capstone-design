// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class UMaterialExpressionLandscapeLayerSwitch
void UMaterialExpressionLandscapeLayerSwitch::StaticRegisterNativesUMaterialExpressionLandscapeLayerSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeLayerSwitch);
UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_NoRegister()
{
	return UMaterialExpressionLandscapeLayerSwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerUsed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerNotUsed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerSwitch" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewUsed_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerSwitch" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerUsed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerNotUsed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_PreviewUsed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreviewUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerUsed = { "LayerUsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSwitch, LayerUsed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerUsed_MetaData), NewProp_LayerUsed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerNotUsed = { "LayerNotUsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSwitch, LayerNotUsed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerNotUsed_MetaData), NewProp_LayerNotUsed_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSwitch, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
void Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed_SetBit(void* Obj)
{
	((UMaterialExpressionLandscapeLayerSwitch*)Obj)->PreviewUsed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed = { "PreviewUsed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionLandscapeLayerSwitch), &Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewUsed_MetaData), NewProp_PreviewUsed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerNotUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::ClassParams = {
	&UMaterialExpressionLandscapeLayerSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeLayerSwitch>()
{
	return UMaterialExpressionLandscapeLayerSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerSwitch);
UMaterialExpressionLandscapeLayerSwitch::~UMaterialExpressionLandscapeLayerSwitch() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionLandscapeLayerSwitch)
// End Class UMaterialExpressionLandscapeLayerSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch, UMaterialExpressionLandscapeLayerSwitch::StaticClass, TEXT("UMaterialExpressionLandscapeLayerSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeLayerSwitch), 3725975570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_1834688954(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
