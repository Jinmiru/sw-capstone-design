// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithCineCameraActorTemplate() {}

// Begin Cross Module References
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin ScriptStruct FDatasmithCameraLookatTrackingSettingsTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate;
class UScriptStruct* FDatasmithCameraLookatTrackingSettingsTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithCameraLookatTrackingSettingsTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithCameraLookatTrackingSettingsTemplate>()
{
	return FDatasmithCameraLookatTrackingSettingsTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLookAtTracking_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableLookAtTracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLookAtTracking;
	static void NewProp_bAllowRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRoll;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActorToTrack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithCameraLookatTrackingSettingsTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_SetBit(void* Obj)
{
	((FDatasmithCameraLookatTrackingSettingsTemplate*)Obj)->bEnableLookAtTracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking = { "bEnableLookAtTracking", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithCameraLookatTrackingSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLookAtTracking_MetaData), NewProp_bEnableLookAtTracking_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_SetBit(void* Obj)
{
	((FDatasmithCameraLookatTrackingSettingsTemplate*)Obj)->bAllowRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll = { "bAllowRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithCameraLookatTrackingSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRoll_MetaData), NewProp_bAllowRoll_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithCameraLookatTrackingSettingsTemplate, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToTrack_MetaData), NewProp_ActorToTrack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithCameraLookatTrackingSettingsTemplate",
	Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::PropPointers),
	sizeof(FDatasmithCameraLookatTrackingSettingsTemplate),
	alignof(FDatasmithCameraLookatTrackingSettingsTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.InnerSingleton;
}
// End ScriptStruct FDatasmithCameraLookatTrackingSettingsTemplate

// Begin Class UDatasmithCineCameraActorTemplate
void UDatasmithCineCameraActorTemplate::StaticRegisterNativesUDatasmithCineCameraActorTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCineCameraActorTemplate);
UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate_NoRegister()
{
	return UDatasmithCineCameraActorTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookatTrackingSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookatTrackingSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCineCameraActorTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings = { "LookatTrackingSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithCineCameraActorTemplate, LookatTrackingSettings), Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookatTrackingSettings_MetaData), NewProp_LookatTrackingSettings_MetaData) }; // 1554525920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::ClassParams = {
	&UDatasmithCineCameraActorTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCineCameraActorTemplate>()
{
	return UDatasmithCineCameraActorTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCineCameraActorTemplate);
UDatasmithCineCameraActorTemplate::~UDatasmithCineCameraActorTemplate() {}
// End Class UDatasmithCineCameraActorTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDatasmithCameraLookatTrackingSettingsTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewStructOps, TEXT("DatasmithCameraLookatTrackingSettingsTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithCameraLookatTrackingSettingsTemplate), 1554525920U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithCineCameraActorTemplate, UDatasmithCineCameraActorTemplate::StaticClass, TEXT("UDatasmithCineCameraActorTemplate"), &Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCineCameraActorTemplate), 4203285858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_925172914(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
