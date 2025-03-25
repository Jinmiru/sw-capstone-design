// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimNodeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeDataFlags();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeStructData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAnimNodeDataFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimNodeDataFlags;
static UEnum* EAnimNodeDataFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNodeDataFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimNodeDataFlags"));
	}
	return Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAnimNodeDataFlags>()
{
	return EAnimNodeDataFlags_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllFunctions.Name", "EAnimNodeDataFlags::AllFunctions" },
		{ "Comment", "// The flags field of FAnimNodeData\n// Primarily this is used to prevent the extra work asscicated with recovering folded properties for anim node functions\n" },
		{ "HasBecomeRelevantFunction.Comment", "// This node binds its become relevant function\n" },
		{ "HasBecomeRelevantFunction.Name", "EAnimNodeDataFlags::HasBecomeRelevantFunction" },
		{ "HasBecomeRelevantFunction.ToolTip", "This node binds its become relevant function" },
		{ "HasInitialUpdateFunction.Comment", "// This node binds its initial update function\n" },
		{ "HasInitialUpdateFunction.Name", "EAnimNodeDataFlags::HasInitialUpdateFunction" },
		{ "HasInitialUpdateFunction.ToolTip", "This node binds its initial update function" },
		{ "HasUpdateFunction.Comment", "// This node binds its update function\n" },
		{ "HasUpdateFunction.Name", "EAnimNodeDataFlags::HasUpdateFunction" },
		{ "HasUpdateFunction.ToolTip", "This node binds its update function" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "None.Name", "EAnimNodeDataFlags::None" },
		{ "ToolTip", "The flags field of FAnimNodeData\nPrimarily this is used to prevent the extra work asscicated with recovering folded properties for anim node functions" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimNodeDataFlags::None", (int64)EAnimNodeDataFlags::None },
		{ "EAnimNodeDataFlags::HasInitialUpdateFunction", (int64)EAnimNodeDataFlags::HasInitialUpdateFunction },
		{ "EAnimNodeDataFlags::HasBecomeRelevantFunction", (int64)EAnimNodeDataFlags::HasBecomeRelevantFunction },
		{ "EAnimNodeDataFlags::HasUpdateFunction", (int64)EAnimNodeDataFlags::HasUpdateFunction },
		{ "EAnimNodeDataFlags::AllFunctions", (int64)EAnimNodeDataFlags::AllFunctions },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAnimNodeDataFlags",
	"EAnimNodeDataFlags",
	Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAnimNodeDataFlags()
{
	if (!Z_Registration_Info_UEnum_EAnimNodeDataFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimNodeDataFlags.InnerSingleton, Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimNodeDataFlags.InnerSingleton;
}
// End Enum EAnimNodeDataFlags

// Begin ScriptStruct FAnimNodeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeData;
class UScriptStruct* FAnimNodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeData>()
{
	return FAnimNodeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNodeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Any constant/folded class data an anim node can be accessed via this struct\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "Any constant/folded class data an anim node can be accessed via this struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimClassInterface_MetaData[] = {
		{ "Comment", "/** The class we are part of */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "The class we are part of" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Comment", "/**\n\x09 * Flags & Indices for table entries. Used to look up indices from NodePropertyIndex->FoldedDataIndex.\n\x09 * If the MSB is set for an entry it is assumed to be on an instance, if not, it is assumed to be stored on the class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "Flags & Indices for table entries. Used to look up indices from NodePropertyIndex->FoldedDataIndex.\nIf the MSB is set for an entry it is assumed to be on an instance, if not, it is assumed to be stored on the class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[] = {
		{ "Comment", "/** \n\x09 * The index of the node for this constant data block in the class that it is held in. \n\x09 * INDEX_NONE if this node is not in a generated class or is per-instance data. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "The index of the node for this constant data block in the class that it is held in.\nINDEX_NONE if this node is not in a generated class or is per-instance data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Comment", "/** Common flags for this node */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "Common flags for this node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AnimClassInterface;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_AnimClassInterface = { "AnimClassInterface", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeData, AnimClassInterface), Z_Construct_UClass_UAnimClassInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimClassInterface_MetaData), NewProp_AnimClassInterface_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeData, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeData, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIndex_MetaData), NewProp_NodeIndex_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeData, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_AnimClassInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimNodeData",
	Z_Construct_UScriptStruct_FAnimNodeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeData_Statics::PropPointers),
	sizeof(FAnimNodeData),
	alignof(FAnimNodeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNodeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeData()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeData.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeData.InnerSingleton;
}
// End ScriptStruct FAnimNodeData

// Begin ScriptStruct FAnimNodeStructData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeStructData;
class UScriptStruct* FAnimNodeStructData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeStructData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeStructData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeStructData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeStructData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeStructData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeStructData>()
{
	return FAnimNodeStructData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNodeStructData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data about editor-side struct property indices.\n * Used to map property name to editor-only property indices. This allows us to avoid TMap lookups at runtime.   \n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "Data about editor-side struct property indices.\nUsed to map property name to editor-only property indices. This allows us to avoid TMap lookups at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameToIndexMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NameToIndexMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToIndexMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameToIndexMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeStructData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_ValueProp = { "NameToIndexMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_Key_KeyProp = { "NameToIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap = { "NameToIndexMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeStructData, NameToIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameToIndexMap_MetaData), NewProp_NameToIndexMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NumProperties = { "NumProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeStructData, NumProperties), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumProperties_MetaData), NewProp_NumProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NumProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimNodeStructData",
	Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::PropPointers),
	sizeof(FAnimNodeStructData),
	alignof(FAnimNodeStructData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeStructData()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeStructData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeStructData.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeStructData.InnerSingleton;
}
// End ScriptStruct FAnimNodeStructData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimNodeDataFlags_StaticEnum, TEXT("EAnimNodeDataFlags"), &Z_Registration_Info_UEnum_EAnimNodeDataFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 631437401U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNodeData::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewStructOps, TEXT("AnimNodeData"), &Z_Registration_Info_UScriptStruct_AnimNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeData), 898248607U) },
		{ FAnimNodeStructData::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewStructOps, TEXT("AnimNodeStructData"), &Z_Registration_Info_UScriptStruct_AnimNodeStructData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeStructData), 1059682525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_2157476260(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
