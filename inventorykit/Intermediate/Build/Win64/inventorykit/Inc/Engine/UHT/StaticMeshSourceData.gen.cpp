// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSourceData.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshSourceData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshDescriptionBulkData();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshDescriptionBulkData_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshSourceModel();
MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBaseBulkData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UStaticMeshDescriptionBulkData
void UStaticMeshDescriptionBulkData::StaticRegisterNativesUStaticMeshDescriptionBulkData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshDescriptionBulkData);
UClass* Z_Construct_UClass_UStaticMeshDescriptionBulkData_NoRegister()
{
	return UStaticMeshDescriptionBulkData::StaticClass();
}
struct Z_Construct_UClass_UStaticMeshDescriptionBulkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UObject wrapper for FMeshDescriptionBulkData\n */" },
		{ "IncludePath", "Engine/StaticMeshSourceData.h" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
		{ "ToolTip", "UObject wrapper for FMeshDescriptionBulkData" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshDescriptionBulkData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStaticMeshDescriptionBulkData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshDescriptionBaseBulkData,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshDescriptionBulkData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshDescriptionBulkData_Statics::ClassParams = {
	&UStaticMeshDescriptionBulkData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshDescriptionBulkData_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaticMeshDescriptionBulkData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaticMeshDescriptionBulkData()
{
	if (!Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.OuterSingleton, Z_Construct_UClass_UStaticMeshDescriptionBulkData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UStaticMeshDescriptionBulkData>()
{
	return UStaticMeshDescriptionBulkData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshDescriptionBulkData);
UStaticMeshDescriptionBulkData::~UStaticMeshDescriptionBulkData() {}
// End Class UStaticMeshDescriptionBulkData

// Begin ScriptStruct FStaticMeshSourceModel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshSourceModel;
class UScriptStruct* FStaticMeshSourceModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshSourceModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshSourceModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshSourceModel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshSourceModel"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshSourceModel.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshSourceModel>()
{
	return FStaticMeshSourceModel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Source model from which a renderable static mesh is built.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
		{ "ToolTip", "Source model from which a renderable static mesh is built." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshDescriptionBulkData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Bulk data containing mesh description.\n\x09 * New assets store their source data here instead of in the RawMeshBulkData.\n\x09 * If the bulk data within is empty, the LOD is autogenerated (for LOD1+).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
		{ "ToolTip", "Bulk data containing mesh description.\nNew assets store their source data here instead of in the RawMeshBulkData.\nIf the bulk data within is empty, the LOD is autogenerated (for LOD1+)." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildSettings_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Settings applied when building the mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
		{ "ToolTip", "Settings applied when building the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Reduction settings to apply when building render data. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
		{ "ToolTip", "Reduction settings to apply when building render data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMeshDescriptionTrianglesCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMeshDescriptionVerticesCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** \n\x09 * ScreenSize to display this LOD.\n\x09 * The screen size is based around the projected diameter of the bounding\n\x09 * sphere of the model. i.e. 0.5 means half the screen's maximum dimension.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
		{ "ToolTip", "ScreenSize to display this LOD.\nThe screen size is based around the projected diameter of the bounding\nsphere of the model. i.e. 0.5 means half the screen's maximum dimension." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceImportFilename_MetaData[] = {
		{ "Category", "StaticMeshSourceModel" },
		{ "Comment", "/** The file path that was used to import this LOD. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
		{ "ToolTip", "The file path that was used to import this LOD." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportWithBaseMesh_MetaData[] = {
		{ "Comment", "/** Whether this LOD was imported in the same file as the base mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSourceData.h" },
		{ "ToolTip", "Whether this LOD was imported in the same file as the base mesh." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshDescriptionBulkData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CacheMeshDescriptionTrianglesCount;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CacheMeshDescriptionVerticesCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceImportFilename;
#if WITH_EDITORONLY_DATA
	static void NewProp_bImportWithBaseMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportWithBaseMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshSourceModel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_StaticMeshDescriptionBulkData = { "StaticMeshDescriptionBulkData", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshSourceModel, StaticMeshDescriptionBulkData), Z_Construct_UClass_UStaticMeshDescriptionBulkData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshDescriptionBulkData_MetaData), NewProp_StaticMeshDescriptionBulkData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings = { "BuildSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshSourceModel, BuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildSettings_MetaData), NewProp_BuildSettings_MetaData) }; // 2438872494
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshSourceModel, ReductionSettings), Z_Construct_UScriptStruct_FMeshReductionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReductionSettings_MetaData), NewProp_ReductionSettings_MetaData) }; // 931819203
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_CacheMeshDescriptionTrianglesCount = { "CacheMeshDescriptionTrianglesCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshSourceModel, CacheMeshDescriptionTrianglesCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMeshDescriptionTrianglesCount_MetaData), NewProp_CacheMeshDescriptionTrianglesCount_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_CacheMeshDescriptionVerticesCount = { "CacheMeshDescriptionVerticesCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshSourceModel, CacheMeshDescriptionVerticesCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMeshDescriptionVerticesCount_MetaData), NewProp_CacheMeshDescriptionVerticesCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance = { "LODDistance", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshSourceModel, LODDistance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODDistance_MetaData), NewProp_LODDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshSourceModel, ScreenSize), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) }; // 50753708
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename = { "SourceImportFilename", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshSourceModel, SourceImportFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceImportFilename_MetaData), NewProp_SourceImportFilename_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_SetBit(void* Obj)
{
	((FStaticMeshSourceModel*)Obj)->bImportWithBaseMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh = { "bImportWithBaseMesh", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticMeshSourceModel), &Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportWithBaseMesh_MetaData), NewProp_bImportWithBaseMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_StaticMeshDescriptionBulkData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_CacheMeshDescriptionTrianglesCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_CacheMeshDescriptionVerticesCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StaticMeshSourceModel",
	Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::PropPointers),
	sizeof(FStaticMeshSourceModel),
	alignof(FStaticMeshSourceModel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshSourceModel()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshSourceModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshSourceModel.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshSourceModel.InnerSingleton;
}
// End ScriptStruct FStaticMeshSourceModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStaticMeshSourceModel::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewStructOps, TEXT("StaticMeshSourceModel"), &Z_Registration_Info_UScriptStruct_StaticMeshSourceModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshSourceModel), 2714847898U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshDescriptionBulkData, UStaticMeshDescriptionBulkData::StaticClass, TEXT("UStaticMeshDescriptionBulkData"), &Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshDescriptionBulkData), 2919048882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_2352123360(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
