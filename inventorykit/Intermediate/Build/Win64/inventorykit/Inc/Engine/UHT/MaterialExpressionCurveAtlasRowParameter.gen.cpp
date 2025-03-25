// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCurveAtlasRowParameter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionCurveAtlasRowParameter
void UMaterialExpressionCurveAtlasRowParameter::StaticRegisterNativesUMaterialExpressionCurveAtlasRowParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCurveAtlasRowParameter);
UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_NoRegister()
{
	return UMaterialExpressionCurveAtlasRowParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object MaterialExpressionScalarParameter Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCurveAtlasRowParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "MaterialExpressionCurveAtlasRowParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Atlas_MetaData[] = {
		{ "Category", "MaterialExpressionCurveAtlasRowParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Atlas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCurveAtlasRowParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCurveAtlasRowParameter, Curve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCurveAtlasRowParameter, Atlas), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Atlas_MetaData), NewProp_Atlas_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime = { "InputTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCurveAtlasRowParameter, InputTime), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTime_MetaData), NewProp_InputTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionScalarParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::ClassParams = {
	&UMaterialExpressionCurveAtlasRowParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCurveAtlasRowParameter>()
{
	return UMaterialExpressionCurveAtlasRowParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCurveAtlasRowParameter);
UMaterialExpressionCurveAtlasRowParameter::~UMaterialExpressionCurveAtlasRowParameter() {}
// End Class UMaterialExpressionCurveAtlasRowParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCurveAtlasRowParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter, UMaterialExpressionCurveAtlasRowParameter::StaticClass, TEXT("UMaterialExpressionCurveAtlasRowParameter"), &Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCurveAtlasRowParameter), 2323468788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCurveAtlasRowParameter_h_1321300134(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCurveAtlasRowParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCurveAtlasRowParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
