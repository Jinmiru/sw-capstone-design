// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSphereMask.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSphereMask() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphereMask();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphereMask_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSphereMask
void UMaterialExpressionSphereMask::StaticRegisterNativesUMaterialExpressionSphereMask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSphereMask);
UClass* Z_Construct_UClass_UMaterialExpressionSphereMask_NoRegister()
{
	return UMaterialExpressionSphereMask::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSphereMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSphereMask.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Comment", "/** 1 to 4 dimensional vector, should be the same type as B */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "ToolTip", "1 to 4 dimensional vector, should be the same type as B" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Comment", "/** 1 to 4 dimensional vector, should be the same type as A */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "ToolTip", "1 to 4 dimensional vector, should be the same type as A" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'AttenuationRadius' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'HardnessPercent' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "MaterialExpressionSphereMask" },
		{ "Comment", "/** in the unit that A and B are measured */" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "OverridingInputProperty", "Radius" },
		{ "ToolTip", "in the unit that A and B are measured" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardnessPercent_MetaData[] = {
		{ "Category", "MaterialExpressionSphereMask" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** in percent 0%=soft .. 100%=hard */" },
		{ "DisplayName", "Hardness" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "OverridingInputProperty", "Hardness" },
		{ "ToolTip", "in percent 0%=soft .. 100%=hard" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hardness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HardnessPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSphereMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSphereMask, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSphereMask, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSphereMask, Radius), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness = { "Hardness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSphereMask, Hardness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardness_MetaData), NewProp_Hardness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSphereMask, AttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationRadius_MetaData), NewProp_AttenuationRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent = { "HardnessPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSphereMask, HardnessPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardnessPercent_MetaData), NewProp_HardnessPercent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::ClassParams = {
	&UMaterialExpressionSphereMask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSphereMask()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSphereMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSphereMask.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSphereMask.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSphereMask>()
{
	return UMaterialExpressionSphereMask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSphereMask);
UMaterialExpressionSphereMask::~UMaterialExpressionSphereMask() {}
// End Class UMaterialExpressionSphereMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphereMask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSphereMask, UMaterialExpressionSphereMask::StaticClass, TEXT("UMaterialExpressionSphereMask"), &Z_Registration_Info_UClass_UMaterialExpressionSphereMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSphereMask), 1350504373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphereMask_h_3633671188(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphereMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphereMask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
