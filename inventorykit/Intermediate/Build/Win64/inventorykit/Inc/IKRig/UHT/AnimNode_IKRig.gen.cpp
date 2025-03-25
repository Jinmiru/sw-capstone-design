// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/AnimNodes/AnimNode_IKRig.h"
#include "IKRig/Public/Rig/IKRigDataTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_IKRig() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRigProcessor_NoRegister();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_IKRig();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigGoal();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin ScriptStruct FAnimNode_IKRig
static_assert(std::is_polymorphic<FAnimNode_IKRig>() == std::is_polymorphic<FAnimNode_CustomProperty>(), "USTRUCT FAnimNode_IKRig cannot be polymorphic unless super FAnimNode_CustomProperty is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_IKRig;
class UScriptStruct* FAnimNode_IKRig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_IKRig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_IKRig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_IKRig, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("AnimNode_IKRig"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_IKRig.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FAnimNode_IKRig>()
{
	return FAnimNode_IKRig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "/** The input pose to start the IK solve relative to. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "The input pose to start the IK solve relative to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigDefinitionAsset_MetaData[] = {
		{ "Category", "RigDefinition" },
		{ "Comment", "/** The IK rig to use to modify the incoming source pose. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The IK rig to use to modify the incoming source pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goals_MetaData[] = {
		{ "Category", "Goal" },
		{ "Comment", "/** The input goal transforms used by the IK Rig solvers.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The input goal transforms used by the IK Rig solvers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromRefPose_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** optionally ignore the input pose and start from the reference pose each solve */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "optionally ignore the input pose and start from the reference pose each solve" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Toggle debug drawing of goals when node is selected.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "Toggle debug drawing of goals when node is selected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugScale_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Adjust size of debug drawing.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "Adjust size of debug drawing." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "/** alpha value handler **/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "alpha value handler *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Current strength of the skeletal control\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Current strength of the skeletal control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBoolBlend_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IKRigProcessor_MetaData[] = {
		{ "Comment", "/** IK Rig runtime processor */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "IK Rig runtime processor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActualAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RigDefinitionAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Goals;
	static void NewProp_bStartFromRefPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromRefPose;
#if WITH_EDITORONLY_DATA
	static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugScale;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
	static void NewProp_bAlphaBoolEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaBoolEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaBoolBlend;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IKRigProcessor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_IKRig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1074011079
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_RigDefinitionAsset = { "RigDefinitionAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, RigDefinitionAsset), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigDefinitionAsset_MetaData), NewProp_RigDefinitionAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals_Inner = { "Goals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIKRigGoal, METADATA_PARAMS(0, nullptr) }; // 81720564
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals = { "Goals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, Goals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goals_MetaData), NewProp_Goals_MetaData) }; // 81720564
void Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose_SetBit(void* Obj)
{
	((FAnimNode_IKRig*)Obj)->bStartFromRefPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose = { "bStartFromRefPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_IKRig), &Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartFromRefPose_MetaData), NewProp_bStartFromRefPose_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
{
	((FAnimNode_IKRig*)Obj)->bEnableDebugDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_IKRig), &Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDraw_MetaData), NewProp_bEnableDebugDraw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_DebugScale = { "DebugScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, DebugScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugScale_MetaData), NewProp_DebugScale_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaInputType_MetaData), NewProp_AlphaInputType_MetaData) }; // 3333507802
void Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
{
	((FAnimNode_IKRig*)Obj)->bAlphaBoolEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_IKRig), &Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlphaBoolEnabled_MetaData), NewProp_bAlphaBoolEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData), NewProp_AlphaScaleBias_MetaData) }; // 3603290969
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaBoolBlend_MetaData), NewProp_AlphaBoolBlend_MetaData) }; // 3261382999
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, AlphaCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCurveName_MetaData), NewProp_AlphaCurveName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBiasClamp_MetaData), NewProp_AlphaScaleBiasClamp_MetaData) }; // 1905782755
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_IKRigProcessor = { "IKRigProcessor", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, IKRigProcessor), Z_Construct_UClass_UIKRigProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IKRigProcessor_MetaData), NewProp_IKRigProcessor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_ActualAlpha = { "ActualAlpha", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_IKRig, ActualAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActualAlpha_MetaData), NewProp_ActualAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_RigDefinitionAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_DebugScale,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaBoolBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBiasClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_IKRigProcessor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_ActualAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	Z_Construct_UScriptStruct_FAnimNode_CustomProperty,
	&NewStructOps,
	"AnimNode_IKRig",
	Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::PropPointers),
	sizeof(FAnimNode_IKRig),
	alignof(FAnimNode_IKRig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_IKRig()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_IKRig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_IKRig.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_IKRig.InnerSingleton;
}
// End ScriptStruct FAnimNode_IKRig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_IKRig::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewStructOps, TEXT("AnimNode_IKRig"), &Z_Registration_Info_UScriptStruct_AnimNode_IKRig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_IKRig), 2749404485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h_4022241789(TEXT("/Script/IKRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
