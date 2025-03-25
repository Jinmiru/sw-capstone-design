// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionBreakMaterialAttributes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBreakMaterialAttributes() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionBreakMaterialAttributes
void UMaterialExpressionBreakMaterialAttributes::StaticRegisterNativesUMaterialExpressionBreakMaterialAttributes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBreakMaterialAttributes);
UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_NoRegister()
{
	return UMaterialExpressionBreakMaterialAttributes::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionBreakMaterialAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBreakMaterialAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBreakMaterialAttributes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBreakMaterialAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBreakMaterialAttributes, MaterialAttributes), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAttributes_MetaData), NewProp_MaterialAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::NewProp_MaterialAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::ClassParams = {
	&UMaterialExpressionBreakMaterialAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBreakMaterialAttributes>()
{
	return UMaterialExpressionBreakMaterialAttributes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBreakMaterialAttributes);
UMaterialExpressionBreakMaterialAttributes::~UMaterialExpressionBreakMaterialAttributes() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionBreakMaterialAttributes)
// End Class UMaterialExpressionBreakMaterialAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBreakMaterialAttributes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes, UMaterialExpressionBreakMaterialAttributes::StaticClass, TEXT("UMaterialExpressionBreakMaterialAttributes"), &Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBreakMaterialAttributes), 837255442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBreakMaterialAttributes_h_1465884355(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBreakMaterialAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBreakMaterialAttributes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
