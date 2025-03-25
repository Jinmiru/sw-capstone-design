// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigInfluenceMap.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigInfluenceMap() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceEntry();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceEntryModifier();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMap();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigInfluenceEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigInfluenceEntry;
class UScriptStruct* FRigInfluenceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigInfluenceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceEntry, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigInfluenceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceEntry.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigInfluenceEntry>()
{
	return FRigInfluenceEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigInfluenceEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigInfluenceEntry, Source), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList_Inner = { "AffectedList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList = { "AffectedList", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigInfluenceEntry, AffectedList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectedList_MetaData), NewProp_AffectedList_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigInfluenceEntry",
	Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::PropPointers),
	sizeof(FRigInfluenceEntry),
	alignof(FRigInfluenceEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceEntry()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigInfluenceEntry.InnerSingleton, Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceEntry.InnerSingleton;
}
// End ScriptStruct FRigInfluenceEntry

// Begin ScriptStruct FRigInfluenceEntryModifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier;
class UScriptStruct* FRigInfluenceEntryModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceEntryModifier, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigInfluenceEntryModifier"));
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigInfluenceEntryModifier>()
{
	return FRigInfluenceEntryModifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectedList_MetaData[] = {
		{ "Category", "Inversion" },
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigInfluenceEntryModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList_Inner = { "AffectedList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList = { "AffectedList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigInfluenceEntryModifier, AffectedList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectedList_MetaData), NewProp_AffectedList_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigInfluenceEntryModifier",
	Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::PropPointers),
	sizeof(FRigInfluenceEntryModifier),
	alignof(FRigInfluenceEntryModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceEntryModifier()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.InnerSingleton, Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.InnerSingleton;
}
// End ScriptStruct FRigInfluenceEntryModifier

// Begin ScriptStruct FRigInfluenceMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigInfluenceMap;
class UScriptStruct* FRigInfluenceMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigInfluenceMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceMap, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigInfluenceMap"));
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceMap.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigInfluenceMap>()
{
	return FRigInfluenceMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigInfluenceMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyToIndex_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyToIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_KeyToIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigInfluenceMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigInfluenceMap, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigInfluenceEntry, METADATA_PARAMS(0, nullptr) }; // 2947349450
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigInfluenceMap, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 2947349450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_ValueProp = { "KeyToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_Key_KeyProp = { "KeyToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex = { "KeyToIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigInfluenceMap, KeyToIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyToIndex_MetaData), NewProp_KeyToIndex_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigInfluenceMap",
	Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::PropPointers),
	sizeof(FRigInfluenceMap),
	alignof(FRigInfluenceMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMap()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigInfluenceMap.InnerSingleton, Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceMap.InnerSingleton;
}
// End ScriptStruct FRigInfluenceMap

// Begin ScriptStruct FRigInfluenceMapPerEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent;
class UScriptStruct* FRigInfluenceMapPerEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigInfluenceMapPerEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigInfluenceMapPerEvent>()
{
	return FRigInfluenceMapPerEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maps_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Maps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Maps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventToIndex_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventToIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EventToIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigInfluenceMapPerEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps_Inner = { "Maps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigInfluenceMap, METADATA_PARAMS(0, nullptr) }; // 1864526500
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigInfluenceMapPerEvent, Maps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maps_MetaData), NewProp_Maps_MetaData) }; // 1864526500
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_ValueProp = { "EventToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_Key_KeyProp = { "EventToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex = { "EventToIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigInfluenceMapPerEvent, EventToIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventToIndex_MetaData), NewProp_EventToIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigInfluenceMapPerEvent",
	Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::PropPointers),
	sizeof(FRigInfluenceMapPerEvent),
	alignof(FRigInfluenceMapPerEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.InnerSingleton, Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.InnerSingleton;
}
// End ScriptStruct FRigInfluenceMapPerEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigInfluenceMap_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigInfluenceEntry::StaticStruct, Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewStructOps, TEXT("RigInfluenceEntry"), &Z_Registration_Info_UScriptStruct_RigInfluenceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigInfluenceEntry), 2947349450U) },
		{ FRigInfluenceEntryModifier::StaticStruct, Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewStructOps, TEXT("RigInfluenceEntryModifier"), &Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigInfluenceEntryModifier), 3510173625U) },
		{ FRigInfluenceMap::StaticStruct, Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewStructOps, TEXT("RigInfluenceMap"), &Z_Registration_Info_UScriptStruct_RigInfluenceMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigInfluenceMap), 1864526500U) },
		{ FRigInfluenceMapPerEvent::StaticStruct, Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewStructOps, TEXT("RigInfluenceMapPerEvent"), &Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigInfluenceMapPerEvent), 2581994178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigInfluenceMap_h_698517336(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigInfluenceMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigInfluenceMap_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
