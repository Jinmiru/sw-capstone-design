// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionStep.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStep() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStep();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStep_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionStep
void UMaterialExpressionStep::StaticRegisterNativesUMaterialExpressionStep()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStep);
UClass* Z_Construct_UClass_UMaterialExpressionStep_NoRegister()
{
	return UMaterialExpressionStep::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionStep.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstY' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstX' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstY_MetaData[] = {
		{ "Category", "MaterialExpressionStep" },
		{ "Comment", "/** only used if Y is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "OverridingInputProperty", "Y" },
		{ "ToolTip", "only used if Y is not hooked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstX_MetaData[] = {
		{ "Category", "MaterialExpressionStep" },
		{ "Comment", "/** only used if X is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "OverridingInputProperty", "X" },
		{ "ToolTip", "only used if X is not hooked up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStep>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionStep, Y), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionStep, X), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY = { "ConstY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionStep, ConstY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstY_MetaData), NewProp_ConstY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX = { "ConstX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionStep, ConstX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstX_MetaData), NewProp_ConstX_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionStep_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStep_Statics::ClassParams = {
	&UMaterialExpressionStep::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionStep_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionStep_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionStep()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionStep.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStep.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStep_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionStep.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStep>()
{
	return UMaterialExpressionStep::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStep);
UMaterialExpressionStep::~UMaterialExpressionStep() {}
// End Class UMaterialExpressionStep

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionStep, UMaterialExpressionStep::StaticClass, TEXT("UMaterialExpressionStep"), &Z_Registration_Info_UClass_UMaterialExpressionStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStep), 3430769637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_1283162752(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
