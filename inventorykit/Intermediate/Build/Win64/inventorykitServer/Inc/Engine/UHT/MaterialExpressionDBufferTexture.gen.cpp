// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDBufferTexture.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDBufferTexture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDBufferTexture();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDBufferTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDBufferTextureId();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDBufferTextureId
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDBufferTextureId;
static UEnum* EDBufferTextureId_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDBufferTextureId.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDBufferTextureId.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDBufferTextureId, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDBufferTextureId"));
	}
	return Z_Registration_Info_UEnum_EDBufferTextureId.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDBufferTextureId>()
{
	return EDBufferTextureId_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDBufferTextureId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DBT_A.Comment", "/** DBuffer A (Base Color). RGB is pre-multiplied by alpha. A is one minus alpha. */" },
		{ "DBT_A.DisplayName", "DBufferA (BaseColor)" },
		{ "DBT_A.Name", "DBT_A" },
		{ "DBT_A.ToolTip", "DBuffer A (Base Color). RGB is pre-multiplied by alpha. A is one minus alpha." },
		{ "DBT_B.Comment", "/** DBuffer B (World Normal). RGB is pre-multiplied by alpha. A is one minus alpha. */" },
		{ "DBT_B.DisplayName", "DBufferB (WorldNormal)" },
		{ "DBT_B.Name", "DBT_B" },
		{ "DBT_B.ToolTip", "DBuffer B (World Normal). RGB is pre-multiplied by alpha. A is one minus alpha." },
		{ "DBT_C.Comment", "/** DBuffer C (Roughness). R is Roughness, G is Metallic, B is Specular,  all pre-multiplied by alpha. A is one minus alpha. */" },
		{ "DBT_C.DisplayName", "DBufferC (Roughness)" },
		{ "DBT_C.Name", "DBT_C" },
		{ "DBT_C.ToolTip", "DBuffer C (Roughness). R is Roughness, G is Metallic, B is Specular,  all pre-multiplied by alpha. A is one minus alpha." },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDBufferTexture.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DBT_A", (int64)DBT_A },
		{ "DBT_B", (int64)DBT_B },
		{ "DBT_C", (int64)DBT_C },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDBufferTextureId",
	"EDBufferTextureId",
	Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDBufferTextureId()
{
	if (!Z_Registration_Info_UEnum_EDBufferTextureId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDBufferTextureId.InnerSingleton, Z_Construct_UEnum_Engine_EDBufferTextureId_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDBufferTextureId.InnerSingleton;
}
// End Enum EDBufferTextureId

// Begin Class UMaterialExpressionDBufferTexture
void UMaterialExpressionDBufferTexture::StaticRegisterNativesUMaterialExpressionDBufferTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDBufferTexture);
UClass* Z_Construct_UClass_UMaterialExpressionDBufferTexture_NoRegister()
{
	return UMaterialExpressionDBufferTexture::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDBufferTexture.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDBufferTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDBufferTexture.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DBufferTextureId_MetaData[] = {
		{ "Category", "UMaterialExpressionDBufferTexture" },
		{ "Comment", "/** Which DBuffer texture we want to make a lookup into. */" },
		{ "DisplayName", "DBuffer Texture" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDBufferTexture.h" },
		{ "ToolTip", "Which DBuffer texture we want to make a lookup into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DBufferTextureId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDBufferTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDBufferTexture, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_DBufferTextureId = { "DBufferTextureId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDBufferTexture, DBufferTextureId), Z_Construct_UEnum_Engine_EDBufferTextureId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DBufferTextureId_MetaData), NewProp_DBufferTextureId_MetaData) }; // 436039591
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::NewProp_DBufferTextureId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::ClassParams = {
	&UMaterialExpressionDBufferTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDBufferTexture()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDBufferTexture>()
{
	return UMaterialExpressionDBufferTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDBufferTexture);
UMaterialExpressionDBufferTexture::~UMaterialExpressionDBufferTexture() {}
// End Class UMaterialExpressionDBufferTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDBufferTextureId_StaticEnum, TEXT("EDBufferTextureId"), &Z_Registration_Info_UEnum_EDBufferTextureId, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 436039591U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDBufferTexture, UMaterialExpressionDBufferTexture::StaticClass, TEXT("UMaterialExpressionDBufferTexture"), &Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDBufferTexture), 1189668111U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_3178043491(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDBufferTexture_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
