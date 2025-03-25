// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionRotateAboutAxis.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRotateAboutAxis() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionRotateAboutAxis
void UMaterialExpressionRotateAboutAxis::StaticRegisterNativesUMaterialExpressionRotateAboutAxis()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRotateAboutAxis);
UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister()
{
	return UMaterialExpressionRotateAboutAxis::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionRotateAboutAxis.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedRotationAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotPoint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "Category", "MaterialExpressionRotateAboutAxis" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedRotationAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRotateAboutAxis>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis = { "NormalizedRotationAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, NormalizedRotationAxis), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedRotationAxis_MetaData), NewProp_NormalizedRotationAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle = { "RotationAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, RotationAngle), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAngle_MetaData), NewProp_RotationAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, PivotPoint), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotPoint_MetaData), NewProp_PivotPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::ClassParams = {
	&UMaterialExpressionRotateAboutAxis::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRotateAboutAxis>()
{
	return UMaterialExpressionRotateAboutAxis::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRotateAboutAxis);
UMaterialExpressionRotateAboutAxis::~UMaterialExpressionRotateAboutAxis() {}
// End Class UMaterialExpressionRotateAboutAxis

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotateAboutAxis_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRotateAboutAxis, UMaterialExpressionRotateAboutAxis::StaticClass, TEXT("UMaterialExpressionRotateAboutAxis"), &Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRotateAboutAxis), 4122679936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotateAboutAxis_h_2330161933(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotateAboutAxis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotateAboutAxis_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
