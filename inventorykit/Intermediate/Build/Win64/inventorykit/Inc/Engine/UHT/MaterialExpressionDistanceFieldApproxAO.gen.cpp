// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDistanceFieldApproxAO() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionOrigin();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDistanceFieldApproxAO
void UMaterialExpressionDistanceFieldApproxAO::StaticRegisterNativesUMaterialExpressionDistanceFieldApproxAO()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDistanceFieldApproxAO);
UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_NoRegister()
{
	return UMaterialExpressionDistanceFieldApproxAO::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionDistanceFieldApproxAO.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "MaterialExpressionDistanceFieldApproxAO" },
		{ "Comment", "/** Defines the reference space for the Position input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h" },
		{ "ToolTip", "Defines the reference space for the Position input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world normal if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h" },
		{ "RequiredInput", "false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDistanceDefault_MetaData[] = {
		{ "Category", "MaterialExpressionDistanceFieldApproxAO" },
		{ "Comment", "/** only used if BaseDistance is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h" },
		{ "OverridingInputProperty", "BaseDistance" },
		{ "ToolTip", "only used if BaseDistance is not hooked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h" },
		{ "RequiredInput", "false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusDefault_MetaData[] = {
		{ "Category", "MaterialExpressionDistanceFieldApproxAO" },
		{ "Comment", "/** only used if Radius is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h" },
		{ "OverridingInputProperty", "Radius" },
		{ "ToolTip", "only used if Radius is not hooked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[] = {
		{ "Category", "MaterialExpressionDistanceFieldApproxAO" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h" },
		{ "ShowAsInputPin", "Primary" },
		{ "ToolTip", "Number of samples used to calculate occlusion" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepScaleDefault_MetaData[] = {
		{ "Category", "MaterialExpressionDistanceFieldApproxAO" },
		{ "DisplayName", "Step Scale" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldApproxAO.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Used to control step distance distribution" },
		{ "UIMax", "8.0" },
		{ "UIMin", "1.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDistanceDefault;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusDefault;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumSteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepScaleDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDistanceFieldApproxAO>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldApproxAO, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldApproxAO, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldApproxAO, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_BaseDistance = { "BaseDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldApproxAO, BaseDistance), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDistance_MetaData), NewProp_BaseDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_BaseDistanceDefault = { "BaseDistanceDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldApproxAO, BaseDistanceDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDistanceDefault_MetaData), NewProp_BaseDistanceDefault_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldApproxAO, Radius), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_RadiusDefault = { "RadiusDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldApproxAO, RadiusDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusDefault_MetaData), NewProp_RadiusDefault_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldApproxAO, NumSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSteps_MetaData), NewProp_NumSteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_StepScaleDefault = { "StepScaleDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldApproxAO, StepScaleDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepScaleDefault_MetaData), NewProp_StepScaleDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_WorldPositionOriginType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_BaseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_BaseDistanceDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_RadiusDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_NumSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::NewProp_StepScaleDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::ClassParams = {
	&UMaterialExpressionDistanceFieldApproxAO::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldApproxAO.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldApproxAO.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldApproxAO.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDistanceFieldApproxAO>()
{
	return UMaterialExpressionDistanceFieldApproxAO::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDistanceFieldApproxAO);
UMaterialExpressionDistanceFieldApproxAO::~UMaterialExpressionDistanceFieldApproxAO() {}
// End Class UMaterialExpressionDistanceFieldApproxAO

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldApproxAO_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDistanceFieldApproxAO, UMaterialExpressionDistanceFieldApproxAO::StaticClass, TEXT("UMaterialExpressionDistanceFieldApproxAO"), &Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldApproxAO, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDistanceFieldApproxAO), 3657580427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldApproxAO_h_1700101798(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldApproxAO_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldApproxAO_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
