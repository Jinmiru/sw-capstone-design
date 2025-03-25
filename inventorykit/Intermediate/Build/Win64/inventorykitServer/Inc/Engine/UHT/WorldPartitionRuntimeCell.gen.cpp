// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCell.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerInstanceNames.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionActorContainerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCell() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorContainer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCell_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataLayerInstanceNames();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FWorldPartitionRuntimeCellObjectMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping;
class UScriptStruct* FWorldPartitionRuntimeCellObjectMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionRuntimeCellObjectMapping"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionRuntimeCellObjectMapping>()
{
	return FWorldPartitionRuntimeCellObjectMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Package_MetaData[] = {
		{ "Comment", "/** \n\x09 * The name of the package to load to resolve on disk (can contain a single actor or a data chunk)\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "The name of the package to load to resolve on disk (can contain a single actor or a data chunk)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Comment", "/** \n\x09 * The complete name path of the contained object\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "The complete name path of the contained object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseClass_MetaData[] = {
		{ "Comment", "/** \n\x09 * The actor's base class\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "The actor's base class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeClass_MetaData[] = {
		{ "Comment", "/** \n\x09 * The actor's native base class\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "The actor's native base class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerID_MetaData[] = {
		{ "Comment", "/**\n\x09 * ID of the owning container instance\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "ID of the owning container instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerTransform_MetaData[] = {
		{ "Comment", "/** \n\x09 * Transform of the owning container instance\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Transform of the owning container instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyParentTransform_MetaData[] = {
		{ "Comment", "/** \n\x09 * Transform of the owning actor if editor only\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Transform of the owning actor if editor only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerPackage_MetaData[] = {
		{ "Comment", "/**\n\x09 * Package of the owning container instance\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Package of the owning container instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPackage_MetaData[] = {
		{ "Comment", "/**\n\x09 * Package of the World \n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Package of the World" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorInstanceGuid_MetaData[] = {
		{ "Comment", "/**\n\x09 * GUID of the actor instance\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "GUID of the actor instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedPath_MetaData[] = {
		{ "Comment", "/**\n\x09* Loaded actor path (when cooking or pie)\n\x09* \n\x09* Depending on if the actor was part of a container instance or the main partition this will be the path\n\x09* of the loaded or duplicated actor before it is moved into its runtime cell.\n\x09* \n\x09* If the actor was part of the world partition this path should match the Path property.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Loaded actor path (when cooking or pie)\n\nDepending on if the actor was part of a container instance or the main partition this will be the path\nof the loaded or duplicated actor before it is moved into its runtime cell.\n\nIf the actor was part of the world partition this path should match the Path property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Package;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Path;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorOnlyParentTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ContainerPackage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WorldPackage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInstanceGuid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LoadedPath;
	static void NewProp_bIsEditorOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionRuntimeCellObjectMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, Package), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Package_MetaData), NewProp_Package_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_BaseClass = { "BaseClass", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, BaseClass), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseClass_MetaData), NewProp_BaseClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_NativeClass = { "NativeClass", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, NativeClass), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeClass_MetaData), NewProp_NativeClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerID = { "ContainerID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, ContainerID), Z_Construct_UScriptStruct_FActorContainerID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerID_MetaData), NewProp_ContainerID_MetaData) }; // 1291227467
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerTransform = { "ContainerTransform", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, ContainerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerTransform_MetaData), NewProp_ContainerTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_EditorOnlyParentTransform = { "EditorOnlyParentTransform", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, EditorOnlyParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorOnlyParentTransform_MetaData), NewProp_EditorOnlyParentTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerPackage = { "ContainerPackage", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, ContainerPackage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerPackage_MetaData), NewProp_ContainerPackage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_WorldPackage = { "WorldPackage", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, WorldPackage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPackage_MetaData), NewProp_WorldPackage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ActorInstanceGuid = { "ActorInstanceGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, ActorInstanceGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorInstanceGuid_MetaData), NewProp_ActorInstanceGuid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_LoadedPath = { "LoadedPath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, LoadedPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedPath_MetaData), NewProp_LoadedPath_MetaData) };
void Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_bIsEditorOnly_SetBit(void* Obj)
{
	((FWorldPartitionRuntimeCellObjectMapping*)Obj)->bIsEditorOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_bIsEditorOnly = { "bIsEditorOnly", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWorldPartitionRuntimeCellObjectMapping), &Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_bIsEditorOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEditorOnly_MetaData), NewProp_bIsEditorOnly_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Package,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_BaseClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_NativeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_EditorOnlyParentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_WorldPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ActorInstanceGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_LoadedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_bIsEditorOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionRuntimeCellObjectMapping",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::PropPointers), 0),
	sizeof(FWorldPartitionRuntimeCellObjectMapping),
	alignof(FWorldPartitionRuntimeCellObjectMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.InnerSingleton;
}
// End ScriptStruct FWorldPartitionRuntimeCellObjectMapping

// Begin Enum EWorldPartitionRuntimeCellState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState;
static UEnum* EWorldPartitionRuntimeCellState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPartitionRuntimeCellState"));
	}
	return Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionRuntimeCellState>()
{
	return EWorldPartitionRuntimeCellState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Activated.Name", "EWorldPartitionRuntimeCellState::Activated" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Cell State\n */" },
		{ "Loaded.Name", "EWorldPartitionRuntimeCellState::Loaded" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Cell State" },
		{ "Unloaded.Name", "EWorldPartitionRuntimeCellState::Unloaded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPartitionRuntimeCellState::Unloaded", (int64)EWorldPartitionRuntimeCellState::Unloaded },
		{ "EWorldPartitionRuntimeCellState::Loaded", (int64)EWorldPartitionRuntimeCellState::Loaded },
		{ "EWorldPartitionRuntimeCellState::Activated", (int64)EWorldPartitionRuntimeCellState::Activated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EWorldPartitionRuntimeCellState",
	"EWorldPartitionRuntimeCellState",
	Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.InnerSingleton, Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.InnerSingleton;
}
// End Enum EWorldPartitionRuntimeCellState

// Begin ScriptStruct FWorldPartitionRuntimeCellDebugInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellDebugInfo;
class UScriptStruct* FWorldPartitionRuntimeCellDebugInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellDebugInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellDebugInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionRuntimeCellDebugInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellDebugInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionRuntimeCellDebugInfo>()
{
	return FWorldPartitionRuntimeCellDebugInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordX_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordY_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GridName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CoordX;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CoordY;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CoordZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionRuntimeCellDebugInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellDebugInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewProp_GridName = { "GridName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellDebugInfo, GridName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridName_MetaData), NewProp_GridName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewProp_CoordX = { "CoordX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellDebugInfo, CoordX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordX_MetaData), NewProp_CoordX_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewProp_CoordY = { "CoordY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellDebugInfo, CoordY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordY_MetaData), NewProp_CoordY_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewProp_CoordZ = { "CoordZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellDebugInfo, CoordZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordZ_MetaData), NewProp_CoordZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewProp_GridName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewProp_CoordX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewProp_CoordY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewProp_CoordZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionRuntimeCellDebugInfo",
	Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::PropPointers),
	sizeof(FWorldPartitionRuntimeCellDebugInfo),
	alignof(FWorldPartitionRuntimeCellDebugInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellDebugInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellDebugInfo.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellDebugInfo.InnerSingleton;
}
// End ScriptStruct FWorldPartitionRuntimeCellDebugInfo

// Begin Class UWorldPartitionRuntimeCell
void UWorldPartitionRuntimeCell::StaticRegisterNativesUWorldPartitionRuntimeCell()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeCell);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister()
{
	return UWorldPartitionRuntimeCell::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a PIE/Game streaming cell which points to external actor/data chunk packages\n */" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Represents a PIE/Game streaming cell which points to external actor/data chunk packages" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnsavedActorsContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlwaysLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClientOnlyVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHLOD_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockOnSlowLoading_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBundleID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellDebugColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCellGuid_MetaData[] = {
		{ "Comment", "// Used by injected HLOD cells\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Used by injected HLOD cells" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDataLayerAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeCellData_MetaData[] = {
		{ "Comment", "//~End UWorldPartitionRuntimeCellData Proxy\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnsavedActorsContainer;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bIsAlwaysLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlwaysLoaded;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers;
	static void NewProp_bClientOnlyVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientOnlyVisible;
	static void NewProp_bIsHLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHLOD;
	static void NewProp_bBlockOnSlowLoading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockOnSlowLoading;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentBundleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellDebugColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceCellGuid;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalDataLayerAsset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeCellData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeCell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_UnsavedActorsContainer = { "UnsavedActorsContainer", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, UnsavedActorsContainer), Z_Construct_UClass_UActorContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnsavedActorsContainer_MetaData), NewProp_UnsavedActorsContainer_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded_SetBit(void* Obj)
{
	((UWorldPartitionRuntimeCell*)Obj)->bIsAlwaysLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded = { "bIsAlwaysLoaded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeCell), &Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAlwaysLoaded_MetaData), NewProp_bIsAlwaysLoaded_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, DataLayers), Z_Construct_UScriptStruct_FDataLayerInstanceNames, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayers_MetaData), NewProp_DataLayers_MetaData) }; // 3382993314
void Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible_SetBit(void* Obj)
{
	((UWorldPartitionRuntimeCell*)Obj)->bClientOnlyVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible = { "bClientOnlyVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeCell), &Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClientOnlyVisible_MetaData), NewProp_bClientOnlyVisible_MetaData) };
void Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD_SetBit(void* Obj)
{
	((UWorldPartitionRuntimeCell*)Obj)->bIsHLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD = { "bIsHLOD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeCell), &Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHLOD_MetaData), NewProp_bIsHLOD_MetaData) };
void Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading_SetBit(void* Obj)
{
	((UWorldPartitionRuntimeCell*)Obj)->bBlockOnSlowLoading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading = { "bBlockOnSlowLoading", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeCell), &Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockOnSlowLoading_MetaData), NewProp_bBlockOnSlowLoading_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_ContentBundleID = { "ContentBundleID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, ContentBundleID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBundleID_MetaData), NewProp_ContentBundleID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_CellDebugColor = { "CellDebugColor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, CellDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellDebugColor_MetaData), NewProp_CellDebugColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_CellGuid = { "CellGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, CellGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellGuid_MetaData), NewProp_CellGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_SourceCellGuid = { "SourceCellGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, SourceCellGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCellGuid_MetaData), NewProp_SourceCellGuid_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_ExternalDataLayerAsset = { "ExternalDataLayerAsset", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, ExternalDataLayerAsset), Z_Construct_UClass_UExternalDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalDataLayerAsset_MetaData), NewProp_ExternalDataLayerAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_RuntimeCellData = { "RuntimeCellData", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, RuntimeCellData), Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeCellData_MetaData), NewProp_RuntimeCellData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_UnsavedActorsContainer,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_ContentBundleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_CellDebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_CellGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_SourceCellGuid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_ExternalDataLayerAsset,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_RuntimeCellData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UWorldPartitionCell_NoRegister, (int32)VTABLE_OFFSET(UWorldPartitionRuntimeCell, IWorldPartitionCell), false },  // 387172478
	{ Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister, (int32)VTABLE_OFFSET(UWorldPartitionRuntimeCell, IWorldPartitionCookPackageObject), false },  // 929673968
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::ClassParams = {
	&UWorldPartitionRuntimeCell::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeCell>()
{
	return UWorldPartitionRuntimeCell::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeCell);
UWorldPartitionRuntimeCell::~UWorldPartitionRuntimeCell() {}
// End Class UWorldPartitionRuntimeCell

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWorldPartitionRuntimeCellState_StaticEnum, TEXT("EWorldPartitionRuntimeCellState"), &Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1120169810U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldPartitionRuntimeCellObjectMapping::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewStructOps, TEXT("WorldPartitionRuntimeCellObjectMapping"), &Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionRuntimeCellObjectMapping), 588830860U) },
		{ FWorldPartitionRuntimeCellDebugInfo::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewStructOps, TEXT("WorldPartitionRuntimeCellDebugInfo"), &Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellDebugInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionRuntimeCellDebugInfo), 1825172987U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeCell, UWorldPartitionRuntimeCell::StaticClass, TEXT("UWorldPartitionRuntimeCell"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeCell), 1480079962U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_629536134(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
