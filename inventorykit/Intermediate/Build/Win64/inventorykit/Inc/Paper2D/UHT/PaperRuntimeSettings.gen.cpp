// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperRuntimeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PAPER2D_API UClass* Z_Construct_UClass_UPaperRuntimeSettings();
PAPER2D_API UClass* Z_Construct_UClass_UPaperRuntimeSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin Class UPaperRuntimeSettings
void UPaperRuntimeSettings::StaticRegisterNativesUPaperRuntimeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperRuntimeSettings);
UClass* Z_Construct_UClass_UPaperRuntimeSettings_NoRegister()
{
	return UPaperRuntimeSettings::StaticClass();
}
struct Z_Construct_UClass_UPaperRuntimeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Paper2D plugin.\n */" },
		{ "IncludePath", "PaperRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the Paper2D plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSpriteAtlasGroups_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "// Enables experimental *incomplete and unsupported* texture atlas groups that sprites can be assigned to\n" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Enables experimental *incomplete and unsupported* texture atlas groups that sprites can be assigned to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTerrainSplineEditing_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "// Enables experimental *incomplete and unsupported* 2D terrain spline editing. Note: You need to restart the editor when enabling this setting for the change to fully take effect.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Enables experimental *incomplete and unsupported* 2D terrain spline editing. Note: You need to restart the editor when enabling this setting for the change to fully take effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResizeSpriteDataToMatchTextures_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Enables automatic resizing of various sprite data that is authored in texture space if the source texture gets resized (sockets, the pivot, render and collision geometry, etc...)\n" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Enables automatic resizing of various sprite data that is authored in texture space if the source texture gets resized (sockets, the pivot, render and collision geometry, etc...)" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSpriteAtlasGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSpriteAtlasGroups;
	static void NewProp_bEnableTerrainSplineEditing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTerrainSplineEditing;
	static void NewProp_bResizeSpriteDataToMatchTextures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResizeSpriteDataToMatchTextures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperRuntimeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_SetBit(void* Obj)
{
	((UPaperRuntimeSettings*)Obj)->bEnableSpriteAtlasGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups = { "bEnableSpriteAtlasGroups", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperRuntimeSettings), &Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSpriteAtlasGroups_MetaData), NewProp_bEnableSpriteAtlasGroups_MetaData) };
void Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_SetBit(void* Obj)
{
	((UPaperRuntimeSettings*)Obj)->bEnableTerrainSplineEditing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing = { "bEnableTerrainSplineEditing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperRuntimeSettings), &Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTerrainSplineEditing_MetaData), NewProp_bEnableTerrainSplineEditing_MetaData) };
void Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_SetBit(void* Obj)
{
	((UPaperRuntimeSettings*)Obj)->bResizeSpriteDataToMatchTextures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures = { "bResizeSpriteDataToMatchTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperRuntimeSettings), &Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResizeSpriteDataToMatchTextures_MetaData), NewProp_bResizeSpriteDataToMatchTextures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperRuntimeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperRuntimeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::ClassParams = {
	&UPaperRuntimeSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperRuntimeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperRuntimeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperRuntimeSettings()
{
	if (!Z_Registration_Info_UClass_UPaperRuntimeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperRuntimeSettings.OuterSingleton, Z_Construct_UClass_UPaperRuntimeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperRuntimeSettings.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperRuntimeSettings>()
{
	return UPaperRuntimeSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperRuntimeSettings);
UPaperRuntimeSettings::~UPaperRuntimeSettings() {}
// End Class UPaperRuntimeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperRuntimeSettings, UPaperRuntimeSettings::StaticClass, TEXT("UPaperRuntimeSettings"), &Z_Registration_Info_UClass_UPaperRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperRuntimeSettings), 362460886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_51585382(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
