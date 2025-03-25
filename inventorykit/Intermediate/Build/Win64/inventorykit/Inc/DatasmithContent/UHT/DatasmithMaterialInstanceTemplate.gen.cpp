// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithMaterialInstanceTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithMaterialInstanceTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin ScriptStruct FDatasmithStaticParameterSetTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithStaticParameterSetTemplate;
class UScriptStruct* FDatasmithStaticParameterSetTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithStaticParameterSetTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithStaticParameterSetTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithStaticParameterSetTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithStaticParameterSetTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithStaticParameterSetTemplate>()
{
	return FDatasmithStaticParameterSetTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StaticSwitchParameters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StaticSwitchParameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StaticSwitchParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithStaticParameterSetTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_ValueProp = { "StaticSwitchParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_Key_KeyProp = { "StaticSwitchParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters = { "StaticSwitchParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithStaticParameterSetTemplate, StaticSwitchParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticSwitchParameters_MetaData), NewProp_StaticSwitchParameters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithStaticParameterSetTemplate",
	Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::PropPointers),
	sizeof(FDatasmithStaticParameterSetTemplate),
	alignof(FDatasmithStaticParameterSetTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithStaticParameterSetTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithStaticParameterSetTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithStaticParameterSetTemplate.InnerSingleton;
}
// End ScriptStruct FDatasmithStaticParameterSetTemplate

// Begin Class UDatasmithMaterialInstanceTemplate
void UDatasmithMaterialInstanceTemplate::StaticRegisterNativesUDatasmithMaterialInstanceTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithMaterialInstanceTemplate);
UClass* Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_NoRegister()
{
	return UDatasmithMaterialInstanceTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Applies material instance data to a material instance if it hasn't changed since the last time we've applied a template.\n * Supports Scalar parameters, Vector parameters, Texture parameters and Static parameters\n */" },
		{ "IncludePath", "ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
		{ "ToolTip", "Applies material instance data to a material instance if it hasn't changed since the last time we've applied a template.\nSupports Scalar parameters, Vector parameters, Texture parameters and Static parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameterValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ParentMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarParameterValues_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScalarParameterValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ScalarParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameterValues_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VectorParameterValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VectorParameterValues;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TextureParameterValues_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParameterValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TextureParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMaterialInstanceTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithMaterialInstanceTemplate, ParentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentMaterial_MetaData), NewProp_ParentMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_ValueProp = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_Key_KeyProp = { "ScalarParameterValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithMaterialInstanceTemplate, ScalarParameterValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarParameterValues_MetaData), NewProp_ScalarParameterValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_ValueProp = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_Key_KeyProp = { "VectorParameterValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithMaterialInstanceTemplate, VectorParameterValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorParameterValues_MetaData), NewProp_VectorParameterValues_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_ValueProp = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_Key_KeyProp = { "TextureParameterValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithMaterialInstanceTemplate, TextureParameterValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureParameterValues_MetaData), NewProp_TextureParameterValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_StaticParameters = { "StaticParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithMaterialInstanceTemplate, StaticParameters), Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticParameters_MetaData), NewProp_StaticParameters_MetaData) }; // 3075939659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ParentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_StaticParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::ClassParams = {
	&UDatasmithMaterialInstanceTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithMaterialInstanceTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithMaterialInstanceTemplate>()
{
	return UDatasmithMaterialInstanceTemplate::StaticClass();
}
UDatasmithMaterialInstanceTemplate::UDatasmithMaterialInstanceTemplate() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMaterialInstanceTemplate);
UDatasmithMaterialInstanceTemplate::~UDatasmithMaterialInstanceTemplate() {}
// End Class UDatasmithMaterialInstanceTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithMaterialInstanceTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDatasmithStaticParameterSetTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewStructOps, TEXT("DatasmithStaticParameterSetTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithStaticParameterSetTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithStaticParameterSetTemplate), 3075939659U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithMaterialInstanceTemplate, UDatasmithMaterialInstanceTemplate::StaticClass, TEXT("UDatasmithMaterialInstanceTemplate"), &Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithMaterialInstanceTemplate), 1614037984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithMaterialInstanceTemplate_h_1337926219(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithMaterialInstanceTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithMaterialInstanceTemplate_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithMaterialInstanceTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithMaterialInstanceTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
