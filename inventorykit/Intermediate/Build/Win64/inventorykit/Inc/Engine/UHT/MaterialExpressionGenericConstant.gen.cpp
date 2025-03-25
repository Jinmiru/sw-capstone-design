// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionGenericConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGenericConstant() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstantDouble();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstantDouble_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGenericConstant();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGenericConstant_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionGenericConstant
void UMaterialExpressionGenericConstant::StaticRegisterNativesUMaterialExpressionGenericConstant()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionGenericConstant);
UClass* Z_Construct_UClass_UMaterialExpressionGenericConstant_NoRegister()
{
	return UMaterialExpressionGenericConstant::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionGenericConstant.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGenericConstant.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionGenericConstant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::ClassParams = {
	&UMaterialExpressionGenericConstant::StaticClass,
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
	0x000800B1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionGenericConstant()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.OuterSingleton, Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionGenericConstant>()
{
	return UMaterialExpressionGenericConstant::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionGenericConstant);
UMaterialExpressionGenericConstant::~UMaterialExpressionGenericConstant() {}
// End Class UMaterialExpressionGenericConstant

// Begin Class UMaterialExpressionConstantDouble
void UMaterialExpressionConstantDouble::StaticRegisterNativesUMaterialExpressionConstantDouble()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionConstantDouble);
UClass* Z_Construct_UClass_UMaterialExpressionConstantDouble_NoRegister()
{
	return UMaterialExpressionConstantDouble::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionGenericConstant.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGenericConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "MaterialExpressionConstant" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGenericConstant.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionConstantDouble>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionConstantDouble, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionGenericConstant,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::ClassParams = {
	&UMaterialExpressionConstantDouble::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionConstantDouble()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.OuterSingleton, Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionConstantDouble>()
{
	return UMaterialExpressionConstantDouble::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstantDouble);
UMaterialExpressionConstantDouble::~UMaterialExpressionConstantDouble() {}
// End Class UMaterialExpressionConstantDouble

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionGenericConstant, UMaterialExpressionGenericConstant::StaticClass, TEXT("UMaterialExpressionGenericConstant"), &Z_Registration_Info_UClass_UMaterialExpressionGenericConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionGenericConstant), 1462634886U) },
		{ Z_Construct_UClass_UMaterialExpressionConstantDouble, UMaterialExpressionConstantDouble::StaticClass, TEXT("UMaterialExpressionConstantDouble"), &Z_Registration_Info_UClass_UMaterialExpressionConstantDouble, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionConstantDouble), 2966831919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_3949147994(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
