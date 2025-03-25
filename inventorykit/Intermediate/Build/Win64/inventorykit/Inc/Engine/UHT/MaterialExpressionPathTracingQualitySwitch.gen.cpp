// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionPathTracingQualitySwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPathTracingQualitySwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionPathTracingQualitySwitch
void UMaterialExpressionPathTracingQualitySwitch::StaticRegisterNativesUMaterialExpressionPathTracingQualitySwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPathTracingQualitySwitch);
UClass* Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_NoRegister()
{
	return UMaterialExpressionPathTracingQualitySwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionPathTracingQualitySwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingQualitySwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Comment", "/** Used for non-path traced modes */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingQualitySwitch.h" },
		{ "ToolTip", "Used for non-path traced modes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTraced_MetaData[] = {
		{ "Comment", "/** Used by the path tracer */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingQualitySwitch.h" },
		{ "ToolTip", "Used by the path tracer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathTraced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPathTracingQualitySwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPathTracingQualitySwitch, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_PathTraced = { "PathTraced", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPathTracingQualitySwitch, PathTraced), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTraced_MetaData), NewProp_PathTraced_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_PathTraced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::ClassParams = {
	&UMaterialExpressionPathTracingQualitySwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPathTracingQualitySwitch>()
{
	return UMaterialExpressionPathTracingQualitySwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPathTracingQualitySwitch);
UMaterialExpressionPathTracingQualitySwitch::~UMaterialExpressionPathTracingQualitySwitch() {}
// End Class UMaterialExpressionPathTracingQualitySwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingQualitySwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch, UMaterialExpressionPathTracingQualitySwitch::StaticClass, TEXT("UMaterialExpressionPathTracingQualitySwitch"), &Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPathTracingQualitySwitch), 3371993822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingQualitySwitch_h_2016532466(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingQualitySwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingQualitySwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
