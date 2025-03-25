// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackAttenuation() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FForceFeedbackAttenuationSettings
static_assert(std::is_polymorphic<FForceFeedbackAttenuationSettings>() == std::is_polymorphic<FBaseAttenuationSettings>(), "USTRUCT FForceFeedbackAttenuationSettings cannot be polymorphic unless super FBaseAttenuationSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings;
class UScriptStruct* FForceFeedbackAttenuationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackAttenuationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackAttenuationSettings>()
{
	return FForceFeedbackAttenuationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The struct for defining the properties used when determining attenuation for a force feedback effect */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
		{ "ToolTip", "The struct for defining the properties used when determining attenuation for a force feedback effect" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackAttenuationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FBaseAttenuationSettings,
	&NewStructOps,
	"ForceFeedbackAttenuationSettings",
	nullptr,
	0,
	sizeof(FForceFeedbackAttenuationSettings),
	alignof(FForceFeedbackAttenuationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.InnerSingleton, Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.InnerSingleton;
}
// End ScriptStruct FForceFeedbackAttenuationSettings

// Begin Class UForceFeedbackAttenuation
void UForceFeedbackAttenuation::StaticRegisterNativesUForceFeedbackAttenuation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UForceFeedbackAttenuation);
UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister()
{
	return UForceFeedbackAttenuation::StaticClass();
}
struct Z_Construct_UClass_UForceFeedbackAttenuation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Wrapper class that can be created as an asset for force feedback attenuation properties which allows reuse\n * of the properties for multiple attenuation components\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GameFramework/ForceFeedbackAttenuation.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
		{ "ToolTip", "Wrapper class that can be created as an asset for force feedback attenuation properties which allows reuse\nof the properties for multiple attenuation components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attenuation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackAttenuation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UForceFeedbackAttenuation, Attenuation), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attenuation_MetaData), NewProp_Attenuation_MetaData) }; // 4113465214
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForceFeedbackAttenuation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UForceFeedbackAttenuation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackAttenuation_Statics::ClassParams = {
	&UForceFeedbackAttenuation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UForceFeedbackAttenuation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::Class_MetaDataParams), Z_Construct_UClass_UForceFeedbackAttenuation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UForceFeedbackAttenuation()
{
	if (!Z_Registration_Info_UClass_UForceFeedbackAttenuation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UForceFeedbackAttenuation.OuterSingleton, Z_Construct_UClass_UForceFeedbackAttenuation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UForceFeedbackAttenuation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UForceFeedbackAttenuation>()
{
	return UForceFeedbackAttenuation::StaticClass();
}
UForceFeedbackAttenuation::UForceFeedbackAttenuation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackAttenuation);
UForceFeedbackAttenuation::~UForceFeedbackAttenuation() {}
// End Class UForceFeedbackAttenuation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FForceFeedbackAttenuationSettings::StaticStruct, Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::NewStructOps, TEXT("ForceFeedbackAttenuationSettings"), &Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForceFeedbackAttenuationSettings), 4113465214U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UForceFeedbackAttenuation, UForceFeedbackAttenuation::StaticClass, TEXT("UForceFeedbackAttenuation"), &Z_Registration_Info_UClass_UForceFeedbackAttenuation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UForceFeedbackAttenuation), 3347026239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_1922427057(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
