// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionGetMaterialAttributes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGetMaterialAttributes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionGetMaterialAttributes
void UMaterialExpressionGetMaterialAttributes::StaticRegisterNativesUMaterialExpressionGetMaterialAttributes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionGetMaterialAttributes);
UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister()
{
	return UMaterialExpressionGetMaterialAttributes::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionGetMaterialAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeGetTypes_MetaData[] = {
		{ "Category", "MaterialAttributes" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeGetTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeGetTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionGetMaterialAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionGetMaterialAttributes, MaterialAttributes), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAttributes_MetaData), NewProp_MaterialAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_Inner = { "AttributeGetTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes = { "AttributeGetTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionGetMaterialAttributes, AttributeGetTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeGetTypes_MetaData), NewProp_AttributeGetTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::ClassParams = {
	&UMaterialExpressionGetMaterialAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.OuterSingleton, Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionGetMaterialAttributes>()
{
	return UMaterialExpressionGetMaterialAttributes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionGetMaterialAttributes);
UMaterialExpressionGetMaterialAttributes::~UMaterialExpressionGetMaterialAttributes() {}
// End Class UMaterialExpressionGetMaterialAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetMaterialAttributes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes, UMaterialExpressionGetMaterialAttributes::StaticClass, TEXT("UMaterialExpressionGetMaterialAttributes"), &Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionGetMaterialAttributes), 3843694340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetMaterialAttributes_h_2999841542(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetMaterialAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetMaterialAttributes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
