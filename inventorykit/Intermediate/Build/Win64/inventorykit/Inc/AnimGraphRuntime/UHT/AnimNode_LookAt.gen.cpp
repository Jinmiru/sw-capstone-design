// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LookAt.h"
#include "Runtime/AnimationCore/Public/CommonAnimTypes.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
#include "Runtime/Engine/Public/Animation/BoneSocketReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LookAt() {}

// Begin Cross Module References
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookAt();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAxisOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum EInterpolationBlend
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterpolationBlend;
static UEnum* EInterpolationBlend_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterpolationBlend.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterpolationBlend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EInterpolationBlend"));
	}
	return Z_Registration_Info_UEnum_EInterpolationBlend.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EInterpolationBlend::Type>()
{
	return EInterpolationBlend_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Various ways to interpolate TAlphaBlend. */" },
		{ "Cubic.Name", "EInterpolationBlend::Cubic" },
		{ "EaseInOutExponent2.Name", "EInterpolationBlend::EaseInOutExponent2" },
		{ "EaseInOutExponent3.Name", "EInterpolationBlend::EaseInOutExponent3" },
		{ "EaseInOutExponent4.Name", "EInterpolationBlend::EaseInOutExponent4" },
		{ "EaseInOutExponent5.Name", "EInterpolationBlend::EaseInOutExponent5" },
		{ "Linear.Name", "EInterpolationBlend::Linear" },
		{ "MAX.Name", "EInterpolationBlend::MAX" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "Sinusoidal.Name", "EInterpolationBlend::Sinusoidal" },
		{ "ToolTip", "Various ways to interpolate TAlphaBlend." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterpolationBlend::Linear", (int64)EInterpolationBlend::Linear },
		{ "EInterpolationBlend::Cubic", (int64)EInterpolationBlend::Cubic },
		{ "EInterpolationBlend::Sinusoidal", (int64)EInterpolationBlend::Sinusoidal },
		{ "EInterpolationBlend::EaseInOutExponent2", (int64)EInterpolationBlend::EaseInOutExponent2 },
		{ "EInterpolationBlend::EaseInOutExponent3", (int64)EInterpolationBlend::EaseInOutExponent3 },
		{ "EInterpolationBlend::EaseInOutExponent4", (int64)EInterpolationBlend::EaseInOutExponent4 },
		{ "EInterpolationBlend::EaseInOutExponent5", (int64)EInterpolationBlend::EaseInOutExponent5 },
		{ "EInterpolationBlend::MAX", (int64)EInterpolationBlend::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EInterpolationBlend",
	"EInterpolationBlend::Type",
	Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend()
{
	if (!Z_Registration_Info_UEnum_EInterpolationBlend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterpolationBlend.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterpolationBlend.InnerSingleton;
}
// End Enum EInterpolationBlend

// Begin ScriptStruct FAnimNode_LookAt
static_assert(std::is_polymorphic<FAnimNode_LookAt>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_LookAt cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LookAt;
class UScriptStruct* FAnimNode_LookAt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LookAt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LookAt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LookAt, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LookAt"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LookAt.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_LookAt>()
{
	return FAnimNode_LookAt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller that make a bone to look at the point or another bone\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Simple controller that make a bone to look at the point or another bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTarget_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Target Offset. It's in world space if LookAtBone is empty or it is based on LookAtBone or LookAtSocket in their local space*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Target Offset. It's in world space if LookAtBone is empty or it is based on LookAtBone or LookAtSocket in their local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAt_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLookUpAxis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Whether or not to use Look up axis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Whether or not to use Look up axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookUp_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtClamp_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Look at Clamp value in degrees - if your look at axis is Z, only X, Y degree of clamp will be used */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Look at Clamp value in degrees - if your look at axis is Z, only X, Y degree of clamp will be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTriggerThreashold_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtBone_MetaData[] = {
		{ "Comment", "/** Target Bone to look at - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Target Bone to look at - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtSocket_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAxis_MetaData[] = {
		{ "Comment", "/** Look at axis, which axis to align to look at point */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Look at axis, which axis to align to look at point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomLookAtAxis_MetaData[] = {
		{ "Comment", "/** Custom look up axis in local space. Only used if LookAtAxis==EAxisOption::Custom */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Custom look up axis in local space. Only used if LookAtAxis==EAxisOption::Custom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookUpAxis_MetaData[] = {
		{ "Comment", "/** Look up axis in local space */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Look up axis in local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomLookUpAxis_MetaData[] = {
		{ "Comment", "/** Custom look up axis in local space. Only used if LookUpAxis==EAxisOption::Custom */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Custom look up axis in local space. Only used if LookUpAxis==EAxisOption::Custom" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAt_Axis;
	static void NewProp_bUseLookUpAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLookUpAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookUp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTriggerThreashold;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LookAtSocket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLookAtAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LookUpAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLookUpAxis;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LookAt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneToModify_MetaData), NewProp_BoneToModify_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget = { "LookAtTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtTarget_MetaData), NewProp_LookAtTarget_MetaData) }; // 2425971742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtLocation_MetaData), NewProp_LookAtLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis = { "LookAt_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAt_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAt_Axis_MetaData), NewProp_LookAt_Axis_MetaData) }; // 330961940
void Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_SetBit(void* Obj)
{
	((FAnimNode_LookAt*)Obj)->bUseLookUpAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis = { "bUseLookUpAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LookAt), &Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLookUpAxis_MetaData), NewProp_bUseLookUpAxis_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationType), Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationType_MetaData), NewProp_InterpolationType_MetaData) }; // 178260903
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis = { "LookUp_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookUp_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookUp_Axis_MetaData), NewProp_LookUp_Axis_MetaData) }; // 330961940
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp = { "LookAtClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtClamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtClamp_MetaData), NewProp_LookAtClamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationTime_MetaData), NewProp_InterpolationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold = { "InterpolationTriggerThreashold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationTriggerThreashold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationTriggerThreashold_MetaData), NewProp_InterpolationTriggerThreashold_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone = { "LookAtBone", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtBone_DEPRECATED), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtBone_MetaData), NewProp_LookAtBone_MetaData) }; // 4218265988
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket = { "LookAtSocket", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtSocket_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtSocket_MetaData), NewProp_LookAtSocket_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis = { "LookAtAxis", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtAxis_DEPRECATED), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtAxis_MetaData), NewProp_LookAtAxis_MetaData) }; // 3674839467
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis = { "CustomLookAtAxis", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, CustomLookAtAxis_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomLookAtAxis_MetaData), NewProp_CustomLookAtAxis_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis = { "LookUpAxis", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookUpAxis_DEPRECATED), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookUpAxis_MetaData), NewProp_LookUpAxis_MetaData) }; // 3674839467
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis = { "CustomLookUpAxis", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LookAt, CustomLookUpAxis_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomLookUpAxis_MetaData), NewProp_CustomLookUpAxis_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_LookAt",
	Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers),
	sizeof(FAnimNode_LookAt),
	alignof(FAnimNode_LookAt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookAt()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LookAt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LookAt.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LookAt.InnerSingleton;
}
// End ScriptStruct FAnimNode_LookAt

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterpolationBlend_StaticEnum, TEXT("EInterpolationBlend"), &Z_Registration_Info_UEnum_EInterpolationBlend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 178260903U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_LookAt::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewStructOps, TEXT("AnimNode_LookAt"), &Z_Registration_Info_UScriptStruct_AnimNode_LookAt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LookAt), 660592350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_234507605(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
