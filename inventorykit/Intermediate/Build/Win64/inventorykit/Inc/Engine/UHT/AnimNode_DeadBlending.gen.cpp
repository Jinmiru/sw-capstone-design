// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_DeadBlending.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_DeadBlending() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DeadBlending();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationRequest();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_DeadBlending
static_assert(std::is_polymorphic<FAnimNode_DeadBlending>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_DeadBlending cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_DeadBlending;
class UScriptStruct* FAnimNode_DeadBlending::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_DeadBlending.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_DeadBlending.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DeadBlending, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_DeadBlending"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_DeadBlending.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_DeadBlending>()
{
	return FAnimNode_DeadBlending::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dead Blending Node\n *\n * Dead blending is an alternative method of inertialization that extrapolates the animation being transitioned from \n * forward in time and then performs a normal cross-fade blend between this extrapolated animation and the new animation\n * being transitioned to.\n * \n * For more background see: https://theorangeduck.com/page/dead-blending\n * \n * This node works by extrapolating forward the animation being transition from using the animation's velocities at\n * the point of transition, with an exponential decay which reduces those velocities over time to avoid the pose \n * becoming invalid.\n * \n * The rate of this decay is set automatically based on how much the velocities of the animation being transitioned \n * from are moving toward the pose of the animation being transitioned to. If they are moving in the wrong direction or\n * too quickly they will have a larger decay rate, while if they are in the correct direction and moving slowly relative \n * to the difference they will have a smaller decay rate.\n * \n * These decay rates can be controlled by the `ExtrapolationHalfLife`, `ExtrapolationHalfLifeMin` and \n * `ExtrapolationHalfLifeMax` parameters, which specify the approximate average, min, and max decay periods.\n * More specifically they specify the \"half-life\" - or how it takes for the velocities to be decayed by half.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "Dead Blending Node\n\nDead blending is an alternative method of inertialization that extrapolates the animation being transitioned from\nforward in time and then performs a normal cross-fade blend between this extrapolated animation and the new animation\nbeing transitioned to.\n\nFor more background see: https://theorangeduck.com/page/dead-blending\n\nThis node works by extrapolating forward the animation being transition from using the animation's velocities at\nthe point of transition, with an exponential decay which reduces those velocities over time to avoid the pose\nbecoming invalid.\n\nThe rate of this decay is set automatically based on how much the velocities of the animation being transitioned\nfrom are moving toward the pose of the animation being transitioned to. If they are moving in the wrong direction or\ntoo quickly they will have a larger decay rate, while if they are in the correct direction and moving slowly relative\nto the difference they will have a smaller decay rate.\n\nThese decay rates can be controlled by the `ExtrapolationHalfLife`, `ExtrapolationHalfLifeMin` and\n`ExtrapolationHalfLifeMax` parameters, which specify the approximate average, min, and max decay periods.\nMore specifically they specify the \"half-life\" - or how it takes for the velocities to be decayed by half." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "// Input Pose\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "Input Pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUseDefaultBlendSettings_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// When enabled, the default blend settings will always be used rather than those coming from the inertialization request.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "When enabled, the default blend settings will always be used rather than those coming from the inertialization request." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendDuration_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// The default blend duration to use when \"Always Use Default Blend Settings\" is set to true.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "The default blend duration to use when \"Always Use Default Blend Settings\" is set to true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendProfile_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// Default blend profile to use when no blend profile is supplied with the inertialization request.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "Default blend profile to use when no blend profile is supplied with the inertialization request." },
		{ "UseAsBlendProfile", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendMode_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// Default blend mode to use when no blend mode is supplied with the inertialization request.\n" },
		{ "DisplayName", "Default Blend Mode" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "Default blend mode to use when no blend mode is supplied with the inertialization request." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCustomBlendCurve_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// Default custom blend curve to use along with the default blend mode.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "Default custom blend curve to use along with the default blend mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTimeMultiplier_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// Multiplier that can be used to scale the overall blend durations coming from inertialization requests.\n" },
		{ "Min", "0.0" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "Multiplier that can be used to scale the overall blend durations coming from inertialization requests." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearlyInterpolateScales_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "/**\n\x09 * When enabled, bone scales will be linearly interpolated and extrapolated. This is slightly more performant and\n\x09 * consistent with the rest of Unreal but visually gives the appearance of the rate of change of scale being affected\n\x09 * by the overall size of the bone. Note: this option must be enabled if you want this node to support negative scales.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "When enabled, bone scales will be linearly interpolated and extrapolated. This is slightly more performant and\nconsistent with the rest of Unreal but visually gives the appearance of the rate of change of scale being affected\nby the overall size of the bone. Note: this option must be enabled if you want this node to support negative scales." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredCurves_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// List of curves that should not use inertial blending. These curves will change instantly when the animation switches.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "List of curves that should not use inertial blending. These curves will change instantly when the animation switches." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrapolationFilteredCurves_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/**\n\x09 * List of curves that will not be included in the extrapolation. Curves in this list will effectively act like they have had their value reset \n\x09 * to zero at the point of the transition, and will be blended in with the curve values in the animation that is being transitioned to.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "List of curves that will not be included in the extrapolation. Curves in this list will effectively act like they have had their value reset\nto zero at the point of the transition, and will be blended in with the curve values in the animation that is being transitioned to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredBones_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// List of bones that should not use inertial blending. These bones will change instantly when the animation switches.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "List of bones that should not use inertial blending. These bones will change instantly when the animation switches." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrapolationHalfLife_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/**\n\x09 * The average half-life of decay in seconds to use when extrapolating the animation. To get the final half-life of \n\x09 * decay, this value will be scaled by the amount to which the velocities of the animation being transitioned from \n\x09 * are moving toward the animation being transitioned to.\n\x09 */" },
		{ "DisplayName", "Extrapolation Half Life" },
		{ "Min", "0.0" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "The average half-life of decay in seconds to use when extrapolating the animation. To get the final half-life of\ndecay, this value will be scaled by the amount to which the velocities of the animation being transitioned from\nare moving toward the animation being transitioned to." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrapolationHalfLifeMin_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/**\n\x09 * The minimum half-life of decay in seconds to use when extrapolating the animation. This will be used when the \n\x09 * velocities of the animation being transitioned from are very small or moving away from the animation being \n\x09 * transitioned to.\n\x09 */" },
		{ "DisplayName", "Minimum Extrapolation Half Life" },
		{ "Min", "0.0" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "The minimum half-life of decay in seconds to use when extrapolating the animation. This will be used when the\nvelocities of the animation being transitioned from are very small or moving away from the animation being\ntransitioned to." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrapolationHalfLifeMax_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/**\n\x09 * The maximum half-life of decay in seconds to use when extrapolating the animation. This will dictate the longest \n\x09 * decay duration possible when velocities of the animation being transitioned from are small and moving towards the \n\x09 * animation being transitioned to.\n\x09 */" },
		{ "DisplayName", "Maximum Extrapolation Half Life" },
		{ "Min", "0.0" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "The maximum half-life of decay in seconds to use when extrapolating the animation. This will dictate the longest\ndecay duration possible when velocities of the animation being transitioned from are small and moving towards the\nanimation being transitioned to." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumTranslationVelocity_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/**\n\x09 * The maximum velocity to allow for extrapolation of bone translations in centimeters per second. Smaller values \n\x09 * may help prevent the pose breaking during blending but too small values can make the blend less smooth.\n\x09 */" },
		{ "Min", "0.0" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "The maximum velocity to allow for extrapolation of bone translations in centimeters per second. Smaller values\nmay help prevent the pose breaking during blending but too small values can make the blend less smooth." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRotationVelocity_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/**\n\x09 * The maximum velocity to allow for extrapolation of bone rotations in degrees per second. Smaller values\n\x09 * may help prevent the pose breaking during blending but too small values can make the blend less smooth.\n\x09 */" },
		{ "Min", "0.0" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "The maximum velocity to allow for extrapolation of bone rotations in degrees per second. Smaller values\nmay help prevent the pose breaking during blending but too small values can make the blend less smooth." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumScaleVelocity_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/**\n\x09 * The maximum velocity to allow for extrapolation of bone scales. Smaller values may help prevent the pose \n\x09 * breaking during blending but too small values can make the blend less smooth.\n\x09 */" },
		{ "Min", "0.0" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "The maximum velocity to allow for extrapolation of bone scales. Smaller values may help prevent the pose\nbreaking during blending but too small values can make the blend less smooth." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumCurveVelocity_MetaData[] = {
		{ "Category", "Extrapolation" },
		{ "Comment", "/**\n\x09 * The maximum velocity to allow for extrapolation of curves. Smaller values may help prevent extreme curve values \n\x09 * during blending but too small values can make the blending of curves less smooth.\n\x09 */" },
		{ "Min", "0.0" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "The maximum velocity to allow for extrapolation of curves. Smaller values may help prevent extreme curve values\nduring blending but too small values can make the blending of curves less smooth." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnBecomingRelevant_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "/**\n\x09* Clear any active blends if we just became relevant, to avoid carrying over undesired blends.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "Clear any active blends if we just became relevant, to avoid carrying over undesired blends." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowExtrapolations_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// This setting can be used to show what the extrapolation of the animation looks like.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "This setting can be used to show what the extrapolation of the animation looks like." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestQueue_MetaData[] = {
		{ "Comment", "// Pending inertialization requests.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "Pending inertialization requests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InertializationCustomBlendCurve_MetaData[] = {
		{ "Comment", "// Custom blend curve being used by the current blend mode.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "Custom blend curve being used by the current blend mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InertializationRequestAnimInstance_MetaData[] = {
		{ "Comment", "// Anim Instance for the current inertialization request\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_DeadBlending.h" },
		{ "ToolTip", "Anim Instance for the current inertialization request" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static void NewProp_bAlwaysUseDefaultBlendSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUseDefaultBlendSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultBlendDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBlendProfile;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultBlendMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultCustomBlendCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTimeMultiplier;
	static void NewProp_bLinearlyInterpolateScales_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearlyInterpolateScales;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredCurves;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExtrapolationFilteredCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtrapolationFilteredCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilteredBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredBones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtrapolationHalfLife;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtrapolationHalfLifeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtrapolationHalfLifeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumTranslationVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRotationVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumScaleVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumCurveVelocity;
	static void NewProp_bResetOnBecomingRelevant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnBecomingRelevant;
#if WITH_EDITORONLY_DATA
	static void NewProp_bShowExtrapolations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowExtrapolations;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestQueue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InertializationCustomBlendCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InertializationRequestAnimInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_DeadBlending>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1074011079
void Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bAlwaysUseDefaultBlendSettings_SetBit(void* Obj)
{
	((FAnimNode_DeadBlending*)Obj)->bAlwaysUseDefaultBlendSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bAlwaysUseDefaultBlendSettings = { "bAlwaysUseDefaultBlendSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_DeadBlending), &Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bAlwaysUseDefaultBlendSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysUseDefaultBlendSettings_MetaData), NewProp_bAlwaysUseDefaultBlendSettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_DefaultBlendDuration = { "DefaultBlendDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, DefaultBlendDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBlendDuration_MetaData), NewProp_DefaultBlendDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_DefaultBlendProfile = { "DefaultBlendProfile", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, DefaultBlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBlendProfile_MetaData), NewProp_DefaultBlendProfile_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_DefaultBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_DefaultBlendMode = { "DefaultBlendMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, DefaultBlendMode), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBlendMode_MetaData), NewProp_DefaultBlendMode_MetaData) }; // 2114278366
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_DefaultCustomBlendCurve = { "DefaultCustomBlendCurve", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, DefaultCustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCustomBlendCurve_MetaData), NewProp_DefaultCustomBlendCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_BlendTimeMultiplier = { "BlendTimeMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, BlendTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTimeMultiplier_MetaData), NewProp_BlendTimeMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bLinearlyInterpolateScales_SetBit(void* Obj)
{
	((FAnimNode_DeadBlending*)Obj)->bLinearlyInterpolateScales = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bLinearlyInterpolateScales = { "bLinearlyInterpolateScales", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_DeadBlending), &Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bLinearlyInterpolateScales_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearlyInterpolateScales_MetaData), NewProp_bLinearlyInterpolateScales_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_FilteredCurves_Inner = { "FilteredCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_FilteredCurves = { "FilteredCurves", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, FilteredCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredCurves_MetaData), NewProp_FilteredCurves_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_ExtrapolationFilteredCurves_Inner = { "ExtrapolationFilteredCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_ExtrapolationFilteredCurves = { "ExtrapolationFilteredCurves", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, ExtrapolationFilteredCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrapolationFilteredCurves_MetaData), NewProp_ExtrapolationFilteredCurves_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_FilteredBones_Inner = { "FilteredBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_FilteredBones = { "FilteredBones", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, FilteredBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredBones_MetaData), NewProp_FilteredBones_MetaData) }; // 4218265988
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_ExtrapolationHalfLife = { "ExtrapolationHalfLife", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, ExtrapolationHalfLife), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrapolationHalfLife_MetaData), NewProp_ExtrapolationHalfLife_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_ExtrapolationHalfLifeMin = { "ExtrapolationHalfLifeMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, ExtrapolationHalfLifeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrapolationHalfLifeMin_MetaData), NewProp_ExtrapolationHalfLifeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_ExtrapolationHalfLifeMax = { "ExtrapolationHalfLifeMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, ExtrapolationHalfLifeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrapolationHalfLifeMax_MetaData), NewProp_ExtrapolationHalfLifeMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_MaximumTranslationVelocity = { "MaximumTranslationVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, MaximumTranslationVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumTranslationVelocity_MetaData), NewProp_MaximumTranslationVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_MaximumRotationVelocity = { "MaximumRotationVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, MaximumRotationVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumRotationVelocity_MetaData), NewProp_MaximumRotationVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_MaximumScaleVelocity = { "MaximumScaleVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, MaximumScaleVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumScaleVelocity_MetaData), NewProp_MaximumScaleVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_MaximumCurveVelocity = { "MaximumCurveVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, MaximumCurveVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumCurveVelocity_MetaData), NewProp_MaximumCurveVelocity_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bResetOnBecomingRelevant_SetBit(void* Obj)
{
	((FAnimNode_DeadBlending*)Obj)->bResetOnBecomingRelevant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bResetOnBecomingRelevant = { "bResetOnBecomingRelevant", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_DeadBlending), &Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bResetOnBecomingRelevant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetOnBecomingRelevant_MetaData), NewProp_bResetOnBecomingRelevant_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bShowExtrapolations_SetBit(void* Obj)
{
	((FAnimNode_DeadBlending*)Obj)->bShowExtrapolations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bShowExtrapolations = { "bShowExtrapolations", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_DeadBlending), &Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bShowExtrapolations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowExtrapolations_MetaData), NewProp_bShowExtrapolations_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_RequestQueue_Inner = { "RequestQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInertializationRequest, METADATA_PARAMS(0, nullptr) }; // 28738242
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_RequestQueue = { "RequestQueue", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, RequestQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestQueue_MetaData), NewProp_RequestQueue_MetaData) }; // 28738242
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_InertializationCustomBlendCurve = { "InertializationCustomBlendCurve", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, InertializationCustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InertializationCustomBlendCurve_MetaData), NewProp_InertializationCustomBlendCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_InertializationRequestAnimInstance = { "InertializationRequestAnimInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_DeadBlending, InertializationRequestAnimInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InertializationRequestAnimInstance_MetaData), NewProp_InertializationRequestAnimInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bAlwaysUseDefaultBlendSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_DefaultBlendDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_DefaultBlendProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_DefaultBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_DefaultBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_DefaultCustomBlendCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_BlendTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bLinearlyInterpolateScales,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_FilteredCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_FilteredCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_ExtrapolationFilteredCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_ExtrapolationFilteredCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_FilteredBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_FilteredBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_ExtrapolationHalfLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_ExtrapolationHalfLifeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_ExtrapolationHalfLifeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_MaximumTranslationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_MaximumRotationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_MaximumScaleVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_MaximumCurveVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bResetOnBecomingRelevant,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bShowExtrapolations,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_RequestQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_RequestQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_InertializationCustomBlendCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_InertializationRequestAnimInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_DeadBlending",
	Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::PropPointers),
	sizeof(FAnimNode_DeadBlending),
	alignof(FAnimNode_DeadBlending),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DeadBlending()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_DeadBlending.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_DeadBlending.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_DeadBlending.InnerSingleton;
}
// End ScriptStruct FAnimNode_DeadBlending

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_DeadBlending_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_DeadBlending::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewStructOps, TEXT("AnimNode_DeadBlending"), &Z_Registration_Info_UScriptStruct_AnimNode_DeadBlending, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_DeadBlending), 414198626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_DeadBlending_h_4172158029(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_DeadBlending_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_DeadBlending_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
