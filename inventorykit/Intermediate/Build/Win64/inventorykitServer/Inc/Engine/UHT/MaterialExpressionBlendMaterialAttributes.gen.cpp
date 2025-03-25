// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionBlendMaterialAttributes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBlendMaterialAttributes() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialAttributeBlend();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMaterialAttributeBlend
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialAttributeBlend;
static UEnum* EMaterialAttributeBlend_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialAttributeBlend.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialAttributeBlend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialAttributeBlend, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialAttributeBlend"));
	}
	return Z_Registration_Info_UEnum_EMaterialAttributeBlend.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialAttributeBlend::Type>()
{
	return EMaterialAttributeBlend_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blend.Name", "EMaterialAttributeBlend::Blend" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "UseA.Name", "EMaterialAttributeBlend::UseA" },
		{ "UseB.Name", "EMaterialAttributeBlend::UseB" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMaterialAttributeBlend::Blend", (int64)EMaterialAttributeBlend::Blend },
		{ "EMaterialAttributeBlend::UseA", (int64)EMaterialAttributeBlend::UseA },
		{ "EMaterialAttributeBlend::UseB", (int64)EMaterialAttributeBlend::UseB },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialAttributeBlend",
	"EMaterialAttributeBlend::Type",
	Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialAttributeBlend()
{
	if (!Z_Registration_Info_UEnum_EMaterialAttributeBlend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialAttributeBlend.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialAttributeBlend.InnerSingleton;
}
// End Enum EMaterialAttributeBlend

// Begin Class UMaterialExpressionBlendMaterialAttributes
void UMaterialExpressionBlendMaterialAttributes::StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBlendMaterialAttributes);
UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister()
{
	return UMaterialExpressionBlendMaterialAttributes::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelAttributeBlendType_MetaData[] = {
		{ "Category", "MaterialAttributes" },
		{ "Comment", "// Optionally skip blending attributes of this type.\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "ToolTip", "Optionally skip blending attributes of this type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexAttributeBlendType_MetaData[] = {
		{ "Category", "MaterialAttributes" },
		{ "Comment", "// Optionally skip blending attributes of this type.\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "ToolTip", "Optionally skip blending attributes of this type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PixelAttributeBlendType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VertexAttributeBlendType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBlendMaterialAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, A), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, B), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, Alpha), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType = { "PixelAttributeBlendType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, PixelAttributeBlendType), Z_Construct_UEnum_Engine_EMaterialAttributeBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelAttributeBlendType_MetaData), NewProp_PixelAttributeBlendType_MetaData) }; // 2222576862
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType = { "VertexAttributeBlendType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, VertexAttributeBlendType), Z_Construct_UEnum_Engine_EMaterialAttributeBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexAttributeBlendType_MetaData), NewProp_VertexAttributeBlendType_MetaData) }; // 2222576862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::ClassParams = {
	&UMaterialExpressionBlendMaterialAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBlendMaterialAttributes>()
{
	return UMaterialExpressionBlendMaterialAttributes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBlendMaterialAttributes);
UMaterialExpressionBlendMaterialAttributes::~UMaterialExpressionBlendMaterialAttributes() {}
// End Class UMaterialExpressionBlendMaterialAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialAttributeBlend_StaticEnum, TEXT("EMaterialAttributeBlend"), &Z_Registration_Info_UEnum_EMaterialAttributeBlend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2222576862U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes, UMaterialExpressionBlendMaterialAttributes::StaticClass, TEXT("UMaterialExpressionBlendMaterialAttributes"), &Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBlendMaterialAttributes), 2721240003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_149839898(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
