// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectReplicationBridgeConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridgeConfig();
IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridgeConfig_NoRegister();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FObjectReplicationBridgePollConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig;
class UScriptStruct* FObjectReplicationBridgePollConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectReplicationBridgePollConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectReplicationBridgePollConfig>()
{
	return FObjectReplicationBridgePollConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Instances of this class, specified by its fully qualified path, should use the supplied poll frame period to check for modified replicated properties.\n\x09 * Object and Actor are forbidden class names for performance reasons.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Instances of this class, specified by its fully qualified path, should use the supplied poll frame period to check for modified replicated properties.\nObject and Actor are forbidden class names for performance reasons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PollFrequency_MetaData[] = {
		{ "Comment", "/**\n\x09 * How many times per second should we poll for modified replicated properties.\n\x09 * The value will be converted into a frame count based on the current TickRate up to a maximum of 255 frames\n\x09 * This means the slowest poll frequency is 255*MaxTickRate (ex: 8.5secs at 30hz)\n\x09 * If set to 0 it means we poll the object every frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "How many times per second should we poll for modified replicated properties.\nThe value will be converted into a frame count based on the current TickRate up to a maximum of 255 frames\nThis means the slowest poll frequency is 255*MaxTickRate (ex: 8.5secs at 30hz)\nIf set to 0 it means we poll the object every frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSubclasses_MetaData[] = {
		{ "Comment", "/** Whether instances of subclasses should also use this poll period. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Whether instances of subclasses should also use this poll period." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PollFrequency;
	static void NewProp_bIncludeSubclasses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSubclasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectReplicationBridgePollConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicationBridgePollConfig, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_PollFrequency = { "PollFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicationBridgePollConfig, PollFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PollFrequency_MetaData), NewProp_PollFrequency_MetaData) };
void Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses_SetBit(void* Obj)
{
	((FObjectReplicationBridgePollConfig*)Obj)->bIncludeSubclasses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses = { "bIncludeSubclasses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FObjectReplicationBridgePollConfig), &Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeSubclasses_MetaData), NewProp_bIncludeSubclasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_PollFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"ObjectReplicationBridgePollConfig",
	Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::PropPointers),
	sizeof(FObjectReplicationBridgePollConfig),
	alignof(FObjectReplicationBridgePollConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.InnerSingleton;
}
// End ScriptStruct FObjectReplicationBridgePollConfig

// Begin ScriptStruct FObjectReplicationBridgeFilterConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig;
class UScriptStruct* FObjectReplicationBridgeFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectReplicationBridgeFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectReplicationBridgeFilterConfig>()
{
	return FObjectReplicationBridgeFilterConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** Instances of this class should use the filter supplied. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Instances of this class should use the filter supplied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicFilterName_MetaData[] = {
		{ "Comment", "/** The name of the filter to set on the class instances. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "The name of the filter to set on the class instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterProfile_MetaData[] = {
		{ "Comment", "/** Optional name to a profile that can further specialize the settings within a dynamic filter */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Optional name to a profile that can further specialize the settings within a dynamic filter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceEnableOnAllInstances_MetaData[] = {
		{ "Comment", "/** Whether this filter should be used for all instances of this class and subclasses, regardless of bAlwaysRelevant and bOnlyRelevantToOwner settings on instance. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Whether this filter should be used for all instances of this class and subclasses, regardless of bAlwaysRelevant and bOnlyRelevantToOwner settings on instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DynamicFilterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilterProfile;
	static void NewProp_bForceEnableOnAllInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceEnableOnAllInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectReplicationBridgeFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicationBridgeFilterConfig, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_DynamicFilterName = { "DynamicFilterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicationBridgeFilterConfig, DynamicFilterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicFilterName_MetaData), NewProp_DynamicFilterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_FilterProfile = { "FilterProfile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicationBridgeFilterConfig, FilterProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterProfile_MetaData), NewProp_FilterProfile_MetaData) };
void Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_bForceEnableOnAllInstances_SetBit(void* Obj)
{
	((FObjectReplicationBridgeFilterConfig*)Obj)->bForceEnableOnAllInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_bForceEnableOnAllInstances = { "bForceEnableOnAllInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FObjectReplicationBridgeFilterConfig), &Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_bForceEnableOnAllInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceEnableOnAllInstances_MetaData), NewProp_bForceEnableOnAllInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_DynamicFilterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_FilterProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_bForceEnableOnAllInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"ObjectReplicationBridgeFilterConfig",
	Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::PropPointers),
	sizeof(FObjectReplicationBridgeFilterConfig),
	alignof(FObjectReplicationBridgeFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.InnerSingleton;
}
// End ScriptStruct FObjectReplicationBridgeFilterConfig

// Begin ScriptStruct FObjectReplicationBridgePrioritizerConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig;
class UScriptStruct* FObjectReplicationBridgePrioritizerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectReplicationBridgePrioritizerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectReplicationBridgePrioritizerConfig>()
{
	return FObjectReplicationBridgePrioritizerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** Instances of this class and its subclasses, specified by its fully qualified path, should use the prioritizer supplied. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Instances of this class and its subclasses, specified by its fully qualified path, should use the prioritizer supplied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrioritizerName_MetaData[] = {
		{ "Comment", "/** The name of the prioritizer to set on the class instances. \"Default\" can be used to specify the default spatial prioritizer. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "The name of the prioritizer to set on the class instances. \"Default\" can be used to specify the default spatial prioritizer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceEnableOnAllInstances_MetaData[] = {
		{ "Comment", "/** Whether this prioritizer should be used for all instances of this class and subclasses, regardless of bAlwaysRelevant and bOnlyRelevantToOwner settings on instance. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Whether this prioritizer should be used for all instances of this class and subclasses, regardless of bAlwaysRelevant and bOnlyRelevantToOwner settings on instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PrioritizerName;
	static void NewProp_bForceEnableOnAllInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceEnableOnAllInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectReplicationBridgePrioritizerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicationBridgePrioritizerConfig, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_PrioritizerName = { "PrioritizerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicationBridgePrioritizerConfig, PrioritizerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrioritizerName_MetaData), NewProp_PrioritizerName_MetaData) };
void Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_bForceEnableOnAllInstances_SetBit(void* Obj)
{
	((FObjectReplicationBridgePrioritizerConfig*)Obj)->bForceEnableOnAllInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_bForceEnableOnAllInstances = { "bForceEnableOnAllInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FObjectReplicationBridgePrioritizerConfig), &Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_bForceEnableOnAllInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceEnableOnAllInstances_MetaData), NewProp_bForceEnableOnAllInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_PrioritizerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_bForceEnableOnAllInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"ObjectReplicationBridgePrioritizerConfig",
	Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::PropPointers),
	sizeof(FObjectReplicationBridgePrioritizerConfig),
	alignof(FObjectReplicationBridgePrioritizerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.InnerSingleton;
}
// End ScriptStruct FObjectReplicationBridgePrioritizerConfig

// Begin ScriptStruct FObjectReplicationBridgeDeltaCompressionConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig;
class UScriptStruct* FObjectReplicationBridgeDeltaCompressionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectReplicationBridgeDeltaCompressionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectReplicationBridgeDeltaCompressionConfig>()
{
	return FObjectReplicationBridgeDeltaCompressionConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** Instances of this class or derived from this class should use delta compression */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Instances of this class or derived from this class should use delta compression" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDeltaCompression_MetaData[] = {
		{ "Comment", "/** Set to true if delta compression should be enabled for instances derived from this class. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Set to true if delta compression should be enabled for instances derived from this class." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static void NewProp_bEnableDeltaCompression_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDeltaCompression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectReplicationBridgeDeltaCompressionConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicationBridgeDeltaCompressionConfig, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
void Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression_SetBit(void* Obj)
{
	((FObjectReplicationBridgeDeltaCompressionConfig*)Obj)->bEnableDeltaCompression = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression = { "bEnableDeltaCompression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FObjectReplicationBridgeDeltaCompressionConfig), &Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDeltaCompression_MetaData), NewProp_bEnableDeltaCompression_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"ObjectReplicationBridgeDeltaCompressionConfig",
	Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::PropPointers),
	sizeof(FObjectReplicationBridgeDeltaCompressionConfig),
	alignof(FObjectReplicationBridgeDeltaCompressionConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.InnerSingleton;
}
// End ScriptStruct FObjectReplicationBridgeDeltaCompressionConfig

// Begin ScriptStruct FObjectReplicatedBridgeCriticalClassConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectReplicatedBridgeCriticalClassConfig;
class UScriptStruct* FObjectReplicatedBridgeCriticalClassConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicatedBridgeCriticalClassConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectReplicatedBridgeCriticalClassConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectReplicatedBridgeCriticalClassConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicatedBridgeCriticalClassConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectReplicatedBridgeCriticalClassConfig>()
{
	return FObjectReplicatedBridgeCriticalClassConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** Instances of this class or its subclasses will force a client disconnection when it detects a protocol mismatch.*/" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Instances of this class or its subclasses will force a client disconnection when it detects a protocol mismatch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisconnectOnProtocolMismatch_MetaData[] = {
		{ "Comment", "/** When true we force the client to disconnect when a protocol mismatch prevents it from instantiating replicated objects of this class. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "When true we force the client to disconnect when a protocol mismatch prevents it from instantiating replicated objects of this class." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static void NewProp_bDisconnectOnProtocolMismatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisconnectOnProtocolMismatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectReplicatedBridgeCriticalClassConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicatedBridgeCriticalClassConfig, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
void Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::NewProp_bDisconnectOnProtocolMismatch_SetBit(void* Obj)
{
	((FObjectReplicatedBridgeCriticalClassConfig*)Obj)->bDisconnectOnProtocolMismatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::NewProp_bDisconnectOnProtocolMismatch = { "bDisconnectOnProtocolMismatch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FObjectReplicatedBridgeCriticalClassConfig), &Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::NewProp_bDisconnectOnProtocolMismatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisconnectOnProtocolMismatch_MetaData), NewProp_bDisconnectOnProtocolMismatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::NewProp_bDisconnectOnProtocolMismatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"ObjectReplicatedBridgeCriticalClassConfig",
	Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::PropPointers),
	sizeof(FObjectReplicatedBridgeCriticalClassConfig),
	alignof(FObjectReplicatedBridgeCriticalClassConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicatedBridgeCriticalClassConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectReplicatedBridgeCriticalClassConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicatedBridgeCriticalClassConfig.InnerSingleton;
}
// End ScriptStruct FObjectReplicatedBridgeCriticalClassConfig

// Begin ScriptStruct FObjectReplicationBridgeTypeStatsConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeTypeStatsConfig;
class UScriptStruct* FObjectReplicationBridgeTypeStatsConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeTypeStatsConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeTypeStatsConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectReplicationBridgeTypeStatsConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeTypeStatsConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectReplicationBridgeTypeStatsConfig>()
{
	return FObjectReplicationBridgeTypeStatsConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** Instances of this class or derived from this class should use delta compression */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Instances of this class or derived from this class should use delta compression" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeStatsName_MetaData[] = {
		{ "Comment", "/** The TypeStatsName this class should use. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "The TypeStatsName this class should use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInMinimalCSVStats_MetaData[] = {
		{ "Comment", "/** If set to true this type will be reported even in configs with minimal stats reporting */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "If set to true this type will be reported even in configs with minimal stats reporting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeStatsName;
	static void NewProp_bIncludeInMinimalCSVStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInMinimalCSVStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectReplicationBridgeTypeStatsConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicationBridgeTypeStatsConfig, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::NewProp_TypeStatsName = { "TypeStatsName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectReplicationBridgeTypeStatsConfig, TypeStatsName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeStatsName_MetaData), NewProp_TypeStatsName_MetaData) };
void Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::NewProp_bIncludeInMinimalCSVStats_SetBit(void* Obj)
{
	((FObjectReplicationBridgeTypeStatsConfig*)Obj)->bIncludeInMinimalCSVStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::NewProp_bIncludeInMinimalCSVStats = { "bIncludeInMinimalCSVStats", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FObjectReplicationBridgeTypeStatsConfig), &Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::NewProp_bIncludeInMinimalCSVStats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeInMinimalCSVStats_MetaData), NewProp_bIncludeInMinimalCSVStats_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::NewProp_TypeStatsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::NewProp_bIncludeInMinimalCSVStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"ObjectReplicationBridgeTypeStatsConfig",
	Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::PropPointers),
	sizeof(FObjectReplicationBridgeTypeStatsConfig),
	alignof(FObjectReplicationBridgeTypeStatsConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeTypeStatsConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeTypeStatsConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeTypeStatsConfig.InnerSingleton;
}
// End ScriptStruct FObjectReplicationBridgeTypeStatsConfig

// Begin Class UObjectReplicationBridgeConfig
void UObjectReplicationBridgeConfig::StaticRegisterNativesUObjectReplicationBridgeConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectReplicationBridgeConfig);
UClass* Z_Construct_UClass_UObjectReplicationBridgeConfig_NoRegister()
{
	return UObjectReplicationBridgeConfig::StaticClass();
}
struct Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PollConfigs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which classes should override how often they're polled for modified replicated properties.\n\x09 * A config for a class deeper in the class hierarchy has precedence over a more generic class.\n\x09 * By default an Actor's NetUpdateFrequency is used to calculate how often it should be polled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Which classes should override how often they're polled for modified replicated properties.\nA config for a class deeper in the class hierarchy has precedence over a more generic class.\nBy default an Actor's NetUpdateFrequency is used to calculate how often it should be polled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterConfigs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which classes should apply a certain filter. Subclasses will inherit the settings unless\n\x09 * they have different relevancy or spatial behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Which classes should apply a certain filter. Subclasses will inherit the settings unless\nthey have different relevancy or spatial behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrioritizerConfigs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which classes should apply a certain prioritizer. Subclasses will inherit the settings.\n\x09 * Instances with fixed priorities will ignore any config.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Which classes should apply a certain prioritizer. Subclasses will inherit the settings.\nInstances with fixed priorities will ignore any config." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaCompressionConfigs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which classes should enable deltacompression. Derived classes will get the same behavior unless overidden\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Which classes should enable deltacompression. Derived classes will get the same behavior unless overidden" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalClassConfigs_MetaData[] = {
		{ "Comment", "/** Classes that are considered critical and will force a disconnection when a protocol mismatch is detected. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Classes that are considered critical and will force a disconnection when a protocol mismatch is detected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllClassesCritical_MetaData[] = {
		{ "Comment", "/** Set this to true if you want any class with a protocol mismatch to force a disconnection. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Set this to true if you want any class with a protocol mismatch to force a disconnection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeStatsConfigs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which classes should collect TypeStats. Derived classes will get the same behavior unless overidden\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Which classes should collect TypeStats. Derived classes will get the same behavior unless overidden" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpatialFilterName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the filter to apply objects that can have spatial filtering applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "The name of the filter to apply objects that can have spatial filtering applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredNetDriverChannelClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the channel class required for object replication to work.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "The name of the channel class required for object replication to work." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalActorClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PollConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PollConfigs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterConfigs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrioritizerConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrioritizerConfigs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaCompressionConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaCompressionConfigs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalClassConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CriticalClassConfigs;
	static void NewProp_bAllClassesCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllClassesCritical;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeStatsConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TypeStatsConfigs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultSpatialFilterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredNetDriverChannelClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CriticalActorClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CriticalActorClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectReplicationBridgeConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs_Inner = { "PollConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig, METADATA_PARAMS(0, nullptr) }; // 1667790440
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs = { "PollConfigs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReplicationBridgeConfig, PollConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PollConfigs_MetaData), NewProp_PollConfigs_MetaData) }; // 1667790440
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs_Inner = { "FilterConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig, METADATA_PARAMS(0, nullptr) }; // 2850355509
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs = { "FilterConfigs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReplicationBridgeConfig, FilterConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterConfigs_MetaData), NewProp_FilterConfigs_MetaData) }; // 2850355509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs_Inner = { "PrioritizerConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig, METADATA_PARAMS(0, nullptr) }; // 1463487952
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs = { "PrioritizerConfigs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReplicationBridgeConfig, PrioritizerConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrioritizerConfigs_MetaData), NewProp_PrioritizerConfigs_MetaData) }; // 1463487952
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs_Inner = { "DeltaCompressionConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig, METADATA_PARAMS(0, nullptr) }; // 980104975
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs = { "DeltaCompressionConfigs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReplicationBridgeConfig, DeltaCompressionConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaCompressionConfigs_MetaData), NewProp_DeltaCompressionConfigs_MetaData) }; // 980104975
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_CriticalClassConfigs_Inner = { "CriticalClassConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig, METADATA_PARAMS(0, nullptr) }; // 595859200
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_CriticalClassConfigs = { "CriticalClassConfigs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReplicationBridgeConfig, CriticalClassConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalClassConfigs_MetaData), NewProp_CriticalClassConfigs_MetaData) }; // 595859200
void Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_bAllClassesCritical_SetBit(void* Obj)
{
	((UObjectReplicationBridgeConfig*)Obj)->bAllClassesCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_bAllClassesCritical = { "bAllClassesCritical", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UObjectReplicationBridgeConfig), &Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_bAllClassesCritical_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllClassesCritical_MetaData), NewProp_bAllClassesCritical_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_TypeStatsConfigs_Inner = { "TypeStatsConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig, METADATA_PARAMS(0, nullptr) }; // 2236936899
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_TypeStatsConfigs = { "TypeStatsConfigs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReplicationBridgeConfig, TypeStatsConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeStatsConfigs_MetaData), NewProp_TypeStatsConfigs_MetaData) }; // 2236936899
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DefaultSpatialFilterName = { "DefaultSpatialFilterName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReplicationBridgeConfig, DefaultSpatialFilterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSpatialFilterName_MetaData), NewProp_DefaultSpatialFilterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_RequiredNetDriverChannelClassName = { "RequiredNetDriverChannelClassName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReplicationBridgeConfig, RequiredNetDriverChannelClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredNetDriverChannelClassName_MetaData), NewProp_RequiredNetDriverChannelClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_CriticalActorClasses_Inner = { "CriticalActorClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_CriticalActorClasses = { "CriticalActorClasses", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReplicationBridgeConfig, CriticalActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalActorClasses_MetaData), NewProp_CriticalActorClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_CriticalClassConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_CriticalClassConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_bAllClassesCritical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_TypeStatsConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_TypeStatsConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DefaultSpatialFilterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_RequiredNetDriverChannelClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_CriticalActorClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_CriticalActorClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::ClassParams = {
	&UObjectReplicationBridgeConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectReplicationBridgeConfig()
{
	if (!Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.OuterSingleton, Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UObjectReplicationBridgeConfig>()
{
	return UObjectReplicationBridgeConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectReplicationBridgeConfig);
UObjectReplicationBridgeConfig::~UObjectReplicationBridgeConfig() {}
// End Class UObjectReplicationBridgeConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FObjectReplicationBridgePollConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewStructOps, TEXT("ObjectReplicationBridgePollConfig"), &Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectReplicationBridgePollConfig), 1667790440U) },
		{ FObjectReplicationBridgeFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewStructOps, TEXT("ObjectReplicationBridgeFilterConfig"), &Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectReplicationBridgeFilterConfig), 2850355509U) },
		{ FObjectReplicationBridgePrioritizerConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewStructOps, TEXT("ObjectReplicationBridgePrioritizerConfig"), &Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectReplicationBridgePrioritizerConfig), 1463487952U) },
		{ FObjectReplicationBridgeDeltaCompressionConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewStructOps, TEXT("ObjectReplicationBridgeDeltaCompressionConfig"), &Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectReplicationBridgeDeltaCompressionConfig), 980104975U) },
		{ FObjectReplicatedBridgeCriticalClassConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::NewStructOps, TEXT("ObjectReplicatedBridgeCriticalClassConfig"), &Z_Registration_Info_UScriptStruct_ObjectReplicatedBridgeCriticalClassConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectReplicatedBridgeCriticalClassConfig), 595859200U) },
		{ FObjectReplicationBridgeTypeStatsConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::NewStructOps, TEXT("ObjectReplicationBridgeTypeStatsConfig"), &Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeTypeStatsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectReplicationBridgeTypeStatsConfig), 2236936899U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectReplicationBridgeConfig, UObjectReplicationBridgeConfig::StaticClass, TEXT("UObjectReplicationBridgeConfig"), &Z_Registration_Info_UClass_UObjectReplicationBridgeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectReplicationBridgeConfig), 3772259924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_3976295958(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
