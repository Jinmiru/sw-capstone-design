// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAssetManager
void UAssetManager::StaticRegisterNativesUAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetManager);
UClass* Z_Construct_UClass_UAssetManager_NoRegister()
{
	return UAssetManager::StaticClass();
}
struct Z_Construct_UClass_UAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * A singleton UObject that is responsible for loading and unloading PrimaryAssets, and maintaining game-specific asset references\n * Games should override this class and change the class reference\n */" },
		{ "IncludePath", "Engine/AssetManager.h" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "A singleton UObject that is responsible for loading and unloading PrimaryAssets, and maintaining game-specific asset references\nGames should override this class and change the class reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectReferenceList_MetaData[] = {
		{ "Comment", "/** List of UObjects that are being kept from being GCd, derived from the asset type map. Arrays are currently more efficient than Sets */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "List of UObjects that are being kept from being GCd, derived from the asset type map. Arrays are currently more efficient than Sets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGlobalAsyncScanEnvironment_MetaData[] = {
		{ "Comment", "/** True if we are running a build that is already scanning assets globally so we can perhaps avoid scanning paths synchronously */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we are running a build that is already scanning assets globally so we can perhaps avoid scanning paths synchronously" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldGuessTypeAndName_MetaData[] = {
		{ "Comment", "/** True if PrimaryAssetType/Name will be implied for loading assets that don't have it saved on disk. Won't work for all projects */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if PrimaryAssetType/Name will be implied for loading assets that don't have it saved on disk. Won't work for all projects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseSynchronousLoad_MetaData[] = {
		{ "Comment", "/** True if we should always use synchronous loads, this speeds up cooking */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we should always use synchronous loads, this speeds up cooking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingFromPakFiles_MetaData[] = {
		{ "Comment", "/** True if we are loading from pak files */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we are loading from pak files" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[] = {
		{ "Comment", "/** True if the chunk install interface should be queries before loading assets */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if the chunk install interface should be queries before loading assets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyCookProductionAssets_MetaData[] = {
		{ "Comment", "/** If true, DevelopmentCook assets will error when they are cooked */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "If true, DevelopmentCook assets will error when they are cooked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBulkScanRequests_MetaData[] = {
		{ "Comment", "/** >0 if we are currently in bulk scanning mode */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", ">0 if we are currently in bulk scanning mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData[] = {
		{ "Comment", "/** True if asset data is current, if false it will need to rescan before PIE */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if asset data is current, if false it will need to rescan before PIE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsManagementDatabaseCurrent_MetaData[] = {
		{ "Comment", "/** True if the asset management database is up to date */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if the asset management database is up to date" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateManagementDatabaseAfterScan_MetaData[] = {
		{ "Comment", "/** True if the asset management database should be updated after scan completes */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if the asset management database should be updated after scan completes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeOnlyOnDiskAssets_MetaData[] = {
		{ "Comment", "/** True if only on-disk assets should be searched by the asset registry */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if only on-disk assets should be searched by the asset registry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCompletedInitialScan_MetaData[] = {
		{ "Comment", "/** True if we have passed the initial asset registry/type scan */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we have passed the initial asset registry/type scan" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSpawnedNotifications_MetaData[] = {
		{ "Comment", "/** Number of notifications seen in this update */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "Number of notifications seen in this update" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectReferenceList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectReferenceList;
	static void NewProp_bIsGlobalAsyncScanEnvironment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGlobalAsyncScanEnvironment;
	static void NewProp_bShouldGuessTypeAndName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldGuessTypeAndName;
	static void NewProp_bShouldUseSynchronousLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseSynchronousLoad;
	static void NewProp_bIsLoadingFromPakFiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingFromPakFiles;
	static void NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAcquireMissingChunksOnLoad;
	static void NewProp_bOnlyCookProductionAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyCookProductionAssets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBulkScanRequests;
	static void NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrimaryAssetDirectoryCurrent;
	static void NewProp_bIsManagementDatabaseCurrent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsManagementDatabaseCurrent;
	static void NewProp_bUpdateManagementDatabaseAfterScan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateManagementDatabaseAfterScan;
	static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
	static void NewProp_bHasCompletedInitialScan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCompletedInitialScan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSpawnedNotifications;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_Inner = { "ObjectReferenceList", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList = { "ObjectReferenceList", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManager, ObjectReferenceList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectReferenceList_MetaData), NewProp_ObjectReferenceList_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bIsGlobalAsyncScanEnvironment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment = { "bIsGlobalAsyncScanEnvironment", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGlobalAsyncScanEnvironment_MetaData), NewProp_bIsGlobalAsyncScanEnvironment_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bShouldGuessTypeAndName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName = { "bShouldGuessTypeAndName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldGuessTypeAndName_MetaData), NewProp_bShouldGuessTypeAndName_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bShouldUseSynchronousLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad = { "bShouldUseSynchronousLoad", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldUseSynchronousLoad_MetaData), NewProp_bShouldUseSynchronousLoad_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bIsLoadingFromPakFiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles = { "bIsLoadingFromPakFiles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadingFromPakFiles_MetaData), NewProp_bIsLoadingFromPakFiles_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bShouldAcquireMissingChunksOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad = { "bShouldAcquireMissingChunksOnLoad", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAcquireMissingChunksOnLoad_MetaData), NewProp_bShouldAcquireMissingChunksOnLoad_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bOnlyCookProductionAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets = { "bOnlyCookProductionAssets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyCookProductionAssets_MetaData), NewProp_bOnlyCookProductionAssets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_NumBulkScanRequests = { "NumBulkScanRequests", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManager, NumBulkScanRequests), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBulkScanRequests_MetaData), NewProp_NumBulkScanRequests_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bIsPrimaryAssetDirectoryCurrent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent = { "bIsPrimaryAssetDirectoryCurrent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData), NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bIsManagementDatabaseCurrent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent = { "bIsManagementDatabaseCurrent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsManagementDatabaseCurrent_MetaData), NewProp_bIsManagementDatabaseCurrent_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bUpdateManagementDatabaseAfterScan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan = { "bUpdateManagementDatabaseAfterScan", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateManagementDatabaseAfterScan_MetaData), NewProp_bUpdateManagementDatabaseAfterScan_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bIncludeOnlyOnDiskAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeOnlyOnDiskAssets_MetaData), NewProp_bIncludeOnlyOnDiskAssets_MetaData) };
void Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan_SetBit(void* Obj)
{
	((UAssetManager*)Obj)->bHasCompletedInitialScan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan = { "bHasCompletedInitialScan", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCompletedInitialScan_MetaData), NewProp_bHasCompletedInitialScan_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications = { "NumberOfSpawnedNotifications", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManager, NumberOfSpawnedNotifications), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSpawnedNotifications_MetaData), NewProp_NumberOfSpawnedNotifications_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_NumBulkScanRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetManager_Statics::ClassParams = {
	&UAssetManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetManager()
{
	if (!Z_Registration_Info_UClass_UAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetManager.OuterSingleton, Z_Construct_UClass_UAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAssetManager>()
{
	return UAssetManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetManager);
UAssetManager::~UAssetManager() {}
// End Class UAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetManager, UAssetManager::StaticClass, TEXT("UAssetManager"), &Z_Registration_Info_UClass_UAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetManager), 2970605721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_3780638608(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
