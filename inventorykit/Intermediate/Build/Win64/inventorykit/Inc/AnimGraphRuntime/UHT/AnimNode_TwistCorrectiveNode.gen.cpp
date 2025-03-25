// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_TwistCorrectiveNode.h"
#include "Runtime/AnimationCore/Public/CommonAnimTypes.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TwistCorrectiveNode() {}

// Begin Cross Module References
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FReferenceBoneFrame();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveParam();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FReferenceBoneFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReferenceBoneFrame;
class UScriptStruct* FReferenceBoneFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReferenceBoneFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReferenceBoneFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferenceBoneFrame, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ReferenceBoneFrame"));
	}
	return Z_Registration_Info_UScriptStruct_ReferenceBoneFrame.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FReferenceBoneFrame>()
{
	return FReferenceBoneFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Reference Bone Frame */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
		{ "ToolTip", "Reference Bone Frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "FReferenceBoneFrame" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "FReferenceBoneFrame" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferenceBoneFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferenceBoneFrame, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferenceBoneFrame, Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) }; // 330961940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::NewProp_Axis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"ReferenceBoneFrame",
	Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::PropPointers),
	sizeof(FReferenceBoneFrame),
	alignof(FReferenceBoneFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReferenceBoneFrame()
{
	if (!Z_Registration_Info_UScriptStruct_ReferenceBoneFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReferenceBoneFrame.InnerSingleton, Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ReferenceBoneFrame.InnerSingleton;
}
// End ScriptStruct FReferenceBoneFrame

// Begin ScriptStruct FAnimNode_TwistCorrectiveNode
static_assert(std::is_polymorphic<FAnimNode_TwistCorrectiveNode>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_TwistCorrectiveNode cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_TwistCorrectiveNode;
class UScriptStruct* FAnimNode_TwistCorrectiveNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TwistCorrectiveNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_TwistCorrectiveNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_TwistCorrectiveNode"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TwistCorrectiveNode.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_TwistCorrectiveNode>()
{
	return FAnimNode_TwistCorrectiveNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the node that apply corrective morphtarget for twist \n * Good example is that if you twist your neck too far right or left, you're going to see odd stretch shape of neck, \n * This node can detect the angle and apply morphtarget curve \n * This isn't the twist control node for bone twist\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
		{ "ToolTip", "This is the node that apply corrective morphtarget for twist\nGood example is that if you twist your neck too far right or left, you're going to see odd stretch shape of neck,\nThis node can detect the angle and apply morphtarget curve\nThis isn't the twist control node for bone twist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseFrame_MetaData[] = {
		{ "Category", "Reference Frame" },
		{ "Comment", "/** Base Frame of the reference for the twist node */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
		{ "ToolTip", "Base Frame of the reference for the twist node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistFrame_MetaData[] = {
		{ "Category", "Reference Frame" },
		{ "Comment", "// Transform component to use as input\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
		{ "ToolTip", "Transform component to use as input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistPlaneNormalAxis_MetaData[] = {
		{ "Category", "Reference Frame" },
		{ "Comment", "/** Normal of the Plane that we'd like to calculate angle calculation from in BaseFrame. Please note we're looking for Normal Axis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
		{ "ToolTip", "Normal of the Plane that we'd like to calculate angle calculation from in BaseFrame. Please note we're looking for Normal Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ClampMax", "90.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Maximum limit of the input value (mapped to RemappedMax, only used when limiting the source range)\n// We can't go more than 180 right now because this is dot product driver\n" },
		{ "DisplayName", "Max Angle In Degree" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
		{ "ToolTip", "Maximum limit of the input value (mapped to RemappedMax, only used when limiting the source range)\nWe can't go more than 180 right now because this is dot product driver" },
		{ "UIMax", "90.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemappedMin_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Minimum value to apply to the destination (remapped from the input range)\n" },
		{ "DisplayName", "Mapped Range Min" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
		{ "ToolTip", "Minimum value to apply to the destination (remapped from the input range)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemappedMax_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Maximum value to apply to the destination (remapped from the input range)\n" },
		{ "DisplayName", "Mapped Range Max" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
		{ "ToolTip", "Maximum value to apply to the destination (remapped from the input range)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
		{ "Category", "Output Curve" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwistFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwistPlaneNormalAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemappedMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemappedMax;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TwistCorrectiveNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_BaseFrame = { "BaseFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, BaseFrame), Z_Construct_UScriptStruct_FReferenceBoneFrame, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseFrame_MetaData), NewProp_BaseFrame_MetaData) }; // 3848411551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_TwistFrame = { "TwistFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, TwistFrame), Z_Construct_UScriptStruct_FReferenceBoneFrame, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistFrame_MetaData), NewProp_TwistFrame_MetaData) }; // 3848411551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_TwistPlaneNormalAxis = { "TwistPlaneNormalAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, TwistPlaneNormalAxis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistPlaneNormalAxis_MetaData), NewProp_TwistPlaneNormalAxis_MetaData) }; // 330961940
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, RangeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMax_MetaData), NewProp_RangeMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_RemappedMin = { "RemappedMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, RemappedMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemappedMin_MetaData), NewProp_RemappedMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_RemappedMax = { "RemappedMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, RemappedMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemappedMax_MetaData), NewProp_RemappedMax_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, Curve_DEPRECATED), Z_Construct_UScriptStruct_FAnimCurveParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) }; // 4055203607
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, CurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveName_MetaData), NewProp_CurveName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_BaseFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_TwistFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_TwistPlaneNormalAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_RangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_RemappedMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_RemappedMax,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_Curve,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewProp_CurveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_TwistCorrectiveNode",
	Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::PropPointers),
	sizeof(FAnimNode_TwistCorrectiveNode),
	alignof(FAnimNode_TwistCorrectiveNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TwistCorrectiveNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_TwistCorrectiveNode.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TwistCorrectiveNode.InnerSingleton;
}
// End ScriptStruct FAnimNode_TwistCorrectiveNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_TwistCorrectiveNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FReferenceBoneFrame::StaticStruct, Z_Construct_UScriptStruct_FReferenceBoneFrame_Statics::NewStructOps, TEXT("ReferenceBoneFrame"), &Z_Registration_Info_UScriptStruct_ReferenceBoneFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReferenceBoneFrame), 3848411551U) },
		{ FAnimNode_TwistCorrectiveNode::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_Statics::NewStructOps, TEXT("AnimNode_TwistCorrectiveNode"), &Z_Registration_Info_UScriptStruct_AnimNode_TwistCorrectiveNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_TwistCorrectiveNode), 2506627934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_TwistCorrectiveNode_h_3230615105(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_TwistCorrectiveNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_TwistCorrectiveNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
