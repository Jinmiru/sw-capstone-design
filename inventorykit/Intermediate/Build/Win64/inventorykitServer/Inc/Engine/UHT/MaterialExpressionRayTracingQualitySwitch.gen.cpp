// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionRayTracingQualitySwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRayTracingQualitySwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionRayTracingQualitySwitch
void UMaterialExpressionRayTracingQualitySwitch::StaticRegisterNativesUMaterialExpressionRayTracingQualitySwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRayTracingQualitySwitch);
UClass* Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_NoRegister()
{
	return UMaterialExpressionRayTracingQualitySwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionRayTracingQualitySwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRayTracingQualitySwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Comment", "/** Used for standard rasterization */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRayTracingQualitySwitch.h" },
		{ "ToolTip", "Used for standard rasterization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTraced_MetaData[] = {
		{ "Comment", "/** Used for simplified ray trace eval */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRayTracingQualitySwitch.h" },
		{ "ToolTip", "Used for simplified ray trace eval" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayTraced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRayTracingQualitySwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRayTracingQualitySwitch, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_RayTraced = { "RayTraced", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRayTracingQualitySwitch, RayTraced), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTraced_MetaData), NewProp_RayTraced_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_RayTraced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::ClassParams = {
	&UMaterialExpressionRayTracingQualitySwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRayTracingQualitySwitch>()
{
	return UMaterialExpressionRayTracingQualitySwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRayTracingQualitySwitch);
UMaterialExpressionRayTracingQualitySwitch::~UMaterialExpressionRayTracingQualitySwitch() {}
// End Class UMaterialExpressionRayTracingQualitySwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRayTracingQualitySwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch, UMaterialExpressionRayTracingQualitySwitch::StaticClass, TEXT("UMaterialExpressionRayTracingQualitySwitch"), &Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRayTracingQualitySwitch), 1220831398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRayTracingQualitySwitch_h_2047326218(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRayTracingQualitySwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRayTracingQualitySwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
