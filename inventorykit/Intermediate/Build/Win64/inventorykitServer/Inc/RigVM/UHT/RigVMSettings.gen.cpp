// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
RIGVM_API UClass* Z_Construct_UClass_URigVMEditorSettings();
RIGVM_API UClass* Z_Construct_UClass_URigVMEditorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Class URigVMEditorSettings
void URigVMEditorSettings::StaticRegisterNativesURigVMEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEditorSettings);
UClass* Z_Construct_UClass_URigVMEditorSettings_NoRegister()
{
	return URigVMEditorSettings::StaticClass();
}
struct Z_Construct_UClass_URigVMEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Customize RigVM Rig Editor.\n */" },
		{ "DisplayName", "RigVM Editor" },
		{ "IncludePath", "RigVMSettings.h" },
		{ "ModuleRelativePath", "Public/RigVMSettings.h" },
		{ "ToolTip", "Customize RigVM Rig Editor." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLinkMutableNodes_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked mutable nodes (nodes with an execute pin)\n// will be hooked up automatically.\n" },
		{ "ModuleRelativePath", "Public/RigVMSettings.h" },
		{ "ToolTip", "When this is checked mutable nodes (nodes with an execute pin)\nwill be hooked up automatically." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bAutoLinkMutableNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLinkMutableNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_SetBit(void* Obj)
{
	((URigVMEditorSettings*)Obj)->bAutoLinkMutableNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes = { "bAutoLinkMutableNodes", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigVMEditorSettings), &Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLinkMutableNodes_MetaData), NewProp_bAutoLinkMutableNodes_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_URigVMEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEditorSettings_Statics::ClassParams = {
	&URigVMEditorSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers), 0),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URigVMEditorSettings()
{
	if (!Z_Registration_Info_UClass_URigVMEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEditorSettings.OuterSingleton, Z_Construct_UClass_URigVMEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URigVMEditorSettings.OuterSingleton;
}
template<> RIGVM_API UClass* StaticClass<URigVMEditorSettings>()
{
	return URigVMEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEditorSettings);
URigVMEditorSettings::~URigVMEditorSettings() {}
// End Class URigVMEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEditorSettings, URigVMEditorSettings::StaticClass, TEXT("URigVMEditorSettings"), &Z_Registration_Info_UClass_URigVMEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEditorSettings), 633718432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_2587524776(TEXT("/Script/RigVM"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
