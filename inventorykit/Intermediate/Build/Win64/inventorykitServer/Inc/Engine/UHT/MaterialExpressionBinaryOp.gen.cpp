// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionBinaryOp.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBinaryOp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBinaryOp();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBinaryOp_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLess();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLess_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionBinaryOp
void UMaterialExpressionBinaryOp::StaticRegisterNativesUMaterialExpressionBinaryOp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBinaryOp);
UClass* Z_Construct_UClass_UMaterialExpressionBinaryOp_NoRegister()
{
	return UMaterialExpressionBinaryOp::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionBinaryOp.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBinaryOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBinaryOp.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstA' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBinaryOp.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstB' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstA_MetaData[] = {
		{ "Category", "MaterialExpressionAdd" },
		{ "Comment", "/** only used if A is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBinaryOp.h" },
		{ "OverridingInputProperty", "A" },
		{ "ToolTip", "only used if A is not hooked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstB_MetaData[] = {
		{ "Category", "MaterialExpressionAdd" },
		{ "Comment", "/** only used if B is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBinaryOp.h" },
		{ "OverridingInputProperty", "B" },
		{ "ToolTip", "only used if B is not hooked up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstA;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBinaryOp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBinaryOp, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBinaryOp, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::NewProp_ConstA = { "ConstA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBinaryOp, ConstA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstA_MetaData), NewProp_ConstA_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::NewProp_ConstB = { "ConstB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBinaryOp, ConstB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstB_MetaData), NewProp_ConstB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::NewProp_ConstA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::NewProp_ConstB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::ClassParams = {
	&UMaterialExpressionBinaryOp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::PropPointers),
	0,
	0x000800B1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionBinaryOp()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionBinaryOp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBinaryOp.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionBinaryOp.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBinaryOp>()
{
	return UMaterialExpressionBinaryOp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBinaryOp);
UMaterialExpressionBinaryOp::~UMaterialExpressionBinaryOp() {}
// End Class UMaterialExpressionBinaryOp

// Begin Class UMaterialExpressionLess
void UMaterialExpressionLess::StaticRegisterNativesUMaterialExpressionLess()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLess);
UClass* Z_Construct_UClass_UMaterialExpressionLess_NoRegister()
{
	return UMaterialExpressionLess::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionBinaryOp.h" },
		{ "MaterialNewHLSLGenerator", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBinaryOp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionLess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionBinaryOp,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLess_Statics::ClassParams = {
	&UMaterialExpressionLess::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLess_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLess()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLess.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLess.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionLess>()
{
	return UMaterialExpressionLess::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLess);
UMaterialExpressionLess::~UMaterialExpressionLess() {}
// End Class UMaterialExpressionLess

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBinaryOp, UMaterialExpressionBinaryOp::StaticClass, TEXT("UMaterialExpressionBinaryOp"), &Z_Registration_Info_UClass_UMaterialExpressionBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBinaryOp), 502432191U) },
		{ Z_Construct_UClass_UMaterialExpressionLess, UMaterialExpressionLess::StaticClass, TEXT("UMaterialExpressionLess"), &Z_Registration_Info_UClass_UMaterialExpressionLess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLess), 1119302924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_2528592167(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
