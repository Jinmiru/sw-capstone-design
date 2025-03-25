// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionStaticBool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticBool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBool();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBool_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionStaticBool
void UMaterialExpressionStaticBool::StaticRegisterNativesUMaterialExpressionStaticBool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStaticBool);
UClass* Z_Construct_UClass_UMaterialExpressionStaticBool_NoRegister()
{
	return UMaterialExpressionStaticBool::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionStaticBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStaticBool.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "MaterialExpressionStaticBool" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBool.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStaticBool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((UMaterialExpressionStaticBool*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionStaticBool), &Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::ClassParams = {
	&UMaterialExpressionStaticBool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionStaticBool()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionStaticBool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStaticBool.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionStaticBool.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStaticBool>()
{
	return UMaterialExpressionStaticBool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticBool);
UMaterialExpressionStaticBool::~UMaterialExpressionStaticBool() {}
// End Class UMaterialExpressionStaticBool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionStaticBool, UMaterialExpressionStaticBool::StaticClass, TEXT("UMaterialExpressionStaticBool"), &Z_Registration_Info_UClass_UMaterialExpressionStaticBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStaticBool), 3739060127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBool_h_773739675(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
