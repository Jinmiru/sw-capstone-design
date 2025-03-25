// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosSolverSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolverSettings() {}

// Begin Cross Module References
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverSettings();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverSettings_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References

// Begin Class UChaosSolverSettings
void UChaosSolverSettings::StaticRegisterNativesUChaosSolverSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosSolverSettings);
UClass* Z_Construct_UClass_UChaosSolverSettings_NoRegister()
{
	return UChaosSolverSettings::StaticClass();
}
struct Z_Construct_UClass_UChaosSolverSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Settings class for the Chaos Solver\n */" },
		{ "DisplayName", "Chaos Solver" },
		{ "IncludePath", "Chaos/ChaosSolverSettings.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverSettings.h" },
		{ "ToolTip", "Settings class for the Chaos Solver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChaosSolverActorClass_MetaData[] = {
		{ "Category", "GameInstance" },
		{ "Comment", "/** The class to use when auto-creating a default chaos solver actor */" },
		{ "MetaClass", "/Script/ChaosSolverEngine.ChaosSolverActor" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverSettings.h" },
		{ "ToolTip", "The class to use when auto-creating a default chaos solver actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultChaosSolverActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosSolverSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosSolverSettings_Statics::NewProp_DefaultChaosSolverActorClass = { "DefaultChaosSolverActorClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosSolverSettings, DefaultChaosSolverActorClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChaosSolverActorClass_MetaData), NewProp_DefaultChaosSolverActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosSolverSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosSolverSettings_Statics::NewProp_DefaultChaosSolverActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChaosSolverSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosSolverSettings_Statics::ClassParams = {
	&UChaosSolverSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChaosSolverSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosSolverSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosSolverSettings()
{
	if (!Z_Registration_Info_UClass_UChaosSolverSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosSolverSettings.OuterSingleton, Z_Construct_UClass_UChaosSolverSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosSolverSettings.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosSolverSettings>()
{
	return UChaosSolverSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosSolverSettings);
UChaosSolverSettings::~UChaosSolverSettings() {}
// End Class UChaosSolverSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosSolverSettings, UChaosSolverSettings::StaticClass, TEXT("UChaosSolverSettings"), &Z_Registration_Info_UClass_UChaosSolverSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosSolverSettings), 438288468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h_3225777951(TEXT("/Script/ChaosSolverEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
