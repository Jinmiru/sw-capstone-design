// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RotateRootBone.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RotateRootBone() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotateRootBone();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_RotateRootBone
static_assert(std::is_polymorphic<FAnimNode_RotateRootBone>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_RotateRootBone cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RotateRootBone;
class UScriptStruct* FAnimNode_RotateRootBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RotateRootBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RotateRootBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotateRootBone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RotateRootBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RotateRootBone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RotateRootBone>()
{
	return FAnimNode_RotateRootBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "//@TODO: Comment\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
		{ "ToolTip", "@TODO: Comment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchScaleBiasClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawScaleBiasClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshToComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateRootMotionAttribute_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// If enabled, rotating the root bone using this node will also rotate the direction of the root motion custom attribute\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
		{ "ToolTip", "If enabled, rotating the root bone using this node will also rotate the direction of the root motion custom attribute" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchScaleBiasClamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YawScaleBiasClamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshToComponent;
	static void NewProp_bRotateRootMotionAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateRootMotionAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RotateRootBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotateRootBone, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePose_MetaData), NewProp_BasePose_MetaData) }; // 1074011079
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotateRootBone, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotateRootBone, Yaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Yaw_MetaData), NewProp_Yaw_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_PitchScaleBiasClamp = { "PitchScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotateRootBone, PitchScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchScaleBiasClamp_MetaData), NewProp_PitchScaleBiasClamp_MetaData) }; // 1905782755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_YawScaleBiasClamp = { "YawScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotateRootBone, YawScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawScaleBiasClamp_MetaData), NewProp_YawScaleBiasClamp_MetaData) }; // 1905782755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_MeshToComponent = { "MeshToComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RotateRootBone, MeshToComponent), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshToComponent_MetaData), NewProp_MeshToComponent_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_bRotateRootMotionAttribute_SetBit(void* Obj)
{
	((FAnimNode_RotateRootBone*)Obj)->bRotateRootMotionAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_bRotateRootMotionAttribute = { "bRotateRootMotionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RotateRootBone), &Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_bRotateRootMotionAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateRootMotionAttribute_MetaData), NewProp_bRotateRootMotionAttribute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_BasePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_PitchScaleBiasClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_YawScaleBiasClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_MeshToComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewProp_bRotateRootMotionAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_RotateRootBone",
	Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::PropPointers),
	sizeof(FAnimNode_RotateRootBone),
	alignof(FAnimNode_RotateRootBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotateRootBone()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RotateRootBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RotateRootBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RotateRootBone.InnerSingleton;
}
// End ScriptStruct FAnimNode_RotateRootBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotateRootBone_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_RotateRootBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_Statics::NewStructOps, TEXT("AnimNode_RotateRootBone"), &Z_Registration_Info_UScriptStruct_AnimNode_RotateRootBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RotateRootBone), 312304792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotateRootBone_h_2918419416(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotateRootBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotateRootBone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
