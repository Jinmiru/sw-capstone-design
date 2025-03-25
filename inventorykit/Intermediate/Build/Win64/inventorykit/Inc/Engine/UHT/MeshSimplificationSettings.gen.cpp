// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/MeshSimplificationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSimplificationSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UMeshSimplificationSettings();
ENGINE_API UClass* Z_Construct_UClass_UMeshSimplificationSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMeshSimplificationSettings
void UMeshSimplificationSettings::StaticRegisterNativesUMeshSimplificationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSimplificationSettings);
UClass* Z_Construct_UClass_UMeshSimplificationSettings_NoRegister()
{
	return UMeshSimplificationSettings::StaticClass();
}
struct Z_Construct_UClass_UMeshSimplificationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Simplification" },
		{ "IncludePath", "Engine/MeshSimplificationSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/MeshSimplificationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshReductionModuleName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Mesh reduction plugin to use when simplifying mesh geometry */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MeshReductionModule" },
		{ "DisplayName", "Mesh Reduction Plugin" },
		{ "ModuleRelativePath", "Classes/Engine/MeshSimplificationSettings.h" },
		{ "ToolTip", "Mesh reduction plugin to use when simplifying mesh geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshReductionBackwardCompatible_MetaData[] = {
		{ "Category", "General" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Mesh Reduction Backward Compatible" },
		{ "ModuleRelativePath", "Classes/Engine/MeshSimplificationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MeshReductionModuleName;
	static void NewProp_bMeshReductionBackwardCompatible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshReductionBackwardCompatible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSimplificationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName = { "MeshReductionModuleName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSimplificationSettings, MeshReductionModuleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshReductionModuleName_MetaData), NewProp_MeshReductionModuleName_MetaData) };
void Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible_SetBit(void* Obj)
{
	((UMeshSimplificationSettings*)Obj)->bMeshReductionBackwardCompatible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible = { "bMeshReductionBackwardCompatible", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshSimplificationSettings), &Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshReductionBackwardCompatible_MetaData), NewProp_bMeshReductionBackwardCompatible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSimplificationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshSimplificationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSimplificationSettings_Statics::ClassParams = {
	&UMeshSimplificationSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshSimplificationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSimplificationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSimplificationSettings()
{
	if (!Z_Registration_Info_UClass_UMeshSimplificationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSimplificationSettings.OuterSingleton, Z_Construct_UClass_UMeshSimplificationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSimplificationSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMeshSimplificationSettings>()
{
	return UMeshSimplificationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSimplificationSettings);
UMeshSimplificationSettings::~UMeshSimplificationSettings() {}
// End Class UMeshSimplificationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshSimplificationSettings, UMeshSimplificationSettings::StaticClass, TEXT("UMeshSimplificationSettings"), &Z_Registration_Info_UClass_UMeshSimplificationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSimplificationSettings), 3172371663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_2257999739(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
