// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionBumpOffset.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBumpOffset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionBumpOffset
void UMaterialExpressionBumpOffset::StaticRegisterNativesUMaterialExpressionBumpOffset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBumpOffset);
UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset_NoRegister()
{
	return UMaterialExpressionBumpOffset::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionBumpOffset.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightRatioInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "RequiredInput", "false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightRatio_MetaData[] = {
		{ "Category", "MaterialExpressionBumpOffset" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "OverridingInputProperty", "HeightRatioInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePlane_MetaData[] = {
		{ "Category", "MaterialExpressionBumpOffset" },
		{ "Comment", "// Perceived height as a fraction of width.\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "ToolTip", "Perceived height as a fraction of width." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionBumpOffset" },
		{ "Comment", "/** only used if Coordinate is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "OverridingInputProperty", "Coordinate" },
		{ "ToolTip", "only used if Coordinate is not hooked up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightRatioInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReferencePlane;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBumpOffset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinate_MetaData), NewProp_Coordinate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, Height), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput = { "HeightRatioInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, HeightRatioInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightRatioInput_MetaData), NewProp_HeightRatioInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio = { "HeightRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, HeightRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightRatio_MetaData), NewProp_HeightRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane = { "ReferencePlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, ReferencePlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePlane_MetaData), NewProp_ReferencePlane_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, ConstCoordinate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstCoordinate_MetaData), NewProp_ConstCoordinate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::ClassParams = {
	&UMaterialExpressionBumpOffset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBumpOffset>()
{
	return UMaterialExpressionBumpOffset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBumpOffset);
UMaterialExpressionBumpOffset::~UMaterialExpressionBumpOffset() {}
// End Class UMaterialExpressionBumpOffset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBumpOffset, UMaterialExpressionBumpOffset::StaticClass, TEXT("UMaterialExpressionBumpOffset"), &Z_Registration_Info_UClass_UMaterialExpressionBumpOffset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBumpOffset), 4042685756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_1585792945(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
