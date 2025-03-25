// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeAnimationTrackSetNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAnimationTrackSetNode() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackBaseNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTransformAnimationTrackNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_NoRegister();
INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimatedProperty();
INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType();
INTERCHANGENODES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Enum EInterchangeAnimationPayLoadType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeAnimationPayLoadType;
static UEnum* EInterchangeAnimationPayLoadType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeAnimationPayLoadType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeAnimationPayLoadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeAnimationPayLoadType"));
	}
	return Z_Registration_Info_UEnum_EInterchangeAnimationPayLoadType.OuterSingleton;
}
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeAnimationPayLoadType>()
{
	return EInterchangeAnimationPayLoadType_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BAKED.Name", "EInterchangeAnimationPayLoadType::BAKED" },
		{ "BlueprintType", "true" },
		{ "CURVE.Name", "EInterchangeAnimationPayLoadType::CURVE" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "MORPHTARGETCURVE.Name", "EInterchangeAnimationPayLoadType::MORPHTARGETCURVE" },
		{ "MORPHTARGETCURVEWEIGHTINSTANCE.Name", "EInterchangeAnimationPayLoadType::MORPHTARGETCURVEWEIGHTINSTANCE" },
		{ "NONE.Name", "EInterchangeAnimationPayLoadType::NONE" },
		{ "STEPCURVE.Comment", "// Handles/generates the same properties as the CURVE variation, but the way it is acquired might be different (depending on the Translator).\n" },
		{ "STEPCURVE.Name", "EInterchangeAnimationPayLoadType::STEPCURVE" },
		{ "STEPCURVE.ToolTip", "Handles/generates the same properties as the CURVE variation, but the way it is acquired might be different (depending on the Translator)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeAnimationPayLoadType::NONE", (int64)EInterchangeAnimationPayLoadType::NONE },
		{ "EInterchangeAnimationPayLoadType::CURVE", (int64)EInterchangeAnimationPayLoadType::CURVE },
		{ "EInterchangeAnimationPayLoadType::MORPHTARGETCURVE", (int64)EInterchangeAnimationPayLoadType::MORPHTARGETCURVE },
		{ "EInterchangeAnimationPayLoadType::STEPCURVE", (int64)EInterchangeAnimationPayLoadType::STEPCURVE },
		{ "EInterchangeAnimationPayLoadType::BAKED", (int64)EInterchangeAnimationPayLoadType::BAKED },
		{ "EInterchangeAnimationPayLoadType::MORPHTARGETCURVEWEIGHTINSTANCE", (int64)EInterchangeAnimationPayLoadType::MORPHTARGETCURVEWEIGHTINSTANCE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
	nullptr,
	"EInterchangeAnimationPayLoadType",
	"EInterchangeAnimationPayLoadType",
	Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType()
{
	if (!Z_Registration_Info_UEnum_EInterchangeAnimationPayLoadType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeAnimationPayLoadType.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeAnimationPayLoadType.InnerSingleton;
}
// End Enum EInterchangeAnimationPayLoadType

// Begin ScriptStruct FInterchangeAnimationPayLoadKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeAnimationPayLoadKey;
class UScriptStruct* FInterchangeAnimationPayLoadKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeAnimationPayLoadKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeAnimationPayLoadKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("InterchangeAnimationPayLoadKey"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeAnimationPayLoadKey.OuterSingleton;
}
template<> INTERCHANGENODES_API UScriptStruct* StaticStruct<FInterchangeAnimationPayLoadKey>()
{
	return FInterchangeAnimationPayLoadKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[] = {
		{ "Category", "Interchange | Node" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Interchange | Node" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeAnimationPayLoadKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeAnimationPayLoadKey, UniqueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueId_MetaData), NewProp_UniqueId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeAnimationPayLoadKey, Type), Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2354063748
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::NewProp_UniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	nullptr,
	&NewStructOps,
	"InterchangeAnimationPayLoadKey",
	Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::PropPointers),
	sizeof(FInterchangeAnimationPayLoadKey),
	alignof(FInterchangeAnimationPayLoadKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeAnimationPayLoadKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeAnimationPayLoadKey.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeAnimationPayLoadKey.InnerSingleton;
}
// End ScriptStruct FInterchangeAnimationPayLoadKey

// Begin Enum EInterchangeAnimatedProperty
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeAnimatedProperty;
static UEnum* EInterchangeAnimatedProperty_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeAnimatedProperty.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeAnimatedProperty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimatedProperty, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeAnimatedProperty"));
	}
	return Z_Registration_Info_UEnum_EInterchangeAnimatedProperty.OuterSingleton;
}
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeAnimatedProperty>()
{
	return EInterchangeAnimatedProperty_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimatedProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumeration specifying which properties of a camera, light or scene node can be animated besides transform.\n */" },
		{ "MAX.Name", "EInterchangeAnimatedProperty::MAX" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "None.DisplayName", "No property." },
		{ "None.Name", "EInterchangeAnimatedProperty::None" },
		{ "None.ToolTip", "The associated animation track will be ignored." },
		{ "ToolTip", "Enumeration specifying which properties of a camera, light or scene node can be animated besides transform." },
		{ "Visibility.DisplayName", "Visibility property." },
		{ "Visibility.Name", "EInterchangeAnimatedProperty::Visibility" },
		{ "Visibility.ToolTip", "The associated animation track is applied to the visibility property of the actor." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeAnimatedProperty::None", (int64)EInterchangeAnimatedProperty::None },
		{ "EInterchangeAnimatedProperty::Visibility", (int64)EInterchangeAnimatedProperty::Visibility },
		{ "EInterchangeAnimatedProperty::MAX", (int64)EInterchangeAnimatedProperty::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimatedProperty_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
	nullptr,
	"EInterchangeAnimatedProperty",
	"EInterchangeAnimatedProperty",
	Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimatedProperty_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimatedProperty_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimatedProperty_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimatedProperty_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimatedProperty()
{
	if (!Z_Registration_Info_UEnum_EInterchangeAnimatedProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeAnimatedProperty.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimatedProperty_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeAnimatedProperty.InnerSingleton;
}
// End Enum EInterchangeAnimatedProperty

// Begin Class UInterchangeAnimationTrackSetNode Function AddCustomAnimationTrackUid
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics
{
	struct InterchangeAnimationTrackSetNode_eventAddCustomAnimationTrackUid_Parms
	{
		FString AnimationTrackUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSet" },
		{ "Comment", "/**\n\x09 * Add one track dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Add one track dependency to this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationTrackUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid = { "AnimationTrackUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetNode_eventAddCustomAnimationTrackUid_Parms, AnimationTrackUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTrackUid_MetaData), NewProp_AnimationTrackUid_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetNode_eventAddCustomAnimationTrackUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetNode_eventAddCustomAnimationTrackUid_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetNode, nullptr, "AddCustomAnimationTrackUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::InterchangeAnimationTrackSetNode_eventAddCustomAnimationTrackUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::InterchangeAnimationTrackSetNode_eventAddCustomAnimationTrackUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetNode::execAddCustomAnimationTrackUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AnimationTrackUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddCustomAnimationTrackUid(Z_Param_AnimationTrackUid);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetNode Function AddCustomAnimationTrackUid

// Begin Class UInterchangeAnimationTrackSetNode Function GetCustomAnimationTrackUid
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics
{
	struct InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUid_Parms
	{
		int32 Index;
		FString OutAnimationTrackUid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSet" },
		{ "Comment", "/**\n\x09 * Retrieve one track dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Retrieve one track dependency for this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutAnimationTrackUid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::NewProp_OutAnimationTrackUid = { "OutAnimationTrackUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUid_Parms, OutAnimationTrackUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::NewProp_OutAnimationTrackUid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetNode, nullptr, "GetCustomAnimationTrackUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetNode::execGetCustomAnimationTrackUid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAnimationTrackUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomAnimationTrackUid(Z_Param_Index,Z_Param_Out_OutAnimationTrackUid);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetNode Function GetCustomAnimationTrackUid

// Begin Class UInterchangeAnimationTrackSetNode Function GetCustomAnimationTrackUidCount
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics
{
	struct InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUidCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSet" },
		{ "Comment", "/**\n\x09 * Retrieve the number of track dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Retrieve the number of track dependencies for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUidCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetNode, nullptr, "GetCustomAnimationTrackUidCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUidCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUidCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetNode::execGetCustomAnimationTrackUidCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCustomAnimationTrackUidCount();
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetNode Function GetCustomAnimationTrackUidCount

// Begin Class UInterchangeAnimationTrackSetNode Function GetCustomAnimationTrackUids
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics
{
	struct InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUids_Parms
	{
		TArray<FString> OutAnimationTrackUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSet" },
		{ "Comment", "/**\n\x09 * Retrieve the track dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Retrieve the track dependency for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutAnimationTrackUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnimationTrackUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids_Inner = { "OutAnimationTrackUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids = { "OutAnimationTrackUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUids_Parms, OutAnimationTrackUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetNode, nullptr, "GetCustomAnimationTrackUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::InterchangeAnimationTrackSetNode_eventGetCustomAnimationTrackUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetNode::execGetCustomAnimationTrackUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutAnimationTrackUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomAnimationTrackUids(Z_Param_Out_OutAnimationTrackUids);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetNode Function GetCustomAnimationTrackUids

// Begin Class UInterchangeAnimationTrackSetNode Function GetCustomFrameRate
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics
{
	struct InterchangeAnimationTrackSetNode_eventGetCustomFrameRate_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSet" },
		{ "Comment", "/**\n\x09 * Get the frame rate for the animations in the level sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the frame rate for the animations in the level sequence." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetNode_eventGetCustomFrameRate_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetNode_eventGetCustomFrameRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetNode_eventGetCustomFrameRate_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetNode, nullptr, "GetCustomFrameRate", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::InterchangeAnimationTrackSetNode_eventGetCustomFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::InterchangeAnimationTrackSetNode_eventGetCustomFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetNode::execGetCustomFrameRate)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomFrameRate(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetNode Function GetCustomFrameRate

// Begin Class UInterchangeAnimationTrackSetNode Function RemoveCustomAnimationTrackUid
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics
{
	struct InterchangeAnimationTrackSetNode_eventRemoveCustomAnimationTrackUid_Parms
	{
		FString AnimationTrackUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSet" },
		{ "Comment", "/**\n\x09 * Remove one track dependency from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Remove one track dependency from this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationTrackUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid = { "AnimationTrackUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetNode_eventRemoveCustomAnimationTrackUid_Parms, AnimationTrackUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTrackUid_MetaData), NewProp_AnimationTrackUid_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetNode_eventRemoveCustomAnimationTrackUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetNode_eventRemoveCustomAnimationTrackUid_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetNode, nullptr, "RemoveCustomAnimationTrackUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::InterchangeAnimationTrackSetNode_eventRemoveCustomAnimationTrackUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::InterchangeAnimationTrackSetNode_eventRemoveCustomAnimationTrackUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetNode::execRemoveCustomAnimationTrackUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AnimationTrackUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCustomAnimationTrackUid(Z_Param_AnimationTrackUid);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetNode Function RemoveCustomAnimationTrackUid

// Begin Class UInterchangeAnimationTrackSetNode Function SetCustomFrameRate
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics
{
	struct InterchangeAnimationTrackSetNode_eventSetCustomFrameRate_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSet" },
		{ "Comment", "/**\n\x09 * Set the frame rate for the animations in the level sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the frame rate for the animations in the level sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetNode_eventSetCustomFrameRate_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetNode_eventSetCustomFrameRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetNode_eventSetCustomFrameRate_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetNode, nullptr, "SetCustomFrameRate", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::InterchangeAnimationTrackSetNode_eventSetCustomFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::InterchangeAnimationTrackSetNode_eventSetCustomFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetNode::execSetCustomFrameRate)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomFrameRate(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetNode Function SetCustomFrameRate

// Begin Class UInterchangeAnimationTrackSetNode
void UInterchangeAnimationTrackSetNode::StaticRegisterNativesUInterchangeAnimationTrackSetNode()
{
	UClass* Class = UInterchangeAnimationTrackSetNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCustomAnimationTrackUid", &UInterchangeAnimationTrackSetNode::execAddCustomAnimationTrackUid },
		{ "GetCustomAnimationTrackUid", &UInterchangeAnimationTrackSetNode::execGetCustomAnimationTrackUid },
		{ "GetCustomAnimationTrackUidCount", &UInterchangeAnimationTrackSetNode::execGetCustomAnimationTrackUidCount },
		{ "GetCustomAnimationTrackUids", &UInterchangeAnimationTrackSetNode::execGetCustomAnimationTrackUids },
		{ "GetCustomFrameRate", &UInterchangeAnimationTrackSetNode::execGetCustomFrameRate },
		{ "RemoveCustomAnimationTrackUid", &UInterchangeAnimationTrackSetNode::execRemoveCustomAnimationTrackUid },
		{ "SetCustomFrameRate", &UInterchangeAnimationTrackSetNode::execSetCustomFrameRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimationTrackSetNode);
UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetNode_NoRegister()
{
	return UInterchangeAnimationTrackSetNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeAnimationTrackSetNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to represent a set of animation track nodes that share the same frame rate.\n */" },
		{ "IncludePath", "InterchangeAnimationTrackSetNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Class to represent a set of animation track nodes that share the same frame rate." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid, "AddCustomAnimationTrackUid" }, // 3533610905
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid, "GetCustomAnimationTrackUid" }, // 786634664
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount, "GetCustomAnimationTrackUidCount" }, // 3578309190
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids, "GetCustomAnimationTrackUids" }, // 3810849437
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_GetCustomFrameRate, "GetCustomFrameRate" }, // 988752012
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid, "RemoveCustomAnimationTrackUid" }, // 4027357163
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetNode_SetCustomFrameRate, "SetCustomFrameRate" }, // 3264278807
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimationTrackSetNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeAnimationTrackSetNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationTrackSetNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimationTrackSetNode_Statics::ClassParams = {
	&UInterchangeAnimationTrackSetNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationTrackSetNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeAnimationTrackSetNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeAnimationTrackSetNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimationTrackSetNode.OuterSingleton, Z_Construct_UClass_UInterchangeAnimationTrackSetNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeAnimationTrackSetNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeAnimationTrackSetNode>()
{
	return UInterchangeAnimationTrackSetNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimationTrackSetNode);
UInterchangeAnimationTrackSetNode::~UInterchangeAnimationTrackSetNode() {}
// End Class UInterchangeAnimationTrackSetNode

// Begin Class UInterchangeAnimationTrackBaseNode Function GetCustomCompletionMode
struct Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics
{
	struct InterchangeAnimationTrackBaseNode_eventGetCustomCompletionMode_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "Comment", "/**\n\x09 * Get how the actor's animated property behaves once this animation is complete.\n\x09 * The output value will be clamped to the range of values defined in EInterchangeAimationCompletionMode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get how the actor's animated property behaves once this animation is complete.\nThe output value will be clamped to the range of values defined in EInterchangeAimationCompletionMode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackBaseNode_eventGetCustomCompletionMode_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackBaseNode_eventGetCustomCompletionMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackBaseNode_eventGetCustomCompletionMode_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackBaseNode, nullptr, "GetCustomCompletionMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::InterchangeAnimationTrackBaseNode_eventGetCustomCompletionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::InterchangeAnimationTrackBaseNode_eventGetCustomCompletionMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackBaseNode::execGetCustomCompletionMode)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomCompletionMode(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackBaseNode Function GetCustomCompletionMode

// Begin Class UInterchangeAnimationTrackBaseNode Function SetCustomCompletionMode
struct Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics
{
	struct InterchangeAnimationTrackBaseNode_eventSetCustomCompletionMode_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "Comment", "/**\n\x09 * Set how the actor's animated property should behave once its animation completes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set how the actor's animated property should behave once its animation completes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackBaseNode_eventSetCustomCompletionMode_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackBaseNode_eventSetCustomCompletionMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackBaseNode_eventSetCustomCompletionMode_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackBaseNode, nullptr, "SetCustomCompletionMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::InterchangeAnimationTrackBaseNode_eventSetCustomCompletionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::InterchangeAnimationTrackBaseNode_eventSetCustomCompletionMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackBaseNode::execSetCustomCompletionMode)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomCompletionMode(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackBaseNode Function SetCustomCompletionMode

// Begin Class UInterchangeAnimationTrackBaseNode
void UInterchangeAnimationTrackBaseNode::StaticRegisterNativesUInterchangeAnimationTrackBaseNode()
{
	UClass* Class = UInterchangeAnimationTrackBaseNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomCompletionMode", &UInterchangeAnimationTrackBaseNode::execGetCustomCompletionMode },
		{ "SetCustomCompletionMode", &UInterchangeAnimationTrackBaseNode::execSetCustomCompletionMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimationTrackBaseNode);
UClass* Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_NoRegister()
{
	return UInterchangeAnimationTrackBaseNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract class providing the minimal services required for an animation track node.\n */" },
		{ "IncludePath", "InterchangeAnimationTrackSetNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Abstract class providing the minimal services required for an animation track node." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode, "GetCustomCompletionMode" }, // 2229253797
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode, "SetCustomCompletionMode" }, // 4257671074
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimationTrackBaseNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_Statics::ClassParams = {
	&UInterchangeAnimationTrackBaseNode::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeAnimationTrackBaseNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeAnimationTrackBaseNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimationTrackBaseNode.OuterSingleton, Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeAnimationTrackBaseNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeAnimationTrackBaseNode>()
{
	return UInterchangeAnimationTrackBaseNode::StaticClass();
}
UInterchangeAnimationTrackBaseNode::UInterchangeAnimationTrackBaseNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimationTrackBaseNode);
UInterchangeAnimationTrackBaseNode::~UInterchangeAnimationTrackBaseNode() {}
// End Class UInterchangeAnimationTrackBaseNode

// Begin Class UInterchangeAnimationTrackSetInstanceNode Function GetCustomDuration
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics
{
	struct InterchangeAnimationTrackSetInstanceNode_eventGetCustomDuration_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetInstance" },
		{ "Comment", "/**\n\x09 * Get the level sequence instance duration in number of frames.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the level sequence instance duration in number of frames." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetInstanceNode_eventGetCustomDuration_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetInstanceNode_eventGetCustomDuration_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetInstanceNode_eventGetCustomDuration_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode, nullptr, "GetCustomDuration", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::InterchangeAnimationTrackSetInstanceNode_eventGetCustomDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::InterchangeAnimationTrackSetInstanceNode_eventGetCustomDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetInstanceNode::execGetCustomDuration)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDuration(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetInstanceNode Function GetCustomDuration

// Begin Class UInterchangeAnimationTrackSetInstanceNode Function GetCustomStartFrame
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics
{
	struct InterchangeAnimationTrackSetInstanceNode_eventGetCustomStartFrame_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetInstance" },
		{ "Comment", "/**\n\x09 * Get the frame where the level sequence instance starts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the frame where the level sequence instance starts." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetInstanceNode_eventGetCustomStartFrame_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetInstanceNode_eventGetCustomStartFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetInstanceNode_eventGetCustomStartFrame_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode, nullptr, "GetCustomStartFrame", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::InterchangeAnimationTrackSetInstanceNode_eventGetCustomStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::InterchangeAnimationTrackSetInstanceNode_eventGetCustomStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetInstanceNode::execGetCustomStartFrame)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomStartFrame(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetInstanceNode Function GetCustomStartFrame

// Begin Class UInterchangeAnimationTrackSetInstanceNode Function GetCustomTimeScale
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics
{
	struct InterchangeAnimationTrackSetInstanceNode_eventGetCustomTimeScale_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetInstance" },
		{ "Comment", "/**\n\x09 * Get the time scale used for the level sequence instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the time scale used for the level sequence instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetInstanceNode_eventGetCustomTimeScale_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetInstanceNode_eventGetCustomTimeScale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetInstanceNode_eventGetCustomTimeScale_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode, nullptr, "GetCustomTimeScale", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::InterchangeAnimationTrackSetInstanceNode_eventGetCustomTimeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::InterchangeAnimationTrackSetInstanceNode_eventGetCustomTimeScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetInstanceNode::execGetCustomTimeScale)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomTimeScale(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetInstanceNode Function GetCustomTimeScale

// Begin Class UInterchangeAnimationTrackSetInstanceNode Function GetCustomTrackSetDependencyUid
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics
{
	struct InterchangeAnimationTrackSetInstanceNode_eventGetCustomTrackSetDependencyUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetInstance" },
		{ "Comment", "/**\n\x09 * Get the unique id of the level sequence this instance references.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the unique id of the level sequence this instance references." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetInstanceNode_eventGetCustomTrackSetDependencyUid_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetInstanceNode_eventGetCustomTrackSetDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetInstanceNode_eventGetCustomTrackSetDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode, nullptr, "GetCustomTrackSetDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::InterchangeAnimationTrackSetInstanceNode_eventGetCustomTrackSetDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::InterchangeAnimationTrackSetInstanceNode_eventGetCustomTrackSetDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetInstanceNode::execGetCustomTrackSetDependencyUid)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomTrackSetDependencyUid(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetInstanceNode Function GetCustomTrackSetDependencyUid

// Begin Class UInterchangeAnimationTrackSetInstanceNode Function SetCustomDuration
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics
{
	struct InterchangeAnimationTrackSetInstanceNode_eventSetCustomDuration_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetInstance" },
		{ "Comment", "/**\n\x09 * Set the level sequence instance duration in number of frames.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the level sequence instance duration in number of frames." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetInstanceNode_eventSetCustomDuration_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetInstanceNode_eventSetCustomDuration_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetInstanceNode_eventSetCustomDuration_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode, nullptr, "SetCustomDuration", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::InterchangeAnimationTrackSetInstanceNode_eventSetCustomDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::InterchangeAnimationTrackSetInstanceNode_eventSetCustomDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetInstanceNode::execSetCustomDuration)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDuration(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetInstanceNode Function SetCustomDuration

// Begin Class UInterchangeAnimationTrackSetInstanceNode Function SetCustomStartFrame
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics
{
	struct InterchangeAnimationTrackSetInstanceNode_eventSetCustomStartFrame_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetInstance" },
		{ "Comment", "/**\n\x09 * Set the frame where the level sequence instance starts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the frame where the level sequence instance starts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetInstanceNode_eventSetCustomStartFrame_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetInstanceNode_eventSetCustomStartFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetInstanceNode_eventSetCustomStartFrame_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode, nullptr, "SetCustomStartFrame", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::InterchangeAnimationTrackSetInstanceNode_eventSetCustomStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::InterchangeAnimationTrackSetInstanceNode_eventSetCustomStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetInstanceNode::execSetCustomStartFrame)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomStartFrame(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetInstanceNode Function SetCustomStartFrame

// Begin Class UInterchangeAnimationTrackSetInstanceNode Function SetCustomTimeScale
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics
{
	struct InterchangeAnimationTrackSetInstanceNode_eventSetCustomTimeScale_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetInstance" },
		{ "Comment", "/**\n\x09 * Set the time scale used for the level sequence instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the time scale used for the level sequence instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetInstanceNode_eventSetCustomTimeScale_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetInstanceNode_eventSetCustomTimeScale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetInstanceNode_eventSetCustomTimeScale_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode, nullptr, "SetCustomTimeScale", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::InterchangeAnimationTrackSetInstanceNode_eventSetCustomTimeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::InterchangeAnimationTrackSetInstanceNode_eventSetCustomTimeScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetInstanceNode::execSetCustomTimeScale)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomTimeScale(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetInstanceNode Function SetCustomTimeScale

// Begin Class UInterchangeAnimationTrackSetInstanceNode Function SetCustomTrackSetDependencyUid
struct Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics
{
	struct InterchangeAnimationTrackSetInstanceNode_eventSetCustomTrackSetDependencyUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetInstance" },
		{ "Comment", "/**\n\x09 * Set the unique id of the level sequence this instance references.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the unique id of the level sequence this instance references." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackSetInstanceNode_eventSetCustomTrackSetDependencyUid_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackSetInstanceNode_eventSetCustomTrackSetDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackSetInstanceNode_eventSetCustomTrackSetDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode, nullptr, "SetCustomTrackSetDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::InterchangeAnimationTrackSetInstanceNode_eventSetCustomTrackSetDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::InterchangeAnimationTrackSetInstanceNode_eventSetCustomTrackSetDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackSetInstanceNode::execSetCustomTrackSetDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomTrackSetDependencyUid(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackSetInstanceNode Function SetCustomTrackSetDependencyUid

// Begin Class UInterchangeAnimationTrackSetInstanceNode
void UInterchangeAnimationTrackSetInstanceNode::StaticRegisterNativesUInterchangeAnimationTrackSetInstanceNode()
{
	UClass* Class = UInterchangeAnimationTrackSetInstanceNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomDuration", &UInterchangeAnimationTrackSetInstanceNode::execGetCustomDuration },
		{ "GetCustomStartFrame", &UInterchangeAnimationTrackSetInstanceNode::execGetCustomStartFrame },
		{ "GetCustomTimeScale", &UInterchangeAnimationTrackSetInstanceNode::execGetCustomTimeScale },
		{ "GetCustomTrackSetDependencyUid", &UInterchangeAnimationTrackSetInstanceNode::execGetCustomTrackSetDependencyUid },
		{ "SetCustomDuration", &UInterchangeAnimationTrackSetInstanceNode::execSetCustomDuration },
		{ "SetCustomStartFrame", &UInterchangeAnimationTrackSetInstanceNode::execSetCustomStartFrame },
		{ "SetCustomTimeScale", &UInterchangeAnimationTrackSetInstanceNode::execSetCustomTimeScale },
		{ "SetCustomTrackSetDependencyUid", &UInterchangeAnimationTrackSetInstanceNode::execSetCustomTrackSetDependencyUid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimationTrackSetInstanceNode);
UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_NoRegister()
{
	return UInterchangeAnimationTrackSetInstanceNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to represent an animation that instances another animation track set node.\n */" },
		{ "IncludePath", "InterchangeAnimationTrackSetNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Class to represent an animation that instances another animation track set node." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration, "GetCustomDuration" }, // 1939653030
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame, "GetCustomStartFrame" }, // 1699680355
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale, "GetCustomTimeScale" }, // 4173427696
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid, "GetCustomTrackSetDependencyUid" }, // 48045625
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration, "SetCustomDuration" }, // 2246362852
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame, "SetCustomStartFrame" }, // 3062635281
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale, "SetCustomTimeScale" }, // 3654549896
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid, "SetCustomTrackSetDependencyUid" }, // 3654644594
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimationTrackSetInstanceNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeAnimationTrackBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics::ClassParams = {
	&UInterchangeAnimationTrackSetInstanceNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeAnimationTrackSetInstanceNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimationTrackSetInstanceNode.OuterSingleton, Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeAnimationTrackSetInstanceNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeAnimationTrackSetInstanceNode>()
{
	return UInterchangeAnimationTrackSetInstanceNode::StaticClass();
}
UInterchangeAnimationTrackSetInstanceNode::UInterchangeAnimationTrackSetInstanceNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimationTrackSetInstanceNode);
UInterchangeAnimationTrackSetInstanceNode::~UInterchangeAnimationTrackSetInstanceNode() {}
// End Class UInterchangeAnimationTrackSetInstanceNode

// Begin Class UInterchangeAnimationTrackNode Function GetCustomActorDependencyUid
struct Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics
{
	struct InterchangeAnimationTrackNode_eventGetCustomActorDependencyUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "Comment", "/**\n\x09 * Get the actor dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the actor dependency to this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventGetCustomActorDependencyUid_Parms, DependencyUid), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackNode_eventGetCustomActorDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackNode_eventGetCustomActorDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackNode, nullptr, "GetCustomActorDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::InterchangeAnimationTrackNode_eventGetCustomActorDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::InterchangeAnimationTrackNode_eventGetCustomActorDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackNode::execGetCustomActorDependencyUid)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomActorDependencyUid(Z_Param_Out_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackNode Function GetCustomActorDependencyUid

// Begin Class UInterchangeAnimationTrackNode Function GetCustomAnimationPayloadKey
struct Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics
{
	struct InterchangeAnimationTrackNode_eventGetCustomAnimationPayloadKey_Parms
	{
		FInterchangeAnimationPayLoadKey AnimationPayLoadKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "Comment", "/**\n\x09 * Get the payload key needed to retrieve the animation for this track.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the payload key needed to retrieve the animation for this track." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationPayLoadKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::NewProp_AnimationPayLoadKey = { "AnimationPayLoadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventGetCustomAnimationPayloadKey_Parms, AnimationPayLoadKey), Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey, METADATA_PARAMS(0, nullptr) }; // 3507421743
void Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackNode_eventGetCustomAnimationPayloadKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackNode_eventGetCustomAnimationPayloadKey_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::NewProp_AnimationPayLoadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackNode, nullptr, "GetCustomAnimationPayloadKey", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::InterchangeAnimationTrackNode_eventGetCustomAnimationPayloadKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::InterchangeAnimationTrackNode_eventGetCustomAnimationPayloadKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackNode::execGetCustomAnimationPayloadKey)
{
	P_GET_STRUCT_REF(FInterchangeAnimationPayLoadKey,Z_Param_Out_AnimationPayLoadKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAnimationPayloadKey(Z_Param_Out_AnimationPayLoadKey);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackNode Function GetCustomAnimationPayloadKey

// Begin Class UInterchangeAnimationTrackNode Function GetCustomFrameCount
struct Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics
{
	struct InterchangeAnimationTrackNode_eventGetCustomFrameCount_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "Comment", "/**\n\x09 * Get the number of frames for the animation of this track.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the number of frames for the animation of this track." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventGetCustomFrameCount_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackNode_eventGetCustomFrameCount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackNode_eventGetCustomFrameCount_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackNode, nullptr, "GetCustomFrameCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::InterchangeAnimationTrackNode_eventGetCustomFrameCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::InterchangeAnimationTrackNode_eventGetCustomFrameCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackNode::execGetCustomFrameCount)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomFrameCount(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackNode Function GetCustomFrameCount

// Begin Class UInterchangeAnimationTrackNode Function GetCustomPropertyTrack
struct Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics
{
	struct InterchangeAnimationTrackNode_eventGetCustomPropertyTrack_Parms
	{
		FName PropertyTrack;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyTrack;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::NewProp_PropertyTrack = { "PropertyTrack", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventGetCustomPropertyTrack_Parms, PropertyTrack), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackNode_eventGetCustomPropertyTrack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackNode_eventGetCustomPropertyTrack_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::NewProp_PropertyTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackNode, nullptr, "GetCustomPropertyTrack", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::InterchangeAnimationTrackNode_eventGetCustomPropertyTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::InterchangeAnimationTrackNode_eventGetCustomPropertyTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackNode::execGetCustomPropertyTrack)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyTrack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomPropertyTrack(Z_Param_Out_PropertyTrack);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackNode Function GetCustomPropertyTrack

// Begin Class UInterchangeAnimationTrackNode Function GetCustomTargetedProperty
struct Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics
{
	struct InterchangeAnimationTrackNode_eventGetCustomTargetedProperty_Parms
	{
		int32 TargetedProperty;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetedProperty;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::NewProp_TargetedProperty = { "TargetedProperty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventGetCustomTargetedProperty_Parms, TargetedProperty), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackNode_eventGetCustomTargetedProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackNode_eventGetCustomTargetedProperty_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::NewProp_TargetedProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackNode, nullptr, "GetCustomTargetedProperty", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::InterchangeAnimationTrackNode_eventGetCustomTargetedProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::InterchangeAnimationTrackNode_eventGetCustomTargetedProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackNode::execGetCustomTargetedProperty)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TargetedProperty);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomTargetedProperty(Z_Param_Out_TargetedProperty);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackNode Function GetCustomTargetedProperty

// Begin Class UInterchangeAnimationTrackNode Function SetCustomActorDependencyUid
struct Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics
{
	struct InterchangeAnimationTrackNode_eventSetCustomActorDependencyUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "Comment", "/**\n\x09 * Set the actor dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the actor dependency to this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventSetCustomActorDependencyUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackNode_eventSetCustomActorDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackNode_eventSetCustomActorDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackNode, nullptr, "SetCustomActorDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::InterchangeAnimationTrackNode_eventSetCustomActorDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::InterchangeAnimationTrackNode_eventSetCustomActorDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackNode::execSetCustomActorDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomActorDependencyUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackNode Function SetCustomActorDependencyUid

// Begin Class UInterchangeAnimationTrackNode Function SetCustomAnimationPayloadKey
struct Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics
{
	struct InterchangeAnimationTrackNode_eventSetCustomAnimationPayloadKey_Parms
	{
		FString InUniqueId;
		EInterchangeAnimationPayLoadType InType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "Comment", "/**\n\x09 * Set the payload key needed to retrieve the animation for this track.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the payload key needed to retrieve the animation for this track." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InUniqueId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::NewProp_InUniqueId = { "InUniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventSetCustomAnimationPayloadKey_Parms, InUniqueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUniqueId_MetaData), NewProp_InUniqueId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventSetCustomAnimationPayloadKey_Parms, InType), Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InType_MetaData), NewProp_InType_MetaData) }; // 2354063748
void Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackNode_eventSetCustomAnimationPayloadKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackNode_eventSetCustomAnimationPayloadKey_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::NewProp_InUniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::NewProp_InType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::NewProp_InType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackNode, nullptr, "SetCustomAnimationPayloadKey", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::InterchangeAnimationTrackNode_eventSetCustomAnimationPayloadKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::InterchangeAnimationTrackNode_eventSetCustomAnimationPayloadKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackNode::execSetCustomAnimationPayloadKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InUniqueId);
	P_GET_ENUM_REF(EInterchangeAnimationPayLoadType,Z_Param_Out_InType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAnimationPayloadKey(Z_Param_InUniqueId,(EInterchangeAnimationPayLoadType&)(Z_Param_Out_InType));
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackNode Function SetCustomAnimationPayloadKey

// Begin Class UInterchangeAnimationTrackNode Function SetCustomFrameCount
struct Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics
{
	struct InterchangeAnimationTrackNode_eventSetCustomFrameCount_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "Comment", "/**\n\x09 * Set the number of frames for the animation of this track.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the number of frames for the animation of this track." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventSetCustomFrameCount_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackNode_eventSetCustomFrameCount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackNode_eventSetCustomFrameCount_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackNode, nullptr, "SetCustomFrameCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::InterchangeAnimationTrackNode_eventSetCustomFrameCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::InterchangeAnimationTrackNode_eventSetCustomFrameCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackNode::execSetCustomFrameCount)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomFrameCount(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackNode Function SetCustomFrameCount

// Begin Class UInterchangeAnimationTrackNode Function SetCustomPropertyTrack
struct Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics
{
	struct InterchangeAnimationTrackNode_eventSetCustomPropertyTrack_Parms
	{
		FName PropertyTrack;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "Comment", "/**\n\x09 * Set the property animated by this track. Usually the name of a UMovieSceneTrack, e.g for UMovieSceneColorTrack -> Color\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the property animated by this track. Usually the name of a UMovieSceneTrack, e.g for UMovieSceneColorTrack -> Color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyTrack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyTrack;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::NewProp_PropertyTrack = { "PropertyTrack", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventSetCustomPropertyTrack_Parms, PropertyTrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyTrack_MetaData), NewProp_PropertyTrack_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackNode_eventSetCustomPropertyTrack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackNode_eventSetCustomPropertyTrack_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::NewProp_PropertyTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackNode, nullptr, "SetCustomPropertyTrack", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::InterchangeAnimationTrackNode_eventSetCustomPropertyTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::InterchangeAnimationTrackNode_eventSetCustomPropertyTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackNode::execSetCustomPropertyTrack)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyTrack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomPropertyTrack(Z_Param_Out_PropertyTrack);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackNode Function SetCustomPropertyTrack

// Begin Class UInterchangeAnimationTrackNode Function SetCustomTargetedProperty
struct Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics
{
	struct InterchangeAnimationTrackNode_eventSetCustomTargetedProperty_Parms
	{
		int32 TargetedProperty;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetedProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetedProperty;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::NewProp_TargetedProperty = { "TargetedProperty", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimationTrackNode_eventSetCustomTargetedProperty_Parms, TargetedProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetedProperty_MetaData), NewProp_TargetedProperty_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimationTrackNode_eventSetCustomTargetedProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimationTrackNode_eventSetCustomTargetedProperty_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::NewProp_TargetedProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackNode, nullptr, "SetCustomTargetedProperty", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::InterchangeAnimationTrackNode_eventSetCustomTargetedProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::InterchangeAnimationTrackNode_eventSetCustomTargetedProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimationTrackNode::execSetCustomTargetedProperty)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TargetedProperty);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomTargetedProperty(Z_Param_Out_TargetedProperty);
	P_NATIVE_END;
}
// End Class UInterchangeAnimationTrackNode Function SetCustomTargetedProperty

// Begin Class UInterchangeAnimationTrackNode
void UInterchangeAnimationTrackNode::StaticRegisterNativesUInterchangeAnimationTrackNode()
{
	UClass* Class = UInterchangeAnimationTrackNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomActorDependencyUid", &UInterchangeAnimationTrackNode::execGetCustomActorDependencyUid },
		{ "GetCustomAnimationPayloadKey", &UInterchangeAnimationTrackNode::execGetCustomAnimationPayloadKey },
		{ "GetCustomFrameCount", &UInterchangeAnimationTrackNode::execGetCustomFrameCount },
		{ "GetCustomPropertyTrack", &UInterchangeAnimationTrackNode::execGetCustomPropertyTrack },
		{ "GetCustomTargetedProperty", &UInterchangeAnimationTrackNode::execGetCustomTargetedProperty },
		{ "SetCustomActorDependencyUid", &UInterchangeAnimationTrackNode::execSetCustomActorDependencyUid },
		{ "SetCustomAnimationPayloadKey", &UInterchangeAnimationTrackNode::execSetCustomAnimationPayloadKey },
		{ "SetCustomFrameCount", &UInterchangeAnimationTrackNode::execSetCustomFrameCount },
		{ "SetCustomPropertyTrack", &UInterchangeAnimationTrackNode::execSetCustomPropertyTrack },
		{ "SetCustomTargetedProperty", &UInterchangeAnimationTrackNode::execSetCustomTargetedProperty },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimationTrackNode);
UClass* Z_Construct_UClass_UInterchangeAnimationTrackNode_NoRegister()
{
	return UInterchangeAnimationTrackNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to represent an animation on the property of a camera, light, or scene node\n * The list of supported properties is enumerated in EInterchangeAnimatedProperty.\n */" },
		{ "IncludePath", "InterchangeAnimationTrackSetNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Class to represent an animation on the property of a camera, light, or scene node\nThe list of supported properties is enumerated in EInterchangeAnimatedProperty." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomActorDependencyUid, "GetCustomActorDependencyUid" }, // 3470410388
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey, "GetCustomAnimationPayloadKey" }, // 472557832
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomFrameCount, "GetCustomFrameCount" }, // 3767859511
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomPropertyTrack, "GetCustomPropertyTrack" }, // 4289453914
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackNode_GetCustomTargetedProperty, "GetCustomTargetedProperty" }, // 965537871
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomActorDependencyUid, "SetCustomActorDependencyUid" }, // 573357951
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey, "SetCustomAnimationPayloadKey" }, // 2527792199
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomFrameCount, "SetCustomFrameCount" }, // 3380061934
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomPropertyTrack, "SetCustomPropertyTrack" }, // 972976187
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackNode_SetCustomTargetedProperty, "SetCustomTargetedProperty" }, // 2862450566
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimationTrackNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeAnimationTrackBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics::ClassParams = {
	&UInterchangeAnimationTrackNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeAnimationTrackNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeAnimationTrackNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimationTrackNode.OuterSingleton, Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeAnimationTrackNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeAnimationTrackNode>()
{
	return UInterchangeAnimationTrackNode::StaticClass();
}
UInterchangeAnimationTrackNode::UInterchangeAnimationTrackNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimationTrackNode);
UInterchangeAnimationTrackNode::~UInterchangeAnimationTrackNode() {}
// End Class UInterchangeAnimationTrackNode

// Begin Class UInterchangeTransformAnimationTrackNode Function GetCustomUsedChannels
struct Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics
{
	struct InterchangeTransformAnimationTrackNode_eventGetCustomUsedChannels_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | TransformAnimationTrack" },
		{ "Comment", "/**\n\x09 * Get which channels of this animation should be used. This is a bitmask.\n\x09 * See SetCustomUsedChannels for description of bitmask\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get which channels of this animation should be used. This is a bitmask.\nSee SetCustomUsedChannels for description of bitmask" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTransformAnimationTrackNode_eventGetCustomUsedChannels_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTransformAnimationTrackNode_eventGetCustomUsedChannels_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTransformAnimationTrackNode_eventGetCustomUsedChannels_Parms), &Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTransformAnimationTrackNode, nullptr, "GetCustomUsedChannels", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::InterchangeTransformAnimationTrackNode_eventGetCustomUsedChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::InterchangeTransformAnimationTrackNode_eventGetCustomUsedChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTransformAnimationTrackNode::execGetCustomUsedChannels)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUsedChannels(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTransformAnimationTrackNode Function GetCustomUsedChannels

// Begin Class UInterchangeTransformAnimationTrackNode Function SetCustomUsedChannels
struct Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics
{
	struct InterchangeTransformAnimationTrackNode_eventSetCustomUsedChannels_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | TransformAnimationTrack" },
		{ "Comment", "/**\n\x09 * Set which channels of this animation should be used. This is a bitwise mask.\n\x09 * Bits are interpreted as follow:\n\x09 *    None          = 0x000,\n\x09 *    TranslationX  = 0x001,\n\x09 *    TranslationY  = 0x002,\n\x09 *    TranslationZ  = 0x004,\n\x09 *    Translation   = TranslationX | TranslationY | TranslationZ,\n\x09 *    RotationX     = 0x008,\n\x09 *    RotationY     = 0x010,\n\x09 *    RotationZ     = 0x020,\n\x09 *    Rotation      = RotationX | RotationY | RotationZ,\n\x09 *    ScaleX        = 0x040,\n\x09 *    ScaleY        = 0x080,\n\x09 *    ScaleZ        = 0x100,\n\x09 *    Scale         = ScaleX | ScaleY | ScaleZ,\n\x09 *    AllTransform  = Translation | Rotation | Scale,\n\x09 *    Weight        = 0x200,\n\x09 *    All           = Translation | Rotation | Scale | Weight,\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set which channels of this animation should be used. This is a bitwise mask.\nBits are interpreted as follow:\n   None          = 0x000,\n   TranslationX  = 0x001,\n   TranslationY  = 0x002,\n   TranslationZ  = 0x004,\n   Translation   = TranslationX | TranslationY | TranslationZ,\n   RotationX     = 0x008,\n   RotationY     = 0x010,\n   RotationZ     = 0x020,\n   Rotation      = RotationX | RotationY | RotationZ,\n   ScaleX        = 0x040,\n   ScaleY        = 0x080,\n   ScaleZ        = 0x100,\n   Scale         = ScaleX | ScaleY | ScaleZ,\n   AllTransform  = Translation | Rotation | Scale,\n   Weight        = 0x200,\n   All           = Translation | Rotation | Scale | Weight," },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTransformAnimationTrackNode_eventSetCustomUsedChannels_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTransformAnimationTrackNode_eventSetCustomUsedChannels_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTransformAnimationTrackNode_eventSetCustomUsedChannels_Parms), &Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTransformAnimationTrackNode, nullptr, "SetCustomUsedChannels", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::InterchangeTransformAnimationTrackNode_eventSetCustomUsedChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::InterchangeTransformAnimationTrackNode_eventSetCustomUsedChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTransformAnimationTrackNode::execSetCustomUsedChannels)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUsedChannels(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTransformAnimationTrackNode Function SetCustomUsedChannels

// Begin Class UInterchangeTransformAnimationTrackNode
void UInterchangeTransformAnimationTrackNode::StaticRegisterNativesUInterchangeTransformAnimationTrackNode()
{
	UClass* Class = UInterchangeTransformAnimationTrackNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomUsedChannels", &UInterchangeTransformAnimationTrackNode::execGetCustomUsedChannels },
		{ "SetCustomUsedChannels", &UInterchangeTransformAnimationTrackNode::execSetCustomUsedChannels },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTransformAnimationTrackNode);
UClass* Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_NoRegister()
{
	return UInterchangeTransformAnimationTrackNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to represent an animation on the transform of a camera, light, or scene node.\n */" },
		{ "IncludePath", "InterchangeAnimationTrackSetNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Class to represent an animation on the transform of a camera, light, or scene node." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels, "GetCustomUsedChannels" }, // 4207232772
		{ &Z_Construct_UFunction_UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels, "SetCustomUsedChannels" }, // 1229926997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTransformAnimationTrackNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeAnimationTrackNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_Statics::ClassParams = {
	&UInterchangeTransformAnimationTrackNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTransformAnimationTrackNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeTransformAnimationTrackNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTransformAnimationTrackNode.OuterSingleton, Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTransformAnimationTrackNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTransformAnimationTrackNode>()
{
	return UInterchangeTransformAnimationTrackNode::StaticClass();
}
UInterchangeTransformAnimationTrackNode::UInterchangeTransformAnimationTrackNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTransformAnimationTrackNode);
UInterchangeTransformAnimationTrackNode::~UInterchangeTransformAnimationTrackNode() {}
// End Class UInterchangeTransformAnimationTrackNode

// Begin Class UInterchangeSkeletalAnimationTrackNode Function GetCustomAnimationSampleRate
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationSampleRate_Parms
	{
		double SampleRate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "Comment", "/**\n\x09 * Get the animation sample rate. Return false if the attribute is not set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the animation sample rate. Return false if the attribute is not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SampleRate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationSampleRate_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationSampleRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationSampleRate_Parms), &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "GetCustomAnimationSampleRate", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execGetCustomAnimationSampleRate)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_SampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAnimationSampleRate(Z_Param_Out_SampleRate);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function GetCustomAnimationSampleRate

// Begin Class UInterchangeSkeletalAnimationTrackNode Function GetCustomAnimationStartTime
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStartTime_Parms
	{
		double StartTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "Comment", "/**\n\x09 * Get the animation start time. Return false if the attribute is not set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the animation start time. Return false if the attribute is not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStartTime_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStartTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStartTime_Parms), &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "GetCustomAnimationStartTime", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStartTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStartTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execGetCustomAnimationStartTime)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAnimationStartTime(Z_Param_Out_StartTime);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function GetCustomAnimationStartTime

// Begin Class UInterchangeSkeletalAnimationTrackNode Function GetCustomAnimationStopTime
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStopTime_Parms
	{
		double StopTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "Comment", "/**\n\x09 * Get the animation stop time. Return false if the attribute is not set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the animation stop time. Return false if the attribute is not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StopTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::NewProp_StopTime = { "StopTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStopTime_Parms, StopTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStopTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStopTime_Parms), &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::NewProp_StopTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "GetCustomAnimationStopTime", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStopTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::InterchangeSkeletalAnimationTrackNode_eventGetCustomAnimationStopTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execGetCustomAnimationStopTime)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_StopTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAnimationStopTime(Z_Param_Out_StopTime);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function GetCustomAnimationStopTime

// Begin Class UInterchangeSkeletalAnimationTrackNode Function GetCustomSkeletonNodeUid
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventGetCustomSkeletonNodeUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "Comment", "/** Get the unique ID of the skeleton factory node. Return false if the attribute is not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Get the unique ID of the skeleton factory node. Return false if the attribute is not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventGetCustomSkeletonNodeUid_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalAnimationTrackNode_eventGetCustomSkeletonNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalAnimationTrackNode_eventGetCustomSkeletonNodeUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "GetCustomSkeletonNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::InterchangeSkeletalAnimationTrackNode_eventGetCustomSkeletonNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::InterchangeSkeletalAnimationTrackNode_eventGetCustomSkeletonNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execGetCustomSkeletonNodeUid)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletonNodeUid(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function GetCustomSkeletonNodeUid

// Begin Class UInterchangeSkeletalAnimationTrackNode Function GetMorphTargetNodeAnimationPayloadKeys
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms
	{
		TMap<FString,FString> OutMorphTargetNodeAnimationPayloadKeyUids;
		TMap<FString,uint8> OutMorphTargetNodeAnimationPayloadKeyTypes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMorphTargetNodeAnimationPayloadKeyUids_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMorphTargetNodeAnimationPayloadKeyUids_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutMorphTargetNodeAnimationPayloadKeyUids;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutMorphTargetNodeAnimationPayloadKeyTypes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMorphTargetNodeAnimationPayloadKeyTypes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutMorphTargetNodeAnimationPayloadKeyTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyUids_ValueProp = { "OutMorphTargetNodeAnimationPayloadKeyUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyUids_Key_KeyProp = { "OutMorphTargetNodeAnimationPayloadKeyUids_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyUids = { "OutMorphTargetNodeAnimationPayloadKeyUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms, OutMorphTargetNodeAnimationPayloadKeyUids), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyTypes_ValueProp = { "OutMorphTargetNodeAnimationPayloadKeyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyTypes_Key_KeyProp = { "OutMorphTargetNodeAnimationPayloadKeyTypes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyTypes = { "OutMorphTargetNodeAnimationPayloadKeyTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms, OutMorphTargetNodeAnimationPayloadKeyTypes), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyUids_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyUids_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyUids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyTypes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyTypes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloadKeyTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "GetMorphTargetNodeAnimationPayloadKeys", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::InterchangeSkeletalAnimationTrackNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::InterchangeSkeletalAnimationTrackNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execGetMorphTargetNodeAnimationPayloadKeys)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutMorphTargetNodeAnimationPayloadKeyUids);
	P_GET_TMAP_REF(FString,uint8,Z_Param_Out_OutMorphTargetNodeAnimationPayloadKeyTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMorphTargetNodeAnimationPayloadKeys(Z_Param_Out_OutMorphTargetNodeAnimationPayloadKeyUids,Z_Param_Out_OutMorphTargetNodeAnimationPayloadKeyTypes);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function GetMorphTargetNodeAnimationPayloadKeys

// Begin Class UInterchangeSkeletalAnimationTrackNode Function GetSceneNodeAnimationPayloadKeys
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventGetSceneNodeAnimationPayloadKeys_Parms
	{
		TMap<FString,FString> OutSceneNodeAnimationPayloadKeyUids;
		TMap<FString,uint8> OutSceneNodeAnimationPayloadKeyTypes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutSceneNodeAnimationPayloadKeyUids_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutSceneNodeAnimationPayloadKeyUids_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutSceneNodeAnimationPayloadKeyUids;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutSceneNodeAnimationPayloadKeyTypes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutSceneNodeAnimationPayloadKeyTypes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutSceneNodeAnimationPayloadKeyTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyUids_ValueProp = { "OutSceneNodeAnimationPayloadKeyUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyUids_Key_KeyProp = { "OutSceneNodeAnimationPayloadKeyUids_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyUids = { "OutSceneNodeAnimationPayloadKeyUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventGetSceneNodeAnimationPayloadKeys_Parms, OutSceneNodeAnimationPayloadKeyUids), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyTypes_ValueProp = { "OutSceneNodeAnimationPayloadKeyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyTypes_Key_KeyProp = { "OutSceneNodeAnimationPayloadKeyTypes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyTypes = { "OutSceneNodeAnimationPayloadKeyTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventGetSceneNodeAnimationPayloadKeys_Parms, OutSceneNodeAnimationPayloadKeyTypes), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyUids_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyUids_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyUids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyTypes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyTypes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeyTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "GetSceneNodeAnimationPayloadKeys", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::InterchangeSkeletalAnimationTrackNode_eventGetSceneNodeAnimationPayloadKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::InterchangeSkeletalAnimationTrackNode_eventGetSceneNodeAnimationPayloadKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execGetSceneNodeAnimationPayloadKeys)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutSceneNodeAnimationPayloadKeyUids);
	P_GET_TMAP_REF(FString,uint8,Z_Param_Out_OutSceneNodeAnimationPayloadKeyTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSceneNodeAnimationPayloadKeys(Z_Param_Out_OutSceneNodeAnimationPayloadKeyUids,Z_Param_Out_OutSceneNodeAnimationPayloadKeyTypes);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function GetSceneNodeAnimationPayloadKeys

// Begin Class UInterchangeSkeletalAnimationTrackNode Function SetAnimationPayloadKeyForMorphTargetNodeUid
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms
	{
		FString MorphTargetNodeUid;
		FString InUniqueId;
		EInterchangeAnimationPayLoadType InType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InUniqueId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid = { "MorphTargetNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms, MorphTargetNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetNodeUid_MetaData), NewProp_MorphTargetNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_InUniqueId = { "InUniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms, InUniqueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUniqueId_MetaData), NewProp_InUniqueId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms, InType), Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InType_MetaData), NewProp_InType_MetaData) }; // 2354063748
void Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_InUniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_InType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_InType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "SetAnimationPayloadKeyForMorphTargetNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execSetAnimationPayloadKeyForMorphTargetNodeUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MorphTargetNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_InUniqueId);
	P_GET_ENUM_REF(EInterchangeAnimationPayLoadType,Z_Param_Out_InType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAnimationPayloadKeyForMorphTargetNodeUid(Z_Param_MorphTargetNodeUid,Z_Param_InUniqueId,(EInterchangeAnimationPayLoadType&)(Z_Param_Out_InType));
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function SetAnimationPayloadKeyForMorphTargetNodeUid

// Begin Class UInterchangeSkeletalAnimationTrackNode Function SetAnimationPayloadKeyForSceneNodeUid
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms
	{
		FString SceneNodeUid;
		FString InUniqueId;
		EInterchangeAnimationPayLoadType InType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SceneNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InUniqueId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid = { "SceneNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms, SceneNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneNodeUid_MetaData), NewProp_SceneNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_InUniqueId = { "InUniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms, InUniqueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUniqueId_MetaData), NewProp_InUniqueId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms, InType), Z_Construct_UEnum_InterchangeNodes_EInterchangeAnimationPayLoadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InType_MetaData), NewProp_InType_MetaData) }; // 2354063748
void Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_InUniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_InType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_InType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "SetAnimationPayloadKeyForSceneNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::InterchangeSkeletalAnimationTrackNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execSetAnimationPayloadKeyForSceneNodeUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SceneNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_InUniqueId);
	P_GET_ENUM_REF(EInterchangeAnimationPayLoadType,Z_Param_Out_InType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAnimationPayloadKeyForSceneNodeUid(Z_Param_SceneNodeUid,Z_Param_InUniqueId,(EInterchangeAnimationPayLoadType&)(Z_Param_Out_InType));
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function SetAnimationPayloadKeyForSceneNodeUid

// Begin Class UInterchangeSkeletalAnimationTrackNode Function SetCustomAnimationSampleRate
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationSampleRate_Parms
	{
		double SampleRate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "Comment", "/**\n\x09 * Set the animation sample rate. Return false if the attribute could not be set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the animation sample rate. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SampleRate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationSampleRate_Parms, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationSampleRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationSampleRate_Parms), &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "SetCustomAnimationSampleRate", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execSetCustomAnimationSampleRate)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_SampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAnimationSampleRate(Z_Param_Out_SampleRate);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function SetCustomAnimationSampleRate

// Begin Class UInterchangeSkeletalAnimationTrackNode Function SetCustomAnimationStartTime
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStartTime_Parms
	{
		double StartTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "Comment", "/**\n\x09 * Set the animation start time. Return false if the attribute could not be set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the animation start time. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStartTime_Parms, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStartTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStartTime_Parms), &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "SetCustomAnimationStartTime", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStartTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStartTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execSetCustomAnimationStartTime)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAnimationStartTime(Z_Param_Out_StartTime);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function SetCustomAnimationStartTime

// Begin Class UInterchangeSkeletalAnimationTrackNode Function SetCustomAnimationStopTime
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStopTime_Parms
	{
		double StopTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "Comment", "/**\n\x09 * Set the animation stop time. Return false if the attribute could not be set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the animation stop time. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StopTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::NewProp_StopTime = { "StopTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStopTime_Parms, StopTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopTime_MetaData), NewProp_StopTime_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStopTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStopTime_Parms), &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::NewProp_StopTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "SetCustomAnimationStopTime", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStopTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::InterchangeSkeletalAnimationTrackNode_eventSetCustomAnimationStopTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execSetCustomAnimationStopTime)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_StopTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAnimationStopTime(Z_Param_Out_StopTime);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function SetCustomAnimationStopTime

// Begin Class UInterchangeSkeletalAnimationTrackNode Function SetCustomSkeletonNodeUid
struct Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics
{
	struct InterchangeSkeletalAnimationTrackNode_eventSetCustomSkeletonNodeUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "Comment", "/** Set the unique ID of the skeleton factory node. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "Set the unique ID of the skeleton factory node. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalAnimationTrackNode_eventSetCustomSkeletonNodeUid_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalAnimationTrackNode_eventSetCustomSkeletonNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalAnimationTrackNode_eventSetCustomSkeletonNodeUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, nullptr, "SetCustomSkeletonNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::InterchangeSkeletalAnimationTrackNode_eventSetCustomSkeletonNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::InterchangeSkeletalAnimationTrackNode_eventSetCustomSkeletonNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalAnimationTrackNode::execSetCustomSkeletonNodeUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletonNodeUid(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalAnimationTrackNode Function SetCustomSkeletonNodeUid

// Begin Class UInterchangeSkeletalAnimationTrackNode
void UInterchangeSkeletalAnimationTrackNode::StaticRegisterNativesUInterchangeSkeletalAnimationTrackNode()
{
	UClass* Class = UInterchangeSkeletalAnimationTrackNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomAnimationSampleRate", &UInterchangeSkeletalAnimationTrackNode::execGetCustomAnimationSampleRate },
		{ "GetCustomAnimationStartTime", &UInterchangeSkeletalAnimationTrackNode::execGetCustomAnimationStartTime },
		{ "GetCustomAnimationStopTime", &UInterchangeSkeletalAnimationTrackNode::execGetCustomAnimationStopTime },
		{ "GetCustomSkeletonNodeUid", &UInterchangeSkeletalAnimationTrackNode::execGetCustomSkeletonNodeUid },
		{ "GetMorphTargetNodeAnimationPayloadKeys", &UInterchangeSkeletalAnimationTrackNode::execGetMorphTargetNodeAnimationPayloadKeys },
		{ "GetSceneNodeAnimationPayloadKeys", &UInterchangeSkeletalAnimationTrackNode::execGetSceneNodeAnimationPayloadKeys },
		{ "SetAnimationPayloadKeyForMorphTargetNodeUid", &UInterchangeSkeletalAnimationTrackNode::execSetAnimationPayloadKeyForMorphTargetNodeUid },
		{ "SetAnimationPayloadKeyForSceneNodeUid", &UInterchangeSkeletalAnimationTrackNode::execSetAnimationPayloadKeyForSceneNodeUid },
		{ "SetCustomAnimationSampleRate", &UInterchangeSkeletalAnimationTrackNode::execSetCustomAnimationSampleRate },
		{ "SetCustomAnimationStartTime", &UInterchangeSkeletalAnimationTrackNode::execSetCustomAnimationStartTime },
		{ "SetCustomAnimationStopTime", &UInterchangeSkeletalAnimationTrackNode::execSetCustomAnimationStopTime },
		{ "SetCustomSkeletonNodeUid", &UInterchangeSkeletalAnimationTrackNode::execSetCustomSkeletonNodeUid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletalAnimationTrackNode);
UClass* Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_NoRegister()
{
	return UInterchangeSkeletalAnimationTrackNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Class to hold onto the relationships between a set of animation tracks and the bones, morph targets of a skeleton.\n*/" },
		{ "IncludePath", "InterchangeAnimationTrackSetNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetNode.h" },
		{ "ToolTip", "* Class to hold onto the relationships between a set of animation tracks and the bones, morph targets of a skeleton." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate, "GetCustomAnimationSampleRate" }, // 176925578
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime, "GetCustomAnimationStartTime" }, // 1198404374
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime, "GetCustomAnimationStopTime" }, // 1125322232
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid, "GetCustomSkeletonNodeUid" }, // 3184134699
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys, "GetMorphTargetNodeAnimationPayloadKeys" }, // 4094250271
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys, "GetSceneNodeAnimationPayloadKeys" }, // 78733319
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid, "SetAnimationPayloadKeyForMorphTargetNodeUid" }, // 3720437406
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid, "SetAnimationPayloadKeyForSceneNodeUid" }, // 521935212
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate, "SetCustomAnimationSampleRate" }, // 4096508236
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime, "SetCustomAnimationStartTime" }, // 1484485390
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime, "SetCustomAnimationStopTime" }, // 1501700868
		{ &Z_Construct_UFunction_UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid, "SetCustomSkeletonNodeUid" }, // 2392410040
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSkeletalAnimationTrackNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeAnimationTrackBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics::ClassParams = {
	&UInterchangeSkeletalAnimationTrackNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeSkeletalAnimationTrackNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletalAnimationTrackNode.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSkeletalAnimationTrackNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeSkeletalAnimationTrackNode>()
{
	return UInterchangeSkeletalAnimationTrackNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletalAnimationTrackNode);
UInterchangeSkeletalAnimationTrackNode::~UInterchangeSkeletalAnimationTrackNode() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeSkeletalAnimationTrackNode)
// End Class UInterchangeSkeletalAnimationTrackNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeAnimationPayLoadType_StaticEnum, TEXT("EInterchangeAnimationPayLoadType"), &Z_Registration_Info_UEnum_EInterchangeAnimationPayLoadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2354063748U) },
		{ EInterchangeAnimatedProperty_StaticEnum, TEXT("EInterchangeAnimatedProperty"), &Z_Registration_Info_UEnum_EInterchangeAnimatedProperty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1029443247U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInterchangeAnimationPayLoadKey::StaticStruct, Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics::NewStructOps, TEXT("InterchangeAnimationPayLoadKey"), &Z_Registration_Info_UScriptStruct_InterchangeAnimationPayLoadKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeAnimationPayLoadKey), 3507421743U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAnimationTrackSetNode, UInterchangeAnimationTrackSetNode::StaticClass, TEXT("UInterchangeAnimationTrackSetNode"), &Z_Registration_Info_UClass_UInterchangeAnimationTrackSetNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimationTrackSetNode), 680173064U) },
		{ Z_Construct_UClass_UInterchangeAnimationTrackBaseNode, UInterchangeAnimationTrackBaseNode::StaticClass, TEXT("UInterchangeAnimationTrackBaseNode"), &Z_Registration_Info_UClass_UInterchangeAnimationTrackBaseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimationTrackBaseNode), 907694592U) },
		{ Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode, UInterchangeAnimationTrackSetInstanceNode::StaticClass, TEXT("UInterchangeAnimationTrackSetInstanceNode"), &Z_Registration_Info_UClass_UInterchangeAnimationTrackSetInstanceNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimationTrackSetInstanceNode), 2313911877U) },
		{ Z_Construct_UClass_UInterchangeAnimationTrackNode, UInterchangeAnimationTrackNode::StaticClass, TEXT("UInterchangeAnimationTrackNode"), &Z_Registration_Info_UClass_UInterchangeAnimationTrackNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimationTrackNode), 337833725U) },
		{ Z_Construct_UClass_UInterchangeTransformAnimationTrackNode, UInterchangeTransformAnimationTrackNode::StaticClass, TEXT("UInterchangeTransformAnimationTrackNode"), &Z_Registration_Info_UClass_UInterchangeTransformAnimationTrackNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTransformAnimationTrackNode), 3609495627U) },
		{ Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode, UInterchangeSkeletalAnimationTrackNode::StaticClass, TEXT("UInterchangeSkeletalAnimationTrackNode"), &Z_Registration_Info_UClass_UInterchangeSkeletalAnimationTrackNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletalAnimationTrackNode), 3493755586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_2227246519(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
