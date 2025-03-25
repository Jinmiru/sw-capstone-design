// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionGetLocal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGetLocal() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetLocal();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetLocal_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionGetLocal
void UMaterialExpressionGetLocal::StaticRegisterNativesUMaterialExpressionGetLocal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionGetLocal);
UClass* Z_Construct_UClass_UMaterialExpressionGetLocal_NoRegister()
{
	return UMaterialExpressionGetLocal::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionGetLocal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionGetLocal.h" },
		{ "MaterialControlFlow", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalName_MetaData[] = {
		{ "Category", "MaterialLocals" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LocalName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionGetLocal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::NewProp_LocalName = { "LocalName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionGetLocal, LocalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalName_MetaData), NewProp_LocalName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::NewProp_LocalName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::ClassParams = {
	&UMaterialExpressionGetLocal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionGetLocal()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionGetLocal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionGetLocal.OuterSingleton, Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionGetLocal.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionGetLocal>()
{
	return UMaterialExpressionGetLocal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionGetLocal);
UMaterialExpressionGetLocal::~UMaterialExpressionGetLocal() {}
// End Class UMaterialExpressionGetLocal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetLocal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionGetLocal, UMaterialExpressionGetLocal::StaticClass, TEXT("UMaterialExpressionGetLocal"), &Z_Registration_Info_UClass_UMaterialExpressionGetLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionGetLocal), 1220438319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetLocal_h_2871276365(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetLocal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetLocal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
