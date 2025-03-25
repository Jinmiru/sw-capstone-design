// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngine() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngine();
ENGINE_API UClass* Z_Construct_UClass_UEngine_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UObjectReferencer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DArray_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFullyLoadPackageType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClassRedirect();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDropNoteInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGameNameRedirect();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIrisNetDriverConfig();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamingStatus();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedNetDriver();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetDriverDefinition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPluginRedirect();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenMessageString();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStatColorMapEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStatColorMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStructRedirect();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FURL();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldContext();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EFullyLoadPackageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFullyLoadPackageType;
static UEnum* EFullyLoadPackageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFullyLoadPackageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFullyLoadPackageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFullyLoadPackageType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFullyLoadPackageType"));
	}
	return Z_Registration_Info_UEnum_EFullyLoadPackageType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EFullyLoadPackageType>()
{
	return EFullyLoadPackageType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EFullyLoadPackageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates types of fully loaded packages.\n */" },
		{ "FULLYLOAD_Always.Comment", "/** Fully load the package as long as the DLC is loaded. */" },
		{ "FULLYLOAD_Always.Name", "FULLYLOAD_Always" },
		{ "FULLYLOAD_Always.ToolTip", "Fully load the package as long as the DLC is loaded." },
		{ "FULLYLOAD_Game_PostLoadClass.Comment", "/** Load the packages after the game class in Tag is loaded. Will work no matter how game is specified in UWorld::SetGameMode. Useful for modifying shipping gametypes by loading more packages (mutators, for instance). */" },
		{ "FULLYLOAD_Game_PostLoadClass.Name", "FULLYLOAD_Game_PostLoadClass" },
		{ "FULLYLOAD_Game_PostLoadClass.ToolTip", "Load the packages after the game class in Tag is loaded. Will work no matter how game is specified in UWorld::SetGameMode. Useful for modifying shipping gametypes by loading more packages (mutators, for instance)." },
		{ "FULLYLOAD_Game_PreLoadClass.Comment", "/** Load the packages before the game class in Tag is loaded. The Game name MUST be specified in the URL (game=Package.GameName). Useful for loading packages needed to load the game type (a DLC game type, for instance). */" },
		{ "FULLYLOAD_Game_PreLoadClass.Name", "FULLYLOAD_Game_PreLoadClass" },
		{ "FULLYLOAD_Game_PreLoadClass.ToolTip", "Load the packages before the game class in Tag is loaded. The Game name MUST be specified in the URL (game=Package.GameName). Useful for loading packages needed to load the game type (a DLC game type, for instance)." },
		{ "FULLYLOAD_Map.Comment", "/** Load the packages when the map in Tag is loaded. */" },
		{ "FULLYLOAD_Map.Name", "FULLYLOAD_Map" },
		{ "FULLYLOAD_Map.ToolTip", "Load the packages when the map in Tag is loaded." },
		{ "FULLYLOAD_MAX.Name", "FULLYLOAD_MAX" },
		{ "FULLYLOAD_Mutator.Comment", "/** Load the package for a mutator that is active. */" },
		{ "FULLYLOAD_Mutator.Name", "FULLYLOAD_Mutator" },
		{ "FULLYLOAD_Mutator.ToolTip", "Load the package for a mutator that is active." },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Enumerates types of fully loaded packages." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FULLYLOAD_Map", (int64)FULLYLOAD_Map },
		{ "FULLYLOAD_Game_PreLoadClass", (int64)FULLYLOAD_Game_PreLoadClass },
		{ "FULLYLOAD_Game_PostLoadClass", (int64)FULLYLOAD_Game_PostLoadClass },
		{ "FULLYLOAD_Always", (int64)FULLYLOAD_Always },
		{ "FULLYLOAD_Mutator", (int64)FULLYLOAD_Mutator },
		{ "FULLYLOAD_MAX", (int64)FULLYLOAD_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFullyLoadPackageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EFullyLoadPackageType",
	"EFullyLoadPackageType",
	Z_Construct_UEnum_Engine_EFullyLoadPackageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFullyLoadPackageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFullyLoadPackageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EFullyLoadPackageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EFullyLoadPackageType()
{
	if (!Z_Registration_Info_UEnum_EFullyLoadPackageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFullyLoadPackageType.InnerSingleton, Z_Construct_UEnum_Engine_EFullyLoadPackageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFullyLoadPackageType.InnerSingleton;
}
// End Enum EFullyLoadPackageType

// Begin Enum ETransitionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransitionType;
static UEnum* ETransitionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETransitionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETransitionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETransitionType"));
	}
	return Z_Registration_Info_UEnum_ETransitionType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETransitionType>()
{
	return ETransitionType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETransitionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates transition types.\n */" },
		{ "Connecting.Name", "ETransitionType::Connecting" },
		{ "Loading.Name", "ETransitionType::Loading" },
		{ "MAX.Name", "ETransitionType::MAX" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "None.Name", "ETransitionType::None" },
		{ "Paused.Name", "ETransitionType::Paused" },
		{ "Precaching.Name", "ETransitionType::Precaching" },
		{ "Saving.Name", "ETransitionType::Saving" },
		{ "ToolTip", "Enumerates transition types." },
		{ "WaitingToConnect.Name", "ETransitionType::WaitingToConnect" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETransitionType::None", (int64)ETransitionType::None },
		{ "ETransitionType::Paused", (int64)ETransitionType::Paused },
		{ "ETransitionType::Loading", (int64)ETransitionType::Loading },
		{ "ETransitionType::Saving", (int64)ETransitionType::Saving },
		{ "ETransitionType::Connecting", (int64)ETransitionType::Connecting },
		{ "ETransitionType::Precaching", (int64)ETransitionType::Precaching },
		{ "ETransitionType::WaitingToConnect", (int64)ETransitionType::WaitingToConnect },
		{ "ETransitionType::MAX", (int64)ETransitionType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETransitionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETransitionType",
	"ETransitionType",
	Z_Construct_UEnum_Engine_ETransitionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransitionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransitionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETransitionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETransitionType()
{
	if (!Z_Registration_Info_UEnum_ETransitionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransitionType.InnerSingleton, Z_Construct_UEnum_Engine_ETransitionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETransitionType.InnerSingleton;
}
// End Enum ETransitionType

// Begin ScriptStruct FFullyLoadedPackagesInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FullyLoadedPackagesInfo;
class UScriptStruct* FFullyLoadedPackagesInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FullyLoadedPackagesInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FullyLoadedPackagesInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FullyLoadedPackagesInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FullyLoadedPackagesInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFullyLoadedPackagesInfo>()
{
	return FFullyLoadedPackagesInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct to help hold information about packages needing to be fully-loaded for DLC, etc. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Struct to help hold information about packages needing to be fully-loaded for DLC, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullyLoadType_MetaData[] = {
		{ "Comment", "/** When to load these packages */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "When to load these packages" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Comment", "/** When this map or gametype is loaded, the packages in the following array will be loaded and added to root, then removed from root when map is unloaded */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "When this map or gametype is loaded, the packages in the following array will be loaded and added to root, then removed from root when map is unloaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToLoad_MetaData[] = {
		{ "Comment", "/** The list of packages that will be fully loaded when the above Map is loaded */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The list of packages that will be fully loaded when the above Map is loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedObjects_MetaData[] = {
		{ "Comment", "/** List of objects that were loaded, for faster cleanup */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "List of objects that were loaded, for faster cleanup" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FullyLoadType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackagesToLoad_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagesToLoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFullyLoadedPackagesInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_FullyLoadType = { "FullyLoadType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFullyLoadedPackagesInfo, FullyLoadType), Z_Construct_UEnum_Engine_EFullyLoadPackageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullyLoadType_MetaData), NewProp_FullyLoadType_MetaData) }; // 3398428212
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFullyLoadedPackagesInfo, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad_Inner = { "PackagesToLoad", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad = { "PackagesToLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFullyLoadedPackagesInfo, PackagesToLoad), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagesToLoad_MetaData), NewProp_PackagesToLoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects_Inner = { "LoadedObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects = { "LoadedObjects", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFullyLoadedPackagesInfo, LoadedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedObjects_MetaData), NewProp_LoadedObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_FullyLoadType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"FullyLoadedPackagesInfo",
	Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::PropPointers),
	sizeof(FFullyLoadedPackagesInfo),
	alignof(FFullyLoadedPackagesInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FullyLoadedPackagesInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FullyLoadedPackagesInfo.InnerSingleton, Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FullyLoadedPackagesInfo.InnerSingleton;
}
// End ScriptStruct FFullyLoadedPackagesInfo

// Begin ScriptStruct FLevelStreamingStatus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelStreamingStatus;
class UScriptStruct* FLevelStreamingStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelStreamingStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelStreamingStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelStreamingStatus, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LevelStreamingStatus"));
	}
	return Z_Registration_Info_UScriptStruct_LevelStreamingStatus.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLevelStreamingStatus>()
{
	return FLevelStreamingStatus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** level streaming updates that should be applied immediately after committing the map change */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "level streaming updates that should be applied immediately after committing the map change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static void NewProp_bShouldBeLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeLoaded;
	static void NewProp_bShouldBeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelStreamingStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelStreamingStatus, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
void Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded_SetBit(void* Obj)
{
	((FLevelStreamingStatus*)Obj)->bShouldBeLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded = { "bShouldBeLoaded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FLevelStreamingStatus), &Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBeLoaded_MetaData), NewProp_bShouldBeLoaded_MetaData) };
void Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible_SetBit(void* Obj)
{
	((FLevelStreamingStatus*)Obj)->bShouldBeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible = { "bShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FLevelStreamingStatus), &Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBeVisible_MetaData), NewProp_bShouldBeVisible_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelStreamingStatus, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_LODIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LevelStreamingStatus",
	Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::PropPointers),
	sizeof(FLevelStreamingStatus),
	alignof(FLevelStreamingStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamingStatus()
{
	if (!Z_Registration_Info_UScriptStruct_LevelStreamingStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelStreamingStatus.InnerSingleton, Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelStreamingStatus.InnerSingleton;
}
// End ScriptStruct FLevelStreamingStatus

// Begin ScriptStruct FNetDriverDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetDriverDefinition;
class UScriptStruct* FNetDriverDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetDriverDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetDriverDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetDriverDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetDriverDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_NetDriverDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetDriverDefinition>()
{
	return FNetDriverDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetDriverDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Container for describing various types of netdrivers available to the engine\n * The engine will try to construct a netdriver of a given type and, failing that,\n * the fallback version.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Container for describing various types of netdrivers available to the engine\nThe engine will try to construct a netdriver of a given type and, failing that,\nthe fallback version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefName_MetaData[] = {
		{ "Comment", "/** Unique name of this net driver definition */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Unique name of this net driver definition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverClassName_MetaData[] = {
		{ "Comment", "/** Class name of primary net driver */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Class name of primary net driver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverClassNameFallback_MetaData[] = {
		{ "Comment", "/** Class name of the fallback net driver if the main net driver class fails to initialize */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Class name of the fallback net driver if the main net driver class fails to initialize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxChannelsOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DriverClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DriverClassNameFallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChannelsOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetDriverDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DefName = { "DefName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverDefinition, DefName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefName_MetaData), NewProp_DefName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassName = { "DriverClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverDefinition, DriverClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverClassName_MetaData), NewProp_DriverClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassNameFallback = { "DriverClassNameFallback", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverDefinition, DriverClassNameFallback), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverClassNameFallback_MetaData), NewProp_DriverClassNameFallback_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_MaxChannelsOverride = { "MaxChannelsOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverDefinition, MaxChannelsOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxChannelsOverride_MetaData), NewProp_MaxChannelsOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DefName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassNameFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_MaxChannelsOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetDriverDefinition",
	Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::PropPointers),
	sizeof(FNetDriverDefinition),
	alignof(FNetDriverDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetDriverDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_NetDriverDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetDriverDefinition.InnerSingleton, Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetDriverDefinition.InnerSingleton;
}
// End ScriptStruct FNetDriverDefinition

// Begin ScriptStruct FIrisNetDriverConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IrisNetDriverConfig;
class UScriptStruct* FIrisNetDriverConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IrisNetDriverConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IrisNetDriverConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIrisNetDriverConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("IrisNetDriverConfig"));
	}
	return Z_Registration_Info_UScriptStruct_IrisNetDriverConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIrisNetDriverConfig>()
{
	return FIrisNetDriverConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Struct used to configure which NetDriver is started with Iris enabled or not\n* Only one attribute out of the NetDriverDefinition, NetDriverName or NetDriverWildcardName should be set along with the bEnableIris property\n*/" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Struct used to configure which NetDriver is started with Iris enabled or not\nOnly one attribute out of the NetDriverDefinition, NetDriverName or NetDriverWildcardName should be set along with the bEnableIris property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverDefinition_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the net driver definition to configure\n\x09 * e.g. GameNetDriver, BeaconNetDriver, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of the net driver definition to configure\ne.g. GameNetDriver, BeaconNetDriver, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the named driver to configure.\n\x09 * e.g. GameNetDriver, DemoNetDriver, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of the named driver to configure.\ne.g. GameNetDriver, DemoNetDriver, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverWildcardName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Wildcard match the netdriver name to configure\n\x09 * e.g. NetDriverWildcardName=\"UnitTestNetDriver*\" matches with UnitTestNetDriver_1, UnitTestNetDriver_2, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Wildcard match the netdriver name to configure\ne.g. NetDriverWildcardName=\"UnitTestNetDriver*\" matches with UnitTestNetDriver_1, UnitTestNetDriver_2, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseIris_MetaData[] = {
		{ "Comment", "/**\n\x09 * Configurable property that decides if the NetDriver will use the Iris replication system or not if Iris is enabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Configurable property that decides if the NetDriver will use the Iris replication system or not if Iris is enabled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NetDriverDefinition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NetDriverName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NetDriverWildcardName;
	static void NewProp_bCanUseIris_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseIris;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIrisNetDriverConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_NetDriverDefinition = { "NetDriverDefinition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIrisNetDriverConfig, NetDriverDefinition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDriverDefinition_MetaData), NewProp_NetDriverDefinition_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_NetDriverName = { "NetDriverName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIrisNetDriverConfig, NetDriverName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDriverName_MetaData), NewProp_NetDriverName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_NetDriverWildcardName = { "NetDriverWildcardName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIrisNetDriverConfig, NetDriverWildcardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDriverWildcardName_MetaData), NewProp_NetDriverWildcardName_MetaData) };
void Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_bCanUseIris_SetBit(void* Obj)
{
	((FIrisNetDriverConfig*)Obj)->bCanUseIris = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_bCanUseIris = { "bCanUseIris", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIrisNetDriverConfig), &Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_bCanUseIris_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanUseIris_MetaData), NewProp_bCanUseIris_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_NetDriverDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_NetDriverName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_NetDriverWildcardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_bCanUseIris,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"IrisNetDriverConfig",
	Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::PropPointers),
	sizeof(FIrisNetDriverConfig),
	alignof(FIrisNetDriverConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIrisNetDriverConfig()
{
	if (!Z_Registration_Info_UScriptStruct_IrisNetDriverConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IrisNetDriverConfig.InnerSingleton, Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IrisNetDriverConfig.InnerSingleton;
}
// End ScriptStruct FIrisNetDriverConfig

// Begin ScriptStruct FNamedNetDriver
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedNetDriver;
class UScriptStruct* FNamedNetDriver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedNetDriver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedNetDriver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedNetDriver, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedNetDriver"));
	}
	return Z_Registration_Info_UScriptStruct_NamedNetDriver.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedNetDriver>()
{
	return FNamedNetDriver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Active and named net drivers instantiated from an FNetDriverDefinition\n * The net driver will remain instantiated on this struct until it is destroyed\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Active and named net drivers instantiated from an FNetDriverDefinition\nThe net driver will remain instantiated on this struct until it is destroyed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[] = {
		{ "Comment", "/** Instantiation of named net driver */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Instantiation of named net driver" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetDriver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedNetDriver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNamedNetDriver_Statics::NewProp_NetDriver = { "NetDriver", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedNetDriver, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDriver_MetaData), NewProp_NetDriver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedNetDriver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedNetDriver_Statics::NewProp_NetDriver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedNetDriver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedNetDriver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NamedNetDriver",
	Z_Construct_UScriptStruct_FNamedNetDriver_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedNetDriver_Statics::PropPointers),
	sizeof(FNamedNetDriver),
	alignof(FNamedNetDriver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedNetDriver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedNetDriver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedNetDriver()
{
	if (!Z_Registration_Info_UScriptStruct_NamedNetDriver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedNetDriver.InnerSingleton, Z_Construct_UScriptStruct_FNamedNetDriver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedNetDriver.InnerSingleton;
}
// End ScriptStruct FNamedNetDriver

// Begin ScriptStruct FWorldContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldContext;
class UScriptStruct* FWorldContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldContext"));
	}
	return Z_Registration_Info_UScriptStruct_WorldContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldContext>()
{
	return FWorldContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** FWorldContext\n *\x09""A context for dealing with UWorlds at the engine level. As the engine brings up and destroys world, we need a way to keep straight\n *\x09what world belongs to what.\n *\n *\x09WorldContexts can be thought of as a track. By default we have 1 track that we load and unload levels on. Adding a second context is adding\n *\x09""a second track; another track of progression for worlds to live on. \n *\n *\x09""For the GameEngine, there will be one WorldContext until we decide to support multiple simultaneous worlds.\n *\x09""For the EditorEngine, there may be one WorldContext for the EditorWorld and one for the PIE World.\n *\n *\x09""FWorldContext provides both a way to manage 'the current PIE UWorld*' as well as state that goes along with connecting/travelling to \n *  new worlds.\n *\n *\x09""FWorldContext should remain internal to the UEngine classes. Outside code should not keep pointers or try to manage FWorldContexts directly.\n *\x09Outside code can still deal with UWorld*, and pass UWorld*s into Engine level functions. The Engine code can look up the relevant context \n *\x09""for a given UWorld*.\n *\n *  For convenience, FWorldContext can maintain outside pointers to UWorld*s. For example, PIE can tie UWorld* UEditorEngine::PlayWorld to the PIE\n *\x09world context. If the PIE UWorld changes, the UEditorEngine::PlayWorld pointer will be automatically updated. This is done with AddRef() and\n *  SetCurrentWorld().\n *\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "FWorldContext\n   A context for dealing with UWorlds at the engine level. As the engine brings up and destroys world, we need a way to keep straight\n   what world belongs to what.\n\n   WorldContexts can be thought of as a track. By default we have 1 track that we load and unload levels on. Adding a second context is adding\n   a second track; another track of progression for worlds to live on.\n\n   For the GameEngine, there will be one WorldContext until we decide to support multiple simultaneous worlds.\n   For the EditorEngine, there may be one WorldContext for the EditorWorld and one for the PIE World.\n\n   FWorldContext provides both a way to manage 'the current PIE UWorld*' as well as state that goes along with connecting/travelling to\nnew worlds.\n\n   FWorldContext should remain internal to the UEngine classes. Outside code should not keep pointers or try to manage FWorldContexts directly.\n   Outside code can still deal with UWorld*, and pass UWorld*s into Engine level functions. The Engine code can look up the relevant context\n   for a given UWorld*.\n\nFor convenience, FWorldContext can maintain outside pointers to UWorld*s. For example, PIE can tie UWorld* UEditorEngine::PlayWorld to the PIE\n   world context. If the PIE UWorld changes, the UEditorEngine::PlayWorld pointer will be automatically updated. This is done with AddRef() and\nSetCurrentWorld()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastURL_MetaData[] = {
		{ "Comment", "/** URL the last time we traveled */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "URL the last time we traveled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRemoteURL_MetaData[] = {
		{ "Comment", "/** last server we connected to (for \"reconnect\" command) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "last server we connected to (for \"reconnect\" command)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingNetGame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToFullyLoad_MetaData[] = {
		{ "Comment", "/** A list of tag/array pairs that is used at LoadMap time to fully load packages that may be needed for the map/game with DLC, but we can't use DynamicLoadObject to load from the packages */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A list of tag/array pairs that is used at LoadMap time to fully load packages that may be needed for the map/game with DLC, but we can't use DynamicLoadObject to load from the packages" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedLevelsForPendingMapChange_MetaData[] = {
		{ "Comment", "/** Array of already loaded levels. The ordering is arbitrary and depends on what is already loaded and such.\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Array of already loaded levels. The ordering is arbitrary and depends on what is already loaded and such." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectReferencers_MetaData[] = {
		{ "Comment", "/** Handles to object references; used by the engine to e.g. the prevent objects from being garbage collected.\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Handles to object references; used by the engine to e.g. the prevent objects from being garbage collected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingLevelStreamingStatusUpdates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameViewport_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNetDrivers_MetaData[] = {
		{ "Comment", "/** A list of active net drivers */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A list of active net drivers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastURL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastRemoteURL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingNetGame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackagesToFullyLoad_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagesToFullyLoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedLevelsForPendingMapChange_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedLevelsForPendingMapChange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectReferencers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectReferencers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingLevelStreamingStatusUpdates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingLevelStreamingStatusUpdates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameViewport;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningGameInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveNetDrivers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveNetDrivers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastURL = { "LastURL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldContext, LastURL), Z_Construct_UScriptStruct_FURL, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastURL_MetaData), NewProp_LastURL_MetaData) }; // 594925412
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastRemoteURL = { "LastRemoteURL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldContext, LastRemoteURL), Z_Construct_UScriptStruct_FURL, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRemoteURL_MetaData), NewProp_LastRemoteURL_MetaData) }; // 594925412
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingNetGame = { "PendingNetGame", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldContext, PendingNetGame), Z_Construct_UClass_UPendingNetGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingNetGame_MetaData), NewProp_PendingNetGame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad_Inner = { "PackagesToFullyLoad", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo, METADATA_PARAMS(0, nullptr) }; // 4282477103
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad = { "PackagesToFullyLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldContext, PackagesToFullyLoad), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagesToFullyLoad_MetaData), NewProp_PackagesToFullyLoad_MetaData) }; // 4282477103
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange_Inner = { "LoadedLevelsForPendingMapChange", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange = { "LoadedLevelsForPendingMapChange", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldContext, LoadedLevelsForPendingMapChange), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedLevelsForPendingMapChange_MetaData), NewProp_LoadedLevelsForPendingMapChange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers_Inner = { "ObjectReferencers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObjectReferencer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers = { "ObjectReferencers", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldContext, ObjectReferencers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectReferencers_MetaData), NewProp_ObjectReferencers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates_Inner = { "PendingLevelStreamingStatusUpdates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLevelStreamingStatus, METADATA_PARAMS(0, nullptr) }; // 1071791034
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates = { "PendingLevelStreamingStatusUpdates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldContext, PendingLevelStreamingStatusUpdates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingLevelStreamingStatusUpdates_MetaData), NewProp_PendingLevelStreamingStatusUpdates_MetaData) }; // 1071791034
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_GameViewport = { "GameViewport", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldContext, GameViewport), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameViewport_MetaData), NewProp_GameViewport_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_OwningGameInstance = { "OwningGameInstance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldContext, OwningGameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningGameInstance_MetaData), NewProp_OwningGameInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers_Inner = { "ActiveNetDrivers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNamedNetDriver, METADATA_PARAMS(0, nullptr) }; // 3530979851
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers = { "ActiveNetDrivers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldContext, ActiveNetDrivers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveNetDrivers_MetaData), NewProp_ActiveNetDrivers_MetaData) }; // 3530979851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastRemoteURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingNetGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_GameViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_OwningGameInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldContext",
	Z_Construct_UScriptStruct_FWorldContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::PropPointers),
	sizeof(FWorldContext),
	alignof(FWorldContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldContext()
{
	if (!Z_Registration_Info_UScriptStruct_WorldContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldContext.InnerSingleton, Z_Construct_UScriptStruct_FWorldContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldContext.InnerSingleton;
}
// End ScriptStruct FWorldContext

// Begin ScriptStruct FStatColorMapEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatColorMapEntry;
class UScriptStruct* FStatColorMapEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatColorMapEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatColorMapEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatColorMapEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StatColorMapEntry"));
	}
	return Z_Registration_Info_UScriptStruct_StatColorMapEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStatColorMapEntry>()
{
	return FStatColorMapEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStatColorMapEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Out_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_In;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Out;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatColorMapEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatColorMapEntry, In), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatColorMapEntry, Out), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Out_MetaData), NewProp_Out_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_Out,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StatColorMapEntry",
	Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::PropPointers),
	sizeof(FStatColorMapEntry),
	alignof(FStatColorMapEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatColorMapEntry()
{
	if (!Z_Registration_Info_UScriptStruct_StatColorMapEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatColorMapEntry.InnerSingleton, Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StatColorMapEntry.InnerSingleton;
}
// End ScriptStruct FStatColorMapEntry

// Begin ScriptStruct FStatColorMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatColorMapping;
class UScriptStruct* FStatColorMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatColorMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatColorMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatColorMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StatColorMapping"));
	}
	return Z_Registration_Info_UScriptStruct_StatColorMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStatColorMapping>()
{
	return FStatColorMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStatColorMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorMap;
	static void NewProp_DisableBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatColorMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatColorMapping, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap_Inner = { "ColorMap", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatColorMapEntry, METADATA_PARAMS(0, nullptr) }; // 2622729645
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap = { "ColorMap", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatColorMapping, ColorMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMap_MetaData), NewProp_ColorMap_MetaData) }; // 2622729645
void Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend_SetBit(void* Obj)
{
	((FStatColorMapping*)Obj)->DisableBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend = { "DisableBlend", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStatColorMapping), &Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableBlend_MetaData), NewProp_DisableBlend_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatColorMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatColorMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StatColorMapping",
	Z_Construct_UScriptStruct_FStatColorMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapping_Statics::PropPointers),
	sizeof(FStatColorMapping),
	alignof(FStatColorMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatColorMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatColorMapping()
{
	if (!Z_Registration_Info_UScriptStruct_StatColorMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatColorMapping.InnerSingleton, Z_Construct_UScriptStruct_FStatColorMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StatColorMapping.InnerSingleton;
}
// End ScriptStruct FStatColorMapping

// Begin ScriptStruct FDropNoteInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DropNoteInfo;
class UScriptStruct* FDropNoteInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DropNoteInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DropNoteInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDropNoteInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DropNoteInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DropNoteInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDropNoteInfo>()
{
	return FDropNoteInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDropNoteInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Info about one note dropped in the map during PIE. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Info about one note dropped in the map during PIE." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Comment", "/** Location to create Note actor in edited level. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Location to create Note actor in edited level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Rotation to create Note actor in edited level. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Rotation to create Note actor in edited level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "Comment", "/** Text to assign to Note actor in edited level. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Text to assign to Note actor in edited level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDropNoteInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDropNoteInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDropNoteInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDropNoteInfo, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDropNoteInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Comment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDropNoteInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DropNoteInfo",
	Z_Construct_UScriptStruct_FDropNoteInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::PropPointers),
	sizeof(FDropNoteInfo),
	alignof(FDropNoteInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDropNoteInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDropNoteInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DropNoteInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DropNoteInfo.InnerSingleton, Z_Construct_UScriptStruct_FDropNoteInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DropNoteInfo.InnerSingleton;
}
// End ScriptStruct FDropNoteInfo

// Begin ScriptStruct FScreenMessageString
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenMessageString;
class UScriptStruct* FScreenMessageString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenMessageString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenMessageString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenMessageString, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ScreenMessageString"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenMessageString.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FScreenMessageString>()
{
	return FScreenMessageString::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScreenMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper struct for tracking on screen messages. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Helper struct for tracking on screen messages." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Comment", "/** The 'key' for this message. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The 'key' for this message." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenMessage_MetaData[] = {
		{ "Comment", "/** The message to display. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The message to display." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayColor_MetaData[] = {
		{ "Comment", "/** The color to display the message in. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The color to display the message in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToDisplay_MetaData[] = {
		{ "Comment", "/** The number of frames to display it. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The number of frames to display it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTimeDisplayed_MetaData[] = {
		{ "Comment", "/** The number of frames it has been displayed so far. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The number of frames it has been displayed so far." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[] = {
		{ "Comment", "/** Scale of text */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Scale of text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenMessage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTimeDisplayed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenMessageString>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenMessageString, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_ScreenMessage = { "ScreenMessage", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenMessageString, ScreenMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenMessage_MetaData), NewProp_ScreenMessage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_DisplayColor = { "DisplayColor", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenMessageString, DisplayColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayColor_MetaData), NewProp_DisplayColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenMessageString, TimeToDisplay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToDisplay_MetaData), NewProp_TimeToDisplay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_CurrentTimeDisplayed = { "CurrentTimeDisplayed", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenMessageString, CurrentTimeDisplayed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTimeDisplayed_MetaData), NewProp_CurrentTimeDisplayed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenMessageString, TextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextScale_MetaData), NewProp_TextScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_ScreenMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_DisplayColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TimeToDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_CurrentTimeDisplayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TextScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ScreenMessageString",
	Z_Construct_UScriptStruct_FScreenMessageString_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::PropPointers),
	sizeof(FScreenMessageString),
	alignof(FScreenMessageString),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScreenMessageString_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScreenMessageString()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenMessageString.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenMessageString.InnerSingleton, Z_Construct_UScriptStruct_FScreenMessageString_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScreenMessageString.InnerSingleton;
}
// End ScriptStruct FScreenMessageString

// Begin ScriptStruct FGameNameRedirect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameNameRedirect;
class UScriptStruct* FGameNameRedirect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameNameRedirect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameNameRedirect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameNameRedirect, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GameNameRedirect"));
	}
	return Z_Registration_Info_UScriptStruct_GameNameRedirect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGameNameRedirect>()
{
	return FGameNameRedirect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameNameRedirect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldGameName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGameName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OldGameName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewGameName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameNameRedirect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_OldGameName = { "OldGameName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameNameRedirect, OldGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldGameName_MetaData), NewProp_OldGameName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_NewGameName = { "NewGameName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameNameRedirect, NewGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGameName_MetaData), NewProp_NewGameName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameNameRedirect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_OldGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_NewGameName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameNameRedirect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameNameRedirect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"GameNameRedirect",
	Z_Construct_UScriptStruct_FGameNameRedirect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameNameRedirect_Statics::PropPointers),
	sizeof(FGameNameRedirect),
	alignof(FGameNameRedirect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameNameRedirect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameNameRedirect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameNameRedirect()
{
	if (!Z_Registration_Info_UScriptStruct_GameNameRedirect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameNameRedirect.InnerSingleton, Z_Construct_UScriptStruct_FGameNameRedirect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameNameRedirect.InnerSingleton;
}
// End ScriptStruct FGameNameRedirect

// Begin ScriptStruct FClassRedirect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassRedirect;
class UScriptStruct* FClassRedirect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassRedirect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassRedirect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassRedirect, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClassRedirect"));
	}
	return Z_Registration_Info_UScriptStruct_ClassRedirect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClassRedirect>()
{
	return FClassRedirect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClassRedirect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSubobjName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSubobjName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewClassClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewClassPackage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OldClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OldSubobjName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewSubobjName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewClassClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewClassPackage;
	static void NewProp_InstanceOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InstanceOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassRedirect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirect, ObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectName_MetaData), NewProp_ObjectName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldClassName = { "OldClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirect, OldClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldClassName_MetaData), NewProp_OldClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassName = { "NewClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirect, NewClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewClassName_MetaData), NewProp_NewClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldSubobjName = { "OldSubobjName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirect, OldSubobjName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSubobjName_MetaData), NewProp_OldSubobjName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewSubobjName = { "NewSubobjName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirect, NewSubobjName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSubobjName_MetaData), NewProp_NewSubobjName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassClass = { "NewClassClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirect, NewClassClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewClassClass_MetaData), NewProp_NewClassClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassPackage = { "NewClassPackage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirect, NewClassPackage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewClassPackage_MetaData), NewProp_NewClassPackage_MetaData) };
void Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly_SetBit(void* Obj)
{
	((FClassRedirect*)Obj)->InstanceOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly = { "InstanceOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClassRedirect), &Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceOnly_MetaData), NewProp_InstanceOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassRedirect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_ObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldSubobjName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewSubobjName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassRedirect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClassRedirect",
	Z_Construct_UScriptStruct_FClassRedirect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::PropPointers),
	sizeof(FClassRedirect),
	alignof(FClassRedirect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassRedirect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClassRedirect()
{
	if (!Z_Registration_Info_UScriptStruct_ClassRedirect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassRedirect.InnerSingleton, Z_Construct_UScriptStruct_FClassRedirect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClassRedirect.InnerSingleton;
}
// End ScriptStruct FClassRedirect

// Begin ScriptStruct FStructRedirect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructRedirect;
class UScriptStruct* FStructRedirect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructRedirect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructRedirect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructRedirect, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StructRedirect"));
	}
	return Z_Registration_Info_UScriptStruct_StructRedirect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStructRedirect>()
{
	return FStructRedirect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStructRedirect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStructName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewStructName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OldStructName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewStructName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructRedirect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_OldStructName = { "OldStructName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructRedirect, OldStructName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStructName_MetaData), NewProp_OldStructName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_NewStructName = { "NewStructName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructRedirect, NewStructName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStructName_MetaData), NewProp_NewStructName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructRedirect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_OldStructName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_NewStructName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructRedirect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructRedirect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StructRedirect",
	Z_Construct_UScriptStruct_FStructRedirect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructRedirect_Statics::PropPointers),
	sizeof(FStructRedirect),
	alignof(FStructRedirect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructRedirect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructRedirect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStructRedirect()
{
	if (!Z_Registration_Info_UScriptStruct_StructRedirect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructRedirect.InnerSingleton, Z_Construct_UScriptStruct_FStructRedirect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StructRedirect.InnerSingleton;
}
// End ScriptStruct FStructRedirect

// Begin ScriptStruct FPluginRedirect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PluginRedirect;
class UScriptStruct* FPluginRedirect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PluginRedirect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PluginRedirect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginRedirect, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PluginRedirect"));
	}
	return Z_Registration_Info_UScriptStruct_PluginRedirect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPluginRedirect>()
{
	return FPluginRedirect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPluginRedirect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPluginName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPluginName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OldPluginName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewPluginName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginRedirect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_OldPluginName = { "OldPluginName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPluginRedirect, OldPluginName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPluginName_MetaData), NewProp_OldPluginName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_NewPluginName = { "NewPluginName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPluginRedirect, NewPluginName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPluginName_MetaData), NewProp_NewPluginName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginRedirect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_OldPluginName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_NewPluginName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginRedirect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginRedirect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PluginRedirect",
	Z_Construct_UScriptStruct_FPluginRedirect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginRedirect_Statics::PropPointers),
	sizeof(FPluginRedirect),
	alignof(FPluginRedirect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginRedirect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPluginRedirect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPluginRedirect()
{
	if (!Z_Registration_Info_UScriptStruct_PluginRedirect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PluginRedirect.InnerSingleton, Z_Construct_UScriptStruct_FPluginRedirect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PluginRedirect.InnerSingleton;
}
// End ScriptStruct FPluginRedirect

// Begin Class UEngine
void UEngine::StaticRegisterNativesUEngine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngine);
UClass* Z_Construct_UClass_UEngine_NoRegister()
{
	return UEngine::StaticClass();
}
struct Z_Construct_UClass_UEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract base class of all Engine classes, responsible for management of systems critical to editor or game systems.\n * Also defines default classes for certain engine systems.\n */" },
		{ "IncludePath", "Engine/Engine.h" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Abstract base class of all Engine classes, responsible for management of systems critical to editor or game systems.\nAlso defines default classes for certain engine systems." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TinyFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TinyFontName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Font" },
		{ "Category", "Fonts" },
		{ "Comment", "/** Sets the font used for the smallest engine text */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Tiny Font" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the font used for the smallest engine text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallFontName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Font" },
		{ "Category", "Fonts" },
		{ "Comment", "/** Sets the font used for small engine text, used for most debug displays */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Small Font" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the font used for small engine text, used for most debug displays" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumFontName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Font" },
		{ "Category", "Fonts" },
		{ "Comment", "/** Sets the font used for medium engine text */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Medium Font" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the font used for medium engine text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LargeFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LargeFontName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Font" },
		{ "Category", "Fonts" },
		{ "Comment", "/** Sets the font used for large engine text */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Large Font" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the font used for large engine text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleFontName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Font" },
		{ "Category", "Fonts" },
		{ "Comment", "/** Sets the font used by the default Subtitle Manager */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Subtitle Font" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the font used by the default Subtitle Manager" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalFonts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalFontNames_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/** Sets additional fonts that will be loaded at startup and available using GetAdditionalFont. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets additional fonts that will be loaded at startup and available using GetAdditionalFont." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Sets the class to use for the game console summoned with ~ */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Console Class" },
		{ "MetaClass", "/Script/Engine.Console" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the class to use for the game console summoned with ~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameViewportClientClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameViewportClientClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Sets the class to use for the game viewport client, which can be overridden to change game-specific input and display behavior. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Game Viewport Client Class" },
		{ "MetaClass", "/Script/Engine.GameViewportClient" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the class to use for the game viewport client, which can be overridden to change game-specific input and display behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Sets the class to use for local players, which can be overridden to store game-specific information for a local player. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Local Player Class" },
		{ "MetaClass", "/Script/Engine.LocalPlayer" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the class to use for local players, which can be overridden to store game-specific information for a local player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSettingsClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Sets the class to use for WorldSettings, which can be overridden to store game-specific information on map/world. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "World Settings Class" },
		{ "MetaClass", "/Script/Engine.WorldSettings" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the class to use for WorldSettings, which can be overridden to store game-specific information on map/world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemClassName_MetaData[] = {
		{ "DisplayName", "Navigation System Class" },
		{ "MetaClass", "/Script/NavigationSystem.NavigationSystem" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemClass_MetaData[] = {
		{ "Comment", "/** Sets the class to use for NavigationSystem, which can be overridden to change game-specific navigation/AI behavior. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the class to use for NavigationSystem, which can be overridden to change game-specific navigation/AI behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfigClassName_MetaData[] = {
		{ "Comment", "/** Sets the Navigation System Config class, which can be overridden to change game-specific navigation/AI behavior. */" },
		{ "DisplayName", "Navigation System Config Class" },
		{ "MetaClass", "/Script/NavigationSystem.NavigationSystem" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the Navigation System Config class, which can be overridden to change game-specific navigation/AI behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfigClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceManagerClassName_MetaData[] = {
		{ "Comment", "/** Sets the AvoidanceManager class, which can be overridden to change AI crowd behavior. */" },
		{ "DisplayName", "Avoidance Manager Class" },
		{ "MetaClass", "/Script/Engine.AvoidanceManager" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the AvoidanceManager class, which can be overridden to change AI crowd behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceManagerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIControllerClassName_MetaData[] = {
		{ "Comment", "/** Sets the class to be used as the default AIController class for pawns. */" },
		{ "DisplayName", "Default AIController class for all Pawns" },
		{ "MetaClass", "/Script/AIModule.AIController" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the class to be used as the default AIController class for pawns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollisionHandlerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollisionHandlerClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Sets the PhysicsCollisionHandler class to use by default, which can be overridden to change game-specific behavior when objects collide using physics. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Physics Collision Handler Class" },
		{ "MetaClass", "/Script/Engine.PhysicsCollisionHandler" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the PhysicsCollisionHandler class to use by default, which can be overridden to change game-specific behavior when objects collide using physics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameUserSettingsClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Sets the GameUserSettings class, which can be overridden to support game-specific options for Graphics/Sound/Gameplay. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Game User Settings Class" },
		{ "MetaClass", "/Script/Engine.GameUserSettings" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the GameUserSettings class, which can be overridden to support game-specific options for Graphics/Sound/Gameplay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameUserSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameUserSettings_MetaData[] = {
		{ "Comment", "/** Global instance of the user game settings */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Global instance of the user game settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelScriptActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelScriptActorClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Sets the Level Script Actor class, which can be overridden to allow game-specific behavior in per-map blueprint scripting */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Level Script Actor Class" },
		{ "MetaClass", "/Script/Engine.LevelScriptActor" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the Level Script Actor class, which can be overridden to allow game-specific behavior in per-map blueprint scripting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlueprintBaseClassName_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Sets the base class to use for new blueprints created in the editor, configurable on a per-game basis */" },
		{ "DisplayName", "Default Blueprint Base Class" },
		{ "MetaClass", "/Script/CoreUObject.Object" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the base class to use for new blueprints created in the editor, configurable on a per-game basis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSingletonClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Sets the class for a global object spawned at startup to handle game-specific data. If empty, it will not spawn one */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Game Singleton Class" },
		{ "MetaClass", "/Script/CoreUObject.Object" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the class for a global object spawned at startup to handle game-specific data. If empty, it will not spawn one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSingleton_MetaData[] = {
		{ "Comment", "/** A UObject spawned at initialization time to handle game-specific data */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A UObject spawned at initialization time to handle game-specific data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetManagerClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Sets the class to spawn as the global AssetManager, configurable per game. If empty, it will not spawn one */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Asset Manager Class" },
		{ "MetaClass", "/Script/CoreUObject.Object" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the class to spawn as the global AssetManager, configurable per game. If empty, it will not spawn one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetManager_MetaData[] = {
		{ "Comment", "/** A UObject spawned at initialization time to handle runtime asset loading and management */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A UObject spawned at initialization time to handle runtime asset loading and management" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_MetaData[] = {
		{ "Comment", "/** A global default texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A global default texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextureName_MetaData[] = {
		{ "Comment", "/** Path of the global default texture that is used when no texture is specified. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the global default texture that is used when no texture is specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDiffuseTexture_MetaData[] = {
		{ "Comment", "/** A global default diffuse texture.*/" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A global default diffuse texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDiffuseTextureName_MetaData[] = {
		{ "Comment", "/** Path of the global default diffuse texture.*/" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the global default diffuse texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBSPVertexTexture_MetaData[] = {
		{ "Comment", "/** Texture used to render a vertex in the editor */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to render a vertex in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBSPVertexTextureName_MetaData[] = {
		{ "Comment", "/** Path of the texture used to render a vertex in the editor */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the texture used to render a vertex in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighFrequencyNoiseTexture_MetaData[] = {
		{ "Comment", "/** Texture used to get random image grain values for post processing */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to get random image grain values for post processing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighFrequencyNoiseTextureName_MetaData[] = {
		{ "Comment", "/** Path of the texture used to get random image grain values for post processing */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the texture used to get random image grain values for post processing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBokehTexture_MetaData[] = {
		{ "Comment", "/** Texture used to blur out of focus content, mimics the Bokeh shape of actual cameras */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to blur out of focus content, mimics the Bokeh shape of actual cameras" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBokehTextureName_MetaData[] = {
		{ "Comment", "/** Path of the texture used to blur out of focus content, mimics the Bokeh shape of actual cameras */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the texture used to blur out of focus content, mimics the Bokeh shape of actual cameras" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBloomKernelTexture_MetaData[] = {
		{ "Comment", "/** Texture used to bloom when using FFT, mimics characteristic bloom produced in a camera from a signle bright source */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to bloom when using FFT, mimics characteristic bloom produced in a camera from a signle bright source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBloomKernelTextureName_MetaData[] = {
		{ "Comment", "/** Path of the texture used to bloom when using FFT, mimics characteristic bloom produced in a camera from a signle bright source */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the texture used to bloom when using FFT, mimics characteristic bloom produced in a camera from a signle bright source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFilmGrainTexture_MetaData[] = {
		{ "Comment", "/** Texture used to film grain by default. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to film grain by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFilmGrainTextureName_MetaData[] = {
		{ "Comment", "/** Path of the texture used by film grain by default. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the texture used by film grain by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeMaterial_MetaData[] = {
		{ "Comment", "/** The material used to render wireframe meshes. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The material used to render wireframe meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material used to render wireframe meshes in the editor and debug tools. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used to render wireframe meshes in the editor and debug tools." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeomMaterial_MetaData[] = {
		{ "Comment", "/** A translucent material used to render things in geometry mode. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A translucent material used to render things in geometry mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeomMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the translucent material used to render things in geometry mode. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the translucent material used to render things in geometry mode." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMeshMaterial_MetaData[] = {
		{ "Comment", "/** A material used to render debug meshes. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render debug meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMeshMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the default material for debug mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the default material for debug mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteHiddenSectionMaterial_MetaData[] = {
		{ "Comment", "/** Material used for removing Nanite mesh sections from rasterization. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for removing Nanite mesh sections from rasterization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteHiddenSectionMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material used for removing Nanite mesh sections from rasterization. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used for removing Nanite mesh sections from rasterization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveMeshMaterial_MetaData[] = {
		{ "Comment", "/** A material used to render emissive meshes (e.g. light source surface). */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render emissive meshes (e.g. light source surface)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveMeshMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the default material for emissive mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the default material for emissive mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelColorationLitMaterial_MetaData[] = {
		{ "Comment", "/** Material used for visualizing level membership in lit view port modes. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for visualizing level membership in lit view port modes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelColorationLitMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material used for visualizing level membership in lit view port modes. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used for visualizing level membership in lit view port modes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelColorationUnlitMaterial_MetaData[] = {
		{ "Comment", "/** Material used for visualizing level membership in unlit view port modes. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for visualizing level membership in unlit view port modes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelColorationUnlitMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material used for visualizing level membership in unlit view port modes. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used for visualizing level membership in unlit view port modes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingTexelDensityMaterial_MetaData[] = {
		{ "Comment", "/** Material used for visualizing lighting only w/ lightmap texel density. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for visualizing lighting only w/ lightmap texel density." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingTexelDensityName_MetaData[] = {
		{ "Comment", "/** Path of the material used for visualizing lighting only w/ lightmap texel density. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used for visualizing lighting only w/ lightmap texel density." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadedLevelColorationLitMaterial_MetaData[] = {
		{ "Comment", "/** Material used for visualizing level membership in lit view port modes. Uses shading to show axis directions. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for visualizing level membership in lit view port modes. Uses shading to show axis directions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadedLevelColorationLitMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material used for visualizing level membership in lit view port modes. Uses shading to show axis directions. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used for visualizing level membership in lit view port modes. Uses shading to show axis directions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadedLevelColorationUnlitMaterial_MetaData[] = {
		{ "Comment", "/** Material used for visualizing level membership in unlit view port modes.  Uses shading to show axis directions. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for visualizing level membership in unlit view port modes.  Uses shading to show axis directions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadedLevelColorationUnlitMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material used for visualizing level membership in unlit view port modes.  Uses shading to show axis directions. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used for visualizing level membership in unlit view port modes.  Uses shading to show axis directions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveSurfaceMaterial_MetaData[] = {
		{ "Comment", "/** Material used to indicate that the associated BSP surface should be removed. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used to indicate that the associated BSP surface should be removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveSurfaceMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material used to indicate that the associated BSP surface should be removed. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used to indicate that the associated BSP surface should be removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaterial_MetaData[] = {
		{ "Comment", "/** Material used to visualize vertex colors as emissive */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used to visualize vertex colors as emissive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material used to visualize vertex colors as emissive */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used to visualize vertex colors as emissive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterial_ColorOnly_MetaData[] = {
		{ "Comment", "/** Material for visualizing vertex colors on meshes in the scene (color only, no alpha) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material for visualizing vertex colors on meshes in the scene (color only, no alpha)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterialName_ColorOnly_MetaData[] = {
		{ "Comment", "/** Path of the material for visualizing vertex colors on meshes in the scene (color only, no alpha) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material for visualizing vertex colors on meshes in the scene (color only, no alpha)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterial_AlphaAsColor_MetaData[] = {
		{ "Comment", "/** Material for visualizing vertex colors on meshes in the scene (alpha channel as color) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material for visualizing vertex colors on meshes in the scene (alpha channel as color)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterialName_AlphaAsColor_MetaData[] = {
		{ "Comment", "/** Path of the material for visualizing vertex colors on meshes in the scene (alpha channel as color) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material for visualizing vertex colors on meshes in the scene (alpha channel as color)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterial_RedOnly_MetaData[] = {
		{ "Comment", "/** Material for visualizing vertex colors on meshes in the scene (red only) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material for visualizing vertex colors on meshes in the scene (red only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterialName_RedOnly_MetaData[] = {
		{ "Comment", "/** Path of the material for visualizing vertex colors on meshes in the scene (red only) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material for visualizing vertex colors on meshes in the scene (red only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterial_GreenOnly_MetaData[] = {
		{ "Comment", "/** Material for visualizing vertex colors on meshes in the scene (green only) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material for visualizing vertex colors on meshes in the scene (green only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterialName_GreenOnly_MetaData[] = {
		{ "Comment", "/** Path of the material for visualizing vertex colors on meshes in the scene (green only) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material for visualizing vertex colors on meshes in the scene (green only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterial_BlueOnly_MetaData[] = {
		{ "Comment", "/** Material for visualizing vertex colors on meshes in the scene (blue only) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material for visualizing vertex colors on meshes in the scene (blue only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterialName_BlueOnly_MetaData[] = {
		{ "Comment", "/** Path of the material for visualizing vertex colors on meshes in the scene (blue only) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material for visualizing vertex colors on meshes in the scene (blue only)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeightMaterial_MetaData[] = {
		{ "Comment", "/** Material used to render bone weights on skeletal meshes */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used to render bone weights on skeletal meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeightMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material used to render bone weights on skeletal meshes */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used to render bone weights on skeletal meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterial_MetaData[] = {
		{ "Comment", "/** Materials used to render cloth properties on skeletal meshes */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Materials used to render cloth properties on skeletal meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterialWireframe_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterialWireframeInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterialName_MetaData[] = {
		{ "Comment", "/** Name of the material used to render cloth in the clothing tools */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of the material used to render cloth in the clothing tools" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterialWireframeName_MetaData[] = {
		{ "Comment", "/** Name of the material used to render cloth wireframe in the clothing tools */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of the material used to render cloth wireframe in the clothing tools" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialMaskMaterial_MetaData[] = {
		{ "Comment", "/** A material used to render physical material mask on mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render physical material mask on mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialMaskMaterialName_MetaData[] = {
		{ "Comment", "/** A material used to render physical material mask on mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render physical material mask on mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEditorMaterial_MetaData[] = {
		{ "Comment", "/** A material used to render debug meshes. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render debug meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFlattenMaterialName_MetaData[] = {
		{ "Comment", "/** A material used to flatten materials. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to flatten materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHLODFlattenMaterialName_MetaData[] = {
		{ "Comment", "/** A material used to flatten materials to VT textures. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to flatten materials to VT textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLandscapeFlattenMaterialName_MetaData[] = {
		{ "Comment", "/** A material used to flatten materials to VT textures, with the normals being in world space. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to flatten materials to VT textures, with the normals being in world space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFlattenMaterial_MetaData[] = {
		{ "Comment", "/** Materials used when flattening materials */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Materials used when flattening materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHLODFlattenMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLandscapeFlattenMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturePaintingMaskMaterial_MetaData[] = {
		{ "Comment", "/** A material used to render the debug texture painting mask on mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render the debug texture painting mask on mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturePaintingMaskMaterialName_MetaData[] = {
		{ "Comment", "/** A material used to render the debug texture painting mask on mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render the debug texture painting mask on mesh." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEditorMaterialName_MetaData[] = {
		{ "Comment", "/** A material used to render debug opaque material. Used in various animation editor viewport features. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render debug opaque material. Used in various animation editor viewport features." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterial_MetaData[] = {
		{ "Comment", "/** Material used to render constraint limits */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used to render constraint limits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialXAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialYAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialZ_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialZAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialPrismatic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidLightmapSettingsMaterial_MetaData[] = {
		{ "Comment", "/** Material that renders a message about lightmap settings being invalid. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material that renders a message about lightmap settings being invalid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidLightmapSettingsMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material that renders a message about lightmap settings being invalid. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material that renders a message about lightmap settings being invalid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewShadowsIndicatorMaterial_MetaData[] = {
		{ "Comment", "/** Material that renders a message about preview shadows being used. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material that renders a message about preview shadows being used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewShadowsIndicatorMaterialName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Material" },
		{ "Category", "DefaultMaterials" },
		{ "Comment", "/** Path of the material that renders a message about preview shadows being used. */" },
		{ "DisplayName", "Preview Shadows Indicator Material" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material that renders a message about preview shadows being used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowMaterial_MetaData[] = {
		{ "Comment", "/** Material that 'fakes' lighting, used for arrows, widgets. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material that 'fakes' lighting, used for arrows, widgets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowMaterialYellow_MetaData[] = {
		{ "Comment", "/** Arrow material instance with yellow color. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Arrow material instance with yellow color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material that 'fakes' lighting, used for arrows, widgets. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material that 'fakes' lighting, used for arrows, widgets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingOnlyBrightness_MetaData[] = {
		{ "Comment", "/** Color used for the lighting only render mode */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Color used for the lighting only render mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderComplexityColors_MetaData[] = {
		{ "Comment", "/** The colors used to render shader complexity. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render shader complexity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuadComplexityColors_MetaData[] = {
		{ "Comment", "/** The colors used to render quad complexity. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render quad complexity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightComplexityColors_MetaData[] = {
		{ "Comment", "/** The colors used to render light complexity. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render light complexity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StationaryLightOverlapColors_MetaData[] = {
		{ "Comment", "/** The colors used to render stationary light overlap. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render stationary light overlap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODColorationColors_MetaData[] = {
		{ "Comment", "/** The colors used to render LOD coloration. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render LOD coloration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODColorationColors_MetaData[] = {
		{ "Comment", "/** The colors used to render LOD coloration. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render LOD coloration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingAccuracyColors_MetaData[] = {
		{ "Comment", "/** The colors used for texture streaming accuracy debug view modes. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used for texture streaming accuracy debug view modes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSkinCacheVisualizationExcludedColor_MetaData[] = {
		{ "Comment", "/** The visualization color when sk mesh not using skin cache. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The visualization color when sk mesh not using skin cache." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSkinCacheVisualizationIncludedColor_MetaData[] = {
		{ "Comment", "/** The visualization color when sk mesh using skin cache. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The visualization color when sk mesh using skin cache." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSkinCacheVisualizationRecomputeTangentsColor_MetaData[] = {
		{ "Comment", "/** The visualization color when sk mesh using recompute tangents. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The visualization color when sk mesh using recompute tangents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSkinCacheVisualizationLowMemoryThresholdInMB_MetaData[] = {
		{ "Comment", "/** The memory visualization threshold in MB for a skin cache entry */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The memory visualization threshold in MB for a skin cache entry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSkinCacheVisualizationHighMemoryThresholdInMB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSkinCacheVisualizationLowMemoryColor_MetaData[] = {
		{ "Comment", "/** The memory visualization colors of skin cache */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The memory visualization colors of skin cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSkinCacheVisualizationMidMemoryColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSkinCacheVisualizationHighMemoryColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSkinCacheVisualizationRayTracingLODOffsetColors_MetaData[] = {
		{ "Comment", "/** The visualization colors of ray tracing LOD index offset from raster LOD */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The visualization colors of ray tracing LOD index offset from raster LOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPixelShaderAdditiveComplexityCount_MetaData[] = {
		{ "Comment", "/**\n\x09* Complexity limits for the various complexity view mode combinations.\n\x09* These limits are used to map instruction counts to ShaderComplexityColors.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Complexity limits for the various complexity view mode combinations.\nThese limits are used to map instruction counts to ShaderComplexityColors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxES3PixelShaderAdditiveComplexityCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLightMapDensity_MetaData[] = {
		{ "Comment", "/** Minimum lightmap density value for coloring. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Minimum lightmap density value for coloring." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdealLightMapDensity_MetaData[] = {
		{ "Comment", "/** Ideal lightmap density value for coloring. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Ideal lightmap density value for coloring." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLightMapDensity_MetaData[] = {
		{ "Comment", "/** Maximum lightmap density value for coloring. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Maximum lightmap density value for coloring." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderLightMapDensityGrayscale_MetaData[] = {
		{ "Comment", "/** If true, then render gray scale density. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If true, then render gray scale density." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderLightMapDensityGrayscaleScale_MetaData[] = {
		{ "Comment", "/** The scale factor when rendering gray scale density. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The scale factor when rendering gray scale density." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderLightMapDensityColorScale_MetaData[] = {
		{ "Comment", "/** The scale factor when rendering color density. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The scale factor when rendering color density." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMapDensityVertexMappedColor_MetaData[] = {
		{ "Comment", "/** The color to render vertex mapped objects in for LightMap Density view mode. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The color to render vertex mapped objects in for LightMap Density view mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMapDensitySelectedColor_MetaData[] = {
		{ "Comment", "/** The color to render selected objects in for LightMap Density view mode. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The color to render selected objects in for LightMap Density view mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatColorMappings_MetaData[] = {
		{ "Comment", "/** Colors used to display specific profiling stats */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Colors used to display specific profiling stats" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorBrushMaterial_MetaData[] = {
		{ "Comment", "/** A material used to render the sides of the builder brush/volumes/etc. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render the sides of the builder brush/volumes/etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorBrushMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the material used to render the sides of the builder brush/volumes/etc. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the material used to render the sides of the builder brush/volumes/etc." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysMaterial_MetaData[] = {
		{ "Comment", "/** PhysicalMaterial to use if none is defined for a particular object. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "PhysicalMaterial to use if none is defined for a particular object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysMaterialName_MetaData[] = {
		{ "Comment", "/** Path of the PhysicalMaterial to use if none is defined for a particular object. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the PhysicalMaterial to use if none is defined for a particular object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDestructiblePhysMaterial_MetaData[] = {
		{ "Comment", "/** PhysicalMaterial to use if none is defined for a Destructible object. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "PhysicalMaterial to use if none is defined for a Destructible object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDestructiblePhysMaterialName_MetaData[] = {
		{ "AllowedClasses", "/Script/PhysicsCore.PhysicalMaterial" },
		{ "Category", "DefaultMaterials" },
		{ "Comment", "/** Path of the PhysicalMaterial to use if none is defined for a particular object. */" },
		{ "DisplayName", "Destructible Physics Material" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the PhysicalMaterial to use if none is defined for a particular object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGameNameRedirects_MetaData[] = {
		{ "Comment", "/** Deprecated rules for redirecting renamed objects, replaced by the CoreRedirects system*/" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Deprecated rules for redirecting renamed objects, replaced by the CoreRedirects system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveClassRedirects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePluginRedirects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStructRedirects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreIntegratedSkinBRDFTexture_MetaData[] = {
		{ "Comment", "/** Texture used for pre-integrated skin shading */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used for pre-integrated skin shading" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreIntegratedSkinBRDFTextureName_MetaData[] = {
		{ "Comment", "/** Path of the texture used for pre-integrated skin shading */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the texture used for pre-integrated skin shading" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueNoiseScalarTexture_MetaData[] = {
		{ "Comment", "/** Tiled blue-noise texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Tiled blue-noise texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueNoiseVec2Texture_MetaData[] = {
		{ "Comment", "/** Spatial-temporal blue noise texture with two channel output */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Spatial-temporal blue noise texture with two channel output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueNoiseScalarTextureName_MetaData[] = {
		{ "Comment", "/** Path of the tiled blue-noise texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the tiled blue-noise texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueNoiseVec2TextureName_MetaData[] = {
		{ "Comment", "/** Path of the tiled blue-noise texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the tiled blue-noise texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlintTexture_MetaData[] = {
		{ "Comment", "/** Stable glint BSDF texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Stable glint BSDF texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlintTexture2_MetaData[] = {
		{ "Comment", "/** Stable glint BSDF texture with more variety to cover slope space and avoid circular artifact */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Stable glint BSDF texture with more variety to cover slope space and avoid circular artifact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlintTextureName_MetaData[] = {
		{ "Comment", "/** Path of the glint BSDF texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the glint BSDF texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlintTexture2Name_MetaData[] = {
		{ "Comment", "/** Path of the glint BSDF texture 2 */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the glint BSDF texture 2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleVolumeTexture_MetaData[] = {
		{ "Comment", "/** Simple volume LUT texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Simple volume LUT texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleVolumeTextureName_MetaData[] = {
		{ "Comment", "/** Path of the simple volume LUT texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the simple volume LUT texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleVolumeEnvTexture_MetaData[] = {
		{ "Comment", "/** Simple volume environment LUT texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Simple volume environment LUT texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleVolumeEnvTextureName_MetaData[] = {
		{ "Comment", "/** Path of the simple volume environment LUT texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the simple volume environment LUT texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniFontTexture_MetaData[] = {
		{ "Comment", "/** Texture used to do font rendering in shaders */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to do font rendering in shaders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniFontTextureName_MetaData[] = {
		{ "Comment", "/** Path of the texture used to do font rendering in shaders */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the texture used to do font rendering in shaders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapPlaceholderTexture_MetaData[] = {
		{ "Comment", "/** Texture used as a placeholder for terrain weight-maps to give the material the correct texture format. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used as a placeholder for terrain weight-maps to give the material the correct texture format." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapArrayPlaceholderTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapPlaceholderTextureName_MetaData[] = {
		{ "Comment", "/** Path of the texture used as a placeholder for terrain weight-maps to give the material the correct texture format. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the texture used as a placeholder for terrain weight-maps to give the material the correct texture format." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapArrayPlaceholderTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMapDensityTexture_MetaData[] = {
		{ "Comment", "/** Texture used to display LightMapDensity */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to display LightMapDensity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMapDensityTextureName_MetaData[] = {
		{ "Comment", "/** Path of the texture used to display LightMapDensity */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Path of the texture used to display LightMapDensity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameViewport_MetaData[] = {
		{ "Comment", "/** The view port representing the current game instance. Can be 0 so don't use without checking. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The view port representing the current game instance. Can be 0 so don't use without checking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeferredCommands_MetaData[] = {
		{ "Comment", "/** Array of deferred command strings/ execs that get executed at the end of the frame */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Array of deferred command strings/ execs that get executed at the end of the frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearClipPlane_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The distance of the camera's near clipping plane. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The distance of the camera's near clipping plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubtitlesEnabled_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/** Flag for completely disabling subtitles for localized sounds. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Flag for completely disabling subtitles for localized sounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubtitlesForcedOff_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/** Flag for forcibly disabling subtitles even if you try to turn them back on they will be off */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Flag for forcibly disabling subtitles even if you try to turn them back on they will be off" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLoopIterationCount_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "Comment", "/** Script maximum loop iteration count used as a threshold to warn users about script execution runaway */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Script maximum loop iteration count used as a threshold to warn users about script execution runaway" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBlueprintsTickByDefault_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "Comment", "// Controls whether Blueprint subclasses of actors or components can tick by default.\n//\n// Blueprints that derive from native C++ classes that have bCanEverTick=true will always be able to tick\n// Blueprints that derive from exactly AActor or UActorComponent will always be able to tick\n// Otherwise, they can tick as long as the parent doesn't have meta=(ChildCannotTick) and either bCanBlueprintsTickByDefault is true or the parent has meta=(ChildCanTick)\n" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Controls whether Blueprint subclasses of actors or components can tick by default.\n\nBlueprints that derive from native C++ classes that have bCanEverTick=true will always be able to tick\nBlueprints that derive from exactly AActor or UActorComponent will always be able to tick\nOtherwise, they can tick as long as the parent doesn't have meta=(ChildCannotTick) and either bCanBlueprintsTickByDefault is true or the parent has meta=(ChildCanTick)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeAnimBlueprintMemberVariableAccess_MetaData[] = {
		{ "Category", "Anim Blueprints" },
		{ "Comment", "/** Controls whether anim blueprint nodes that access member variables of their class directly should use the optimized path that avoids a thunk to the Blueprint VM. This will force all anim blueprints to be recompiled. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Controls whether anim blueprint nodes that access member variables of their class directly should use the optimized path that avoids a thunk to the Blueprint VM. This will force all anim blueprints to be recompiled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultiThreadedAnimationUpdate_MetaData[] = {
		{ "Category", "Anim Blueprints" },
		{ "Comment", "/** Controls whether by default we allow anim blueprint graph updates to be performed on non-game threads. This enables some extra checks in the anim blueprint compiler that will warn when unsafe operations are being attempted. This will force all anim blueprints to be recompiled. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Controls whether by default we allow anim blueprint graph updates to be performed on non-game threads. This enables some extra checks in the anim blueprint compiler that will warn when unsafe operations are being attempted. This will force all anim blueprints to be recompiled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEditorPSysRealtimeLOD_MetaData[] = {
		{ "Comment", "/** Controls whether cascade particle system LODs are updated in real time, or use the set value */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Controls whether cascade particle system LODs are updated in real time, or use the set value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** Whether to enable framerate smoothing. */" },
		{ "EditCondition", "!bUseFixedFrameRate" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether to enable framerate smoothing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** Whether to use a fixed framerate. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether to use a fixed framerate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMin", "15.0" },
		{ "Comment", "/** The fixed framerate to use. */" },
		{ "EditCondition", "bUseFixedFrameRate" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The fixed framerate to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedFrameRateRange_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** Range of framerates in which smoothing will kick in */" },
		{ "EditCondition", "!bUseFixedFrameRate" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Range of framerates in which smoothing will kick in" },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTimeStep_MetaData[] = {
		{ "Comment", "/** Controls how the Engine process the Framerate/Timestep */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Controls how the Engine process the Framerate/Timestep" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTimeStepClassName_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/**\n\x09 * Override how the Engine process the Framerate/Timestep.\n\x09 * This class will be responsible of updating the application Time and DeltaTime.\n\x09 * Can be used to synchronize the engine with another process (gen-lock).\n\x09 */" },
		{ "DisplayName", "Custom TimeStep" },
		{ "MetaClass", "/Script/Engine.EngineCustomTimeStep" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Override how the Engine process the Framerate/Timestep.\nThis class will be responsible of updating the application Time and DeltaTime.\nCan be used to synchronize the engine with another process (gen-lock)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeProvider_MetaData[] = {
		{ "Comment", "/** Controls the Engine's timecode. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Controls the Engine's timecode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeProviderClassName_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** Set TimecodeProvider when the engine is started. */" },
		{ "DisplayName", "Timecode Provider" },
		{ "MetaClass", "/Script/Engine.TimecodeProvider" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Set TimecodeProvider when the engine is started." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateDefaultTimecode_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/**\n\x09 * Generate a default timecode from the computer clock when there is no timecode provider.\n\x09 * On desktop, the system time will be used and will behave as if a USystemTimecodeProvider was set.\n\x09 * On console, the high performance clock will be used. That may introduce drift over time.\n\x09 * If you wish to use the system time on console, set the timecode provider to USystemeTimecodeProvider.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Generate a default timecode from the computer clock when there is no timecode provider.\nOn desktop, the system time will be used and will behave as if a USystemTimecodeProvider was set.\nOn console, the high performance clock will be used. That may introduce drift over time.\nIf you wish to use the system time on console, set the timecode provider to USystemeTimecodeProvider." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateDefaultTimecodeFrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** When generating a default timecode (bGenerateDefaultTimecode is true and no timecode provider is set) at which frame rate it should be generated (number of frames). */" },
		{ "EditCondition", "bGenerateDefaultTimecode" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "When generating a default timecode (bGenerateDefaultTimecode is true and no timecode provider is set) at which frame rate it should be generated (number of frames)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateDefaultTimecodeFrameDelay_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** Number of frames to subtract from generated default timecode. */" },
		{ "EditCondition", "bGenerateDefaultTimecode" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Number of frames to subtract from generated default timecode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckForMultiplePawnsSpawnedInAFrame_MetaData[] = {
		{ "Comment", "/** \n\x09 * Whether we should check for more than N pawns spawning in a single frame.\n\x09 * Basically, spawning pawns and all of their attachments can be slow.  And on consoles it\n\x09 * can be really slow.  If enabled, we will display an on-screen warning whenever this multi-spawn occurs.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether we should check for more than N pawns spawning in a single frame.\nBasically, spawning pawns and all of their attachments can be slow.  And on consoles it\ncan be really slow.  If enabled, we will display an on-screen warning whenever this multi-spawn occurs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPawnsAllowedToBeSpawnedInAFrame_MetaData[] = {
		{ "Comment", "/** If bCheckForMultiplePawnsSpawnedInAFrame==true, then we will check to see that no more than this number of pawns are spawned in a frame. **/" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If bCheckForMultiplePawnsSpawnedInAFrame==true, then we will check to see that no more than this number of pawns are spawned in a frame. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldGenerateLowQualityLightmaps_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether or not the LQ lightmaps should be generated during lighting rebuilds.  This has been moved to r.SupportLowQualityLightmaps.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether or not the LQ lightmaps should be generated during lighting rebuilds.  This has been moved to r.SupportLowQualityLightmaps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_WorldBox_MetaData[] = {
		{ "Comment", "// Various Colors used for editor and debug rendering\n" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Various Colors used for editor and debug rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_BrushWire_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_AddWire_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_SubtractWire_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_SemiSolidWire_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_NonSolidWire_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_WireBackground_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_ScaleBoxHi_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_VolumeCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_BSPCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_OrthoBackground_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_Volume_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_BrushShape_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameScreenshotSaveDirectory_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "Comment", "/** The save directory for newly created screenshots */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The save directory for newly created screenshots" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseStaticMeshMinLODPerQualityLevels_MetaData[] = {
		{ "Category", "PerQualityLevelProperty" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSkeletalMeshMinLODPerQualityLevels_MetaData[] = {
		{ "Category", "PerQualityLevelProperty" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseGrassVarityPerQualityLevels_MetaData[] = {
		{ "Category", "PerQualityLevelProperty" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionType_MetaData[] = {
		{ "Comment", "/** The state of the current map transition.  */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The state of the current map transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionDescription_MetaData[] = {
		{ "Comment", "/** The current transition description text. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The current transition description text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionGameMode_MetaData[] = {
		{ "Comment", "/** The gamemode for the destination map */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The gamemode for the destination map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMatureLanguage_MetaData[] = {
		{ "Comment", "/** Whether to play mature language sound nodes */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether to play mature language sound nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationThreshold_MetaData[] = {
		{ "Comment", "/** camera rotation (deg) beyond which occlusion queries are ignored from previous frame (because they are likely not valid) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "camera rotation (deg) beyond which occlusion queries are ignored from previous frame (because they are likely not valid)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTranslationThreshold_MetaData[] = {
		{ "Comment", "/** camera movement beyond which occlusion queries are ignored from previous frame (because they are likely not valid) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "camera movement beyond which occlusion queries are ignored from previous frame (because they are likely not valid)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveProbablyVisibleTime_MetaData[] = {
		{ "Comment", "/** The amount of time a primitive is considered to be probably visible after it was last actually visible. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The amount of time a primitive is considered to be probably visible after it was last actually visible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxOcclusionPixelsFraction_MetaData[] = {
		{ "Comment", "/** Max screen pixel fraction where retesting when unoccluded is worth the GPU time. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Max screen pixel fraction where retesting when unoccluded is worth the GPU time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseOnLossOfFocus_MetaData[] = {
		{ "Comment", "/** Whether to pause the game if focus is lost. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether to pause the game if focus is lost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxParticleResize_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The maximum allowed size to a ParticleEmitterInstance::Resize call.\n\x09 *\x09If larger, the function will return without resizing.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The maximum allowed size to a ParticleEmitterInstance::Resize call.\nIf larger, the function will return without resizing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxParticleResizeWarn_MetaData[] = {
		{ "Comment", "/** If the resize request is larger than this, spew out a warning to the log */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If the resize request is larger than this, spew out a warning to the log" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingDroppedNotes_MetaData[] = {
		{ "Comment", "/** List of notes to place during Play in Editor */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "List of notes to place during Play in Editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetClientTicksPerSecond_MetaData[] = {
		{ "Comment", "/** Number of times to tick each client per second */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Number of times to tick each client per second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayGamma_MetaData[] = {
		{ "Comment", "/** Current display gamma setting */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Current display gamma setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDesiredFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum desired framerate setting, below this frame rate visual detail may be lowered */" },
		{ "EditCondition", "!bUseFixedFrameRate" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Minimum desired framerate setting, below this frame rate visual detail may be lowered" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectedMaterialColor_MetaData[] = {
		{ "Comment", "/** Default color of selected objects in the level viewport (additive) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Default color of selected objects in the level viewport (additive)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMaterialColor_MetaData[] = {
		{ "Comment", "/** Color of selected objects in the level viewport (additive) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Color of selected objects in the level viewport (additive)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionOutlineColor_MetaData[] = {
		{ "Comment", "/** Color of the selection outline color.  Generally the same as selected material color unless the selection material color is being overridden */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Color of the selection outline color.  Generally the same as selected material color unless the selection material color is being overridden" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubduedSelectionOutlineColor_MetaData[] = {
		{ "Comment", "/** Subdued version of the selection outline color. Used for indicating sub-selection of components vs actors */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Subdued version of the selection outline color. Used for indicating sub-selection of components vs actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMaterialColorOverride_MetaData[] = {
		{ "Comment", "/** An override to use in some cases instead of the selected material color */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "An override to use in some cases instead of the selected material color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverridingSelectedColor_MetaData[] = {
		{ "Comment", "/** Whether or not selection color is being overridden */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether or not selection color is being overridden" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOnScreenDebugMessages_MetaData[] = {
		{ "Comment", "/** If true, then disable OnScreenDebug messages. Can be toggled in real-time. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If true, then disable OnScreenDebug messages. Can be toggled in real-time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOnScreenDebugMessagesDisplay_MetaData[] = {
		{ "Comment", "/** If true, then disable the display of OnScreenDebug messages (used when running) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If true, then disable the display of OnScreenDebug messages (used when running)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressMapWarnings_MetaData[] = {
		{ "Comment", "/** If true, then skip drawing map warnings on screen even in non (UE_BUILD_SHIPPING || UE_BUILD_TEST) builds */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If true, then skip drawing map warnings on screen even in non (UE_BUILD_SHIPPING || UE_BUILD_TEST) builds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableAILogging_MetaData[] = {
		{ "Comment", "/** determines whether AI logging should be processed or not */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "determines whether AI logging should be processed or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVisualLogRecordingOnStart_MetaData[] = {
		{ "Comment", "/** If true, the visual logger will start recording as soon as the engine starts */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If true, the visual logger will start recording as soon as the engine starts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSaverInhibitorSemaphore_MetaData[] = {
		{ "Comment", "/** Semaphore to control screen saver inhibitor thread access. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Semaphore to control screen saver inhibitor thread access." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockReadOnlyLevels_MetaData[] = {
		{ "Comment", "/** true if the the user cannot modify levels that are read only. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "true if the the user cannot modify levels that are read only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleEventManagerClassPath_MetaData[] = {
		{ "Comment", "/** Sets the class to use to spawn a ParticleEventManager that can handle game-specific particle system behavior */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Sets the class to use to spawn a ParticleEventManager that can handle game-specific particle system behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionHighlightIntensity_MetaData[] = {
		{ "Comment", "/** Used to alter the intensity level of the selection highlight on selected objects */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Used to alter the intensity level of the selection highlight on selected objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BSPSelectionHighlightIntensity_MetaData[] = {
		{ "Comment", "/** Used to alter the intensity level of the selection highlight on selected BSP surfaces */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Used to alter the intensity level of the selection highlight on selected BSP surfaces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionHighlightIntensityBillboards_MetaData[] = {
		{ "Comment", "/** Used to alter the intensity level of the selection highlight on selected billboard objects */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Used to alter the intensity level of the selection highlight on selected billboard objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalNetTravelCount_MetaData[] = {
		{ "Comment", "/** Increments every time a non-seamless travel happens on a server, to generate net session id's. Written to config to preserve id upon crash. */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Increments every time a non-seamless travel happens on a server, to generate net session id's. Written to config to preserve id upon crash." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverDefinitions_MetaData[] = {
		{ "Comment", "/** A list of named UNetDriver definitions */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A list of named UNetDriver definitions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IrisNetDriverConfigs_MetaData[] = {
		{ "Comment", "/** A list of Iris NetDriverConfigs */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A list of Iris NetDriverConfigs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerActors_MetaData[] = {
		{ "Comment", "/** A configurable list of actors that are automatically spawned upon server startup (just prior to InitGame) */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A configurable list of actors that are automatically spawned upon server startup (just prior to InitGame)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeServerActors_MetaData[] = {
		{ "Comment", "/** Runtime-modified list of server actors, allowing plugins to use serveractors, without permanently adding them to config files */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Runtime-modified list of server actors, allowing plugins to use serveractors, without permanently adding them to config files" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetErrorLogInterval_MetaData[] = {
		{ "Comment", "/** Amount of time in seconds between network error logging */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Amount of time in seconds between network error logging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartedLoadMapMovie_MetaData[] = {
		{ "Comment", "/**\n\x09 * true if the loading movie was started during LoadMap().\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "true if the loading movie was started during LoadMap()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextWorldContextHandle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TinyFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TinyFontName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmallFontName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediumFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediumFontName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LargeFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LargeFontName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubtitleFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitleFontName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalFonts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalFonts;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalFontNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalFontNames;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ConsoleClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameViewportClientClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameViewportClientClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LocalPlayerClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPlayerClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WorldSettingsClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSettingsClassName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigationSystemClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NavigationSystemClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigationSystemConfigClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NavigationSystemConfigClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvoidanceManagerClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AvoidanceManagerClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AIControllerClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PhysicsCollisionHandlerClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsCollisionHandlerClassName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameUserSettingsClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameUserSettingsClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameUserSettings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LevelScriptActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelScriptActorClassName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBlueprintBaseClassName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameSingletonClassName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameSingleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetManagerClassName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultDiffuseTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDiffuseTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBSPVertexTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBSPVertexTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighFrequencyNoiseTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HighFrequencyNoiseTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBokehTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBokehTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBloomKernelTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBloomKernelTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultFilmGrainTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFilmGrainTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WireframeMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WireframeMaterialName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeomMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeomMaterialName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugMeshMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugMeshMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NaniteHiddenSectionMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NaniteHiddenSectionMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmissiveMeshMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveMeshMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelColorationLitMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelColorationLitMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelColorationUnlitMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelColorationUnlitMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightingTexelDensityMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LightingTexelDensityName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShadedLevelColorationLitMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShadedLevelColorationLitMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShadedLevelColorationUnlitMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShadedLevelColorationUnlitMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveSurfaceMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveSurfaceMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VertexColorMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VertexColorMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VertexColorViewModeMaterial_ColorOnly;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VertexColorViewModeMaterialName_ColorOnly;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VertexColorViewModeMaterial_AlphaAsColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VertexColorViewModeMaterialName_AlphaAsColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VertexColorViewModeMaterial_RedOnly;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VertexColorViewModeMaterialName_RedOnly;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VertexColorViewModeMaterial_GreenOnly;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VertexColorViewModeMaterialName_GreenOnly;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VertexColorViewModeMaterial_BlueOnly;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VertexColorViewModeMaterialName_BlueOnly;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoneWeightMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneWeightMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothPaintMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothPaintMaterialWireframe;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothPaintMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothPaintMaterialWireframeInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClothPaintMaterialName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClothPaintMaterialWireframeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterialMaskMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalMaterialMaskMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugEditorMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFlattenMaterialName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultHLODFlattenMaterialName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLandscapeFlattenMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultFlattenMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultHLODFlattenMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultLandscapeFlattenMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TexturePaintingMaskMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TexturePaintingMaskMaterialName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugEditorMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialXAxis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialYAxis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialZAxis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialPrismatic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvalidLightmapSettingsMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidLightmapSettingsMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewShadowsIndicatorMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewShadowsIndicatorMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowMaterialYellow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrowMaterialName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingOnlyBrightness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShaderComplexityColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShaderComplexityColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuadComplexityColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuadComplexityColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightComplexityColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LightComplexityColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StationaryLightOverlapColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StationaryLightOverlapColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODColorationColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODColorationColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HLODColorationColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HLODColorationColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingAccuracyColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingAccuracyColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GPUSkinCacheVisualizationExcludedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GPUSkinCacheVisualizationIncludedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GPUSkinCacheVisualizationRecomputeTangentsColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GPUSkinCacheVisualizationLowMemoryThresholdInMB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GPUSkinCacheVisualizationHighMemoryThresholdInMB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GPUSkinCacheVisualizationLowMemoryColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GPUSkinCacheVisualizationMidMemoryColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GPUSkinCacheVisualizationHighMemoryColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GPUSkinCacheVisualizationRayTracingLODOffsetColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GPUSkinCacheVisualizationRayTracingLODOffsetColors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPixelShaderAdditiveComplexityCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxES3PixelShaderAdditiveComplexityCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLightMapDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdealLightMapDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLightMapDensity;
	static void NewProp_bRenderLightMapDensityGrayscale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderLightMapDensityGrayscale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderLightMapDensityGrayscaleScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderLightMapDensityColorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightMapDensityVertexMappedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightMapDensitySelectedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatColorMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatColorMappings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorBrushMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorBrushMaterialName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultPhysMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPhysMaterialName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultDestructiblePhysMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDestructiblePhysMaterialName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGameNameRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGameNameRedirects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveClassRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveClassRedirects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivePluginRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivePluginRedirects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveStructRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveStructRedirects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreIntegratedSkinBRDFTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreIntegratedSkinBRDFTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueNoiseScalarTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueNoiseVec2Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueNoiseScalarTextureName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueNoiseVec2TextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlintTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlintTexture2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlintTextureName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlintTexture2Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimpleVolumeTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleVolumeTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimpleVolumeEnvTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleVolumeEnvTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniFontTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MiniFontTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightMapPlaceholderTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightMapArrayPlaceholderTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightMapPlaceholderTextureName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightMapArrayPlaceholderTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightMapDensityTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightMapDensityTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameViewport;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeferredCommands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeferredCommands;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NearClipPlane;
	static void NewProp_bSubtitlesEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtitlesEnabled;
	static void NewProp_bSubtitlesForcedOff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtitlesForcedOff;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumLoopIterationCount;
	static void NewProp_bCanBlueprintsTickByDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBlueprintsTickByDefault;
	static void NewProp_bOptimizeAnimBlueprintMemberVariableAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeAnimBlueprintMemberVariableAccess;
	static void NewProp_bAllowMultiThreadedAnimationUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultiThreadedAnimationUpdate;
	static void NewProp_bEnableEditorPSysRealtimeLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEditorPSysRealtimeLOD;
	static void NewProp_bSmoothFrameRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothFrameRate;
	static void NewProp_bUseFixedFrameRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedFrameRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedFrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedFrameRateRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomTimeStepClassName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimecodeProvider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeProviderClassName;
	static void NewProp_bGenerateDefaultTimecode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateDefaultTimecode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerateDefaultTimecodeFrameRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GenerateDefaultTimecodeFrameDelay;
	static void NewProp_bCheckForMultiplePawnsSpawnedInAFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckForMultiplePawnsSpawnedInAFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPawnsAllowedToBeSpawnedInAFrame;
	static void NewProp_bShouldGenerateLowQualityLightmaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldGenerateLowQualityLightmaps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_WorldBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_BrushWire;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_AddWire;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_SubtractWire;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_SemiSolidWire;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_NonSolidWire;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_WireBackground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_ScaleBoxHi;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_VolumeCollision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_BSPCollision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_OrthoBackground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_Volume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_BrushShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameScreenshotSaveDirectory;
	static void NewProp_UseStaticMeshMinLODPerQualityLevels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseStaticMeshMinLODPerQualityLevels;
	static void NewProp_UseSkeletalMeshMinLODPerQualityLevels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSkeletalMeshMinLODPerQualityLevels;
	static void NewProp_UseGrassVarityPerQualityLevels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseGrassVarityPerQualityLevels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransitionDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransitionGameMode;
	static void NewProp_bAllowMatureLanguage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMatureLanguage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraTranslationThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimitiveProbablyVisibleTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOcclusionPixelsFraction;
	static void NewProp_bPauseOnLossOfFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseOnLossOfFocus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxParticleResize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxParticleResizeWarn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingDroppedNotes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingDroppedNotes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetClientTicksPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayGamma;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDesiredFrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSelectedMaterialColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedMaterialColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionOutlineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubduedSelectionOutlineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedMaterialColorOverride;
	static void NewProp_bIsOverridingSelectedColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverridingSelectedColor;
	static void NewProp_bEnableOnScreenDebugMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOnScreenDebugMessages;
	static void NewProp_bEnableOnScreenDebugMessagesDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOnScreenDebugMessagesDisplay;
	static void NewProp_bSuppressMapWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressMapWarnings;
	static void NewProp_bDisableAILogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAILogging;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_bEnableVisualLogRecordingOnStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScreenSaverInhibitorSemaphore;
	static void NewProp_bLockReadOnlyLevels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockReadOnlyLevels;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParticleEventManagerClassPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectionHighlightIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BSPSelectionHighlightIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectionHighlightIntensityBillboards;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GlobalNetTravelCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetDriverDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NetDriverDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IrisNetDriverConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IrisNetDriverConfigs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServerActors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RuntimeServerActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeServerActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetErrorLogInterval;
	static void NewProp_bStartedLoadMapMovie_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartedLoadMapMovie;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextWorldContextHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TinyFont = { "TinyFont", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, TinyFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TinyFont_MetaData), NewProp_TinyFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TinyFontName = { "TinyFontName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, TinyFontName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TinyFontName_MetaData), NewProp_TinyFontName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SmallFont = { "SmallFont", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SmallFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallFont_MetaData), NewProp_SmallFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SmallFontName = { "SmallFontName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SmallFontName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallFontName_MetaData), NewProp_SmallFontName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MediumFont = { "MediumFont", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MediumFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumFont_MetaData), NewProp_MediumFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MediumFontName = { "MediumFontName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MediumFontName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumFontName_MetaData), NewProp_MediumFontName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LargeFont = { "LargeFont", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LargeFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LargeFont_MetaData), NewProp_LargeFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LargeFontName = { "LargeFontName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LargeFontName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LargeFontName_MetaData), NewProp_LargeFontName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFont = { "SubtitleFont", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SubtitleFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleFont_MetaData), NewProp_SubtitleFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFontName = { "SubtitleFontName", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SubtitleFontName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleFontName_MetaData), NewProp_SubtitleFontName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts_Inner = { "AdditionalFonts", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts = { "AdditionalFonts", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, AdditionalFonts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalFonts_MetaData), NewProp_AdditionalFonts_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames_Inner = { "AdditionalFontNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames = { "AdditionalFontNames", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, AdditionalFontNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalFontNames_MetaData), NewProp_AdditionalFontNames_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClass = { "ConsoleClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ConsoleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UConsole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsoleClass_MetaData), NewProp_ConsoleClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClassName = { "ConsoleClassName", nullptr, (EPropertyFlags)0x0010000002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ConsoleClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsoleClassName_MetaData), NewProp_ConsoleClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClass = { "GameViewportClientClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GameViewportClientClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameViewportClientClass_MetaData), NewProp_GameViewportClientClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClassName = { "GameViewportClientClassName", nullptr, (EPropertyFlags)0x0010000002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GameViewportClientClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameViewportClientClassName_MetaData), NewProp_GameViewportClientClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClass = { "LocalPlayerClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LocalPlayerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPlayerClass_MetaData), NewProp_LocalPlayerClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClassName = { "LocalPlayerClassName", nullptr, (EPropertyFlags)0x0010000002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LocalPlayerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPlayerClassName_MetaData), NewProp_LocalPlayerClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClass = { "WorldSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, WorldSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWorldSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSettingsClass_MetaData), NewProp_WorldSettingsClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClassName = { "WorldSettingsClassName", nullptr, (EPropertyFlags)0x0010000002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, WorldSettingsClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSettingsClassName_MetaData), NewProp_WorldSettingsClassName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClassName = { "NavigationSystemClassName", nullptr, (EPropertyFlags)0x0010000002044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NavigationSystemClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationSystemClassName_MetaData), NewProp_NavigationSystemClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClass = { "NavigationSystemClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NavigationSystemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationSystemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationSystemClass_MetaData), NewProp_NavigationSystemClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClassName = { "NavigationSystemConfigClassName", nullptr, (EPropertyFlags)0x0010000002044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NavigationSystemConfigClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationSystemConfigClassName_MetaData), NewProp_NavigationSystemConfigClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClass = { "NavigationSystemConfigClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NavigationSystemConfigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationSystemConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationSystemConfigClass_MetaData), NewProp_NavigationSystemConfigClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClassName = { "AvoidanceManagerClassName", nullptr, (EPropertyFlags)0x0010000002044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, AvoidanceManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidanceManagerClassName_MetaData), NewProp_AvoidanceManagerClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClass = { "AvoidanceManagerClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, AvoidanceManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAvoidanceManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidanceManagerClass_MetaData), NewProp_AvoidanceManagerClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AIControllerClassName = { "AIControllerClassName", nullptr, (EPropertyFlags)0x0010000002044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, AIControllerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIControllerClassName_MetaData), NewProp_AIControllerClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClass = { "PhysicsCollisionHandlerClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, PhysicsCollisionHandlerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsCollisionHandlerClass_MetaData), NewProp_PhysicsCollisionHandlerClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClassName = { "PhysicsCollisionHandlerClassName", nullptr, (EPropertyFlags)0x0010040002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, PhysicsCollisionHandlerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsCollisionHandlerClassName_MetaData), NewProp_PhysicsCollisionHandlerClassName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClassName = { "GameUserSettingsClassName", nullptr, (EPropertyFlags)0x0010040002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GameUserSettingsClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameUserSettingsClassName_MetaData), NewProp_GameUserSettingsClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClass = { "GameUserSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GameUserSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameUserSettingsClass_MetaData), NewProp_GameUserSettingsClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettings = { "GameUserSettings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GameUserSettings), Z_Construct_UClass_UGameUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameUserSettings_MetaData), NewProp_GameUserSettings_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClass = { "LevelScriptActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LevelScriptActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALevelScriptActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelScriptActorClass_MetaData), NewProp_LevelScriptActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClassName = { "LevelScriptActorClassName", nullptr, (EPropertyFlags)0x0010000002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LevelScriptActorClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelScriptActorClassName_MetaData), NewProp_LevelScriptActorClassName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBlueprintBaseClassName = { "DefaultBlueprintBaseClassName", nullptr, (EPropertyFlags)0x0010040002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultBlueprintBaseClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBlueprintBaseClassName_MetaData), NewProp_DefaultBlueprintBaseClassName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameSingletonClassName = { "GameSingletonClassName", nullptr, (EPropertyFlags)0x0010040002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GameSingletonClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSingletonClassName_MetaData), NewProp_GameSingletonClassName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameSingleton = { "GameSingleton", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GameSingleton), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSingleton_MetaData), NewProp_GameSingleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AssetManagerClassName = { "AssetManagerClassName", nullptr, (EPropertyFlags)0x0010040002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, AssetManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetManagerClassName_MetaData), NewProp_AssetManagerClassName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AssetManager = { "AssetManager", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, AssetManager), Z_Construct_UClass_UAssetManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetManager_MetaData), NewProp_AssetManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTexture = { "DefaultTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTexture_MetaData), NewProp_DefaultTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTextureName = { "DefaultTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTextureName_MetaData), NewProp_DefaultTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTexture = { "DefaultDiffuseTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultDiffuseTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDiffuseTexture_MetaData), NewProp_DefaultDiffuseTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTextureName = { "DefaultDiffuseTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultDiffuseTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDiffuseTextureName_MetaData), NewProp_DefaultDiffuseTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTexture = { "DefaultBSPVertexTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultBSPVertexTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBSPVertexTexture_MetaData), NewProp_DefaultBSPVertexTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTextureName = { "DefaultBSPVertexTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultBSPVertexTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBSPVertexTextureName_MetaData), NewProp_DefaultBSPVertexTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTexture = { "HighFrequencyNoiseTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, HighFrequencyNoiseTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighFrequencyNoiseTexture_MetaData), NewProp_HighFrequencyNoiseTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTextureName = { "HighFrequencyNoiseTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, HighFrequencyNoiseTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighFrequencyNoiseTextureName_MetaData), NewProp_HighFrequencyNoiseTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTexture = { "DefaultBokehTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultBokehTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBokehTexture_MetaData), NewProp_DefaultBokehTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTextureName = { "DefaultBokehTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultBokehTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBokehTextureName_MetaData), NewProp_DefaultBokehTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTexture = { "DefaultBloomKernelTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultBloomKernelTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBloomKernelTexture_MetaData), NewProp_DefaultBloomKernelTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTextureName = { "DefaultBloomKernelTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultBloomKernelTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBloomKernelTextureName_MetaData), NewProp_DefaultBloomKernelTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultFilmGrainTexture = { "DefaultFilmGrainTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultFilmGrainTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFilmGrainTexture_MetaData), NewProp_DefaultFilmGrainTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultFilmGrainTextureName = { "DefaultFilmGrainTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultFilmGrainTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFilmGrainTextureName_MetaData), NewProp_DefaultFilmGrainTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterial = { "WireframeMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, WireframeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeMaterial_MetaData), NewProp_WireframeMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterialName = { "WireframeMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, WireframeMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeMaterialName_MetaData), NewProp_WireframeMaterialName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterial = { "GeomMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GeomMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeomMaterial_MetaData), NewProp_GeomMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterialName = { "GeomMaterialName", nullptr, (EPropertyFlags)0x0010000800044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GeomMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeomMaterialName_MetaData), NewProp_GeomMaterialName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterial = { "DebugMeshMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DebugMeshMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMeshMaterial_MetaData), NewProp_DebugMeshMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterialName = { "DebugMeshMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DebugMeshMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMeshMaterialName_MetaData), NewProp_DebugMeshMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NaniteHiddenSectionMaterial = { "NaniteHiddenSectionMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NaniteHiddenSectionMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteHiddenSectionMaterial_MetaData), NewProp_NaniteHiddenSectionMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NaniteHiddenSectionMaterialName = { "NaniteHiddenSectionMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NaniteHiddenSectionMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteHiddenSectionMaterialName_MetaData), NewProp_NaniteHiddenSectionMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_EmissiveMeshMaterial = { "EmissiveMeshMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, EmissiveMeshMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmissiveMeshMaterial_MetaData), NewProp_EmissiveMeshMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_EmissiveMeshMaterialName = { "EmissiveMeshMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, EmissiveMeshMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmissiveMeshMaterialName_MetaData), NewProp_EmissiveMeshMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterial = { "LevelColorationLitMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LevelColorationLitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelColorationLitMaterial_MetaData), NewProp_LevelColorationLitMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterialName = { "LevelColorationLitMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LevelColorationLitMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelColorationLitMaterialName_MetaData), NewProp_LevelColorationLitMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterial = { "LevelColorationUnlitMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LevelColorationUnlitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelColorationUnlitMaterial_MetaData), NewProp_LevelColorationUnlitMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterialName = { "LevelColorationUnlitMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LevelColorationUnlitMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelColorationUnlitMaterialName_MetaData), NewProp_LevelColorationUnlitMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityMaterial = { "LightingTexelDensityMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LightingTexelDensityMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingTexelDensityMaterial_MetaData), NewProp_LightingTexelDensityMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityName = { "LightingTexelDensityName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LightingTexelDensityName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingTexelDensityName_MetaData), NewProp_LightingTexelDensityName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterial = { "ShadedLevelColorationLitMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ShadedLevelColorationLitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadedLevelColorationLitMaterial_MetaData), NewProp_ShadedLevelColorationLitMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterialName = { "ShadedLevelColorationLitMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ShadedLevelColorationLitMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadedLevelColorationLitMaterialName_MetaData), NewProp_ShadedLevelColorationLitMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterial = { "ShadedLevelColorationUnlitMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ShadedLevelColorationUnlitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadedLevelColorationUnlitMaterial_MetaData), NewProp_ShadedLevelColorationUnlitMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterialName = { "ShadedLevelColorationUnlitMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ShadedLevelColorationUnlitMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadedLevelColorationUnlitMaterialName_MetaData), NewProp_ShadedLevelColorationUnlitMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterial = { "RemoveSurfaceMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, RemoveSurfaceMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveSurfaceMaterial_MetaData), NewProp_RemoveSurfaceMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterialName = { "RemoveSurfaceMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, RemoveSurfaceMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveSurfaceMaterialName_MetaData), NewProp_RemoveSurfaceMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterial = { "VertexColorMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorMaterial_MetaData), NewProp_VertexColorMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterialName = { "VertexColorMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorMaterialName_MetaData), NewProp_VertexColorMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_ColorOnly = { "VertexColorViewModeMaterial_ColorOnly", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterial_ColorOnly), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorViewModeMaterial_ColorOnly_MetaData), NewProp_VertexColorViewModeMaterial_ColorOnly_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_ColorOnly = { "VertexColorViewModeMaterialName_ColorOnly", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterialName_ColorOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorViewModeMaterialName_ColorOnly_MetaData), NewProp_VertexColorViewModeMaterialName_ColorOnly_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_AlphaAsColor = { "VertexColorViewModeMaterial_AlphaAsColor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterial_AlphaAsColor), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorViewModeMaterial_AlphaAsColor_MetaData), NewProp_VertexColorViewModeMaterial_AlphaAsColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_AlphaAsColor = { "VertexColorViewModeMaterialName_AlphaAsColor", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterialName_AlphaAsColor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorViewModeMaterialName_AlphaAsColor_MetaData), NewProp_VertexColorViewModeMaterialName_AlphaAsColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_RedOnly = { "VertexColorViewModeMaterial_RedOnly", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterial_RedOnly), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorViewModeMaterial_RedOnly_MetaData), NewProp_VertexColorViewModeMaterial_RedOnly_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_RedOnly = { "VertexColorViewModeMaterialName_RedOnly", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterialName_RedOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorViewModeMaterialName_RedOnly_MetaData), NewProp_VertexColorViewModeMaterialName_RedOnly_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_GreenOnly = { "VertexColorViewModeMaterial_GreenOnly", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterial_GreenOnly), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorViewModeMaterial_GreenOnly_MetaData), NewProp_VertexColorViewModeMaterial_GreenOnly_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_GreenOnly = { "VertexColorViewModeMaterialName_GreenOnly", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterialName_GreenOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorViewModeMaterialName_GreenOnly_MetaData), NewProp_VertexColorViewModeMaterialName_GreenOnly_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_BlueOnly = { "VertexColorViewModeMaterial_BlueOnly", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterial_BlueOnly), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorViewModeMaterial_BlueOnly_MetaData), NewProp_VertexColorViewModeMaterial_BlueOnly_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_BlueOnly = { "VertexColorViewModeMaterialName_BlueOnly", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterialName_BlueOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorViewModeMaterialName_BlueOnly_MetaData), NewProp_VertexColorViewModeMaterialName_BlueOnly_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterial = { "BoneWeightMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, BoneWeightMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneWeightMaterial_MetaData), NewProp_BoneWeightMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterialName = { "BoneWeightMaterialName", nullptr, (EPropertyFlags)0x0010000800044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, BoneWeightMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneWeightMaterialName_MetaData), NewProp_BoneWeightMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterial = { "ClothPaintMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ClothPaintMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothPaintMaterial_MetaData), NewProp_ClothPaintMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframe = { "ClothPaintMaterialWireframe", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ClothPaintMaterialWireframe), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothPaintMaterialWireframe_MetaData), NewProp_ClothPaintMaterialWireframe_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialInstance = { "ClothPaintMaterialInstance", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ClothPaintMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothPaintMaterialInstance_MetaData), NewProp_ClothPaintMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeInstance = { "ClothPaintMaterialWireframeInstance", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ClothPaintMaterialWireframeInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothPaintMaterialWireframeInstance_MetaData), NewProp_ClothPaintMaterialWireframeInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialName = { "ClothPaintMaterialName", nullptr, (EPropertyFlags)0x0010000800044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ClothPaintMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothPaintMaterialName_MetaData), NewProp_ClothPaintMaterialName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeName = { "ClothPaintMaterialWireframeName", nullptr, (EPropertyFlags)0x0010000800044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ClothPaintMaterialWireframeName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothPaintMaterialWireframeName_MetaData), NewProp_ClothPaintMaterialWireframeName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PhysicalMaterialMaskMaterial = { "PhysicalMaterialMaskMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, PhysicalMaterialMaskMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterialMaskMaterial_MetaData), NewProp_PhysicalMaterialMaskMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PhysicalMaterialMaskMaterialName = { "PhysicalMaterialMaskMaterialName", nullptr, (EPropertyFlags)0x0010000800044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, PhysicalMaterialMaskMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterialMaskMaterialName_MetaData), NewProp_PhysicalMaterialMaskMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterial = { "DebugEditorMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DebugEditorMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEditorMaterial_MetaData), NewProp_DebugEditorMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultFlattenMaterialName = { "DefaultFlattenMaterialName", nullptr, (EPropertyFlags)0x0010000800044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultFlattenMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFlattenMaterialName_MetaData), NewProp_DefaultFlattenMaterialName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultHLODFlattenMaterialName = { "DefaultHLODFlattenMaterialName", nullptr, (EPropertyFlags)0x0010000800044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultHLODFlattenMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHLODFlattenMaterialName_MetaData), NewProp_DefaultHLODFlattenMaterialName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultLandscapeFlattenMaterialName = { "DefaultLandscapeFlattenMaterialName", nullptr, (EPropertyFlags)0x0010000800044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultLandscapeFlattenMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLandscapeFlattenMaterialName_MetaData), NewProp_DefaultLandscapeFlattenMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultFlattenMaterial = { "DefaultFlattenMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultFlattenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFlattenMaterial_MetaData), NewProp_DefaultFlattenMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultHLODFlattenMaterial = { "DefaultHLODFlattenMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultHLODFlattenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHLODFlattenMaterial_MetaData), NewProp_DefaultHLODFlattenMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultLandscapeFlattenMaterial = { "DefaultLandscapeFlattenMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultLandscapeFlattenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLandscapeFlattenMaterial_MetaData), NewProp_DefaultLandscapeFlattenMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TexturePaintingMaskMaterial = { "TexturePaintingMaskMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, TexturePaintingMaskMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturePaintingMaskMaterial_MetaData), NewProp_TexturePaintingMaskMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TexturePaintingMaskMaterialName = { "TexturePaintingMaskMaterialName", nullptr, (EPropertyFlags)0x0010000800044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, TexturePaintingMaskMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturePaintingMaskMaterialName_MetaData), NewProp_TexturePaintingMaskMaterialName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterialName = { "DebugEditorMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DebugEditorMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEditorMaterialName_MetaData), NewProp_DebugEditorMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterial = { "ConstraintLimitMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ConstraintLimitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintLimitMaterial_MetaData), NewProp_ConstraintLimitMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialX = { "ConstraintLimitMaterialX", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialX), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintLimitMaterialX_MetaData), NewProp_ConstraintLimitMaterialX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialXAxis = { "ConstraintLimitMaterialXAxis", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialXAxis), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintLimitMaterialXAxis_MetaData), NewProp_ConstraintLimitMaterialXAxis_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialY = { "ConstraintLimitMaterialY", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialY), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintLimitMaterialY_MetaData), NewProp_ConstraintLimitMaterialY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialYAxis = { "ConstraintLimitMaterialYAxis", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialYAxis), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintLimitMaterialYAxis_MetaData), NewProp_ConstraintLimitMaterialYAxis_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZ = { "ConstraintLimitMaterialZ", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialZ), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintLimitMaterialZ_MetaData), NewProp_ConstraintLimitMaterialZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZAxis = { "ConstraintLimitMaterialZAxis", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialZAxis), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintLimitMaterialZAxis_MetaData), NewProp_ConstraintLimitMaterialZAxis_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialPrismatic = { "ConstraintLimitMaterialPrismatic", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialPrismatic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintLimitMaterialPrismatic_MetaData), NewProp_ConstraintLimitMaterialPrismatic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterial = { "InvalidLightmapSettingsMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, InvalidLightmapSettingsMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidLightmapSettingsMaterial_MetaData), NewProp_InvalidLightmapSettingsMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterialName = { "InvalidLightmapSettingsMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, InvalidLightmapSettingsMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidLightmapSettingsMaterialName_MetaData), NewProp_InvalidLightmapSettingsMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterial = { "PreviewShadowsIndicatorMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, PreviewShadowsIndicatorMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewShadowsIndicatorMaterial_MetaData), NewProp_PreviewShadowsIndicatorMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterialName = { "PreviewShadowsIndicatorMaterialName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, PreviewShadowsIndicatorMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewShadowsIndicatorMaterialName_MetaData), NewProp_PreviewShadowsIndicatorMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterial = { "ArrowMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ArrowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowMaterial_MetaData), NewProp_ArrowMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterialYellow = { "ArrowMaterialYellow", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ArrowMaterialYellow), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowMaterialYellow_MetaData), NewProp_ArrowMaterialYellow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterialName = { "ArrowMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ArrowMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowMaterialName_MetaData), NewProp_ArrowMaterialName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightingOnlyBrightness = { "LightingOnlyBrightness", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LightingOnlyBrightness), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingOnlyBrightness_MetaData), NewProp_LightingOnlyBrightness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors_Inner = { "ShaderComplexityColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors = { "ShaderComplexityColors", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ShaderComplexityColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderComplexityColors_MetaData), NewProp_ShaderComplexityColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors_Inner = { "QuadComplexityColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors = { "QuadComplexityColors", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, QuadComplexityColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuadComplexityColors_MetaData), NewProp_QuadComplexityColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors_Inner = { "LightComplexityColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors = { "LightComplexityColors", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LightComplexityColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightComplexityColors_MetaData), NewProp_LightComplexityColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors_Inner = { "StationaryLightOverlapColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors = { "StationaryLightOverlapColors", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, StationaryLightOverlapColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StationaryLightOverlapColors_MetaData), NewProp_StationaryLightOverlapColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors_Inner = { "LODColorationColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors = { "LODColorationColors", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LODColorationColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODColorationColors_MetaData), NewProp_LODColorationColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors_Inner = { "HLODColorationColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors = { "HLODColorationColors", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, HLODColorationColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODColorationColors_MetaData), NewProp_HLODColorationColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors_Inner = { "StreamingAccuracyColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors = { "StreamingAccuracyColors", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, StreamingAccuracyColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingAccuracyColors_MetaData), NewProp_StreamingAccuracyColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationExcludedColor = { "GPUSkinCacheVisualizationExcludedColor", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GPUSkinCacheVisualizationExcludedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSkinCacheVisualizationExcludedColor_MetaData), NewProp_GPUSkinCacheVisualizationExcludedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationIncludedColor = { "GPUSkinCacheVisualizationIncludedColor", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GPUSkinCacheVisualizationIncludedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSkinCacheVisualizationIncludedColor_MetaData), NewProp_GPUSkinCacheVisualizationIncludedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationRecomputeTangentsColor = { "GPUSkinCacheVisualizationRecomputeTangentsColor", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GPUSkinCacheVisualizationRecomputeTangentsColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSkinCacheVisualizationRecomputeTangentsColor_MetaData), NewProp_GPUSkinCacheVisualizationRecomputeTangentsColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationLowMemoryThresholdInMB = { "GPUSkinCacheVisualizationLowMemoryThresholdInMB", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GPUSkinCacheVisualizationLowMemoryThresholdInMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSkinCacheVisualizationLowMemoryThresholdInMB_MetaData), NewProp_GPUSkinCacheVisualizationLowMemoryThresholdInMB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationHighMemoryThresholdInMB = { "GPUSkinCacheVisualizationHighMemoryThresholdInMB", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GPUSkinCacheVisualizationHighMemoryThresholdInMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSkinCacheVisualizationHighMemoryThresholdInMB_MetaData), NewProp_GPUSkinCacheVisualizationHighMemoryThresholdInMB_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationLowMemoryColor = { "GPUSkinCacheVisualizationLowMemoryColor", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GPUSkinCacheVisualizationLowMemoryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSkinCacheVisualizationLowMemoryColor_MetaData), NewProp_GPUSkinCacheVisualizationLowMemoryColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationMidMemoryColor = { "GPUSkinCacheVisualizationMidMemoryColor", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GPUSkinCacheVisualizationMidMemoryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSkinCacheVisualizationMidMemoryColor_MetaData), NewProp_GPUSkinCacheVisualizationMidMemoryColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationHighMemoryColor = { "GPUSkinCacheVisualizationHighMemoryColor", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GPUSkinCacheVisualizationHighMemoryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSkinCacheVisualizationHighMemoryColor_MetaData), NewProp_GPUSkinCacheVisualizationHighMemoryColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationRayTracingLODOffsetColors_Inner = { "GPUSkinCacheVisualizationRayTracingLODOffsetColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationRayTracingLODOffsetColors = { "GPUSkinCacheVisualizationRayTracingLODOffsetColors", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GPUSkinCacheVisualizationRayTracingLODOffsetColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSkinCacheVisualizationRayTracingLODOffsetColors_MetaData), NewProp_GPUSkinCacheVisualizationRayTracingLODOffsetColors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxPixelShaderAdditiveComplexityCount = { "MaxPixelShaderAdditiveComplexityCount", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MaxPixelShaderAdditiveComplexityCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPixelShaderAdditiveComplexityCount_MetaData), NewProp_MaxPixelShaderAdditiveComplexityCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxES3PixelShaderAdditiveComplexityCount = { "MaxES3PixelShaderAdditiveComplexityCount", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MaxES3PixelShaderAdditiveComplexityCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxES3PixelShaderAdditiveComplexityCount_MetaData), NewProp_MaxES3PixelShaderAdditiveComplexityCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MinLightMapDensity = { "MinLightMapDensity", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MinLightMapDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLightMapDensity_MetaData), NewProp_MinLightMapDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_IdealLightMapDensity = { "IdealLightMapDensity", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, IdealLightMapDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdealLightMapDensity_MetaData), NewProp_IdealLightMapDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxLightMapDensity = { "MaxLightMapDensity", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MaxLightMapDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLightMapDensity_MetaData), NewProp_MaxLightMapDensity_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale_SetBit(void* Obj)
{
	((UEngine*)Obj)->bRenderLightMapDensityGrayscale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale = { "bRenderLightMapDensityGrayscale", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderLightMapDensityGrayscale_MetaData), NewProp_bRenderLightMapDensityGrayscale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityGrayscaleScale = { "RenderLightMapDensityGrayscaleScale", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, RenderLightMapDensityGrayscaleScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderLightMapDensityGrayscaleScale_MetaData), NewProp_RenderLightMapDensityGrayscaleScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityColorScale = { "RenderLightMapDensityColorScale", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, RenderLightMapDensityColorScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderLightMapDensityColorScale_MetaData), NewProp_RenderLightMapDensityColorScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityVertexMappedColor = { "LightMapDensityVertexMappedColor", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LightMapDensityVertexMappedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMapDensityVertexMappedColor_MetaData), NewProp_LightMapDensityVertexMappedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensitySelectedColor = { "LightMapDensitySelectedColor", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LightMapDensitySelectedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMapDensitySelectedColor_MetaData), NewProp_LightMapDensitySelectedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings_Inner = { "StatColorMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatColorMapping, METADATA_PARAMS(0, nullptr) }; // 912252269
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings = { "StatColorMappings", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, StatColorMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatColorMappings_MetaData), NewProp_StatColorMappings_MetaData) }; // 912252269
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterial = { "EditorBrushMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, EditorBrushMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorBrushMaterial_MetaData), NewProp_EditorBrushMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterialName = { "EditorBrushMaterialName", nullptr, (EPropertyFlags)0x0010000800044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, EditorBrushMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorBrushMaterialName_MetaData), NewProp_EditorBrushMaterialName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterial = { "DefaultPhysMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPhysMaterial_MetaData), NewProp_DefaultPhysMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterialName = { "DefaultPhysMaterialName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultPhysMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPhysMaterialName_MetaData), NewProp_DefaultPhysMaterialName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDestructiblePhysMaterial = { "DefaultDestructiblePhysMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultDestructiblePhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDestructiblePhysMaterial_MetaData), NewProp_DefaultDestructiblePhysMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDestructiblePhysMaterialName = { "DefaultDestructiblePhysMaterialName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultDestructiblePhysMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDestructiblePhysMaterialName_MetaData), NewProp_DefaultDestructiblePhysMaterialName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects_Inner = { "ActiveGameNameRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameNameRedirect, METADATA_PARAMS(0, nullptr) }; // 94793531
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects = { "ActiveGameNameRedirects", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ActiveGameNameRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGameNameRedirects_MetaData), NewProp_ActiveGameNameRedirects_MetaData) }; // 94793531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects_Inner = { "ActiveClassRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClassRedirect, METADATA_PARAMS(0, nullptr) }; // 270823994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects = { "ActiveClassRedirects", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ActiveClassRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveClassRedirects_MetaData), NewProp_ActiveClassRedirects_MetaData) }; // 270823994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects_Inner = { "ActivePluginRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPluginRedirect, METADATA_PARAMS(0, nullptr) }; // 1504269214
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects = { "ActivePluginRedirects", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ActivePluginRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePluginRedirects_MetaData), NewProp_ActivePluginRedirects_MetaData) }; // 1504269214
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects_Inner = { "ActiveStructRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStructRedirect, METADATA_PARAMS(0, nullptr) }; // 254400339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects = { "ActiveStructRedirects", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ActiveStructRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStructRedirects_MetaData), NewProp_ActiveStructRedirects_MetaData) }; // 254400339
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTexture = { "PreIntegratedSkinBRDFTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, PreIntegratedSkinBRDFTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreIntegratedSkinBRDFTexture_MetaData), NewProp_PreIntegratedSkinBRDFTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTextureName = { "PreIntegratedSkinBRDFTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, PreIntegratedSkinBRDFTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreIntegratedSkinBRDFTextureName_MetaData), NewProp_PreIntegratedSkinBRDFTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_BlueNoiseScalarTexture = { "BlueNoiseScalarTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, BlueNoiseScalarTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueNoiseScalarTexture_MetaData), NewProp_BlueNoiseScalarTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_BlueNoiseVec2Texture = { "BlueNoiseVec2Texture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, BlueNoiseVec2Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueNoiseVec2Texture_MetaData), NewProp_BlueNoiseVec2Texture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_BlueNoiseScalarTextureName = { "BlueNoiseScalarTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, BlueNoiseScalarTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueNoiseScalarTextureName_MetaData), NewProp_BlueNoiseScalarTextureName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_BlueNoiseVec2TextureName = { "BlueNoiseVec2TextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, BlueNoiseVec2TextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueNoiseVec2TextureName_MetaData), NewProp_BlueNoiseVec2TextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GlintTexture = { "GlintTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GlintTexture), Z_Construct_UClass_UTexture2DArray_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlintTexture_MetaData), NewProp_GlintTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GlintTexture2 = { "GlintTexture2", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GlintTexture2), Z_Construct_UClass_UTexture2DArray_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlintTexture2_MetaData), NewProp_GlintTexture2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GlintTextureName = { "GlintTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GlintTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlintTextureName_MetaData), NewProp_GlintTextureName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GlintTexture2Name = { "GlintTexture2Name", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GlintTexture2Name), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlintTexture2Name_MetaData), NewProp_GlintTexture2Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SimpleVolumeTexture = { "SimpleVolumeTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SimpleVolumeTexture), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleVolumeTexture_MetaData), NewProp_SimpleVolumeTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SimpleVolumeTextureName = { "SimpleVolumeTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SimpleVolumeTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleVolumeTextureName_MetaData), NewProp_SimpleVolumeTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SimpleVolumeEnvTexture = { "SimpleVolumeEnvTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SimpleVolumeEnvTexture), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleVolumeEnvTexture_MetaData), NewProp_SimpleVolumeEnvTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SimpleVolumeEnvTextureName = { "SimpleVolumeEnvTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SimpleVolumeEnvTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleVolumeEnvTextureName_MetaData), NewProp_SimpleVolumeEnvTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTexture = { "MiniFontTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MiniFontTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniFontTexture_MetaData), NewProp_MiniFontTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTextureName = { "MiniFontTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MiniFontTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniFontTextureName_MetaData), NewProp_MiniFontTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTexture = { "WeightMapPlaceholderTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, WeightMapPlaceholderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMapPlaceholderTexture_MetaData), NewProp_WeightMapPlaceholderTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapArrayPlaceholderTexture = { "WeightMapArrayPlaceholderTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, WeightMapArrayPlaceholderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMapArrayPlaceholderTexture_MetaData), NewProp_WeightMapArrayPlaceholderTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTextureName = { "WeightMapPlaceholderTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, WeightMapPlaceholderTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMapPlaceholderTextureName_MetaData), NewProp_WeightMapPlaceholderTextureName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapArrayPlaceholderTextureName = { "WeightMapArrayPlaceholderTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, WeightMapArrayPlaceholderTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMapArrayPlaceholderTextureName_MetaData), NewProp_WeightMapArrayPlaceholderTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTexture = { "LightMapDensityTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LightMapDensityTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMapDensityTexture_MetaData), NewProp_LightMapDensityTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTextureName = { "LightMapDensityTextureName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, LightMapDensityTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMapDensityTextureName_MetaData), NewProp_LightMapDensityTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameViewport = { "GameViewport", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GameViewport), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameViewport_MetaData), NewProp_GameViewport_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands_Inner = { "DeferredCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands = { "DeferredCommands", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DeferredCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeferredCommands_MetaData), NewProp_DeferredCommands_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NearClipPlane = { "NearClipPlane", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NearClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearClipPlane_MetaData), NewProp_NearClipPlane_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled_SetBit(void* Obj)
{
	((UEngine*)Obj)->bSubtitlesEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled = { "bSubtitlesEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubtitlesEnabled_MetaData), NewProp_bSubtitlesEnabled_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff_SetBit(void* Obj)
{
	((UEngine*)Obj)->bSubtitlesForcedOff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff = { "bSubtitlesForcedOff", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubtitlesForcedOff_MetaData), NewProp_bSubtitlesForcedOff_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaximumLoopIterationCount = { "MaximumLoopIterationCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MaximumLoopIterationCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumLoopIterationCount_MetaData), NewProp_MaximumLoopIterationCount_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault_SetBit(void* Obj)
{
	((UEngine*)Obj)->bCanBlueprintsTickByDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault = { "bCanBlueprintsTickByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBlueprintsTickByDefault_MetaData), NewProp_bCanBlueprintsTickByDefault_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess_SetBit(void* Obj)
{
	((UEngine*)Obj)->bOptimizeAnimBlueprintMemberVariableAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess = { "bOptimizeAnimBlueprintMemberVariableAccess", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeAnimBlueprintMemberVariableAccess_MetaData), NewProp_bOptimizeAnimBlueprintMemberVariableAccess_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate_SetBit(void* Obj)
{
	((UEngine*)Obj)->bAllowMultiThreadedAnimationUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate = { "bAllowMultiThreadedAnimationUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMultiThreadedAnimationUpdate_MetaData), NewProp_bAllowMultiThreadedAnimationUpdate_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD_SetBit(void* Obj)
{
	((UEngine*)Obj)->bEnableEditorPSysRealtimeLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD = { "bEnableEditorPSysRealtimeLOD", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableEditorPSysRealtimeLOD_MetaData), NewProp_bEnableEditorPSysRealtimeLOD_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate_SetBit(void* Obj)
{
	((UEngine*)Obj)->bSmoothFrameRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate = { "bSmoothFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothFrameRate_MetaData), NewProp_bSmoothFrameRate_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate_SetBit(void* Obj)
{
	((UEngine*)Obj)->bUseFixedFrameRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate = { "bUseFixedFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedFrameRate_MetaData), NewProp_bUseFixedFrameRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_FixedFrameRate = { "FixedFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, FixedFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedFrameRate_MetaData), NewProp_FixedFrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SmoothedFrameRateRange = { "SmoothedFrameRateRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SmoothedFrameRateRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothedFrameRateRange_MetaData), NewProp_SmoothedFrameRateRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimeStep = { "CustomTimeStep", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, CustomTimeStep), Z_Construct_UClass_UEngineCustomTimeStep_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTimeStep_MetaData), NewProp_CustomTimeStep_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimeStepClassName = { "CustomTimeStepClassName", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, CustomTimeStepClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTimeStepClassName_MetaData), NewProp_CustomTimeStepClassName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TimecodeProvider = { "TimecodeProvider", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, TimecodeProvider), Z_Construct_UClass_UTimecodeProvider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimecodeProvider_MetaData), NewProp_TimecodeProvider_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TimecodeProviderClassName = { "TimecodeProviderClassName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, TimecodeProviderClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimecodeProviderClassName_MetaData), NewProp_TimecodeProviderClassName_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bGenerateDefaultTimecode_SetBit(void* Obj)
{
	((UEngine*)Obj)->bGenerateDefaultTimecode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bGenerateDefaultTimecode = { "bGenerateDefaultTimecode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bGenerateDefaultTimecode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateDefaultTimecode_MetaData), NewProp_bGenerateDefaultTimecode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GenerateDefaultTimecodeFrameRate = { "GenerateDefaultTimecodeFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GenerateDefaultTimecodeFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateDefaultTimecodeFrameRate_MetaData), NewProp_GenerateDefaultTimecodeFrameRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GenerateDefaultTimecodeFrameDelay = { "GenerateDefaultTimecodeFrameDelay", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GenerateDefaultTimecodeFrameDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateDefaultTimecodeFrameDelay_MetaData), NewProp_GenerateDefaultTimecodeFrameDelay_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame_SetBit(void* Obj)
{
	((UEngine*)Obj)->bCheckForMultiplePawnsSpawnedInAFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame = { "bCheckForMultiplePawnsSpawnedInAFrame", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckForMultiplePawnsSpawnedInAFrame_MetaData), NewProp_bCheckForMultiplePawnsSpawnedInAFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NumPawnsAllowedToBeSpawnedInAFrame = { "NumPawnsAllowedToBeSpawnedInAFrame", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NumPawnsAllowedToBeSpawnedInAFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPawnsAllowedToBeSpawnedInAFrame_MetaData), NewProp_NumPawnsAllowedToBeSpawnedInAFrame_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps_SetBit(void* Obj)
{
	((UEngine*)Obj)->bShouldGenerateLowQualityLightmaps_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps = { "bShouldGenerateLowQualityLightmaps", nullptr, (EPropertyFlags)0x0010000020044000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldGenerateLowQualityLightmaps_MetaData), NewProp_bShouldGenerateLowQualityLightmaps_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_WorldBox = { "C_WorldBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_WorldBox), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_WorldBox_MetaData), NewProp_C_WorldBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushWire = { "C_BrushWire", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_BrushWire), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_BrushWire_MetaData), NewProp_C_BrushWire_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_AddWire = { "C_AddWire", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_AddWire), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_AddWire_MetaData), NewProp_C_AddWire_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_SubtractWire = { "C_SubtractWire", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_SubtractWire), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_SubtractWire_MetaData), NewProp_C_SubtractWire_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_SemiSolidWire = { "C_SemiSolidWire", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_SemiSolidWire), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_SemiSolidWire_MetaData), NewProp_C_SemiSolidWire_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_NonSolidWire = { "C_NonSolidWire", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_NonSolidWire), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_NonSolidWire_MetaData), NewProp_C_NonSolidWire_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_WireBackground = { "C_WireBackground", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_WireBackground), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_WireBackground_MetaData), NewProp_C_WireBackground_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_ScaleBoxHi = { "C_ScaleBoxHi", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_ScaleBoxHi), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_ScaleBoxHi_MetaData), NewProp_C_ScaleBoxHi_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_VolumeCollision = { "C_VolumeCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_VolumeCollision), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_VolumeCollision_MetaData), NewProp_C_VolumeCollision_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_BSPCollision = { "C_BSPCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_BSPCollision), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_BSPCollision_MetaData), NewProp_C_BSPCollision_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_OrthoBackground = { "C_OrthoBackground", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_OrthoBackground), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_OrthoBackground_MetaData), NewProp_C_OrthoBackground_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_Volume = { "C_Volume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_Volume), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_Volume_MetaData), NewProp_C_Volume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushShape = { "C_BrushShape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, C_BrushShape), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_BrushShape_MetaData), NewProp_C_BrushShape_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameScreenshotSaveDirectory = { "GameScreenshotSaveDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GameScreenshotSaveDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameScreenshotSaveDirectory_MetaData), NewProp_GameScreenshotSaveDirectory_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_UseStaticMeshMinLODPerQualityLevels_SetBit(void* Obj)
{
	((UEngine*)Obj)->UseStaticMeshMinLODPerQualityLevels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_UseStaticMeshMinLODPerQualityLevels = { "UseStaticMeshMinLODPerQualityLevels", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_UseStaticMeshMinLODPerQualityLevels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseStaticMeshMinLODPerQualityLevels_MetaData), NewProp_UseStaticMeshMinLODPerQualityLevels_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_UseSkeletalMeshMinLODPerQualityLevels_SetBit(void* Obj)
{
	((UEngine*)Obj)->UseSkeletalMeshMinLODPerQualityLevels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_UseSkeletalMeshMinLODPerQualityLevels = { "UseSkeletalMeshMinLODPerQualityLevels", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_UseSkeletalMeshMinLODPerQualityLevels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSkeletalMeshMinLODPerQualityLevels_MetaData), NewProp_UseSkeletalMeshMinLODPerQualityLevels_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_UseGrassVarityPerQualityLevels_SetBit(void* Obj)
{
	((UEngine*)Obj)->UseGrassVarityPerQualityLevels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_UseGrassVarityPerQualityLevels = { "UseGrassVarityPerQualityLevels", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_UseGrassVarityPerQualityLevels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseGrassVarityPerQualityLevels_MetaData), NewProp_UseGrassVarityPerQualityLevels_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TransitionType = { "TransitionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, TransitionType), Z_Construct_UEnum_Engine_ETransitionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionType_MetaData), NewProp_TransitionType_MetaData) }; // 196762770
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TransitionDescription = { "TransitionDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, TransitionDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionDescription_MetaData), NewProp_TransitionDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TransitionGameMode = { "TransitionGameMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, TransitionGameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionGameMode_MetaData), NewProp_TransitionGameMode_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage_SetBit(void* Obj)
{
	((UEngine*)Obj)->bAllowMatureLanguage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage = { "bAllowMatureLanguage", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMatureLanguage_MetaData), NewProp_bAllowMatureLanguage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_CameraRotationThreshold = { "CameraRotationThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, CameraRotationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationThreshold_MetaData), NewProp_CameraRotationThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_CameraTranslationThreshold = { "CameraTranslationThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, CameraTranslationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTranslationThreshold_MetaData), NewProp_CameraTranslationThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PrimitiveProbablyVisibleTime = { "PrimitiveProbablyVisibleTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, PrimitiveProbablyVisibleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveProbablyVisibleTime_MetaData), NewProp_PrimitiveProbablyVisibleTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxOcclusionPixelsFraction = { "MaxOcclusionPixelsFraction", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MaxOcclusionPixelsFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxOcclusionPixelsFraction_MetaData), NewProp_MaxOcclusionPixelsFraction_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus_SetBit(void* Obj)
{
	((UEngine*)Obj)->bPauseOnLossOfFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus = { "bPauseOnLossOfFocus", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseOnLossOfFocus_MetaData), NewProp_bPauseOnLossOfFocus_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResize = { "MaxParticleResize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MaxParticleResize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxParticleResize_MetaData), NewProp_MaxParticleResize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResizeWarn = { "MaxParticleResizeWarn", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MaxParticleResizeWarn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxParticleResizeWarn_MetaData), NewProp_MaxParticleResizeWarn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes_Inner = { "PendingDroppedNotes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDropNoteInfo, METADATA_PARAMS(0, nullptr) }; // 2135133574
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes = { "PendingDroppedNotes", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, PendingDroppedNotes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingDroppedNotes_MetaData), NewProp_PendingDroppedNotes_MetaData) }; // 2135133574
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NetClientTicksPerSecond = { "NetClientTicksPerSecond", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NetClientTicksPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetClientTicksPerSecond_MetaData), NewProp_NetClientTicksPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DisplayGamma = { "DisplayGamma", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DisplayGamma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayGamma_MetaData), NewProp_DisplayGamma_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MinDesiredFrameRate = { "MinDesiredFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, MinDesiredFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDesiredFrameRate_MetaData), NewProp_MinDesiredFrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultSelectedMaterialColor = { "DefaultSelectedMaterialColor", nullptr, (EPropertyFlags)0x0040000000044000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, DefaultSelectedMaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSelectedMaterialColor_MetaData), NewProp_DefaultSelectedMaterialColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColor = { "SelectedMaterialColor", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SelectedMaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedMaterialColor_MetaData), NewProp_SelectedMaterialColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectionOutlineColor = { "SelectionOutlineColor", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SelectionOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionOutlineColor_MetaData), NewProp_SelectionOutlineColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SubduedSelectionOutlineColor = { "SubduedSelectionOutlineColor", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SubduedSelectionOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubduedSelectionOutlineColor_MetaData), NewProp_SubduedSelectionOutlineColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColorOverride = { "SelectedMaterialColorOverride", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SelectedMaterialColorOverride), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedMaterialColorOverride_MetaData), NewProp_SelectedMaterialColorOverride_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor_SetBit(void* Obj)
{
	((UEngine*)Obj)->bIsOverridingSelectedColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor = { "bIsOverridingSelectedColor", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOverridingSelectedColor_MetaData), NewProp_bIsOverridingSelectedColor_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages_SetBit(void* Obj)
{
	((UEngine*)Obj)->bEnableOnScreenDebugMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages = { "bEnableOnScreenDebugMessages", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOnScreenDebugMessages_MetaData), NewProp_bEnableOnScreenDebugMessages_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay_SetBit(void* Obj)
{
	((UEngine*)Obj)->bEnableOnScreenDebugMessagesDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay = { "bEnableOnScreenDebugMessagesDisplay", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOnScreenDebugMessagesDisplay_MetaData), NewProp_bEnableOnScreenDebugMessagesDisplay_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings_SetBit(void* Obj)
{
	((UEngine*)Obj)->bSuppressMapWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings = { "bSuppressMapWarnings", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressMapWarnings_MetaData), NewProp_bSuppressMapWarnings_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging_SetBit(void* Obj)
{
	((UEngine*)Obj)->bDisableAILogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging = { "bDisableAILogging", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableAILogging_MetaData), NewProp_bDisableAILogging_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bEnableVisualLogRecordingOnStart = { "bEnableVisualLogRecordingOnStart", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, bEnableVisualLogRecordingOnStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVisualLogRecordingOnStart_MetaData), NewProp_bEnableVisualLogRecordingOnStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ScreenSaverInhibitorSemaphore = { "ScreenSaverInhibitorSemaphore", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ScreenSaverInhibitorSemaphore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSaverInhibitorSemaphore_MetaData), NewProp_ScreenSaverInhibitorSemaphore_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels_SetBit(void* Obj)
{
	((UEngine*)Obj)->bLockReadOnlyLevels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels = { "bLockReadOnlyLevels", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockReadOnlyLevels_MetaData), NewProp_bLockReadOnlyLevels_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ParticleEventManagerClassPath = { "ParticleEventManagerClassPath", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ParticleEventManagerClassPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleEventManagerClassPath_MetaData), NewProp_ParticleEventManagerClassPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensity = { "SelectionHighlightIntensity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SelectionHighlightIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionHighlightIntensity_MetaData), NewProp_SelectionHighlightIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_BSPSelectionHighlightIntensity = { "BSPSelectionHighlightIntensity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, BSPSelectionHighlightIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BSPSelectionHighlightIntensity_MetaData), NewProp_BSPSelectionHighlightIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensityBillboards = { "SelectionHighlightIntensityBillboards", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, SelectionHighlightIntensityBillboards), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionHighlightIntensityBillboards_MetaData), NewProp_SelectionHighlightIntensityBillboards_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GlobalNetTravelCount = { "GlobalNetTravelCount", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, GlobalNetTravelCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalNetTravelCount_MetaData), NewProp_GlobalNetTravelCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions_Inner = { "NetDriverDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNetDriverDefinition, METADATA_PARAMS(0, nullptr) }; // 4252062100
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions = { "NetDriverDefinitions", nullptr, (EPropertyFlags)0x0010000000006000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NetDriverDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDriverDefinitions_MetaData), NewProp_NetDriverDefinitions_MetaData) }; // 4252062100
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_IrisNetDriverConfigs_Inner = { "IrisNetDriverConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIrisNetDriverConfig, METADATA_PARAMS(0, nullptr) }; // 2364945374
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_IrisNetDriverConfigs = { "IrisNetDriverConfigs", nullptr, (EPropertyFlags)0x0010000000006000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, IrisNetDriverConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IrisNetDriverConfigs_MetaData), NewProp_IrisNetDriverConfigs_MetaData) }; // 2364945374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors_Inner = { "ServerActors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors = { "ServerActors", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, ServerActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerActors_MetaData), NewProp_ServerActors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors_Inner = { "RuntimeServerActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors = { "RuntimeServerActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, RuntimeServerActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeServerActors_MetaData), NewProp_RuntimeServerActors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NetErrorLogInterval = { "NetErrorLogInterval", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NetErrorLogInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetErrorLogInterval_MetaData), NewProp_NetErrorLogInterval_MetaData) };
void Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie_SetBit(void* Obj)
{
	((UEngine*)Obj)->bStartedLoadMapMovie = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie = { "bStartedLoadMapMovie", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartedLoadMapMovie_MetaData), NewProp_bStartedLoadMapMovie_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NextWorldContextHandle = { "NextWorldContextHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngine, NextWorldContextHandle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextWorldContextHandle_MetaData), NewProp_NextWorldContextHandle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEngine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TinyFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TinyFontName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SmallFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SmallFontName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MediumFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MediumFontName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LargeFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LargeFontName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFontName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AIControllerClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBlueprintBaseClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameSingletonClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameSingleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AssetManagerClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AssetManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultFilmGrainTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultFilmGrainTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterialName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterialName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NaniteHiddenSectionMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NaniteHiddenSectionMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_EmissiveMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_EmissiveMeshMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_ColorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_ColorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_AlphaAsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_AlphaAsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_RedOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_RedOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_GreenOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_GreenOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_BlueOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_BlueOnly,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PhysicalMaterialMaskMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PhysicalMaterialMaskMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultFlattenMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultHLODFlattenMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultLandscapeFlattenMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultFlattenMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultHLODFlattenMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultLandscapeFlattenMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TexturePaintingMaskMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TexturePaintingMaskMaterialName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialXAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialYAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialPrismatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterialYellow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightingOnlyBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationExcludedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationIncludedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationRecomputeTangentsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationLowMemoryThresholdInMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationHighMemoryThresholdInMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationLowMemoryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationMidMemoryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationHighMemoryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationRayTracingLODOffsetColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GPUSkinCacheVisualizationRayTracingLODOffsetColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxPixelShaderAdditiveComplexityCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxES3PixelShaderAdditiveComplexityCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MinLightMapDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_IdealLightMapDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxLightMapDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityGrayscaleScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityColorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityVertexMappedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensitySelectedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterialName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDestructiblePhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDestructiblePhysMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_BlueNoiseScalarTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_BlueNoiseVec2Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_BlueNoiseScalarTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_BlueNoiseVec2TextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GlintTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GlintTexture2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GlintTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GlintTexture2Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SimpleVolumeTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SimpleVolumeTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SimpleVolumeEnvTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SimpleVolumeEnvTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapArrayPlaceholderTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapArrayPlaceholderTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NearClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaximumLoopIterationCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_FixedFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SmoothedFrameRateRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimeStepClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TimecodeProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TimecodeProviderClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bGenerateDefaultTimecode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GenerateDefaultTimecodeFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GenerateDefaultTimecodeFrameDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NumPawnsAllowedToBeSpawnedInAFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_WorldBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_AddWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_SubtractWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_SemiSolidWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_NonSolidWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_WireBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_ScaleBoxHi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_VolumeCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_BSPCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_OrthoBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameScreenshotSaveDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_UseStaticMeshMinLODPerQualityLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_UseSkeletalMeshMinLODPerQualityLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_UseGrassVarityPerQualityLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TransitionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TransitionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TransitionDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TransitionGameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_CameraRotationThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_CameraTranslationThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PrimitiveProbablyVisibleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxOcclusionPixelsFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResizeWarn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NetClientTicksPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DisplayGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MinDesiredFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultSelectedMaterialColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectionOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SubduedSelectionOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bEnableVisualLogRecordingOnStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ScreenSaverInhibitorSemaphore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ParticleEventManagerClassPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_BSPSelectionHighlightIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensityBillboards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GlobalNetTravelCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_IrisNetDriverConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_IrisNetDriverConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NetErrorLogInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NextWorldContextHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEngine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngine_Statics::ClassParams = {
	&UEngine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEngine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::PropPointers),
	0,
	0x000800AFu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::Class_MetaDataParams), Z_Construct_UClass_UEngine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEngine()
{
	if (!Z_Registration_Info_UClass_UEngine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngine.OuterSingleton, Z_Construct_UClass_UEngine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEngine.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEngine>()
{
	return UEngine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEngine);
UEngine::~UEngine() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEngine)
// End Class UEngine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFullyLoadPackageType_StaticEnum, TEXT("EFullyLoadPackageType"), &Z_Registration_Info_UEnum_EFullyLoadPackageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3398428212U) },
		{ ETransitionType_StaticEnum, TEXT("ETransitionType"), &Z_Registration_Info_UEnum_ETransitionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 196762770U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFullyLoadedPackagesInfo::StaticStruct, Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewStructOps, TEXT("FullyLoadedPackagesInfo"), &Z_Registration_Info_UScriptStruct_FullyLoadedPackagesInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFullyLoadedPackagesInfo), 4282477103U) },
		{ FLevelStreamingStatus::StaticStruct, Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewStructOps, TEXT("LevelStreamingStatus"), &Z_Registration_Info_UScriptStruct_LevelStreamingStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelStreamingStatus), 1071791034U) },
		{ FNetDriverDefinition::StaticStruct, Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewStructOps, TEXT("NetDriverDefinition"), &Z_Registration_Info_UScriptStruct_NetDriverDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetDriverDefinition), 4252062100U) },
		{ FIrisNetDriverConfig::StaticStruct, Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewStructOps, TEXT("IrisNetDriverConfig"), &Z_Registration_Info_UScriptStruct_IrisNetDriverConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIrisNetDriverConfig), 2364945374U) },
		{ FNamedNetDriver::StaticStruct, Z_Construct_UScriptStruct_FNamedNetDriver_Statics::NewStructOps, TEXT("NamedNetDriver"), &Z_Registration_Info_UScriptStruct_NamedNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedNetDriver), 3530979851U) },
		{ FWorldContext::StaticStruct, Z_Construct_UScriptStruct_FWorldContext_Statics::NewStructOps, TEXT("WorldContext"), &Z_Registration_Info_UScriptStruct_WorldContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldContext), 2225020968U) },
		{ FStatColorMapEntry::StaticStruct, Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewStructOps, TEXT("StatColorMapEntry"), &Z_Registration_Info_UScriptStruct_StatColorMapEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatColorMapEntry), 2622729645U) },
		{ FStatColorMapping::StaticStruct, Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewStructOps, TEXT("StatColorMapping"), &Z_Registration_Info_UScriptStruct_StatColorMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatColorMapping), 912252269U) },
		{ FDropNoteInfo::StaticStruct, Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewStructOps, TEXT("DropNoteInfo"), &Z_Registration_Info_UScriptStruct_DropNoteInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDropNoteInfo), 2135133574U) },
		{ FScreenMessageString::StaticStruct, Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewStructOps, TEXT("ScreenMessageString"), &Z_Registration_Info_UScriptStruct_ScreenMessageString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenMessageString), 1061035360U) },
		{ FGameNameRedirect::StaticStruct, Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewStructOps, TEXT("GameNameRedirect"), &Z_Registration_Info_UScriptStruct_GameNameRedirect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameNameRedirect), 94793531U) },
		{ FClassRedirect::StaticStruct, Z_Construct_UScriptStruct_FClassRedirect_Statics::NewStructOps, TEXT("ClassRedirect"), &Z_Registration_Info_UScriptStruct_ClassRedirect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassRedirect), 270823994U) },
		{ FStructRedirect::StaticStruct, Z_Construct_UScriptStruct_FStructRedirect_Statics::NewStructOps, TEXT("StructRedirect"), &Z_Registration_Info_UScriptStruct_StructRedirect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructRedirect), 254400339U) },
		{ FPluginRedirect::StaticStruct, Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewStructOps, TEXT("PluginRedirect"), &Z_Registration_Info_UScriptStruct_PluginRedirect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPluginRedirect), 1504269214U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEngine, UEngine::StaticClass, TEXT("UEngine"), &Z_Registration_Info_UClass_UEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngine), 2516555349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_3300843868(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
