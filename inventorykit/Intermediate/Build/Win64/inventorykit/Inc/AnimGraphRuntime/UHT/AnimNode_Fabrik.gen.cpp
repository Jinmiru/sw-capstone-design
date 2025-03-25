// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_Fabrik.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
#include "Runtime/Engine/Public/Animation/BoneSocketReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Fabrik() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Fabrik();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneRotationSource();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_Fabrik
static_assert(std::is_polymorphic<FAnimNode_Fabrik>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_Fabrik cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Fabrik;
class UScriptStruct* FAnimNode_Fabrik::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Fabrik.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Fabrik.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Fabrik, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Fabrik"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Fabrik.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Fabrik>()
{
	return FAnimNode_Fabrik::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09""Controller which implements the FABRIK IK approximation algorithm -  see http://www.academia.edu/9165835/FABRIK_A_fast_iterative_solver_for_the_Inverse_Kinematics_problem for details\n*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Controller which implements the FABRIK IK approximation algorithm -  see http://www.academia.edu/9165835/FABRIK_A_fast_iterative_solver_for_the_Inverse_Kinematics_problem for details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "EndEffector" },
		{ "Comment", "/** Coordinates for target location of tip bone - if EffectorLocationSpace is bone, this is the offset from Target Bone to use as target location*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Coordinates for target location of tip bone - if EffectorLocationSpace is bone, this is the offset from Target Bone to use as target location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTarget_MetaData[] = {
		{ "Category", "EndEffector" },
		{ "Comment", "/** If EffectorTransformSpace is a bone, this is the bone to use. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "If EffectorTransformSpace is a bone, this is the bone to use. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipBone_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Name of tip bone */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Name of tip bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Name of the root bone*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Name of the root bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Tolerance for final tip location delta from EffectorLocation*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Tolerance for final tip location delta from EffectorLocation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Maximum number of iterations allowed, to control performance. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Maximum number of iterations allowed, to control performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransformSpace_MetaData[] = {
		{ "Category", "EndEffector" },
		{ "Comment", "/** Reference frame of Effector Transform. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Reference frame of Effector Transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorRotationSource_MetaData[] = {
		{ "Category", "EndEffector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Toggle drawing of axes to debug joint rotation*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Toggle drawing of axes to debug joint rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransformBone_MetaData[] = {
		{ "Comment", "/** If EffectorTransformSpace is a bone, this is the bone to use. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "If EffectorTransformSpace is a bone, this is the bone to use. *" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TipBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootBone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EffectorTransformSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EffectorRotationSource;
#if WITH_EDITORONLY_DATA
	static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransformBone;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Fabrik>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Fabrik, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorTransform_MetaData), NewProp_EffectorTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTarget = { "EffectorTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Fabrik, EffectorTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorTarget_MetaData), NewProp_EffectorTarget_MetaData) }; // 2425971742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_TipBone = { "TipBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Fabrik, TipBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipBone_MetaData), NewProp_TipBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Fabrik, RootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBone_MetaData), NewProp_RootBone_MetaData) }; // 4218265988
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Fabrik, Precision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Precision_MetaData), NewProp_Precision_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Fabrik, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformSpace = { "EffectorTransformSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Fabrik, EffectorTransformSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorTransformSpace_MetaData), NewProp_EffectorTransformSpace_MetaData) }; // 385354733
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorRotationSource = { "EffectorRotationSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Fabrik, EffectorRotationSource), Z_Construct_UEnum_Engine_EBoneRotationSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorRotationSource_MetaData), NewProp_EffectorRotationSource_MetaData) }; // 3626929904
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
{
	((FAnimNode_Fabrik*)Obj)->bEnableDebugDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Fabrik), &Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDraw_MetaData), NewProp_bEnableDebugDraw_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformBone = { "EffectorTransformBone", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Fabrik, EffectorTransformBone_DEPRECATED), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorTransformBone_MetaData), NewProp_EffectorTransformBone_MetaData) }; // 4218265988
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_TipBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_RootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_Precision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorRotationSource,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformBone,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_Fabrik",
	Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::PropPointers),
	sizeof(FAnimNode_Fabrik),
	alignof(FAnimNode_Fabrik),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Fabrik()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Fabrik.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Fabrik.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Fabrik.InnerSingleton;
}
// End ScriptStruct FAnimNode_Fabrik

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Fabrik_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_Fabrik::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewStructOps, TEXT("AnimNode_Fabrik"), &Z_Registration_Info_UScriptStruct_AnimNode_Fabrik, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Fabrik), 4196709625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Fabrik_h_1968230896(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Fabrik_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Fabrik_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
