// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Tools/ControlRigPoseProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigPoseProjectSettings() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigPoseProjectSettings();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigPoseProjectSettings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class UControlRigPoseProjectSettings
void UControlRigPoseProjectSettings::StaticRegisterNativesUControlRigPoseProjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigPoseProjectSettings);
UClass* Z_Construct_UClass_UControlRigPoseProjectSettings_NoRegister()
{
	return UControlRigPoseProjectSettings::StaticClass();
}
struct Z_Construct_UClass_UControlRigPoseProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/ControlRigPoseProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPoseProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSaveDirs_MetaData[] = {
		{ "Category", "Control Rig Poses" },
		{ "Comment", "/** The root of the directory in which to save poses */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPoseProjectSettings.h" },
		{ "ToolTip", "The root of the directory in which to save poses" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootSaveDirs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RootSaveDirs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigPoseProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs_Inner = { "RootSaveDirs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs = { "RootSaveDirs", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigPoseProjectSettings, RootSaveDirs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSaveDirs_MetaData), NewProp_RootSaveDirs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::ClassParams = {
	&UControlRigPoseProjectSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigPoseProjectSettings()
{
	if (!Z_Registration_Info_UClass_UControlRigPoseProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigPoseProjectSettings.OuterSingleton, Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigPoseProjectSettings.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigPoseProjectSettings>()
{
	return UControlRigPoseProjectSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigPoseProjectSettings);
UControlRigPoseProjectSettings::~UControlRigPoseProjectSettings() {}
// End Class UControlRigPoseProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigPoseProjectSettings, UControlRigPoseProjectSettings::StaticClass, TEXT("UControlRigPoseProjectSettings"), &Z_Registration_Info_UClass_UControlRigPoseProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigPoseProjectSettings), 1559522791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_684577783(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
