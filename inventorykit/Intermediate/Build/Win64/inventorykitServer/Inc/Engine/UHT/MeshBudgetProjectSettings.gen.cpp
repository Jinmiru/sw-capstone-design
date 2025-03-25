// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/MeshBudgetProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBudgetProjectSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UMeshBudgetProjectSettings();
ENGINE_API UClass* Z_Construct_UClass_UMeshBudgetProjectSettings_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshBudgetInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FStaticMeshBudgetInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshBudgetInfo;
class UScriptStruct* FStaticMeshBudgetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshBudgetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshBudgetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshBudgetInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshBudgetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshBudgetInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshBudgetInfo>()
{
	return FStaticMeshBudgetInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshBudgetProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodGroupName_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** The name of the LOD group we will use for this budget.*/" },
		{ "ModuleRelativePath", "Public/MeshBudgetProjectSettings.h" },
		{ "ToolTip", "The name of the LOD group we will use for this budget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumExtent_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** The minimum volume extent to assign this budget info. We will compare the mesh bounding box extent to this value. */" },
		{ "ModuleRelativePath", "Public/MeshBudgetProjectSettings.h" },
		{ "ToolTip", "The minimum volume extent to assign this budget info. We will compare the mesh bounding box extent to this value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LodGroupName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinimumExtent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshBudgetInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::NewProp_LodGroupName = { "LodGroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshBudgetInfo, LodGroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodGroupName_MetaData), NewProp_LodGroupName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::NewProp_MinimumExtent = { "MinimumExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshBudgetInfo, MinimumExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumExtent_MetaData), NewProp_MinimumExtent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::NewProp_LodGroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::NewProp_MinimumExtent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StaticMeshBudgetInfo",
	Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::PropPointers),
	sizeof(FStaticMeshBudgetInfo),
	alignof(FStaticMeshBudgetInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshBudgetInfo()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshBudgetInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshBudgetInfo.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshBudgetInfo.InnerSingleton;
}
// End ScriptStruct FStaticMeshBudgetInfo

// Begin Class UMeshBudgetProjectSettings
void UMeshBudgetProjectSettings::StaticRegisterNativesUMeshBudgetProjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshBudgetProjectSettings);
UClass* Z_Construct_UClass_UMeshBudgetProjectSettings_NoRegister()
{
	return UMeshBudgetProjectSettings::StaticClass();
}
struct Z_Construct_UClass_UMeshBudgetProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Budget" },
		{ "IncludePath", "MeshBudgetProjectSettings.h" },
		{ "ModuleRelativePath", "Public/MeshBudgetProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStaticMeshBudget_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Enable/disable the static mesh budget.\n\x09 * Static mesh budget will auto assign a lod group to any static mesh when loading or importing the asset in the editor.\n\x09 * The auto budget will not override a static mesh lod group, user can control the lod group for a specific asset.\n\x09 * @note: When the static mesh budget is enable and properly configure, there will be no static mesh without a lod group in the editor.\n\x09 *        \n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshBudgetProjectSettings.h" },
		{ "ToolTip", "Enable/disable the static mesh budget.\nStatic mesh budget will auto assign a lod group to any static mesh when loading or importing the asset in the editor.\nThe auto budget will not override a static mesh lod group, user can control the lod group for a specific asset.\n@note: When the static mesh budget is enable and properly configure, there will be no static mesh without a lod group in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBudgetInfos_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * The static mesh budgets array.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshBudgetProjectSettings.h" },
		{ "ToolTip", "The static mesh budgets array." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableStaticMeshBudget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStaticMeshBudget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshBudgetInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshBudgetInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshBudgetProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::NewProp_bEnableStaticMeshBudget_SetBit(void* Obj)
{
	((UMeshBudgetProjectSettings*)Obj)->bEnableStaticMeshBudget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::NewProp_bEnableStaticMeshBudget = { "bEnableStaticMeshBudget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshBudgetProjectSettings), &Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::NewProp_bEnableStaticMeshBudget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStaticMeshBudget_MetaData), NewProp_bEnableStaticMeshBudget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::NewProp_StaticMeshBudgetInfos_Inner = { "StaticMeshBudgetInfos", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticMeshBudgetInfo, METADATA_PARAMS(0, nullptr) }; // 205338203
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::NewProp_StaticMeshBudgetInfos = { "StaticMeshBudgetInfos", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshBudgetProjectSettings, StaticMeshBudgetInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshBudgetInfos_MetaData), NewProp_StaticMeshBudgetInfos_MetaData) }; // 205338203
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::NewProp_bEnableStaticMeshBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::NewProp_StaticMeshBudgetInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::NewProp_StaticMeshBudgetInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::ClassParams = {
	&UMeshBudgetProjectSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshBudgetProjectSettings()
{
	if (!Z_Registration_Info_UClass_UMeshBudgetProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshBudgetProjectSettings.OuterSingleton, Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshBudgetProjectSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMeshBudgetProjectSettings>()
{
	return UMeshBudgetProjectSettings::StaticClass();
}
UMeshBudgetProjectSettings::UMeshBudgetProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshBudgetProjectSettings);
UMeshBudgetProjectSettings::~UMeshBudgetProjectSettings() {}
// End Class UMeshBudgetProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStaticMeshBudgetInfo::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::NewStructOps, TEXT("StaticMeshBudgetInfo"), &Z_Registration_Info_UScriptStruct_StaticMeshBudgetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshBudgetInfo), 205338203U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshBudgetProjectSettings, UMeshBudgetProjectSettings::StaticClass, TEXT("UMeshBudgetProjectSettings"), &Z_Registration_Info_UClass_UMeshBudgetProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshBudgetProjectSettings), 2648288151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_3887471645(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
