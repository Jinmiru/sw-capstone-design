// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Inertialization() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInertializationBoneState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInertializationSpace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInertializationState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Inertialization();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationBoneDiff();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationPose();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationPoseDiff();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationRequest();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EInertializationState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInertializationState;
static UEnum* EInertializationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInertializationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInertializationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EInertializationState"));
	}
	return Z_Registration_Info_UEnum_EInertializationState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EInertializationState>()
{
	return EInertializationState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EInertializationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Comment", "// Inertialization request pending... prepare to capture the pose difference and then switch to active\n" },
		{ "Active.Name", "EInertializationState::Active" },
		{ "Active.ToolTip", "Inertialization request pending... prepare to capture the pose difference and then switch to active" },
		{ "Comment", "// namespace UE::Anim\n" },
		{ "Inactive.Name", "EInertializationState::Inactive" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "Pending.Comment", "// Inertialization inactive\n" },
		{ "Pending.Name", "EInertializationState::Pending" },
		{ "Pending.ToolTip", "Inertialization inactive" },
		{ "ToolTip", "namespace UE::Anim" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInertializationState::Inactive", (int64)EInertializationState::Inactive },
		{ "EInertializationState::Pending", (int64)EInertializationState::Pending },
		{ "EInertializationState::Active", (int64)EInertializationState::Active },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInertializationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EInertializationState",
	"EInertializationState",
	Z_Construct_UEnum_Engine_EInertializationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EInertializationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EInertializationState()
{
	if (!Z_Registration_Info_UEnum_EInertializationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInertializationState.InnerSingleton, Z_Construct_UEnum_Engine_EInertializationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInertializationState.InnerSingleton;
}
// End Enum EInertializationState

// Begin Enum EInertializationBoneState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInertializationBoneState;
static UEnum* EInertializationBoneState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationBoneState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EInertializationBoneState"));
	}
	return Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EInertializationBoneState>()
{
	return EInertializationBoneState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EInertializationBoneState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Excluded.Comment", "// Valid bone\n" },
		{ "Excluded.Name", "EInertializationBoneState::Excluded" },
		{ "Excluded.ToolTip", "Valid bone" },
		{ "Invalid.Name", "EInertializationBoneState::Invalid" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "Valid.Comment", "// Invalid bone (ie: bone was present in the skeleton but was not present in the pose when it was captured)\n" },
		{ "Valid.Name", "EInertializationBoneState::Valid" },
		{ "Valid.ToolTip", "Invalid bone (ie: bone was present in the skeleton but was not present in the pose when it was captured)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInertializationBoneState::Invalid", (int64)EInertializationBoneState::Invalid },
		{ "EInertializationBoneState::Valid", (int64)EInertializationBoneState::Valid },
		{ "EInertializationBoneState::Excluded", (int64)EInertializationBoneState::Excluded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EInertializationBoneState",
	"EInertializationBoneState",
	Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EInertializationBoneState()
{
	if (!Z_Registration_Info_UEnum_EInertializationBoneState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInertializationBoneState.InnerSingleton, Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInertializationBoneState.InnerSingleton;
}
// End Enum EInertializationBoneState

// Begin Enum EInertializationSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInertializationSpace;
static UEnum* EInertializationSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EInertializationSpace"));
	}
	return Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EInertializationSpace>()
{
	return EInertializationSpace_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EInertializationSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Name", "EInertializationSpace::Default" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "WorldRotation.Comment", "// Inertialize translation and rotation in world space (to conceal discontinuities in actor transform such snapping to a new attach parent)\n" },
		{ "WorldRotation.Name", "EInertializationSpace::WorldRotation" },
		{ "WorldRotation.ToolTip", "Inertialize translation and rotation in world space (to conceal discontinuities in actor transform such snapping to a new attach parent)" },
		{ "WorldSpace.Comment", "// Inertialize in local space (default)\n" },
		{ "WorldSpace.Name", "EInertializationSpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "Inertialize in local space (default)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInertializationSpace::Default", (int64)EInertializationSpace::Default },
		{ "EInertializationSpace::WorldSpace", (int64)EInertializationSpace::WorldSpace },
		{ "EInertializationSpace::WorldRotation", (int64)EInertializationSpace::WorldRotation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInertializationSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EInertializationSpace",
	"EInertializationSpace",
	Z_Construct_UEnum_Engine_EInertializationSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInertializationSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EInertializationSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EInertializationSpace()
{
	if (!Z_Registration_Info_UEnum_EInertializationSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInertializationSpace.InnerSingleton, Z_Construct_UEnum_Engine_EInertializationSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInertializationSpace.InnerSingleton;
}
// End Enum EInertializationSpace

// Begin ScriptStruct FInertializationRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InertializationRequest;
class UScriptStruct* FInertializationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InertializationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationRequest, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InertializationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InertializationRequest.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationRequest>()
{
	return FInertializationRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInertializationRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Comment", "// Blend duration of the inertialization request.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Blend duration of the inertialization request." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[] = {
		{ "Comment", "// Blend profile to control per-joint blend times.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Blend profile to control per-joint blend times." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBlendMode_MetaData[] = {
		{ "Comment", "// If to use the provided blend mode.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "If to use the provided blend mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Comment", "// Blend mode to use.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Blend mode to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomBlendCurve_MetaData[] = {
		{ "Comment", "// Custom blend curve to use when use of the blend mode is active.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Custom blend curve to use when use of the blend mode is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use DescriptionString instead." },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionString_MetaData[] = {
		{ "Comment", "// Description of the request\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Description of the request" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Comment", "// Node id from which this request was made.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Node id from which this request was made." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "Comment", "// Anim instance from which this request was made.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Anim instance from which this request was made." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
	static void NewProp_bUseBlendMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomBlendCurve;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DescriptionString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfile_MetaData), NewProp_BlendProfile_MetaData) };
void Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_bUseBlendMode_SetBit(void* Obj)
{
	((FInertializationRequest*)Obj)->bUseBlendMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_bUseBlendMode = { "bUseBlendMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInertializationRequest), &Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_bUseBlendMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBlendMode_MetaData), NewProp_bUseBlendMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, BlendMode), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 2114278366
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_CustomBlendCurve = { "CustomBlendCurve", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomBlendCurve_MetaData), NewProp_CustomBlendCurve_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000020002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, Description_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_DescriptionString = { "DescriptionString", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, DescriptionString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionString_MetaData), NewProp_DescriptionString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, AnimInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_bUseBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_CustomBlendCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_DescriptionString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_AnimInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InertializationRequest",
	Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers),
	sizeof(FInertializationRequest),
	alignof(FInertializationRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInertializationRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInertializationRequest()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InertializationRequest.InnerSingleton, Z_Construct_UScriptStruct_FInertializationRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InertializationRequest.InnerSingleton;
}
// End ScriptStruct FInertializationRequest

// Begin ScriptStruct FInertializationPose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InertializationPose;
class UScriptStruct* FInertializationPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InertializationPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationPose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InertializationPose"));
	}
	return Z_Registration_Info_UScriptStruct_InertializationPose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationPose>()
{
	return FInertializationPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInertializationPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InertializationPose",
	nullptr,
	0,
	sizeof(FInertializationPose),
	alignof(FInertializationPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInertializationPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInertializationPose()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InertializationPose.InnerSingleton, Z_Construct_UScriptStruct_FInertializationPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InertializationPose.InnerSingleton;
}
// End ScriptStruct FInertializationPose

// Begin ScriptStruct FInertializationBoneDiff
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InertializationBoneDiff;
class UScriptStruct* FInertializationBoneDiff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationBoneDiff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InertializationBoneDiff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationBoneDiff, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InertializationBoneDiff"));
	}
	return Z_Registration_Info_UScriptStruct_InertializationBoneDiff.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationBoneDiff>()
{
	return FInertializationBoneDiff::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationBoneDiff>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InertializationBoneDiff",
	nullptr,
	0,
	sizeof(FInertializationBoneDiff),
	alignof(FInertializationBoneDiff),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInertializationBoneDiff()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationBoneDiff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InertializationBoneDiff.InnerSingleton, Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InertializationBoneDiff.InnerSingleton;
}
// End ScriptStruct FInertializationBoneDiff

// Begin ScriptStruct FInertializationPoseDiff
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InertializationPoseDiff;
class UScriptStruct* FInertializationPoseDiff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationPoseDiff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InertializationPoseDiff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationPoseDiff, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InertializationPoseDiff"));
	}
	return Z_Registration_Info_UScriptStruct_InertializationPoseDiff.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationPoseDiff>()
{
	return FInertializationPoseDiff::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationPoseDiff>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InertializationPoseDiff",
	nullptr,
	0,
	sizeof(FInertializationPoseDiff),
	alignof(FInertializationPoseDiff),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInertializationPoseDiff()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationPoseDiff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InertializationPoseDiff.InnerSingleton, Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InertializationPoseDiff.InnerSingleton;
}
// End ScriptStruct FInertializationPoseDiff

// Begin ScriptStruct FAnimNode_Inertialization
static_assert(std::is_polymorphic<FAnimNode_Inertialization>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_Inertialization cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Inertialization;
class UScriptStruct* FAnimNode_Inertialization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Inertialization, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_Inertialization"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_Inertialization>()
{
	return FAnimNode_Inertialization::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendProfile_MetaData[] = {
		{ "Category", "BlendProfile" },
		{ "Comment", "// Optional default blend profile to use when no blend profile is supplied with the inertialization request\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Optional default blend profile to use when no blend profile is supplied with the inertialization request" },
		{ "UseAsBlendProfile", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredCurves_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// List of curves that should not use inertial blending. These curves will instantly change when inertialization begins.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "List of curves that should not use inertial blending. These curves will instantly change when inertialization begins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredBones_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// List of bones that should not use inertial blending. These bones will change instantly when the animation switches.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "List of bones that should not use inertial blending. These bones will change instantly when the animation switches." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreallocateMemory_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Preallocate Memory has been deprecated." },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnBecomingRelevant_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "/**\n\x09* Clear any active blends if we just became relevant, to avoid carrying over undesired blends.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Clear any active blends if we just became relevant, to avoid carrying over undesired blends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForwardRequestsThroughSkippedCachedPoseNodes_MetaData[] = {
		{ "Category", "Requests" },
		{ "Comment", "/**\n\x09* When enabled this option will forward inertialization requests through any downstream UseCachedPose nodes which \n\x09* have had their update skipped (e.g. because they have already been updated in another location). This can be\n\x09* useful in the case where the same cached pose is used in multiple places, and having an inertialization request \n\x09* that goes with it caught in only one of those places would create popping.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "When enabled this option will forward inertialization requests through any downstream UseCachedPose nodes which\nhave had their update skipped (e.g. because they have already been updated in another location). This can be\nuseful in the case where the same cached pose is used in multiple places, and having an inertialization request\nthat goes with it caught in only one of those places would create popping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestQueue_MetaData[] = {
		{ "Comment", "// Pending inertialization requests\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Pending inertialization requests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InertializationRequestAnimInstance_MetaData[] = {
		{ "Comment", "// Anim Instance for the current inertialization request\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Inertialization.h" },
		{ "ToolTip", "Anim Instance for the current inertialization request" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBlendProfile;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilteredBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredBones;
#if WITH_EDITORONLY_DATA
	static void NewProp_bPreallocateMemory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreallocateMemory;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bResetOnBecomingRelevant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnBecomingRelevant;
	static void NewProp_bForwardRequestsThroughSkippedCachedPoseNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForwardRequestsThroughSkippedCachedPoseNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestQueue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InertializationRequestAnimInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Inertialization>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Inertialization, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1074011079
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_DefaultBlendProfile = { "DefaultBlendProfile", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Inertialization, DefaultBlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBlendProfile_MetaData), NewProp_DefaultBlendProfile_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves_Inner = { "FilteredCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves = { "FilteredCurves", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Inertialization, FilteredCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredCurves_MetaData), NewProp_FilteredCurves_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredBones_Inner = { "FilteredBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredBones = { "FilteredBones", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Inertialization, FilteredBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredBones_MetaData), NewProp_FilteredBones_MetaData) }; // 4218265988
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bPreallocateMemory_SetBit(void* Obj)
{
	((FAnimNode_Inertialization*)Obj)->bPreallocateMemory_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bPreallocateMemory = { "bPreallocateMemory", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Inertialization), &Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bPreallocateMemory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreallocateMemory_MetaData), NewProp_bPreallocateMemory_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bResetOnBecomingRelevant_SetBit(void* Obj)
{
	((FAnimNode_Inertialization*)Obj)->bResetOnBecomingRelevant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bResetOnBecomingRelevant = { "bResetOnBecomingRelevant", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Inertialization), &Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bResetOnBecomingRelevant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetOnBecomingRelevant_MetaData), NewProp_bResetOnBecomingRelevant_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bForwardRequestsThroughSkippedCachedPoseNodes_SetBit(void* Obj)
{
	((FAnimNode_Inertialization*)Obj)->bForwardRequestsThroughSkippedCachedPoseNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bForwardRequestsThroughSkippedCachedPoseNodes = { "bForwardRequestsThroughSkippedCachedPoseNodes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Inertialization), &Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bForwardRequestsThroughSkippedCachedPoseNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForwardRequestsThroughSkippedCachedPoseNodes_MetaData), NewProp_bForwardRequestsThroughSkippedCachedPoseNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue_Inner = { "RequestQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInertializationRequest, METADATA_PARAMS(0, nullptr) }; // 28738242
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue = { "RequestQueue", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Inertialization, RequestQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestQueue_MetaData), NewProp_RequestQueue_MetaData) }; // 28738242
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_InertializationRequestAnimInstance = { "InertializationRequestAnimInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Inertialization, InertializationRequestAnimInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InertializationRequestAnimInstance_MetaData), NewProp_InertializationRequestAnimInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_DefaultBlendProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_FilteredBones,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bPreallocateMemory,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bResetOnBecomingRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bForwardRequestsThroughSkippedCachedPoseNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_RequestQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_InertializationRequestAnimInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_Inertialization",
	Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::PropPointers),
	sizeof(FAnimNode_Inertialization),
	alignof(FAnimNode_Inertialization),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Inertialization()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Inertialization.InnerSingleton;
}
// End ScriptStruct FAnimNode_Inertialization

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInertializationState_StaticEnum, TEXT("EInertializationState"), &Z_Registration_Info_UEnum_EInertializationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 343483005U) },
		{ EInertializationBoneState_StaticEnum, TEXT("EInertializationBoneState"), &Z_Registration_Info_UEnum_EInertializationBoneState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1639755502U) },
		{ EInertializationSpace_StaticEnum, TEXT("EInertializationSpace"), &Z_Registration_Info_UEnum_EInertializationSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 758232286U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInertializationRequest::StaticStruct, Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewStructOps, TEXT("InertializationRequest"), &Z_Registration_Info_UScriptStruct_InertializationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInertializationRequest), 28738242U) },
		{ FInertializationPose::StaticStruct, Z_Construct_UScriptStruct_FInertializationPose_Statics::NewStructOps, TEXT("InertializationPose"), &Z_Registration_Info_UScriptStruct_InertializationPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInertializationPose), 1732555577U) },
		{ FInertializationBoneDiff::StaticStruct, Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::NewStructOps, TEXT("InertializationBoneDiff"), &Z_Registration_Info_UScriptStruct_InertializationBoneDiff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInertializationBoneDiff), 3205770436U) },
		{ FInertializationPoseDiff::StaticStruct, Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::NewStructOps, TEXT("InertializationPoseDiff"), &Z_Registration_Info_UScriptStruct_InertializationPoseDiff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInertializationPoseDiff), 2538333106U) },
		{ FAnimNode_Inertialization::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewStructOps, TEXT("AnimNode_Inertialization"), &Z_Registration_Info_UScriptStruct_AnimNode_Inertialization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Inertialization), 715738631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_988949111(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
