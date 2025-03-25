// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionActorContainerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeContainerResolving() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FWorldPartitionRuntimeContainerInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerInstance;
class UScriptStruct* FWorldPartitionRuntimeContainerInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionRuntimeContainerInstance"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionRuntimeContainerInstance>()
{
	return FWorldPartitionRuntimeContainerInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerPackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGuid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ContainerPackage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionRuntimeContainerInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::NewProp_ActorGuid = { "ActorGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeContainerInstance, ActorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorGuid_MetaData), NewProp_ActorGuid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::NewProp_ContainerPackage = { "ContainerPackage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeContainerInstance, ContainerPackage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerPackage_MetaData), NewProp_ContainerPackage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::NewProp_ActorGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::NewProp_ContainerPackage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionRuntimeContainerInstance",
	Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::PropPointers),
	sizeof(FWorldPartitionRuntimeContainerInstance),
	alignof(FWorldPartitionRuntimeContainerInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerInstance.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerInstance.InnerSingleton;
}
// End ScriptStruct FWorldPartitionRuntimeContainerInstance

// Begin ScriptStruct FWorldPartitionRuntimeContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainer;
class UScriptStruct* FWorldPartitionRuntimeContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionRuntimeContainer"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionRuntimeContainer>()
{
	return FWorldPartitionRuntimeContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerInstances_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ContainerInstances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ContainerInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionRuntimeContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::NewProp_ContainerInstances_ValueProp = { "ContainerInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance, METADATA_PARAMS(0, nullptr) }; // 1925721887
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::NewProp_ContainerInstances_Key_KeyProp = { "ContainerInstances_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::NewProp_ContainerInstances = { "ContainerInstances", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeContainer, ContainerInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerInstances_MetaData), NewProp_ContainerInstances_MetaData) }; // 1925721887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::NewProp_ContainerInstances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::NewProp_ContainerInstances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::NewProp_ContainerInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionRuntimeContainer",
	Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::PropPointers),
	sizeof(FWorldPartitionRuntimeContainer),
	alignof(FWorldPartitionRuntimeContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainer.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainer.InnerSingleton;
}
// End ScriptStruct FWorldPartitionRuntimeContainer

// Begin ScriptStruct FWorldPartitionRuntimeContainerResolver
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerResolver;
class UScriptStruct* FWorldPartitionRuntimeContainerResolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerResolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerResolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionRuntimeContainerResolver"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerResolver.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionRuntimeContainerResolver>()
{
	return FWorldPartitionRuntimeContainerResolver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FWorldPartitionRuntimeContainerResolver\n *\n * Helper class that allows resolving a hierarchy of Container actor names (Editor Path) to a resolvable persistent level path (Runtime Path)\n * \n * Editor Path : /Game/Map.Map:PersistentLevel.LevelInstance1.LevelInstance2.StaticMeshActor \n * Runtime Path : /Game/Map.Map:PersistentLevel.StaticMeshActor_{ContainerID}\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h" },
		{ "ToolTip", "FWorldPartitionRuntimeContainerResolver\n\nHelper class that allows resolving a hierarchy of Container actor names (Editor Path) to a resolvable persistent level path (Runtime Path)\n\nEditor Path : /Game/Map.Map:PersistentLevel.LevelInstance1.LevelInstance2.StaticMeshActor\nRuntime Path : /Game/Map.Map:PersistentLevel.StaticMeshActor_{ContainerID}" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Containers_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainContainerPackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerIDToEditorPath_MetaData[] = {
		{ "Comment", "// Reverse lookup :\n// ex: {ContainerID}, \"LevelInstance1.LevelInstance2\"\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeContainerResolving.h" },
		{ "ToolTip", "Reverse lookup :\nex: {ContainerID}, \"LevelInstance1.LevelInstance2\"" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Containers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Containers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Containers;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MainContainerPackage;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContainerIDToEditorPath_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerIDToEditorPath_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ContainerIDToEditorPath;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionRuntimeContainerResolver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_Containers_ValueProp = { "Containers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer, METADATA_PARAMS(0, nullptr) }; // 3966925564
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_Containers_Key_KeyProp = { "Containers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_Containers = { "Containers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeContainerResolver, Containers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Containers_MetaData), NewProp_Containers_MetaData) }; // 3966925564
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_MainContainerPackage = { "MainContainerPackage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeContainerResolver, MainContainerPackage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainContainerPackage_MetaData), NewProp_MainContainerPackage_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_ContainerIDToEditorPath_ValueProp = { "ContainerIDToEditorPath", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_ContainerIDToEditorPath_Key_KeyProp = { "ContainerIDToEditorPath_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorContainerID, METADATA_PARAMS(0, nullptr) }; // 1291227467
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_ContainerIDToEditorPath = { "ContainerIDToEditorPath", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeContainerResolver, ContainerIDToEditorPath), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerIDToEditorPath_MetaData), NewProp_ContainerIDToEditorPath_MetaData) }; // 1291227467
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_Containers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_Containers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_Containers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_MainContainerPackage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_ContainerIDToEditorPath_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_ContainerIDToEditorPath_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewProp_ContainerIDToEditorPath,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionRuntimeContainerResolver",
	Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::PropPointers),
	sizeof(FWorldPartitionRuntimeContainerResolver),
	alignof(FWorldPartitionRuntimeContainerResolver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerResolver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerResolver.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerResolver.InnerSingleton;
}
// End ScriptStruct FWorldPartitionRuntimeContainerResolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeContainerResolving_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldPartitionRuntimeContainerInstance::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::NewStructOps, TEXT("WorldPartitionRuntimeContainerInstance"), &Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionRuntimeContainerInstance), 1925721887U) },
		{ FWorldPartitionRuntimeContainer::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::NewStructOps, TEXT("WorldPartitionRuntimeContainer"), &Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionRuntimeContainer), 3966925564U) },
		{ FWorldPartitionRuntimeContainerResolver::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewStructOps, TEXT("WorldPartitionRuntimeContainerResolver"), &Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeContainerResolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionRuntimeContainerResolver), 3408488840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeContainerResolving_h_3933685019(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeContainerResolving_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeContainerResolving_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
