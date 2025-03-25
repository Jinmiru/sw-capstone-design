// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ISMPartition/ISMComponentData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMComponentData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMClientData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMClientInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentInstance();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FISMComponentInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMComponentInstance;
class UScriptStruct* FISMComponentInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMComponentInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMComponentInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMComponentInstance>()
{
	return FISMComponentInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FISMComponentInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents one component instance with a mapping back to the Client instance. The should be a 1 to 1 relationship between those and the actual Component instances. (equal count) */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Represents one component instance with a mapping back to the Client instance. The should be a 1 to 1 relationship between those and the actual Component instances. (equal count)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientIndex_MetaData[] = {
		{ "Comment", "/** Client Index in the AISMPartitionActor */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Client Index in the AISMPartitionActor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[] = {
		{ "Comment", "/** Instance Index in the FISMClientData struct */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Instance Index in the FISMClientData struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceSubIndex_MetaData[] = {
		{ "Comment", "/** Instance Index in the FISMClientInstance struct */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Instance Index in the FISMClientInstance struct" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClientIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceSubIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMComponentInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_ClientIndex = { "ClientIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentInstance, ClientIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientIndex_MetaData), NewProp_ClientIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentInstance, InstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndex_MetaData), NewProp_InstanceIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceSubIndex = { "InstanceSubIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentInstance, InstanceSubIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceSubIndex_MetaData), NewProp_InstanceSubIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMComponentInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_ClientIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceSubIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMComponentInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ISMComponentInstance",
	Z_Construct_UScriptStruct_FISMComponentInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::PropPointers),
	sizeof(FISMComponentInstance),
	alignof(FISMComponentInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FISMComponentInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FISMComponentInstance()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMComponentInstance.InnerSingleton, Z_Construct_UScriptStruct_FISMComponentInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentInstance.InnerSingleton;
}
// End ScriptStruct FISMComponentInstance

// Begin ScriptStruct FISMClientInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMClientInstance;
class UScriptStruct* FISMClientInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMClientInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMClientInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMClientInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMClientInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ISMClientInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMClientInstance>()
{
	return FISMClientInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FISMClientInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents the component instances that 1 Client instance represents */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Represents the component instances that 1 Client instance represents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentIndices_MetaData[] = {
		{ "Comment", "/** Instance Index in the ISM Component */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Instance Index in the ISM Component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMClientInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices_Inner = { "ComponentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices = { "ComponentIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMClientInstance, ComponentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentIndices_MetaData), NewProp_ComponentIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMClientInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMClientInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ISMClientInstance",
	Z_Construct_UScriptStruct_FISMClientInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientInstance_Statics::PropPointers),
	sizeof(FISMClientInstance),
	alignof(FISMClientInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FISMClientInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FISMClientInstance()
{
	if (!Z_Registration_Info_UScriptStruct_ISMClientInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMClientInstance.InnerSingleton, Z_Construct_UScriptStruct_FISMClientInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ISMClientInstance.InnerSingleton;
}
// End ScriptStruct FISMClientInstance

// Begin ScriptStruct FISMClientData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMClientData;
class UScriptStruct* FISMClientData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMClientData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMClientData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMClientData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMClientData"));
	}
	return Z_Registration_Info_UScriptStruct_ISMClientData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMClientData>()
{
	return FISMClientData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FISMClientData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents the list of instances for 1 Client */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Represents the list of instances for 1 Client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[] = {
		{ "Comment", "/** Instance list for 1 client */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Instance list for 1 client" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMClientData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FISMClientInstance, METADATA_PARAMS(0, nullptr) }; // 4159718640
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMClientData, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instances_MetaData), NewProp_Instances_MetaData) }; // 4159718640
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMClientData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMClientData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ISMClientData",
	Z_Construct_UScriptStruct_FISMClientData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientData_Statics::PropPointers),
	sizeof(FISMClientData),
	alignof(FISMClientData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FISMClientData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FISMClientData()
{
	if (!Z_Registration_Info_UScriptStruct_ISMClientData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMClientData.InnerSingleton, Z_Construct_UScriptStruct_FISMClientData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ISMClientData.InnerSingleton;
}
// End ScriptStruct FISMClientData

// Begin ScriptStruct FISMComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMComponentData;
class UScriptStruct* FISMComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMComponentData>()
{
	return FISMComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FISMComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Bookkeeping struct that contains the data that allows linking Client Instances to actual Component Instances */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Bookkeeping struct that contains the data that allows linking Client Instances to actual Component Instances" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[] = {
		{ "Comment", "/** Instances here must match Component instances */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Instances here must match Component instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientInstances_MetaData[] = {
		{ "Comment", "/** Per Client Instances. Indexed using a Client index that must match the indexing in AISMPartitionActor */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Per Client Instances. Indexed using a Client index that must match the indexing in AISMPartitionActor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FISMComponentInstance, METADATA_PARAMS(0, nullptr) }; // 2651361467
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentData, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instances_MetaData), NewProp_Instances_MetaData) }; // 2651361467
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances_Inner = { "ClientInstances", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FISMClientData, METADATA_PARAMS(0, nullptr) }; // 3064495076
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances = { "ClientInstances", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentData, ClientInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientInstances_MetaData), NewProp_ClientInstances_MetaData) }; // 3064495076
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0114000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentData, Component), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ISMComponentData",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FISMComponentData_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentData_Statics::PropPointers), 0),
	sizeof(FISMComponentData),
	alignof(FISMComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FISMComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FISMComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMComponentData.InnerSingleton, Z_Construct_UScriptStruct_FISMComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentData.InnerSingleton;
}
// End ScriptStruct FISMComponentData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FISMComponentInstance::StaticStruct, Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewStructOps, TEXT("ISMComponentInstance"), &Z_Registration_Info_UScriptStruct_ISMComponentInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMComponentInstance), 2651361467U) },
		{ FISMClientInstance::StaticStruct, Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewStructOps, TEXT("ISMClientInstance"), &Z_Registration_Info_UScriptStruct_ISMClientInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMClientInstance), 4159718640U) },
		{ FISMClientData::StaticStruct, Z_Construct_UScriptStruct_FISMClientData_Statics::NewStructOps, TEXT("ISMClientData"), &Z_Registration_Info_UScriptStruct_ISMClientData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMClientData), 3064495076U) },
		{ FISMComponentData::StaticStruct, Z_Construct_UScriptStruct_FISMComponentData_Statics::NewStructOps, TEXT("ISMComponentData"), &Z_Registration_Info_UScriptStruct_ISMComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMComponentData), 2335687815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentData_h_467126986(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
