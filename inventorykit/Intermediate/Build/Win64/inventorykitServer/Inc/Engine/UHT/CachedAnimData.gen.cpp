// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/CachedAnimData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCachedAnimData() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimRelevancyData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateArray();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimTransitionData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCachedAnimStateData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedAnimStateData;
class UScriptStruct* FCachedAnimStateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimStateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedAnimStateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimStateData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimStateData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimStateData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedAnimStateData>()
{
	return FCachedAnimStateData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedAnimStateData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This file contains a number of helper structures that can be used to process state-machine-\n * related data in C++. This includes relevancy, state weights, animation time etc.\n */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "This file contains a number of helper structures that can be used to process state-machine-\nrelated data in C++. This includes relevancy, state weights, animation time etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of StateMachine State is in */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of State to Cache */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of State to Cache" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimStateData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedAnimStateData, StateMachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineName_MetaData), NewProp_StateMachineName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedAnimStateData, StateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateName_MetaData), NewProp_StateName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CachedAnimStateData",
	Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::PropPointers),
	sizeof(FCachedAnimStateData),
	alignof(FCachedAnimStateData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateData()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimStateData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedAnimStateData.InnerSingleton, Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimStateData.InnerSingleton;
}
// End ScriptStruct FCachedAnimStateData

// Begin ScriptStruct FCachedAnimStateArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedAnimStateArray;
class UScriptStruct* FCachedAnimStateArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimStateArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedAnimStateArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimStateArray, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimStateArray"));
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimStateArray.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedAnimStateArray>()
{
	return FCachedAnimStateArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Array of states */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Array of states" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_States_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimStateArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedAnimStateData, METADATA_PARAMS(0, nullptr) }; // 3498891689
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedAnimStateArray, States), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_States_MetaData), NewProp_States_MetaData) }; // 3498891689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CachedAnimStateArray",
	Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::PropPointers),
	sizeof(FCachedAnimStateArray),
	alignof(FCachedAnimStateArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateArray()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimStateArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedAnimStateArray.InnerSingleton, Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimStateArray.InnerSingleton;
}
// End ScriptStruct FCachedAnimStateArray

// Begin ScriptStruct FCachedAnimAssetPlayerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData;
class UScriptStruct* FCachedAnimAssetPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimAssetPlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedAnimAssetPlayerData>()
{
	return FCachedAnimAssetPlayerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of StateMachine State is in */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of State to Cache */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of State to Cache" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimAssetPlayerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedAnimAssetPlayerData, StateMachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineName_MetaData), NewProp_StateMachineName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedAnimAssetPlayerData, StateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateName_MetaData), NewProp_StateName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CachedAnimAssetPlayerData",
	Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::PropPointers),
	sizeof(FCachedAnimAssetPlayerData),
	alignof(FCachedAnimAssetPlayerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.InnerSingleton, Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.InnerSingleton;
}
// End ScriptStruct FCachedAnimAssetPlayerData

// Begin ScriptStruct FCachedAnimRelevancyData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData;
class UScriptStruct* FCachedAnimRelevancyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimRelevancyData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimRelevancyData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedAnimRelevancyData>()
{
	return FCachedAnimRelevancyData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of StateMachine State is in */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of State to Cache */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of State to Cache" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimRelevancyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedAnimRelevancyData, StateMachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineName_MetaData), NewProp_StateMachineName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedAnimRelevancyData, StateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateName_MetaData), NewProp_StateName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CachedAnimRelevancyData",
	Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::PropPointers),
	sizeof(FCachedAnimRelevancyData),
	alignof(FCachedAnimRelevancyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimRelevancyData()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.InnerSingleton, Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.InnerSingleton;
}
// End ScriptStruct FCachedAnimRelevancyData

// Begin ScriptStruct FCachedAnimTransitionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedAnimTransitionData;
class UScriptStruct* FCachedAnimTransitionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimTransitionData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimTransitionData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedAnimTransitionData>()
{
	return FCachedAnimTransitionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of StateMachine State is in */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromStateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of From State to Cache */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of From State to Cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToStateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of To State to Cache */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of To State to Cache" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FromStateName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ToStateName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimTransitionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedAnimTransitionData, StateMachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineName_MetaData), NewProp_StateMachineName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName = { "FromStateName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedAnimTransitionData, FromStateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromStateName_MetaData), NewProp_FromStateName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName = { "ToStateName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedAnimTransitionData, ToStateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToStateName_MetaData), NewProp_ToStateName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CachedAnimTransitionData",
	Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::PropPointers),
	sizeof(FCachedAnimTransitionData),
	alignof(FCachedAnimTransitionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimTransitionData()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.InnerSingleton, Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.InnerSingleton;
}
// End ScriptStruct FCachedAnimTransitionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCachedAnimStateData::StaticStruct, Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewStructOps, TEXT("CachedAnimStateData"), &Z_Registration_Info_UScriptStruct_CachedAnimStateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedAnimStateData), 3498891689U) },
		{ FCachedAnimStateArray::StaticStruct, Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewStructOps, TEXT("CachedAnimStateArray"), &Z_Registration_Info_UScriptStruct_CachedAnimStateArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedAnimStateArray), 3502073305U) },
		{ FCachedAnimAssetPlayerData::StaticStruct, Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewStructOps, TEXT("CachedAnimAssetPlayerData"), &Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedAnimAssetPlayerData), 2415983980U) },
		{ FCachedAnimRelevancyData::StaticStruct, Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewStructOps, TEXT("CachedAnimRelevancyData"), &Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedAnimRelevancyData), 1149160042U) },
		{ FCachedAnimTransitionData::StaticStruct, Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewStructOps, TEXT("CachedAnimTransitionData"), &Z_Registration_Info_UScriptStruct_CachedAnimTransitionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedAnimTransitionData), 3477874333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h_886834173(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
