// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeStaticMeshLodDataNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeStaticMeshLodDataNode() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeStaticMeshLodDataNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeStaticMeshLodDataNode Function AddBoxCollisionMeshUid
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventAddBoxCollisionMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventAddBoxCollisionMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventAddBoxCollisionMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventAddBoxCollisionMeshUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "AddBoxCollisionMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventAddBoxCollisionMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventAddBoxCollisionMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execAddBoxCollisionMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddBoxCollisionMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function AddBoxCollisionMeshUid

// Begin Class UInterchangeStaticMeshLodDataNode Function AddCapsuleCollisionMeshUid
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventAddCapsuleCollisionMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventAddCapsuleCollisionMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventAddCapsuleCollisionMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventAddCapsuleCollisionMeshUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "AddCapsuleCollisionMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventAddCapsuleCollisionMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventAddCapsuleCollisionMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execAddCapsuleCollisionMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddCapsuleCollisionMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function AddCapsuleCollisionMeshUid

// Begin Class UInterchangeStaticMeshLodDataNode Function AddConvexCollisionMeshUid
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventAddConvexCollisionMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventAddConvexCollisionMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventAddConvexCollisionMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventAddConvexCollisionMeshUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "AddConvexCollisionMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventAddConvexCollisionMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventAddConvexCollisionMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execAddConvexCollisionMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddConvexCollisionMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function AddConvexCollisionMeshUid

// Begin Class UInterchangeStaticMeshLodDataNode Function AddMeshUid
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventAddMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventAddMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventAddMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventAddMeshUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "AddMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventAddMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventAddMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execAddMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function AddMeshUid

// Begin Class UInterchangeStaticMeshLodDataNode Function AddSphereCollisionMeshUid
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventAddSphereCollisionMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventAddSphereCollisionMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventAddSphereCollisionMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventAddSphereCollisionMeshUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "AddSphereCollisionMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventAddSphereCollisionMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventAddSphereCollisionMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execAddSphereCollisionMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddSphereCollisionMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function AddSphereCollisionMeshUid

// Begin Class UInterchangeStaticMeshLodDataNode Function GetBoxCollisionMeshUids
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetBoxCollisionMeshUids_Parms
	{
		TArray<FString> OutMeshNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMeshNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMeshNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::NewProp_OutMeshNames_Inner = { "OutMeshNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::NewProp_OutMeshNames = { "OutMeshNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventGetBoxCollisionMeshUids_Parms, OutMeshNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::NewProp_OutMeshNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::NewProp_OutMeshNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetBoxCollisionMeshUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::InterchangeStaticMeshLodDataNode_eventGetBoxCollisionMeshUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::InterchangeStaticMeshLodDataNode_eventGetBoxCollisionMeshUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetBoxCollisionMeshUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutMeshNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBoxCollisionMeshUids(Z_Param_Out_OutMeshNames);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetBoxCollisionMeshUids

// Begin Class UInterchangeStaticMeshLodDataNode Function GetBoxCollisionMeshUidsCount
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetBoxCollisionMeshUidsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventGetBoxCollisionMeshUidsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetBoxCollisionMeshUidsCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::InterchangeStaticMeshLodDataNode_eventGetBoxCollisionMeshUidsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::InterchangeStaticMeshLodDataNode_eventGetBoxCollisionMeshUidsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetBoxCollisionMeshUidsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBoxCollisionMeshUidsCount();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetBoxCollisionMeshUidsCount

// Begin Class UInterchangeStaticMeshLodDataNode Function GetCapsuleCollisionMeshUids
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetCapsuleCollisionMeshUids_Parms
	{
		TArray<FString> OutMeshNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMeshNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMeshNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::NewProp_OutMeshNames_Inner = { "OutMeshNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::NewProp_OutMeshNames = { "OutMeshNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventGetCapsuleCollisionMeshUids_Parms, OutMeshNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::NewProp_OutMeshNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::NewProp_OutMeshNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetCapsuleCollisionMeshUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::InterchangeStaticMeshLodDataNode_eventGetCapsuleCollisionMeshUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::InterchangeStaticMeshLodDataNode_eventGetCapsuleCollisionMeshUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetCapsuleCollisionMeshUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutMeshNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCapsuleCollisionMeshUids(Z_Param_Out_OutMeshNames);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetCapsuleCollisionMeshUids

// Begin Class UInterchangeStaticMeshLodDataNode Function GetCapsuleCollisionMeshUidsCount
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetCapsuleCollisionMeshUidsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventGetCapsuleCollisionMeshUidsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetCapsuleCollisionMeshUidsCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::InterchangeStaticMeshLodDataNode_eventGetCapsuleCollisionMeshUidsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::InterchangeStaticMeshLodDataNode_eventGetCapsuleCollisionMeshUidsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetCapsuleCollisionMeshUidsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCapsuleCollisionMeshUidsCount();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetCapsuleCollisionMeshUidsCount

// Begin Class UInterchangeStaticMeshLodDataNode Function GetConvexCollisionMeshUids
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetConvexCollisionMeshUids_Parms
	{
		TArray<FString> OutMeshNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMeshNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMeshNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::NewProp_OutMeshNames_Inner = { "OutMeshNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::NewProp_OutMeshNames = { "OutMeshNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventGetConvexCollisionMeshUids_Parms, OutMeshNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::NewProp_OutMeshNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::NewProp_OutMeshNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetConvexCollisionMeshUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::InterchangeStaticMeshLodDataNode_eventGetConvexCollisionMeshUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::InterchangeStaticMeshLodDataNode_eventGetConvexCollisionMeshUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetConvexCollisionMeshUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutMeshNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetConvexCollisionMeshUids(Z_Param_Out_OutMeshNames);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetConvexCollisionMeshUids

// Begin Class UInterchangeStaticMeshLodDataNode Function GetConvexCollisionMeshUidsCount
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetConvexCollisionMeshUidsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventGetConvexCollisionMeshUidsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetConvexCollisionMeshUidsCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::InterchangeStaticMeshLodDataNode_eventGetConvexCollisionMeshUidsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::InterchangeStaticMeshLodDataNode_eventGetConvexCollisionMeshUidsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetConvexCollisionMeshUidsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetConvexCollisionMeshUidsCount();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetConvexCollisionMeshUidsCount

// Begin Class UInterchangeStaticMeshLodDataNode Function GetImportCollision
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetImportCollision_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventGetImportCollision_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventGetImportCollision_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventGetImportCollision_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventGetImportCollision_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetImportCollision", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::InterchangeStaticMeshLodDataNode_eventGetImportCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::InterchangeStaticMeshLodDataNode_eventGetImportCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetImportCollision)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetImportCollision(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetImportCollision

// Begin Class UInterchangeStaticMeshLodDataNode Function GetMeshUids
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetMeshUids_Parms
	{
		TArray<FString> OutMeshNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMeshNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMeshNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames_Inner = { "OutMeshNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames = { "OutMeshNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventGetMeshUids_Parms, OutMeshNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetMeshUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::InterchangeStaticMeshLodDataNode_eventGetMeshUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::InterchangeStaticMeshLodDataNode_eventGetMeshUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetMeshUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutMeshNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMeshUids(Z_Param_Out_OutMeshNames);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetMeshUids

// Begin Class UInterchangeStaticMeshLodDataNode Function GetMeshUidsCount
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetMeshUidsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "Comment", "/* Mesh UIDs can be either a scene node or a mesh node UID. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
		{ "ToolTip", "Mesh UIDs can be either a scene node or a mesh node UID. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventGetMeshUidsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetMeshUidsCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::InterchangeStaticMeshLodDataNode_eventGetMeshUidsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::InterchangeStaticMeshLodDataNode_eventGetMeshUidsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetMeshUidsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMeshUidsCount();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetMeshUidsCount

// Begin Class UInterchangeStaticMeshLodDataNode Function GetOneConvexHullPerUCX
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetOneConvexHullPerUCX_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventGetOneConvexHullPerUCX_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventGetOneConvexHullPerUCX_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventGetOneConvexHullPerUCX_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventGetOneConvexHullPerUCX_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetOneConvexHullPerUCX", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::InterchangeStaticMeshLodDataNode_eventGetOneConvexHullPerUCX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::InterchangeStaticMeshLodDataNode_eventGetOneConvexHullPerUCX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetOneConvexHullPerUCX)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetOneConvexHullPerUCX(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetOneConvexHullPerUCX

// Begin Class UInterchangeStaticMeshLodDataNode Function GetSphereCollisionMeshUids
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetSphereCollisionMeshUids_Parms
	{
		TArray<FString> OutMeshNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMeshNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMeshNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::NewProp_OutMeshNames_Inner = { "OutMeshNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::NewProp_OutMeshNames = { "OutMeshNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventGetSphereCollisionMeshUids_Parms, OutMeshNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::NewProp_OutMeshNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::NewProp_OutMeshNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetSphereCollisionMeshUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::InterchangeStaticMeshLodDataNode_eventGetSphereCollisionMeshUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::InterchangeStaticMeshLodDataNode_eventGetSphereCollisionMeshUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetSphereCollisionMeshUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutMeshNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSphereCollisionMeshUids(Z_Param_Out_OutMeshNames);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetSphereCollisionMeshUids

// Begin Class UInterchangeStaticMeshLodDataNode Function GetSphereCollisionMeshUidsCount
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventGetSphereCollisionMeshUidsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventGetSphereCollisionMeshUidsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "GetSphereCollisionMeshUidsCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::InterchangeStaticMeshLodDataNode_eventGetSphereCollisionMeshUidsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::InterchangeStaticMeshLodDataNode_eventGetSphereCollisionMeshUidsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execGetSphereCollisionMeshUidsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSphereCollisionMeshUidsCount();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function GetSphereCollisionMeshUidsCount

// Begin Class UInterchangeStaticMeshLodDataNode Function RemoveAllBoxCollisionMeshes
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventRemoveAllBoxCollisionMeshes_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventRemoveAllBoxCollisionMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventRemoveAllBoxCollisionMeshes_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "RemoveAllBoxCollisionMeshes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::InterchangeStaticMeshLodDataNode_eventRemoveAllBoxCollisionMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::InterchangeStaticMeshLodDataNode_eventRemoveAllBoxCollisionMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execRemoveAllBoxCollisionMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllBoxCollisionMeshes();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function RemoveAllBoxCollisionMeshes

// Begin Class UInterchangeStaticMeshLodDataNode Function RemoveAllCapsuleCollisionMeshes
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventRemoveAllCapsuleCollisionMeshes_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventRemoveAllCapsuleCollisionMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventRemoveAllCapsuleCollisionMeshes_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "RemoveAllCapsuleCollisionMeshes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::InterchangeStaticMeshLodDataNode_eventRemoveAllCapsuleCollisionMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::InterchangeStaticMeshLodDataNode_eventRemoveAllCapsuleCollisionMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execRemoveAllCapsuleCollisionMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllCapsuleCollisionMeshes();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function RemoveAllCapsuleCollisionMeshes

// Begin Class UInterchangeStaticMeshLodDataNode Function RemoveAllConvexCollisionMeshes
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventRemoveAllConvexCollisionMeshes_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventRemoveAllConvexCollisionMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventRemoveAllConvexCollisionMeshes_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "RemoveAllConvexCollisionMeshes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::InterchangeStaticMeshLodDataNode_eventRemoveAllConvexCollisionMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::InterchangeStaticMeshLodDataNode_eventRemoveAllConvexCollisionMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execRemoveAllConvexCollisionMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllConvexCollisionMeshes();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function RemoveAllConvexCollisionMeshes

// Begin Class UInterchangeStaticMeshLodDataNode Function RemoveAllMeshes
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventRemoveAllMeshes_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventRemoveAllMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventRemoveAllMeshes_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "RemoveAllMeshes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::InterchangeStaticMeshLodDataNode_eventRemoveAllMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::InterchangeStaticMeshLodDataNode_eventRemoveAllMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execRemoveAllMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllMeshes();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function RemoveAllMeshes

// Begin Class UInterchangeStaticMeshLodDataNode Function RemoveAllSphereCollisionMeshes
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventRemoveAllSphereCollisionMeshes_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventRemoveAllSphereCollisionMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventRemoveAllSphereCollisionMeshes_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "RemoveAllSphereCollisionMeshes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::InterchangeStaticMeshLodDataNode_eventRemoveAllSphereCollisionMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::InterchangeStaticMeshLodDataNode_eventRemoveAllSphereCollisionMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execRemoveAllSphereCollisionMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllSphereCollisionMeshes();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function RemoveAllSphereCollisionMeshes

// Begin Class UInterchangeStaticMeshLodDataNode Function RemoveBoxCollisionMeshUid
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventRemoveBoxCollisionMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventRemoveBoxCollisionMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventRemoveBoxCollisionMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventRemoveBoxCollisionMeshUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "RemoveBoxCollisionMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventRemoveBoxCollisionMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventRemoveBoxCollisionMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execRemoveBoxCollisionMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveBoxCollisionMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function RemoveBoxCollisionMeshUid

// Begin Class UInterchangeStaticMeshLodDataNode Function RemoveCapsuleCollisionMeshUid
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventRemoveCapsuleCollisionMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventRemoveCapsuleCollisionMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventRemoveCapsuleCollisionMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventRemoveCapsuleCollisionMeshUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "RemoveCapsuleCollisionMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventRemoveCapsuleCollisionMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventRemoveCapsuleCollisionMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execRemoveCapsuleCollisionMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCapsuleCollisionMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function RemoveCapsuleCollisionMeshUid

// Begin Class UInterchangeStaticMeshLodDataNode Function RemoveConvexCollisionMeshUid
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventRemoveConvexCollisionMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventRemoveConvexCollisionMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventRemoveConvexCollisionMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventRemoveConvexCollisionMeshUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "RemoveConvexCollisionMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventRemoveConvexCollisionMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventRemoveConvexCollisionMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execRemoveConvexCollisionMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveConvexCollisionMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function RemoveConvexCollisionMeshUid

// Begin Class UInterchangeStaticMeshLodDataNode Function RemoveMeshUid
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventRemoveMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventRemoveMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventRemoveMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventRemoveMeshUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "RemoveMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventRemoveMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventRemoveMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execRemoveMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function RemoveMeshUid

// Begin Class UInterchangeStaticMeshLodDataNode Function RemoveSphereCollisionMeshUid
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventRemoveSphereCollisionMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshLodDataNode_eventRemoveSphereCollisionMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventRemoveSphereCollisionMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventRemoveSphereCollisionMeshUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "RemoveSphereCollisionMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventRemoveSphereCollisionMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::InterchangeStaticMeshLodDataNode_eventRemoveSphereCollisionMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execRemoveSphereCollisionMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveSphereCollisionMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function RemoveSphereCollisionMeshUid

// Begin Class UInterchangeStaticMeshLodDataNode Function SetImportCollision
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventSetImportCollision_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventSetImportCollision_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventSetImportCollision_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventSetImportCollision_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventSetImportCollision_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "SetImportCollision", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::InterchangeStaticMeshLodDataNode_eventSetImportCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::InterchangeStaticMeshLodDataNode_eventSetImportCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execSetImportCollision)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetImportCollision(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function SetImportCollision

// Begin Class UInterchangeStaticMeshLodDataNode Function SetOneConvexHullPerUCX
struct Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics
{
	struct InterchangeStaticMeshLodDataNode_eventSetOneConvexHullPerUCX_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMeshLodData" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventSetOneConvexHullPerUCX_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventSetOneConvexHullPerUCX_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshLodDataNode_eventSetOneConvexHullPerUCX_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshLodDataNode_eventSetOneConvexHullPerUCX_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, nullptr, "SetOneConvexHullPerUCX", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::InterchangeStaticMeshLodDataNode_eventSetOneConvexHullPerUCX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::InterchangeStaticMeshLodDataNode_eventSetOneConvexHullPerUCX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshLodDataNode::execSetOneConvexHullPerUCX)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetOneConvexHullPerUCX(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshLodDataNode Function SetOneConvexHullPerUCX

// Begin Class UInterchangeStaticMeshLodDataNode
void UInterchangeStaticMeshLodDataNode::StaticRegisterNativesUInterchangeStaticMeshLodDataNode()
{
	UClass* Class = UInterchangeStaticMeshLodDataNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBoxCollisionMeshUid", &UInterchangeStaticMeshLodDataNode::execAddBoxCollisionMeshUid },
		{ "AddCapsuleCollisionMeshUid", &UInterchangeStaticMeshLodDataNode::execAddCapsuleCollisionMeshUid },
		{ "AddConvexCollisionMeshUid", &UInterchangeStaticMeshLodDataNode::execAddConvexCollisionMeshUid },
		{ "AddMeshUid", &UInterchangeStaticMeshLodDataNode::execAddMeshUid },
		{ "AddSphereCollisionMeshUid", &UInterchangeStaticMeshLodDataNode::execAddSphereCollisionMeshUid },
		{ "GetBoxCollisionMeshUids", &UInterchangeStaticMeshLodDataNode::execGetBoxCollisionMeshUids },
		{ "GetBoxCollisionMeshUidsCount", &UInterchangeStaticMeshLodDataNode::execGetBoxCollisionMeshUidsCount },
		{ "GetCapsuleCollisionMeshUids", &UInterchangeStaticMeshLodDataNode::execGetCapsuleCollisionMeshUids },
		{ "GetCapsuleCollisionMeshUidsCount", &UInterchangeStaticMeshLodDataNode::execGetCapsuleCollisionMeshUidsCount },
		{ "GetConvexCollisionMeshUids", &UInterchangeStaticMeshLodDataNode::execGetConvexCollisionMeshUids },
		{ "GetConvexCollisionMeshUidsCount", &UInterchangeStaticMeshLodDataNode::execGetConvexCollisionMeshUidsCount },
		{ "GetImportCollision", &UInterchangeStaticMeshLodDataNode::execGetImportCollision },
		{ "GetMeshUids", &UInterchangeStaticMeshLodDataNode::execGetMeshUids },
		{ "GetMeshUidsCount", &UInterchangeStaticMeshLodDataNode::execGetMeshUidsCount },
		{ "GetOneConvexHullPerUCX", &UInterchangeStaticMeshLodDataNode::execGetOneConvexHullPerUCX },
		{ "GetSphereCollisionMeshUids", &UInterchangeStaticMeshLodDataNode::execGetSphereCollisionMeshUids },
		{ "GetSphereCollisionMeshUidsCount", &UInterchangeStaticMeshLodDataNode::execGetSphereCollisionMeshUidsCount },
		{ "RemoveAllBoxCollisionMeshes", &UInterchangeStaticMeshLodDataNode::execRemoveAllBoxCollisionMeshes },
		{ "RemoveAllCapsuleCollisionMeshes", &UInterchangeStaticMeshLodDataNode::execRemoveAllCapsuleCollisionMeshes },
		{ "RemoveAllConvexCollisionMeshes", &UInterchangeStaticMeshLodDataNode::execRemoveAllConvexCollisionMeshes },
		{ "RemoveAllMeshes", &UInterchangeStaticMeshLodDataNode::execRemoveAllMeshes },
		{ "RemoveAllSphereCollisionMeshes", &UInterchangeStaticMeshLodDataNode::execRemoveAllSphereCollisionMeshes },
		{ "RemoveBoxCollisionMeshUid", &UInterchangeStaticMeshLodDataNode::execRemoveBoxCollisionMeshUid },
		{ "RemoveCapsuleCollisionMeshUid", &UInterchangeStaticMeshLodDataNode::execRemoveCapsuleCollisionMeshUid },
		{ "RemoveConvexCollisionMeshUid", &UInterchangeStaticMeshLodDataNode::execRemoveConvexCollisionMeshUid },
		{ "RemoveMeshUid", &UInterchangeStaticMeshLodDataNode::execRemoveMeshUid },
		{ "RemoveSphereCollisionMeshUid", &UInterchangeStaticMeshLodDataNode::execRemoveSphereCollisionMeshUid },
		{ "SetImportCollision", &UInterchangeStaticMeshLodDataNode::execSetImportCollision },
		{ "SetOneConvexHullPerUCX", &UInterchangeStaticMeshLodDataNode::execSetOneConvexHullPerUCX },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeStaticMeshLodDataNode);
UClass* Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister()
{
	return UInterchangeStaticMeshLodDataNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "InterchangeStaticMeshLodDataNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshLodDataNode.h" },
		{ "ToolTip", "namespace UE" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid, "AddBoxCollisionMeshUid" }, // 886287477
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid, "AddCapsuleCollisionMeshUid" }, // 449771009
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid, "AddConvexCollisionMeshUid" }, // 1204468366
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddMeshUid, "AddMeshUid" }, // 2115359344
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid, "AddSphereCollisionMeshUid" }, // 2989106133
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids, "GetBoxCollisionMeshUids" }, // 1291215091
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount, "GetBoxCollisionMeshUidsCount" }, // 4212273598
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids, "GetCapsuleCollisionMeshUids" }, // 4130701337
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount, "GetCapsuleCollisionMeshUidsCount" }, // 891474582
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids, "GetConvexCollisionMeshUids" }, // 1727220405
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount, "GetConvexCollisionMeshUidsCount" }, // 208546486
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetImportCollision, "GetImportCollision" }, // 261891698
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUids, "GetMeshUids" }, // 1678506130
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetMeshUidsCount, "GetMeshUidsCount" }, // 2367537323
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX, "GetOneConvexHullPerUCX" }, // 3603352193
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids, "GetSphereCollisionMeshUids" }, // 89853863
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount, "GetSphereCollisionMeshUidsCount" }, // 4000583958
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes, "RemoveAllBoxCollisionMeshes" }, // 1552832919
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes, "RemoveAllCapsuleCollisionMeshes" }, // 2923262261
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes, "RemoveAllConvexCollisionMeshes" }, // 4093178264
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllMeshes, "RemoveAllMeshes" }, // 3904049031
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes, "RemoveAllSphereCollisionMeshes" }, // 107689739
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid, "RemoveBoxCollisionMeshUid" }, // 3376628231
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid, "RemoveCapsuleCollisionMeshUid" }, // 1781039620
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid, "RemoveConvexCollisionMeshUid" }, // 3656659444
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveMeshUid, "RemoveMeshUid" }, // 3706130226
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid, "RemoveSphereCollisionMeshUid" }, // 2201146268
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetImportCollision, "SetImportCollision" }, // 2985198081
		{ &Z_Construct_UFunction_UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX, "SetOneConvexHullPerUCX" }, // 3236979791
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeStaticMeshLodDataNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics::ClassParams = {
	&UInterchangeStaticMeshLodDataNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeStaticMeshLodDataNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeStaticMeshLodDataNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeStaticMeshLodDataNode.OuterSingleton, Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeStaticMeshLodDataNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeStaticMeshLodDataNode>()
{
	return UInterchangeStaticMeshLodDataNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeStaticMeshLodDataNode);
UInterchangeStaticMeshLodDataNode::~UInterchangeStaticMeshLodDataNode() {}
// End Class UInterchangeStaticMeshLodDataNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeStaticMeshLodDataNode, UInterchangeStaticMeshLodDataNode::StaticClass, TEXT("UInterchangeStaticMeshLodDataNode"), &Z_Registration_Info_UClass_UInterchangeStaticMeshLodDataNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeStaticMeshLodDataNode), 1349182987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_3616195177(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
