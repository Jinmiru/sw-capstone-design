// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/SourceControl/Public/SourceControlPreferences.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceControlPreferences() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
SOURCECONTROL_API UClass* Z_Construct_UClass_USourceControlPreferences();
SOURCECONTROL_API UClass* Z_Construct_UClass_USourceControlPreferences_NoRegister();
UPackage* Z_Construct_UPackage__Script_SourceControl();
// End Cross Module References

// Begin Class USourceControlPreferences
void USourceControlPreferences::StaticRegisterNativesUSourceControlPreferences()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceControlPreferences);
UClass* Z_Construct_UClass_USourceControlPreferences_NoRegister()
{
	return USourceControlPreferences::StaticClass();
}
struct Z_Construct_UClass_USourceControlPreferences_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Source Control Integration */" },
		{ "DisplayName", "Revision Control" },
		{ "IncludePath", "SourceControlPreferences.h" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlPreferences.h" },
		{ "ToolTip", "Settings for the Source Control Integration" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableValidationTag_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "ModuleRelativePath", "Public/SourceControlPreferences.h" },
		{ "ToolTip", "Adds validation tag to changelist description on submit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDeleteNewFilesOnRevert_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "ModuleRelativePath", "Public/SourceControlPreferences.h" },
		{ "ToolTip", "Deletes new files when reverted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUncontrolledChangelists_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/SourceControlPreferences.h" },
		{ "ToolTip", "Enables Uncontrolled Changelists features. The editor must be restarted for the change to be fully taken into account." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionChangelistTags_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "Comment", "/** List of lines to add to any collection on checkin */" },
		{ "ModuleRelativePath", "Public/SourceControlPreferences.h" },
		{ "ToolTip", "List of lines to add to any collection on checkin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificCollectionChangelistTags_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "Comment", "/** Map of collection names and additional text to apply to changelist descriptions when checking them in */" },
		{ "ModuleRelativePath", "Public/SourceControlPreferences.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Map of collection names and additional text to apply to changelist descriptions when checking them in" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableValidationTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableValidationTag;
	static void NewProp_bShouldDeleteNewFilesOnRevert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDeleteNewFilesOnRevert;
	static void NewProp_bEnableUncontrolledChangelists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUncontrolledChangelists;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CollectionChangelistTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollectionChangelistTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpecificCollectionChangelistTags_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpecificCollectionChangelistTags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpecificCollectionChangelistTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceControlPreferences>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bEnableValidationTag_SetBit(void* Obj)
{
	((USourceControlPreferences*)Obj)->bEnableValidationTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bEnableValidationTag = { "bEnableValidationTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USourceControlPreferences), &Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bEnableValidationTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableValidationTag_MetaData), NewProp_bEnableValidationTag_MetaData) };
void Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bShouldDeleteNewFilesOnRevert_SetBit(void* Obj)
{
	((USourceControlPreferences*)Obj)->bShouldDeleteNewFilesOnRevert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bShouldDeleteNewFilesOnRevert = { "bShouldDeleteNewFilesOnRevert", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USourceControlPreferences), &Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bShouldDeleteNewFilesOnRevert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldDeleteNewFilesOnRevert_MetaData), NewProp_bShouldDeleteNewFilesOnRevert_MetaData) };
void Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bEnableUncontrolledChangelists_SetBit(void* Obj)
{
	((USourceControlPreferences*)Obj)->bEnableUncontrolledChangelists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bEnableUncontrolledChangelists = { "bEnableUncontrolledChangelists", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USourceControlPreferences), &Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bEnableUncontrolledChangelists_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUncontrolledChangelists_MetaData), NewProp_bEnableUncontrolledChangelists_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_CollectionChangelistTags_Inner = { "CollectionChangelistTags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_CollectionChangelistTags = { "CollectionChangelistTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceControlPreferences, CollectionChangelistTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionChangelistTags_MetaData), NewProp_CollectionChangelistTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_SpecificCollectionChangelistTags_ValueProp = { "SpecificCollectionChangelistTags", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_SpecificCollectionChangelistTags_Key_KeyProp = { "SpecificCollectionChangelistTags_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_SpecificCollectionChangelistTags = { "SpecificCollectionChangelistTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceControlPreferences, SpecificCollectionChangelistTags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificCollectionChangelistTags_MetaData), NewProp_SpecificCollectionChangelistTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceControlPreferences_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bEnableValidationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bShouldDeleteNewFilesOnRevert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bEnableUncontrolledChangelists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_CollectionChangelistTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_CollectionChangelistTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_SpecificCollectionChangelistTags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_SpecificCollectionChangelistTags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_SpecificCollectionChangelistTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlPreferences_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceControlPreferences_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_SourceControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlPreferences_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceControlPreferences_Statics::ClassParams = {
	&USourceControlPreferences::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USourceControlPreferences_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlPreferences_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlPreferences_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceControlPreferences_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceControlPreferences()
{
	if (!Z_Registration_Info_UClass_USourceControlPreferences.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceControlPreferences.OuterSingleton, Z_Construct_UClass_USourceControlPreferences_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceControlPreferences.OuterSingleton;
}
template<> SOURCECONTROL_API UClass* StaticClass<USourceControlPreferences>()
{
	return USourceControlPreferences::StaticClass();
}
USourceControlPreferences::USourceControlPreferences(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceControlPreferences);
USourceControlPreferences::~USourceControlPreferences() {}
// End Class USourceControlPreferences

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceControlPreferences, USourceControlPreferences::StaticClass, TEXT("USourceControlPreferences"), &Z_Registration_Info_UClass_USourceControlPreferences, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceControlPreferences), 4015086864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_3157932065(TEXT("/Script/SourceControl"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
