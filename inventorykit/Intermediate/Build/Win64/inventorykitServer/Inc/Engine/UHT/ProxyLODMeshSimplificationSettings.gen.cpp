// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ProxyLODMeshSimplificationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyLODMeshSimplificationSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings();
ENGINE_API UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UProxyLODMeshSimplificationSettings
void UProxyLODMeshSimplificationSettings::StaticRegisterNativesUProxyLODMeshSimplificationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProxyLODMeshSimplificationSettings);
UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings_NoRegister()
{
	return UProxyLODMeshSimplificationSettings::StaticClass();
}
struct Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Controls the system used to generate proxy LODs with merged meshes (i.e. the HLOD system).\n*/" },
		{ "DisplayName", "Hierarchical LOD Mesh Simplification" },
		{ "IncludePath", "Engine/ProxyLODMeshSimplificationSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/ProxyLODMeshSimplificationSettings.h" },
		{ "ToolTip", "Controls the system used to generate proxy LODs with merged meshes (i.e. the HLOD system)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyLODMeshReductionModuleName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Mesh reduction plugin to use when simplifying mesh geometry for Hierarchical LOD */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.ProxyLODMeshReductionModule" },
		{ "DisplayName", "Hierarchical LOD Mesh Reduction Plugin" },
		{ "ModuleRelativePath", "Classes/Engine/ProxyLODMeshSimplificationSettings.h" },
		{ "ToolTip", "Mesh reduction plugin to use when simplifying mesh geometry for Hierarchical LOD" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProxyLODMeshReductionModuleName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyLODMeshSimplificationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName = { "ProxyLODMeshReductionModuleName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyLODMeshSimplificationSettings, ProxyLODMeshReductionModuleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyLODMeshReductionModuleName_MetaData), NewProp_ProxyLODMeshReductionModuleName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::ClassParams = {
	&UProxyLODMeshSimplificationSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings()
{
	if (!Z_Registration_Info_UClass_UProxyLODMeshSimplificationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProxyLODMeshSimplificationSettings.OuterSingleton, Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProxyLODMeshSimplificationSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UProxyLODMeshSimplificationSettings>()
{
	return UProxyLODMeshSimplificationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyLODMeshSimplificationSettings);
UProxyLODMeshSimplificationSettings::~UProxyLODMeshSimplificationSettings() {}
// End Class UProxyLODMeshSimplificationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProxyLODMeshSimplificationSettings, UProxyLODMeshSimplificationSettings::StaticClass, TEXT("UProxyLODMeshSimplificationSettings"), &Z_Registration_Info_UClass_UProxyLODMeshSimplificationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProxyLODMeshSimplificationSettings), 699092548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_221128476(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
