// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionStaticBoolParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticBoolParameter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionStaticBoolParameter
void UMaterialExpressionStaticBoolParameter::StaticRegisterNativesUMaterialExpressionStaticBoolParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStaticBoolParameter);
UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister()
{
	return UMaterialExpressionStaticBoolParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStaticBoolParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBoolParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionStaticBoolParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBoolParameter.h" },
		{ "ShowAsInputPin", "Primary" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBranch_MetaData[] = {
		{ "Category", "MaterialExpressionStaticBoolParameter" },
		{ "Comment", "/**Change Parameter from \"static bool\" to (dynamic) bool type which enables it to be used with dynamic branching*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBoolParameter.h" },
		{ "ToolTip", "Change Parameter from \"static bool\" to (dynamic) bool type which enables it to be used with dynamic branching" },
	};
#endif // WITH_METADATA
	static void NewProp_DefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
	static void NewProp_DynamicBranch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DynamicBranch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStaticBoolParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue_SetBit(void* Obj)
{
	((UMaterialExpressionStaticBoolParameter*)Obj)->DefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionStaticBoolParameter), &Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch_SetBit(void* Obj)
{
	((UMaterialExpressionStaticBoolParameter*)Obj)->DynamicBranch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch = { "DynamicBranch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionStaticBoolParameter), &Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicBranch_MetaData), NewProp_DynamicBranch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::ClassParams = {
	&UMaterialExpressionStaticBoolParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStaticBoolParameter>()
{
	return UMaterialExpressionStaticBoolParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticBoolParameter);
UMaterialExpressionStaticBoolParameter::~UMaterialExpressionStaticBoolParameter() {}
// End Class UMaterialExpressionStaticBoolParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionStaticBoolParameter, UMaterialExpressionStaticBoolParameter::StaticClass, TEXT("UMaterialExpressionStaticBoolParameter"), &Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStaticBoolParameter), 1141720333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_1782646778(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
