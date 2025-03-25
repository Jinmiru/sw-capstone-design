// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithPostProcessVolumeTemplate() {}

// Begin Cross Module References
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_NoRegister();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class UDatasmithPostProcessVolumeTemplate
void UDatasmithPostProcessVolumeTemplate::StaticRegisterNativesUDatasmithPostProcessVolumeTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithPostProcessVolumeTemplate);
UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_NoRegister()
{
	return UDatasmithPostProcessVolumeTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents an APostProcessVolume\n */" },
		{ "IncludePath", "ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
		{ "ToolTip", "Represents an APostProcessVolume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnbound_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bUnbound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnbound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithPostProcessVolumeTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithPostProcessVolumeTemplate, Settings), Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2507605793
void Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UDatasmithPostProcessVolumeTemplate*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDatasmithPostProcessVolumeTemplate), &Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_SetBit(void* Obj)
{
	((UDatasmithPostProcessVolumeTemplate*)Obj)->bUnbound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound = { "bUnbound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDatasmithPostProcessVolumeTemplate), &Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnbound_MetaData), NewProp_bUnbound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::ClassParams = {
	&UDatasmithPostProcessVolumeTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithPostProcessVolumeTemplate>()
{
	return UDatasmithPostProcessVolumeTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithPostProcessVolumeTemplate);
UDatasmithPostProcessVolumeTemplate::~UDatasmithPostProcessVolumeTemplate() {}
// End Class UDatasmithPostProcessVolumeTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate, UDatasmithPostProcessVolumeTemplate::StaticClass, TEXT("UDatasmithPostProcessVolumeTemplate"), &Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithPostProcessVolumeTemplate), 659681314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h_3083620208(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
