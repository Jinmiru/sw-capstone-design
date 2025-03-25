// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDoubleVectorParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDoubleVectorParameter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4d();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDoubleVectorParameter
void UMaterialExpressionDoubleVectorParameter::StaticRegisterNativesUMaterialExpressionDoubleVectorParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDoubleVectorParameter);
UClass* Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_NoRegister()
{
	return UMaterialExpressionDoubleVectorParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDoubleVectorParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDoubleVectorParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDoubleVectorParameter.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDoubleVectorParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDoubleVectorParameter, DefaultValue), Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::ClassParams = {
	&UMaterialExpressionDoubleVectorParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDoubleVectorParameter>()
{
	return UMaterialExpressionDoubleVectorParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDoubleVectorParameter);
UMaterialExpressionDoubleVectorParameter::~UMaterialExpressionDoubleVectorParameter() {}
// End Class UMaterialExpressionDoubleVectorParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDoubleVectorParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter, UMaterialExpressionDoubleVectorParameter::StaticClass, TEXT("UMaterialExpressionDoubleVectorParameter"), &Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDoubleVectorParameter), 2733856467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDoubleVectorParameter_h_3385551988(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDoubleVectorParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDoubleVectorParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
