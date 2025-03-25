// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeSkeletalMeshFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSkeletalMeshFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMeshFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UEnum* Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Enum EInterchangeSkeletalMeshContentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType;
static UEnum* EInterchangeSkeletalMeshContentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType, (UObject*)Z_Construct_UPackage__Script_InterchangeFactoryNodes(), TEXT("EInterchangeSkeletalMeshContentType"));
	}
	return Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UEnum* StaticEnum<EInterchangeSkeletalMeshContentType>()
{
	return EInterchangeSkeletalMeshContentType_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "Geometry and Skin Weights" },
		{ "All.Name", "EInterchangeSkeletalMeshContentType::All" },
		{ "All.ToolTip", "Imports all skeletal mesh content: geometry and skin weights." },
		{ "BlueprintType", "true" },
		{ "Geometry.DisplayName", "Geometry Only" },
		{ "Geometry.Name", "EInterchangeSkeletalMeshContentType::Geometry" },
		{ "Geometry.ToolTip", "Imports the skeletal mesh geometry only. This creates a default skeleton, or maps the geometry to the existing one. You can import morph targets and LODs with the mesh." },
		{ "MAX.Name", "EInterchangeSkeletalMeshContentType::MAX" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "SkinningWeights.DisplayName", "Skin Weights Only" },
		{ "SkinningWeights.Name", "EInterchangeSkeletalMeshContentType::SkinningWeights" },
		{ "SkinningWeights.ToolTip", "Imports the skeletal mesh skin weights only. No geometry, morph targets, or LODs are imported." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeSkeletalMeshContentType::All", (int64)EInterchangeSkeletalMeshContentType::All },
		{ "EInterchangeSkeletalMeshContentType::Geometry", (int64)EInterchangeSkeletalMeshContentType::Geometry },
		{ "EInterchangeSkeletalMeshContentType::SkinningWeights", (int64)EInterchangeSkeletalMeshContentType::SkinningWeights },
		{ "EInterchangeSkeletalMeshContentType::MAX", (int64)EInterchangeSkeletalMeshContentType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	nullptr,
	"EInterchangeSkeletalMeshContentType",
	"EInterchangeSkeletalMeshContentType",
	Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType()
{
	if (!Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.InnerSingleton, Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.InnerSingleton;
}
// End Enum EInterchangeSkeletalMeshContentType

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomBoneInfluenceLimit
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Query the maximum number of bone influences to allow each vertex in this mesh to use.\n\x09 * If set higher than the limit determined by the project settings, it has no effect.\n\x09 * If set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the maximum number of bone influences to allow each vertex in this mesh to use.\nIf set higher than the limit determined by the project settings, it has no effect.\nIf set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomBoneInfluenceLimit", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomBoneInfluenceLimit)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomBoneInfluenceLimit(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomBoneInfluenceLimit

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomCreatePhysicsAsset
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query whether the skeletal mesh factory should create a physics asset. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query whether the skeletal mesh factory should create a physics asset. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomCreatePhysicsAsset", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomCreatePhysicsAsset)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomCreatePhysicsAsset(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomCreatePhysicsAsset

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomImportContentType
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms
	{
		EInterchangeSkeletalMeshContentType AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh import content type. This content type determines whether the factory imports partial or full translated content. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh import content type. This content type determines whether the factory imports partial or full translated content. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms, AttributeValue), Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType, METADATA_PARAMS(0, nullptr) }; // 2051819744
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomImportContentType", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomImportContentType)
{
	P_GET_ENUM_REF(EInterchangeSkeletalMeshContentType,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomImportContentType((EInterchangeSkeletalMeshContentType&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomImportContentType

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomImportMorphTarget
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query whether the skeletal mesh factory should create morph targets. Return false if the attribute was not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query whether the skeletal mesh factory should create morph targets. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomImportMorphTarget", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomImportMorphTarget)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomImportMorphTarget(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomImportMorphTarget

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomImportVertexAttributes
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomImportVertexAttributes_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query whether the skeletal mesh factory should import vertex attributes. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query whether the skeletal mesh factory should import vertex attributes. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomImportVertexAttributes_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomImportVertexAttributes_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomImportVertexAttributes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomImportVertexAttributes_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomImportVertexAttributes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomImportVertexAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomImportVertexAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomImportVertexAttributes)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomImportVertexAttributes(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomImportVertexAttributes

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomMorphThresholdPosition
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh threshold value that is used to compare vertex position equality when computing morph target deltas. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh threshold value that is used to compare vertex position equality when computing morph target deltas." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomMorphThresholdPosition", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomMorphThresholdPosition)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomMorphThresholdPosition(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomMorphThresholdPosition

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomPhysicAssetSoftObjectPath
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms
	{
		FSoftObjectPath AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query a physics asset the skeletal mesh factory should use. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query a physics asset the skeletal mesh factory should use. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomPhysicAssetSoftObjectPath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomPhysicAssetSoftObjectPath)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomPhysicAssetSoftObjectPath(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomPhysicAssetSoftObjectPath

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomSkeletonSoftObjectPath
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms
	{
		FSoftObjectPath AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh factory skeleton UObject. Return false if the attribute was not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh factory skeleton UObject. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomSkeletonSoftObjectPath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomSkeletonSoftObjectPath)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletonSoftObjectPath(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomSkeletonSoftObjectPath

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomThresholdPosition
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh threshold value that is used to decide whether two vertex positions are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh threshold value that is used to decide whether two vertex positions are equal." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomThresholdPosition", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdPosition)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomThresholdPosition(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomThresholdPosition

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomThresholdTangentNormal
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh threshold value that is used to decide whether two normals, tangents, or bi-normals are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh threshold value that is used to decide whether two normals, tangents, or bi-normals are equal." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomThresholdTangentNormal", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdTangentNormal)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomThresholdTangentNormal(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomThresholdTangentNormal

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomThresholdUV
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh threshold value that is used to decide whether two UVs are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh threshold value that is used to decide whether two UVs are equal." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomThresholdUV", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdUV)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomThresholdUV(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomThresholdUV

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetCustomUseHighPrecisionSkinWeights
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh UseHighPrecisionSkinWeights setting. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh UseHighPrecisionSkinWeights setting." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomUseHighPrecisionSkinWeights", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomUseHighPrecisionSkinWeights)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseHighPrecisionSkinWeights(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetCustomUseHighPrecisionSkinWeights

// Begin Class UInterchangeSkeletalMeshFactoryNode Function GetObjectClass
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventGetObjectClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Get the class this node creates. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Get the class this node creates." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::InterchangeSkeletalMeshFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::InterchangeSkeletalMeshFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetObjectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function GetObjectClass

// Begin Class UInterchangeSkeletalMeshFactoryNode Function InitializeSkeletalMeshNode
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms
	{
		FString UniqueID;
		FString DisplayLabel;
		FString InAssetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Initialize node data.\n\x09 * @param: UniqueID - The unique ID for this node.\n\x09 * @param DisplayLabel - The name of the node.\n\x09 * @param InAssetClass - The class the SkeletalMesh factory will create for this node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Initialize node data.\n@param: UniqueID - The unique ID for this node.\n@param DisplayLabel - The name of the node.\n@param InAssetClass - The class the SkeletalMesh factory will create for this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InAssetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms, UniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueID_MetaData), NewProp_UniqueID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms, DisplayLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayLabel_MetaData), NewProp_DisplayLabel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_InAssetClass = { "InAssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms, InAssetClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetClass_MetaData), NewProp_InAssetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_UniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_DisplayLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_InAssetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "InitializeSkeletalMeshNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execInitializeSkeletalMeshNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
	P_GET_PROPERTY(FStrProperty,Z_Param_InAssetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeSkeletalMeshNode(Z_Param_UniqueID,Z_Param_DisplayLabel,Z_Param_InAssetClass);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function InitializeSkeletalMeshNode

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomBoneInfluenceLimit
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms
	{
		int32 AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Set the maximum number of bone influences to allow each vertex in this mesh to use.\n\x09 * If set higher than the limit determined by the project settings, it has no effect.\n\x09 * If set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting.\n\x09 */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the maximum number of bone influences to allow each vertex in this mesh to use.\nIf set higher than the limit determined by the project settings, it has no effect.\nIf set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomBoneInfluenceLimit", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomBoneInfluenceLimit)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomBoneInfluenceLimit(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomBoneInfluenceLimit

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomCreatePhysicsAsset
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set whether the skeletal mesh factory should create a physics asset. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set whether the skeletal mesh factory should create a physics asset. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomCreatePhysicsAsset", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomCreatePhysicsAsset)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomCreatePhysicsAsset(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomCreatePhysicsAsset

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomImportContentType
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms
	{
		EInterchangeSkeletalMeshContentType AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh import content type. This content type determines whether the factory imports partial or full translated content. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh import content type. This content type determines whether the factory imports partial or full translated content. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms, AttributeValue), Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 2051819744
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomImportContentType", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomImportContentType)
{
	P_GET_ENUM_REF(EInterchangeSkeletalMeshContentType,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomImportContentType((EInterchangeSkeletalMeshContentType&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomImportContentType

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomImportMorphTarget
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set whether the skeletal mesh factory should create morph targets. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set whether the skeletal mesh factory should create morph targets. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomImportMorphTarget", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomImportMorphTarget)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomImportMorphTarget(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomImportMorphTarget

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomImportVertexAttributes
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomImportVertexAttributes_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set whether the skeletal mesh factory should import vertex attributes. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set whether the skeletal mesh factory should import vertex attributes. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomImportVertexAttributes_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomImportVertexAttributes_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomImportVertexAttributes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomImportVertexAttributes_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomImportVertexAttributes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomImportVertexAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomImportVertexAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomImportVertexAttributes)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomImportVertexAttributes(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomImportVertexAttributes

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomMorphThresholdPosition
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh threshold value that is used to compare vertex position equality when computing morph target deltas. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh threshold value that is used to compare vertex position equality when computing morph target deltas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomMorphThresholdPosition", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomMorphThresholdPosition)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomMorphThresholdPosition(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomMorphThresholdPosition

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomPhysicAssetSoftObjectPath
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms
	{
		FSoftObjectPath AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set a physics asset the skeletal mesh factory should use. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set a physics asset the skeletal mesh factory should use. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomPhysicAssetSoftObjectPath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomPhysicAssetSoftObjectPath)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomPhysicAssetSoftObjectPath(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomPhysicAssetSoftObjectPath

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomSkeletonSoftObjectPath
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms
	{
		FSoftObjectPath AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh factory skeleton UObject. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh factory skeleton UObject. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomSkeletonSoftObjectPath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomSkeletonSoftObjectPath)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletonSoftObjectPath(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomSkeletonSoftObjectPath

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomThresholdPosition
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh threshold value that is used to decide whether two vertex positions are equal. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh threshold value that is used to decide whether two vertex positions are equal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomThresholdPosition", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdPosition)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomThresholdPosition(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomThresholdPosition

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomThresholdTangentNormal
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh threshold value that is used to decide whether two normals, tangents, or bi-normals are equal. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh threshold value that is used to decide whether two normals, tangents, or bi-normals are equal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomThresholdTangentNormal", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdTangentNormal)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomThresholdTangentNormal(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomThresholdTangentNormal

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomThresholdUV
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh threshold value that is used to decide whether two UVs are equal. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh threshold value that is used to decide whether two UVs are equal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomThresholdUV", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdUV)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomThresholdUV(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomThresholdUV

// Begin Class UInterchangeSkeletalMeshFactoryNode Function SetCustomUseHighPrecisionSkinWeights
struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics
{
	struct InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh UseHighPrecisionSkinWeights setting. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh UseHighPrecisionSkinWeights setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomUseHighPrecisionSkinWeights", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomUseHighPrecisionSkinWeights)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseHighPrecisionSkinWeights(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshFactoryNode Function SetCustomUseHighPrecisionSkinWeights

// Begin Class UInterchangeSkeletalMeshFactoryNode
void UInterchangeSkeletalMeshFactoryNode::StaticRegisterNativesUInterchangeSkeletalMeshFactoryNode()
{
	UClass* Class = UInterchangeSkeletalMeshFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomBoneInfluenceLimit", &UInterchangeSkeletalMeshFactoryNode::execGetCustomBoneInfluenceLimit },
		{ "GetCustomCreatePhysicsAsset", &UInterchangeSkeletalMeshFactoryNode::execGetCustomCreatePhysicsAsset },
		{ "GetCustomImportContentType", &UInterchangeSkeletalMeshFactoryNode::execGetCustomImportContentType },
		{ "GetCustomImportMorphTarget", &UInterchangeSkeletalMeshFactoryNode::execGetCustomImportMorphTarget },
		{ "GetCustomImportVertexAttributes", &UInterchangeSkeletalMeshFactoryNode::execGetCustomImportVertexAttributes },
		{ "GetCustomMorphThresholdPosition", &UInterchangeSkeletalMeshFactoryNode::execGetCustomMorphThresholdPosition },
		{ "GetCustomPhysicAssetSoftObjectPath", &UInterchangeSkeletalMeshFactoryNode::execGetCustomPhysicAssetSoftObjectPath },
		{ "GetCustomSkeletonSoftObjectPath", &UInterchangeSkeletalMeshFactoryNode::execGetCustomSkeletonSoftObjectPath },
		{ "GetCustomThresholdPosition", &UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdPosition },
		{ "GetCustomThresholdTangentNormal", &UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdTangentNormal },
		{ "GetCustomThresholdUV", &UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdUV },
		{ "GetCustomUseHighPrecisionSkinWeights", &UInterchangeSkeletalMeshFactoryNode::execGetCustomUseHighPrecisionSkinWeights },
		{ "GetObjectClass", &UInterchangeSkeletalMeshFactoryNode::execGetObjectClass },
		{ "InitializeSkeletalMeshNode", &UInterchangeSkeletalMeshFactoryNode::execInitializeSkeletalMeshNode },
		{ "SetCustomBoneInfluenceLimit", &UInterchangeSkeletalMeshFactoryNode::execSetCustomBoneInfluenceLimit },
		{ "SetCustomCreatePhysicsAsset", &UInterchangeSkeletalMeshFactoryNode::execSetCustomCreatePhysicsAsset },
		{ "SetCustomImportContentType", &UInterchangeSkeletalMeshFactoryNode::execSetCustomImportContentType },
		{ "SetCustomImportMorphTarget", &UInterchangeSkeletalMeshFactoryNode::execSetCustomImportMorphTarget },
		{ "SetCustomImportVertexAttributes", &UInterchangeSkeletalMeshFactoryNode::execSetCustomImportVertexAttributes },
		{ "SetCustomMorphThresholdPosition", &UInterchangeSkeletalMeshFactoryNode::execSetCustomMorphThresholdPosition },
		{ "SetCustomPhysicAssetSoftObjectPath", &UInterchangeSkeletalMeshFactoryNode::execSetCustomPhysicAssetSoftObjectPath },
		{ "SetCustomSkeletonSoftObjectPath", &UInterchangeSkeletalMeshFactoryNode::execSetCustomSkeletonSoftObjectPath },
		{ "SetCustomThresholdPosition", &UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdPosition },
		{ "SetCustomThresholdTangentNormal", &UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdTangentNormal },
		{ "SetCustomThresholdUV", &UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdUV },
		{ "SetCustomUseHighPrecisionSkinWeights", &UInterchangeSkeletalMeshFactoryNode::execSetCustomUseHighPrecisionSkinWeights },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletalMeshFactoryNode);
UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister()
{
	return UInterchangeSkeletalMeshFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeSkeletalMeshFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit, "GetCustomBoneInfluenceLimit" }, // 2229928220
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset, "GetCustomCreatePhysicsAsset" }, // 883575989
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType, "GetCustomImportContentType" }, // 1693302589
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget, "GetCustomImportMorphTarget" }, // 3953528531
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportVertexAttributes, "GetCustomImportVertexAttributes" }, // 4051931066
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition, "GetCustomMorphThresholdPosition" }, // 3409678184
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath, "GetCustomPhysicAssetSoftObjectPath" }, // 1450225846
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath, "GetCustomSkeletonSoftObjectPath" }, // 2240734198
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition, "GetCustomThresholdPosition" }, // 1841032573
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal, "GetCustomThresholdTangentNormal" }, // 3345619044
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV, "GetCustomThresholdUV" }, // 362284251
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights, "GetCustomUseHighPrecisionSkinWeights" }, // 3022453754
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass, "GetObjectClass" }, // 1081920899
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode, "InitializeSkeletalMeshNode" }, // 4071789555
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit, "SetCustomBoneInfluenceLimit" }, // 3179635363
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset, "SetCustomCreatePhysicsAsset" }, // 1879668963
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType, "SetCustomImportContentType" }, // 1223581361
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget, "SetCustomImportMorphTarget" }, // 353590014
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportVertexAttributes, "SetCustomImportVertexAttributes" }, // 843568937
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition, "SetCustomMorphThresholdPosition" }, // 1279899352
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath, "SetCustomPhysicAssetSoftObjectPath" }, // 153439210
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath, "SetCustomSkeletonSoftObjectPath" }, // 3823663166
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition, "SetCustomThresholdPosition" }, // 2089752535
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal, "SetCustomThresholdTangentNormal" }, // 3624781515
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV, "SetCustomThresholdUV" }, // 2214649290
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights, "SetCustomUseHighPrecisionSkinWeights" }, // 698909979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSkeletalMeshFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeMeshFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::ClassParams = {
	&UInterchangeSkeletalMeshFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeSkeletalMeshFactoryNode>()
{
	return UInterchangeSkeletalMeshFactoryNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletalMeshFactoryNode);
UInterchangeSkeletalMeshFactoryNode::~UInterchangeSkeletalMeshFactoryNode() {}
// End Class UInterchangeSkeletalMeshFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeSkeletalMeshContentType_StaticEnum, TEXT("EInterchangeSkeletalMeshContentType"), &Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2051819744U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, UInterchangeSkeletalMeshFactoryNode::StaticClass, TEXT("UInterchangeSkeletalMeshFactoryNode"), &Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletalMeshFactoryNode), 4110591685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_2575453651(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
