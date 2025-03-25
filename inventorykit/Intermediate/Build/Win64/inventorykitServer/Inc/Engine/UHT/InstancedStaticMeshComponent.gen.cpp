// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStaticMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FInstancedStaticMeshInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData;
class UScriptStruct* FInstancedStaticMeshInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshInstanceData>()
{
	return FInstancedStaticMeshInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStaticMeshInstanceData, Transform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InstancedStaticMeshInstanceData",
	Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers),
	sizeof(FInstancedStaticMeshInstanceData),
	alignof(FInstancedStaticMeshInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.InnerSingleton;
}
// End ScriptStruct FInstancedStaticMeshInstanceData

// Begin ScriptStruct FInstancedStaticMeshMappingInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo;
class UScriptStruct* FInstancedStaticMeshMappingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshMappingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshMappingInfo>()
{
	return FInstancedStaticMeshMappingInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshMappingInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InstancedStaticMeshMappingInfo",
	nullptr,
	0,
	sizeof(FInstancedStaticMeshMappingInfo),
	alignof(FInstancedStaticMeshMappingInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.InnerSingleton;
}
// End ScriptStruct FInstancedStaticMeshMappingInfo

// Begin ScriptStruct FInstancedStaticMeshRandomSeed
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed;
class UScriptStruct* FInstancedStaticMeshRandomSeed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshRandomSeed"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshRandomSeed>()
{
	return FInstancedStaticMeshRandomSeed::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartInstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartInstanceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshRandomSeed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_StartInstanceIndex = { "StartInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStaticMeshRandomSeed, StartInstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartInstanceIndex_MetaData), NewProp_StartInstanceIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStaticMeshRandomSeed, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_StartInstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_RandomSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InstancedStaticMeshRandomSeed",
	Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::PropPointers),
	sizeof(FInstancedStaticMeshRandomSeed),
	alignof(FInstancedStaticMeshRandomSeed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.InnerSingleton;
}
// End ScriptStruct FInstancedStaticMeshRandomSeed

// Begin Class UInstancedStaticMeshComponent Function AddInstance
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics
{
	struct InstancedStaticMeshComponent_eventAddInstance_Parms
	{
		FTransform InstanceTransform;
		bool bWorldSpace;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Add an instance to this component. Transform is given in local space of this component unless bWorldSpace is set. */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Add an instance to this component. Transform is given in local space of this component unless bWorldSpace is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTransform;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform = { "InstanceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstance_Parms, InstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceTransform_MetaData), NewProp_InstanceTransform_MetaData) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventAddInstance_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventAddInstance_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "AddInstance", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::InstancedStaticMeshComponent_eventAddInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::InstancedStaticMeshComponent_eventAddInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execAddInstance)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InstanceTransform);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddInstance(Z_Param_Out_InstanceTransform,Z_Param_bWorldSpace);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function AddInstance

// Begin Class UInstancedStaticMeshComponent Function AddInstances
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics
{
	struct InstancedStaticMeshComponent_eventAddInstances_Parms
	{
		TArray<FTransform> InstanceTransforms;
		bool bShouldReturnIndices;
		bool bWorldSpace;
		bool bUpdateNavigation;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Add multiple instances to this component. Transform is given in local space of this component unless bWorldSpace is set. */" },
		{ "CPP_Default_bUpdateNavigation", "true" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Add multiple instances to this component. Transform is given in local space of this component unless bWorldSpace is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceTransforms;
	static void NewProp_bShouldReturnIndices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldReturnIndices;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static void NewProp_bUpdateNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavigation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms_Inner = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstances_Parms, InstanceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceTransforms_MetaData), NewProp_InstanceTransforms_MetaData) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bShouldReturnIndices_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventAddInstances_Parms*)Obj)->bShouldReturnIndices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bShouldReturnIndices = { "bShouldReturnIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventAddInstances_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bShouldReturnIndices_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventAddInstances_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventAddInstances_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bUpdateNavigation_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventAddInstances_Parms*)Obj)->bUpdateNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bUpdateNavigation = { "bUpdateNavigation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventAddInstances_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bUpdateNavigation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bShouldReturnIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bUpdateNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "AddInstances", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::InstancedStaticMeshComponent_eventAddInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::InstancedStaticMeshComponent_eventAddInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execAddInstances)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_InstanceTransforms);
	P_GET_UBOOL(Z_Param_bShouldReturnIndices);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_GET_UBOOL(Z_Param_bUpdateNavigation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->AddInstances(Z_Param_Out_InstanceTransforms,Z_Param_bShouldReturnIndices,Z_Param_bWorldSpace,Z_Param_bUpdateNavigation);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function AddInstances

// Begin Class UInstancedStaticMeshComponent Function AddInstanceWorldSpace
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics
{
	struct InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms
	{
		FTransform WorldTransform;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Add Instance' or 'Add Instances' with 'World Space' set to true." },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTransform_MetaData), NewProp_WorldTransform_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "AddInstanceWorldSpace", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execAddInstanceWorldSpace)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddInstanceWorldSpace(Z_Param_Out_WorldTransform);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function AddInstanceWorldSpace

// Begin Class UInstancedStaticMeshComponent Function BatchUpdateInstancesTransform
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics
{
	struct InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms
	{
		int32 StartInstanceIndex;
		int32 NumInstances;
		FTransform NewInstancesTransform;
		bool bWorldSpace;
		bool bMarkRenderStateDirty;
		bool bTeleport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/**\n\x09* Update the transform for a number of instances.\n\x09*\n\x09* @param StartInstanceIndex\x09\x09The starting index of the instances to update\n\x09* @param NumInstances\x09\x09\x09The number of instances to update\n\x09* @param NewInstancesTransform\x09The new transform\n\x09* @param bWorldSpace\x09\x09\x09If true, the new transform is interpreted as a World Space transform, otherwise it is interpreted as Local Space\n\x09* @param bMarkRenderStateDirty\x09If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n\x09* @param bTeleport\x09\x09\x09\x09Whether or not the instances physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n\x09* @return\x09\x09\x09\x09\x09\x09True on success.\n\x09*/" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update the transform for a number of instances.\n\n@param StartInstanceIndex             The starting index of the instances to update\n@param NumInstances                   The number of instances to update\n@param NewInstancesTransform  The new transform\n@param bWorldSpace                    If true, the new transform is interpreted as a World Space transform, otherwise it is interpreted as Local Space\n@param bMarkRenderStateDirty  If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n@param bTeleport                              Whether or not the instances physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n@return                                               True on success." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewInstancesTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartInstanceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewInstancesTransform;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_StartInstanceIndex = { "StartInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms, StartInstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms, NumInstances), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NewInstancesTransform = { "NewInstancesTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms, NewInstancesTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewInstancesTransform_MetaData), NewProp_NewInstancesTransform_MetaData) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms*)Obj)->bMarkRenderStateDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_StartInstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NumInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NewInstancesTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bMarkRenderStateDirty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "BatchUpdateInstancesTransform", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execBatchUpdateInstancesTransform)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartInstanceIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumInstances);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstancesTransform);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BatchUpdateInstancesTransform(Z_Param_StartInstanceIndex,Z_Param_NumInstances,Z_Param_Out_NewInstancesTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function BatchUpdateInstancesTransform

// Begin Class UInstancedStaticMeshComponent Function BatchUpdateInstancesTransforms
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics
{
	struct InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms
	{
		int32 StartInstanceIndex;
		TArray<FTransform> NewInstancesTransforms;
		bool bWorldSpace;
		bool bMarkRenderStateDirty;
		bool bTeleport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/**\n\x09* Update the transform for an array of instances.\n\x09*\n\x09* @param StartInstanceIndex\x09\x09The starting index of the instances to update\n\x09* @param NewInstancesTransforms\x09The new transforms\n\x09* @param bWorldSpace\x09\x09\x09If true, the new transforms are interpreted as a World Space transform, otherwise it is interpreted as Local Space\n\x09* @param bMarkRenderStateDirty\x09If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n\x09* @param bTeleport\x09\x09\x09\x09Whether or not the instances physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n\x09* @return\x09\x09\x09\x09\x09\x09True on success.\n\x09*/" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update the transform for an array of instances.\n\n@param StartInstanceIndex             The starting index of the instances to update\n@param NewInstancesTransforms The new transforms\n@param bWorldSpace                    If true, the new transforms are interpreted as a World Space transform, otherwise it is interpreted as Local Space\n@param bMarkRenderStateDirty  If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n@param bTeleport                              Whether or not the instances physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n@return                                               True on success." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewInstancesTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartInstanceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewInstancesTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewInstancesTransforms;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_StartInstanceIndex = { "StartInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms, StartInstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms_Inner = { "NewInstancesTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms = { "NewInstancesTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms, NewInstancesTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewInstancesTransforms_MetaData), NewProp_NewInstancesTransforms_MetaData) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms*)Obj)->bMarkRenderStateDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_StartInstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bMarkRenderStateDirty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "BatchUpdateInstancesTransforms", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execBatchUpdateInstancesTransforms)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartInstanceIndex);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_NewInstancesTransforms);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BatchUpdateInstancesTransforms(Z_Param_StartInstanceIndex,Z_Param_Out_NewInstancesTransforms,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function BatchUpdateInstancesTransforms

// Begin Class UInstancedStaticMeshComponent Function ClearInstances
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Clear all instances being rendered by this component. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Clear all instances being rendered by this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "ClearInstances", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execClearInstances)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearInstances();
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function ClearInstances

// Begin Class UInstancedStaticMeshComponent Function GetCullDistances
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics
{
	struct InstancedStaticMeshComponent_eventGetCullDistances_Parms
	{
		int32 OutStartCullDistance;
		int32 OutEndCullDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Gets the fading start and culling end distances for this component. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Gets the fading start and culling end distances for this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutStartCullDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutEndCullDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::NewProp_OutStartCullDistance = { "OutStartCullDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetCullDistances_Parms, OutStartCullDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::NewProp_OutEndCullDistance = { "OutEndCullDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetCullDistances_Parms, OutEndCullDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::NewProp_OutStartCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::NewProp_OutEndCullDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetCullDistances", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::InstancedStaticMeshComponent_eventGetCullDistances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::InstancedStaticMeshComponent_eventGetCullDistances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execGetCullDistances)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutStartCullDistance);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutEndCullDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCullDistances(Z_Param_Out_OutStartCullDistance,Z_Param_Out_OutEndCullDistance);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function GetCullDistances

// Begin Class UInstancedStaticMeshComponent Function GetInstanceCount
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics
{
	struct InstancedStaticMeshComponent_eventGetInstanceCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Get the number of instances in this component. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Get the number of instances in this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstanceCount", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::InstancedStaticMeshComponent_eventGetInstanceCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::InstancedStaticMeshComponent_eventGetInstanceCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execGetInstanceCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInstanceCount();
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function GetInstanceCount

// Begin Class UInstancedStaticMeshComponent Function GetInstancesOverlappingBox
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics
{
	struct InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms
	{
		FBox Box;
		bool bBoxInWorldSpace;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Returns the instances with instance bounds overlapping the specified box. The return value is an array of instance indices. */" },
		{ "CPP_Default_bBoxInWorldSpace", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Returns the instances with instance bounds overlapping the specified box. The return value is an array of instance indices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static void NewProp_bBoxInWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoxInWorldSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms*)Obj)->bBoxInWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace = { "bBoxInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstancesOverlappingBox", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execGetInstancesOverlappingBox)
{
	P_GET_STRUCT_REF(FBox,Z_Param_Out_Box);
	P_GET_UBOOL(Z_Param_bBoxInWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetInstancesOverlappingBox(Z_Param_Out_Box,Z_Param_bBoxInWorldSpace);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function GetInstancesOverlappingBox

// Begin Class UInstancedStaticMeshComponent Function GetInstancesOverlappingSphere
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics
{
	struct InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms
	{
		FVector Center;
		float Radius;
		bool bSphereInWorldSpace;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Returns the instances with instance bounds overlapping the specified sphere. The return value is an array of instance indices. */" },
		{ "CPP_Default_bSphereInWorldSpace", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Returns the instances with instance bounds overlapping the specified sphere. The return value is an array of instance indices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bSphereInWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSphereInWorldSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms*)Obj)->bSphereInWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace = { "bSphereInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstancesOverlappingSphere", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execGetInstancesOverlappingSphere)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_bSphereInWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetInstancesOverlappingSphere(Z_Param_Out_Center,Z_Param_Radius,Z_Param_bSphereInWorldSpace);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function GetInstancesOverlappingSphere

// Begin Class UInstancedStaticMeshComponent Function GetInstanceTransform
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics
{
	struct InstancedStaticMeshComponent_eventGetInstanceTransform_Parms
	{
		int32 InstanceIndex;
		FTransform OutInstanceTransform;
		bool bWorldSpace;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success. */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInstanceTransform;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform = { "OutInstanceTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms, OutInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventGetInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventGetInstanceTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstanceTransform", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::InstancedStaticMeshComponent_eventGetInstanceTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execGetInstanceTransform)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutInstanceTransform);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_OutInstanceTransform,Z_Param_bWorldSpace);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function GetInstanceTransform

// Begin Class UInstancedStaticMeshComponent Function GetLODDistanceScale
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics
{
	struct InstancedStaticMeshComponent_eventGetLODDistanceScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Gets the current LOD scale. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Gets the current LOD scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetLODDistanceScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetLODDistanceScale", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::InstancedStaticMeshComponent_eventGetLODDistanceScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::InstancedStaticMeshComponent_eventGetLODDistanceScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execGetLODDistanceScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLODDistanceScale();
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function GetLODDistanceScale

// Begin Class UInstancedStaticMeshComponent Function IsValidInstance
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics
{
	struct InstancedStaticMeshComponent_eventIsValidInstance_Parms
	{
		int32 InstanceIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Does the given index map to a valid instance in this component? */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Does the given index map to a valid instance in this component?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventIsValidInstance_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventIsValidInstance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventIsValidInstance_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "IsValidInstance", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::InstancedStaticMeshComponent_eventIsValidInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::InstancedStaticMeshComponent_eventIsValidInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execIsValidInstance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidInstance(Z_Param_InstanceIndex);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function IsValidInstance

// Begin Class UInstancedStaticMeshComponent Function RemoveInstance
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics
{
	struct InstancedStaticMeshComponent_eventRemoveInstance_Parms
	{
		int32 InstanceIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Remove the instance specified. Returns True on success. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Remove the instance specified. Returns True on success." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventRemoveInstance_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventRemoveInstance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventRemoveInstance_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "RemoveInstance", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::InstancedStaticMeshComponent_eventRemoveInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::InstancedStaticMeshComponent_eventRemoveInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execRemoveInstance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_InstanceIndex);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function RemoveInstance

// Begin Class UInstancedStaticMeshComponent Function RemoveInstances
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics
{
	struct InstancedStaticMeshComponent_eventRemoveInstances_Parms
	{
		TArray<int32> InstancesToRemove;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Remove the instances specified. Returns True on success. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Remove the instances specified. Returns True on success." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancesToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstancesToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesToRemove;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_Inner = { "InstancesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove = { "InstancesToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventRemoveInstances_Parms, InstancesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancesToRemove_MetaData), NewProp_InstancesToRemove_MetaData) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventRemoveInstances_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventRemoveInstances_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "RemoveInstances", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::InstancedStaticMeshComponent_eventRemoveInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::InstancedStaticMeshComponent_eventRemoveInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execRemoveInstances)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InstancesToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveInstances(Z_Param_Out_InstancesToRemove);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function RemoveInstances

// Begin Class UInstancedStaticMeshComponent Function SetCullDistances
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics
{
	struct InstancedStaticMeshComponent_eventSetCullDistances_Parms
	{
		int32 StartCullDistance;
		int32 EndCullDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Sets the fading start and culling end distances for this component. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Sets the fading start and culling end distances for this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartCullDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndCullDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCullDistances_Parms, StartCullDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCullDistances_Parms, EndCullDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_StartCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_EndCullDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "SetCullDistances", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::InstancedStaticMeshComponent_eventSetCullDistances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::InstancedStaticMeshComponent_eventSetCullDistances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execSetCullDistances)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartCullDistance);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndCullDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCullDistances(Z_Param_StartCullDistance,Z_Param_EndCullDistance);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function SetCullDistances

// Begin Class UInstancedStaticMeshComponent Function SetCustomDataValue
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics
{
	struct InstancedStaticMeshComponent_eventSetCustomDataValue_Parms
	{
		int32 InstanceIndex;
		int32 CustomDataIndex;
		float CustomDataValue;
		bool bMarkRenderStateDirty;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Update custom data for specific instance */" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update custom data for specific instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDataIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomDataValue;
	static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCustomDataValue_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_CustomDataIndex = { "CustomDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCustomDataValue_Parms, CustomDataIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_CustomDataValue = { "CustomDataValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCustomDataValue_Parms, CustomDataValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventSetCustomDataValue_Parms*)Obj)->bMarkRenderStateDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventSetCustomDataValue_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventSetCustomDataValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventSetCustomDataValue_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_CustomDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_CustomDataValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "SetCustomDataValue", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::InstancedStaticMeshComponent_eventSetCustomDataValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::InstancedStaticMeshComponent_eventSetCustomDataValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execSetCustomDataValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_CustomDataIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CustomDataValue);
	P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDataValue(Z_Param_InstanceIndex,Z_Param_CustomDataIndex,Z_Param_CustomDataValue,Z_Param_bMarkRenderStateDirty);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function SetCustomDataValue

// Begin Class UInstancedStaticMeshComponent Function SetLODDistanceScale
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics
{
	struct InstancedStaticMeshComponent_eventSetLODDistanceScale_Parms
	{
		float InLODDistanceScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Sets the LOD scale. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Sets the LOD scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLODDistanceScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::NewProp_InLODDistanceScale = { "InLODDistanceScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetLODDistanceScale_Parms, InLODDistanceScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::NewProp_InLODDistanceScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "SetLODDistanceScale", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::InstancedStaticMeshComponent_eventSetLODDistanceScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::InstancedStaticMeshComponent_eventSetLODDistanceScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execSetLODDistanceScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLODDistanceScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLODDistanceScale(Z_Param_InLODDistanceScale);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function SetLODDistanceScale

// Begin Class UInstancedStaticMeshComponent Function SetNumCustomDataFloats
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics
{
	struct InstancedStaticMeshComponent_eventSetNumCustomDataFloats_Parms
	{
		int32 InNumCustomDataFloats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Update number of custom data entries per instance. This applies to all instances and will reallocate the full custom data buffer and reset all values to 0 */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update number of custom data entries per instance. This applies to all instances and will reallocate the full custom data buffer and reset all values to 0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNumCustomDataFloats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::NewProp_InNumCustomDataFloats = { "InNumCustomDataFloats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetNumCustomDataFloats_Parms, InNumCustomDataFloats), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::NewProp_InNumCustomDataFloats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "SetNumCustomDataFloats", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::InstancedStaticMeshComponent_eventSetNumCustomDataFloats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::InstancedStaticMeshComponent_eventSetNumCustomDataFloats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execSetNumCustomDataFloats)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNumCustomDataFloats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumCustomDataFloats(Z_Param_InNumCustomDataFloats);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function SetNumCustomDataFloats

// Begin Class UInstancedStaticMeshComponent Function UpdateInstanceTransform
struct Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics
{
	struct InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms
	{
		int32 InstanceIndex;
		FTransform NewInstanceTransform;
		bool bWorldSpace;
		bool bMarkRenderStateDirty;
		bool bTeleport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/**\n\x09* Update the transform for the instance specified.\n\x09*\n\x09* @param InstanceIndex\x09\x09\x09The index of the instance to update\n\x09* @param NewInstanceTransform\x09The new transform\n\x09* @param bWorldSpace\x09\x09\x09If true, the new transform is interpreted as a World Space transform, otherwise it is interpreted as Local Space\n\x09* @param bMarkRenderStateDirty\x09If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n\x09* @param bTeleport\x09\x09\x09\x09Whether or not the instance's physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n\x09* @return\x09\x09\x09\x09\x09\x09True on success.\n\x09*/" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update the transform for the instance specified.\n\n@param InstanceIndex                  The index of the instance to update\n@param NewInstanceTransform   The new transform\n@param bWorldSpace                    If true, the new transform is interpreted as a World Space transform, otherwise it is interpreted as Local Space\n@param bMarkRenderStateDirty  If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n@param bTeleport                              Whether or not the instance's physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n@return                                               True on success." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewInstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewInstanceTransform;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform = { "NewInstanceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms, NewInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewInstanceTransform_MetaData), NewProp_NewInstanceTransform_MetaData) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bMarkRenderStateDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "UpdateInstanceTransform", nullptr, nullptr, Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstancedStaticMeshComponent::execUpdateInstanceTransform)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstanceTransform);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_NewInstanceTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class UInstancedStaticMeshComponent Function UpdateInstanceTransform

// Begin Class UInstancedStaticMeshComponent
void UInstancedStaticMeshComponent::StaticRegisterNativesUInstancedStaticMeshComponent()
{
	UClass* Class = UInstancedStaticMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddInstance", &UInstancedStaticMeshComponent::execAddInstance },
		{ "AddInstances", &UInstancedStaticMeshComponent::execAddInstances },
		{ "AddInstanceWorldSpace", &UInstancedStaticMeshComponent::execAddInstanceWorldSpace },
		{ "BatchUpdateInstancesTransform", &UInstancedStaticMeshComponent::execBatchUpdateInstancesTransform },
		{ "BatchUpdateInstancesTransforms", &UInstancedStaticMeshComponent::execBatchUpdateInstancesTransforms },
		{ "ClearInstances", &UInstancedStaticMeshComponent::execClearInstances },
		{ "GetCullDistances", &UInstancedStaticMeshComponent::execGetCullDistances },
		{ "GetInstanceCount", &UInstancedStaticMeshComponent::execGetInstanceCount },
		{ "GetInstancesOverlappingBox", &UInstancedStaticMeshComponent::execGetInstancesOverlappingBox },
		{ "GetInstancesOverlappingSphere", &UInstancedStaticMeshComponent::execGetInstancesOverlappingSphere },
		{ "GetInstanceTransform", &UInstancedStaticMeshComponent::execGetInstanceTransform },
		{ "GetLODDistanceScale", &UInstancedStaticMeshComponent::execGetLODDistanceScale },
		{ "IsValidInstance", &UInstancedStaticMeshComponent::execIsValidInstance },
		{ "RemoveInstance", &UInstancedStaticMeshComponent::execRemoveInstance },
		{ "RemoveInstances", &UInstancedStaticMeshComponent::execRemoveInstances },
		{ "SetCullDistances", &UInstancedStaticMeshComponent::execSetCullDistances },
		{ "SetCustomDataValue", &UInstancedStaticMeshComponent::execSetCustomDataValue },
		{ "SetLODDistanceScale", &UInstancedStaticMeshComponent::execSetLODDistanceScale },
		{ "SetNumCustomDataFloats", &UInstancedStaticMeshComponent::execSetNumCustomDataFloats },
		{ "UpdateInstanceTransform", &UInstancedStaticMeshComponent::execUpdateInstanceTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInstancedStaticMeshComponent);
UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister()
{
	return UInstancedStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UInstancedStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** A component that efficiently renders multiple instances of the same StaticMesh. */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/InstancedStaticMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "A component that efficiently renders multiple instances of the same StaticMesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMData_MetaData[] = {
		{ "Category", "Instances" },
		{ "Comment", "/** Array of instances, bulk serialized. */" },
		{ "DisplayName", "Instances" },
		{ "EditFixedOrder", "" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Array of instances, bulk serialized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstancePrevTransform_MetaData[] = {
		{ "Comment", "/** Array of prev instance transforms. Must match the length of PerInstanceSMData or have 0 elements */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Array of prev instance transforms. Must match the length of PerInstanceSMData or have 0 elements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationBounds_MetaData[] = {
		{ "Comment", "/** Bounds are calculated and cached on component registration. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounds are calculated and cached on component registration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousComponentTransform_MetaData[] = {
		{ "Comment", "/** Main transform stored to be able to send updates when component's transform changed. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Main transform stored to be able to send updates when component's transform changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCustomDataFloats_MetaData[] = {
		{ "Category", "Instances" },
		{ "Comment", "/** Defines the number of floats that will be available per instance for custom data */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Defines the number of floats that will be available per instance for custom data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMCustomData_MetaData[] = {
		{ "Category", "Instances" },
		{ "Comment", "/** Array of custom data for instances. This will contains NumCustomDataFloats*InstanceCount entries. The entries are represented sequantially, in instance order. Can be read in a material and manipulated through Blueprints.\n\x09 *\x09""Example: If NumCustomDataFloats is 1, then each entry will belong to an instance. Custom data 0 will belong to Instance 0. Custom data 1 will belong to Instance 1 etc.\n\x09 *\x09""Example: If NumCustomDataFloats is 2, then each pair of sequential entries belong to an instance. Custom data 0 and 1 will belong to Instance 0. Custom data 2 and 3 will belong to Instance 2 etc.\n\x09 */" },
		{ "DisplayName", "Custom data" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Array of custom data for instances. This will contains NumCustomDataFloats*InstanceCount entries. The entries are represented sequantially, in instance order. Can be read in a material and manipulated through Blueprints.\n    Example: If NumCustomDataFloats is 1, then each entry will belong to an instance. Custom data 0 will belong to Instance 0. Custom data 1 will belong to Instance 1 etc.\n    Example: If NumCustomDataFloats is 2, then each pair of sequential entries belong to an instance. Custom data 0 and 1 will belong to Instance 0. Custom data 2 and 3 will belong to Instance 2 etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancingRandomSeed_MetaData[] = {
		{ "Category", "InstancedStaticMeshComponent" },
		{ "Comment", "/** Value used to seed the random number stream that generates random numbers for each of this mesh's instances.\n\x09The random number is stored in a buffer accessible to materials through the PerInstanceRandom expression. If\n\x09this is set to zero (default), it will be populated automatically by the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Value used to seed the random number stream that generates random numbers for each of this mesh's instances.\n      The random number is stored in a buffer accessible to materials through the PerInstanceRandom expression. If\n      this is set to zero (default), it will be populated automatically by the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalRandomSeeds_MetaData[] = {
		{ "Comment", "/** Additional random seeds ranges. Each seed entry will be applied from AdditionalRandomSeeds[i].StartInstanceIndex to AdditionalRandomSeeds[i+1].StartInstanceIndex -1 */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Additional random seeds ranges. Each seed entry will be applied from AdditionalRandomSeeds[i].StartInstanceIndex to AdditionalRandomSeeds[i+1].StartInstanceIndex -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceLODDistanceScale_MetaData[] = {
		{ "Category", "Culling" },
		{ "Comment", "/** \n\x09 * Scale applied to change the computation of LOD distances when using the StaticMesh screen sizes. \n\x09 * Smaller values make LODs transition earlier.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Scale applied to change the computation of LOD distances when using the StaticMesh screen sizes.\nSmaller values make LODs transition earlier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStartCullDistance_MetaData[] = {
		{ "Category", "Culling" },
		{ "Comment", "/** Distance from camera at which each instance begins to fade out. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Distance from camera at which each instance begins to fade out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceEndCullDistance_MetaData[] = {
		{ "Category", "Culling" },
		{ "Comment", "/** Distance from camera at which each instance completely fades out. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Distance from camera at which each instance completely fades out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGpuLodSelection_MetaData[] = {
		{ "Category", "Culling" },
		{ "Comment", "/** If true, this component will use GPU LOD selection. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "If true, this component will use GPU LOD selection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritPerInstanceData_MetaData[] = {
		{ "Comment", "/** If true, this component will avoid serializing its per instance data / those properties will also not be editable */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "If true, this component will avoid serializing its per instance data / those properties will also not be editable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceReorderTable_MetaData[] = {
		{ "Comment", "/** Mapping from PerInstanceSMData order to instance render buffer order. If empty, the PerInstanceSMData order is used. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Mapping from PerInstanceSMData order to instance render buffer order. If empty, the PerInstanceSMData order is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[] = {
		{ "Comment", "/** Don't create any collision when this bool is set */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Don't create any collision when this bool is set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPendingLightmaps_MetaData[] = {
		{ "Comment", "/** Number of pending lightmaps still to be calculated (Apply()'d). */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Number of pending lightmaps still to be calculated (Apply()'d)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMappings_MetaData[] = {
		{ "Comment", "/** The mappings for all the instances of this component. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "The mappings for all the instances of this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerInstanceSMData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerInstancePrevTransform_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstancePrevTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigationBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousComponentTransform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCustomDataFloats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerInstanceSMCustomData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMCustomData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstancingRandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalRandomSeeds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalRandomSeeds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InstanceLODDistanceScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceStartCullDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceEndCullDistance;
	static void NewProp_bUseGpuLodSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGpuLodSelection;
	static void NewProp_bInheritPerInstanceData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritPerInstanceData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceReorderTable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceReorderTable;
	static void NewProp_bDisableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPendingLightmaps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance, "AddInstance" }, // 1376856810
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances, "AddInstances" }, // 758972909
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace, "AddInstanceWorldSpace" }, // 4148898785
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform, "BatchUpdateInstancesTransform" }, // 1849552170
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms, "BatchUpdateInstancesTransforms" }, // 2205612221
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances, "ClearInstances" }, // 1361045222
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetCullDistances, "GetCullDistances" }, // 2446993996
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount, "GetInstanceCount" }, // 2026030757
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox, "GetInstancesOverlappingBox" }, // 2527482092
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere, "GetInstancesOverlappingSphere" }, // 2891954553
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform, "GetInstanceTransform" }, // 1517365969
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetLODDistanceScale, "GetLODDistanceScale" }, // 2424278239
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance, "IsValidInstance" }, // 4050754966
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance, "RemoveInstance" }, // 2894159622
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances, "RemoveInstances" }, // 552101277
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances, "SetCullDistances" }, // 800620935
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue, "SetCustomDataValue" }, // 991002766
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetLODDistanceScale, "SetLODDistanceScale" }, // 3476656780
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetNumCustomDataFloats, "SetNumCustomDataFloats" }, // 1684593970
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform, "UpdateInstanceTransform" }, // 2879760700
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstancedStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_Inner = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(0, nullptr) }; // 3453875991
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0090000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, PerInstanceSMData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceSMData_MetaData), NewProp_PerInstanceSMData_MetaData) }; // 3453875991
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform_Inner = { "PerInstancePrevTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform = { "PerInstancePrevTransform", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, PerInstancePrevTransform), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstancePrevTransform_MetaData), NewProp_PerInstancePrevTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NavigationBounds = { "NavigationBounds", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, NavigationBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationBounds_MetaData), NewProp_NavigationBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PreviousComponentTransform = { "PreviousComponentTransform", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, PreviousComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousComponentTransform_MetaData), NewProp_PreviousComponentTransform_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumCustomDataFloats = { "NumCustomDataFloats", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, NumCustomDataFloats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCustomDataFloats_MetaData), NewProp_NumCustomDataFloats_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData_Inner = { "PerInstanceSMCustomData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData = { "PerInstanceSMCustomData", nullptr, (EPropertyFlags)0x0090040000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, PerInstanceSMCustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceSMCustomData_MetaData), NewProp_PerInstanceSMCustomData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed = { "InstancingRandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstancingRandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancingRandomSeed_MetaData), NewProp_InstancingRandomSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds_Inner = { "AdditionalRandomSeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed, METADATA_PARAMS(0, nullptr) }; // 1975014998
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds = { "AdditionalRandomSeeds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, AdditionalRandomSeeds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalRandomSeeds_MetaData), NewProp_AdditionalRandomSeeds_MetaData) }; // 1975014998
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceLODDistanceScale = { "InstanceLODDistanceScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceLODDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceLODDistanceScale_MetaData), NewProp_InstanceLODDistanceScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance = { "InstanceStartCullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceStartCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceStartCullDistance_MetaData), NewProp_InstanceStartCullDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance = { "InstanceEndCullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceEndCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceEndCullDistance_MetaData), NewProp_InstanceEndCullDistance_MetaData) };
void Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bUseGpuLodSelection_SetBit(void* Obj)
{
	((UInstancedStaticMeshComponent*)Obj)->bUseGpuLodSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bUseGpuLodSelection = { "bUseGpuLodSelection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInstancedStaticMeshComponent), &Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bUseGpuLodSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGpuLodSelection_MetaData), NewProp_bUseGpuLodSelection_MetaData) };
void Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bInheritPerInstanceData_SetBit(void* Obj)
{
	((UInstancedStaticMeshComponent*)Obj)->bInheritPerInstanceData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bInheritPerInstanceData = { "bInheritPerInstanceData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInstancedStaticMeshComponent), &Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bInheritPerInstanceData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritPerInstanceData_MetaData), NewProp_bInheritPerInstanceData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_Inner = { "InstanceReorderTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable = { "InstanceReorderTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceReorderTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceReorderTable_MetaData), NewProp_InstanceReorderTable_MetaData) };
void Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
{
	((UInstancedStaticMeshComponent*)Obj)->bDisableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInstancedStaticMeshComponent), &Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableCollision_MetaData), NewProp_bDisableCollision_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps = { "NumPendingLightmaps", nullptr, (EPropertyFlags)0x0020480000202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, NumPendingLightmaps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPendingLightmaps_MetaData), NewProp_NumPendingLightmaps_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_Inner = { "CachedMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo, METADATA_PARAMS(0, nullptr) }; // 483173137
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings = { "CachedMappings", nullptr, (EPropertyFlags)0x0020480000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, CachedMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMappings_MetaData), NewProp_CachedMappings_MetaData) }; // 483173137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NavigationBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PreviousComponentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumCustomDataFloats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceLODDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bUseGpuLodSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bInheritPerInstanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USMInstanceManager_NoRegister, (int32)VTABLE_OFFSET(UInstancedStaticMeshComponent, ISMInstanceManager), false },  // 1951560444
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::ClassParams = {
	&UInstancedStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInstancedStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UInstancedStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInstancedStaticMeshComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInstancedStaticMeshComponent>()
{
	return UInstancedStaticMeshComponent::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInstancedStaticMeshComponent)
// End Class UInstancedStaticMeshComponent

// Begin ScriptStruct FInstancedStaticMeshLightMapInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData;
class UScriptStruct* FInstancedStaticMeshLightMapInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshLightMapInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshLightMapInstanceData>()
{
	return FInstancedStaticMeshLightMapInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store lightmap data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Used to store lightmap data during RerunConstructionScripts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Transform of component */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Transform of component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataIds_MetaData[] = {
		{ "Comment", "/** guid from LODData */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "guid from LODData" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapBuildDataIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MapBuildDataIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshLightMapInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStaticMeshLightMapInstanceData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_Inner = { "MapBuildDataIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds = { "MapBuildDataIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStaticMeshLightMapInstanceData, MapBuildDataIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapBuildDataIds_MetaData), NewProp_MapBuildDataIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InstancedStaticMeshLightMapInstanceData",
	Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::PropPointers),
	sizeof(FInstancedStaticMeshLightMapInstanceData),
	alignof(FInstancedStaticMeshLightMapInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.InnerSingleton;
}
// End ScriptStruct FInstancedStaticMeshLightMapInstanceData

// Begin ScriptStruct FInstancedStaticMeshComponentInstanceData
static_assert(std::is_polymorphic<FInstancedStaticMeshComponentInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FInstancedStaticMeshComponentInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData;
class UScriptStruct* FInstancedStaticMeshComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshComponentInstanceData>()
{
	return FInstancedStaticMeshComponentInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper class used to preserve lighting/selection state across blueprint reinstancing */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Helper class used to preserve lighting/selection state across blueprint reinstancing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Comment", "/** Mesh being used by component */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Mesh being used by component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStaticLighting_MetaData[] = {
		{ "Comment", "// Static lighting info\n" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Static lighting info" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancingRandomSeed_MetaData[] = {
		{ "Comment", "/* The cached random seed */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "The cached random seed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalRandomSeeds_MetaData[] = {
		{ "Comment", "/* Additional random seeds */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Additional random seeds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPerInstanceHitProxies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedStaticLighting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerInstanceSMData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstancingRandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalRandomSeeds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalRandomSeeds;
	static void NewProp_bHasPerInstanceHitProxies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPerInstanceHitProxies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshComponentInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting = { "CachedStaticLighting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, CachedStaticLighting), Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStaticLighting_MetaData), NewProp_CachedStaticLighting_MetaData) }; // 3919835515
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_Inner = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(0, nullptr) }; // 3453875991
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, PerInstanceSMData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceSMData_MetaData), NewProp_PerInstanceSMData_MetaData) }; // 3453875991
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed = { "InstancingRandomSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, InstancingRandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancingRandomSeed_MetaData), NewProp_InstancingRandomSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds_Inner = { "AdditionalRandomSeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed, METADATA_PARAMS(0, nullptr) }; // 1975014998
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds = { "AdditionalRandomSeeds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, AdditionalRandomSeeds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalRandomSeeds_MetaData), NewProp_AdditionalRandomSeeds_MetaData) }; // 1975014998
void Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies_SetBit(void* Obj)
{
	((FInstancedStaticMeshComponentInstanceData*)Obj)->bHasPerInstanceHitProxies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies = { "bHasPerInstanceHitProxies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInstancedStaticMeshComponentInstanceData), &Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPerInstanceHitProxies_MetaData), NewProp_bHasPerInstanceHitProxies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FSceneComponentInstanceData,
	&NewStructOps,
	"InstancedStaticMeshComponentInstanceData",
	Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::PropPointers),
	sizeof(FInstancedStaticMeshComponentInstanceData),
	alignof(FInstancedStaticMeshComponentInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.InnerSingleton;
}
// End ScriptStruct FInstancedStaticMeshComponentInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInstancedStaticMeshInstanceData::StaticStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewStructOps, TEXT("InstancedStaticMeshInstanceData"), &Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStaticMeshInstanceData), 3453875991U) },
		{ FInstancedStaticMeshMappingInfo::StaticStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::NewStructOps, TEXT("InstancedStaticMeshMappingInfo"), &Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStaticMeshMappingInfo), 483173137U) },
		{ FInstancedStaticMeshRandomSeed::StaticStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewStructOps, TEXT("InstancedStaticMeshRandomSeed"), &Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStaticMeshRandomSeed), 1975014998U) },
		{ FInstancedStaticMeshLightMapInstanceData::StaticStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewStructOps, TEXT("InstancedStaticMeshLightMapInstanceData"), &Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStaticMeshLightMapInstanceData), 3919835515U) },
		{ FInstancedStaticMeshComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewStructOps, TEXT("InstancedStaticMeshComponentInstanceData"), &Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStaticMeshComponentInstanceData), 33979479U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInstancedStaticMeshComponent, UInstancedStaticMeshComponent::StaticClass, TEXT("UInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInstancedStaticMeshComponent), 1194997041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_1572209644(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
