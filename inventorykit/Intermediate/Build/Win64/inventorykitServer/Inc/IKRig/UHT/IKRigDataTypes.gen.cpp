// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Rig/IKRigDataTypes.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigDataTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_EIKRigGoalSpace();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigGoal();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigGoalContainer();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Enum EIKRigGoalSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIKRigGoalSpace;
static UEnum* EIKRigGoalSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIKRigGoalSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIKRigGoalSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_EIKRigGoalSpace, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("EIKRigGoalSpace"));
	}
	return Z_Registration_Info_UEnum_EIKRigGoalSpace.OuterSingleton;
}
template<> IKRIG_API UEnum* StaticEnum<EIKRigGoalSpace>()
{
	return EIKRigGoalSpace_StaticEnum();
}
struct Z_Construct_UEnum_IKRig_EIKRigGoalSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Additive.DisplayName", "Additive" },
		{ "Additive.Name", "EIKRigGoalSpace::Additive" },
		{ "BlueprintType", "true" },
		{ "Component.DisplayName", "Component Space" },
		{ "Component.Name", "EIKRigGoalSpace::Component" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
		{ "World.DisplayName", "World Space" },
		{ "World.Name", "EIKRigGoalSpace::World" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIKRigGoalSpace::Component", (int64)EIKRigGoalSpace::Component },
		{ "EIKRigGoalSpace::Additive", (int64)EIKRigGoalSpace::Additive },
		{ "EIKRigGoalSpace::World", (int64)EIKRigGoalSpace::World },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_EIKRigGoalSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	"EIKRigGoalSpace",
	"EIKRigGoalSpace",
	Z_Construct_UEnum_IKRig_EIKRigGoalSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EIKRigGoalSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EIKRigGoalSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IKRig_EIKRigGoalSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IKRig_EIKRigGoalSpace()
{
	if (!Z_Registration_Info_UEnum_EIKRigGoalSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIKRigGoalSpace.InnerSingleton, Z_Construct_UEnum_IKRig_EIKRigGoalSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIKRigGoalSpace.InnerSingleton;
}
// End Enum EIKRigGoalSpace

// Begin Enum EIKRigGoalTransformSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIKRigGoalTransformSource;
static UEnum* EIKRigGoalTransformSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIKRigGoalTransformSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIKRigGoalTransformSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("EIKRigGoalTransformSource"));
	}
	return Z_Registration_Info_UEnum_EIKRigGoalTransformSource.OuterSingleton;
}
template<> IKRIG_API UEnum* StaticEnum<EIKRigGoalTransformSource>()
{
	return EIKRigGoalTransformSource_StaticEnum();
}
struct Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActorComponent.DisplayName", "Actor Component" },
		{ "ActorComponent.Name", "EIKRigGoalTransformSource::ActorComponent" },
		{ "BlueprintType", "true" },
		{ "Bone.DisplayName", "Bone" },
		{ "Bone.Name", "EIKRigGoalTransformSource::Bone" },
		{ "Manual.DisplayName", "Manual Input" },
		{ "Manual.Name", "EIKRigGoalTransformSource::Manual" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIKRigGoalTransformSource::Manual", (int64)EIKRigGoalTransformSource::Manual },
		{ "EIKRigGoalTransformSource::Bone", (int64)EIKRigGoalTransformSource::Bone },
		{ "EIKRigGoalTransformSource::ActorComponent", (int64)EIKRigGoalTransformSource::ActorComponent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	"EIKRigGoalTransformSource",
	"EIKRigGoalTransformSource",
	Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource()
{
	if (!Z_Registration_Info_UEnum_EIKRigGoalTransformSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIKRigGoalTransformSource.InnerSingleton, Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIKRigGoalTransformSource.InnerSingleton;
}
// End Enum EIKRigGoalTransformSource

// Begin ScriptStruct FIKRigGoal
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKRigGoal;
class UScriptStruct* FIKRigGoal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKRigGoal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKRigGoal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKRigGoal, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("IKRigGoal"));
	}
	return Z_Registration_Info_UScriptStruct_IKRigGoal.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FIKRigGoal>()
{
	return FIKRigGoal::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIKRigGoal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Goal" },
		{ "Comment", "/** Name of the IK Goal. Must correspond to the name of a Goal in the target IKRig asset. */" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
		{ "ToolTip", "Name of the IK Goal. Must correspond to the name of a Goal in the target IKRig asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[] = {
		{ "Category", "Goal" },
		{ "Comment", "/** Set the source of the transform data for the Goal.\n\x09 * \"Manual Input\" uses the values provided by the blueprint node pin.\n\x09 * \"Bone\" uses the transform of the bone provided by OptionalSourceBone.\n\x09 * \"Actor Component\" uses the transform supplied by any Actor Components that implements the IIKGoalCreatorInterface*/" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
		{ "ToolTip", "Set the source of the transform data for the Goal.\n\"Manual Input\" uses the values provided by the blueprint node pin.\n\"Bone\" uses the transform of the bone provided by OptionalSourceBone.\n\"Actor Component\" uses the transform supplied by any Actor Components that implements the IIKGoalCreatorInterface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[] = {
		{ "Category", "Goal" },
		{ "Comment", "/** When TransformSource is set to \"Bone\" mode, the Position and Rotation will be driven by this Bone's input transform.\n\x09 * When using a Bone as the transform source, the Position and Rotation Alpha values can still be set as desired.\n\x09 * But the PositionSpace and RotationSpace are no longer relevant and will not be used.*/" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
		{ "ToolTip", "When TransformSource is set to \"Bone\" mode, the Position and Rotation will be driven by this Bone's input transform.\nWhen using a Bone as the transform source, the Position and Rotation Alpha values can still be set as desired.\nBut the PositionSpace and RotationSpace are no longer relevant and will not be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "/** Position of the IK goal in Component Space of target actor component. */" },
		{ "EditCondition", "Source == EIKRigGoalSource::Manual" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
		{ "ToolTip", "Position of the IK goal in Component Space of target actor component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Rotation of the IK goal in Component Space of target actor component. */" },
		{ "EditCondition", "Source == EIKRigGoalSource::Manual" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
		{ "ToolTip", "Rotation of the IK goal in Component Space of target actor component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[] = {
		{ "Category", "Position" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1.0. Smoothly blends the Goal position from the input pose (0.0) to the Goal position (1.0). */" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
		{ "ToolTip", "Range 0-1, default is 1.0. Smoothly blends the Goal position from the input pose (0.0) to the Goal position (1.0)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1.0. Smoothly blends the Goal rotation from the input pose (0.0) to the Goal rotation (1.0). */" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
		{ "ToolTip", "Range 0-1, default is 1.0. Smoothly blends the Goal rotation from the input pose (0.0) to the Goal rotation (1.0)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionSpace_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "/** The space that the goal position is in.\n\x09 *\"Additive\" treats the goal transform as an additive offset relative to the Bone at the effector.\n\x09 *\"Component\" treats the goal transform as being in the space of the Skeletal Mesh Actor Component.\n\x09 *\"World\" treats the goal transform as being in the space of the World. */" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
		{ "ToolTip", "The space that the goal position is in.\n\"Additive\" treats the goal transform as an additive offset relative to the Bone at the effector.\n\"Component\" treats the goal transform as being in the space of the Skeletal Mesh Actor Component.\n\"World\" treats the goal transform as being in the space of the World." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** The space that the goal rotation is in.\n\x09*\"Additive\" treats the goal transform as an additive offset relative to the Bone at the effector.\n\x09*\"Component\" treats the goal transform as being in the space of the Skeletal Mesh Actor Component.\n\x09*\"World\" treats the goal transform as being in the space of the World. */" },
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
		{ "ToolTip", "The space that the goal rotation is in.\n\"Additive\" treats the goal transform as an additive offset relative to the Bone at the effector.\n\"Component\" treats the goal transform as being in the space of the Skeletal Mesh Actor Component.\n\"World\" treats the goal transform as being in the space of the World." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalBlendedPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalBlendedRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalBlendedPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalBlendedRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKRigGoal>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_TransformSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, TransformSource), Z_Construct_UEnum_IKRig_EIKRigGoalTransformSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSource_MetaData), NewProp_TransformSource_MetaData) }; // 3011611982
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBone_MetaData), NewProp_SourceBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, PositionAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionAlpha_MetaData), NewProp_PositionAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, RotationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlpha_MetaData), NewProp_RotationAlpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_PositionSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_PositionSpace = { "PositionSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, PositionSpace), Z_Construct_UEnum_IKRig_EIKRigGoalSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionSpace_MetaData), NewProp_PositionSpace_MetaData) }; // 1738415194
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_RotationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, RotationSpace), Z_Construct_UEnum_IKRig_EIKRigGoalSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpace_MetaData), NewProp_RotationSpace_MetaData) }; // 1738415194
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_FinalBlendedPosition = { "FinalBlendedPosition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, FinalBlendedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalBlendedPosition_MetaData), NewProp_FinalBlendedPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_FinalBlendedRotation = { "FinalBlendedRotation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRigGoal, FinalBlendedRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalBlendedRotation_MetaData), NewProp_FinalBlendedRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIKRigGoal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_TransformSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_TransformSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_SourceBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_PositionAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_RotationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_PositionSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_PositionSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_RotationSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_RotationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_FinalBlendedPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewProp_FinalBlendedRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigGoal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKRigGoal_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"IKRigGoal",
	Z_Construct_UScriptStruct_FIKRigGoal_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigGoal_Statics::PropPointers),
	sizeof(FIKRigGoal),
	alignof(FIKRigGoal),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigGoal_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIKRigGoal_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIKRigGoal()
{
	if (!Z_Registration_Info_UScriptStruct_IKRigGoal.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKRigGoal.InnerSingleton, Z_Construct_UScriptStruct_FIKRigGoal_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IKRigGoal.InnerSingleton;
}
// End ScriptStruct FIKRigGoal

// Begin ScriptStruct FIKRigGoalContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKRigGoalContainer;
class UScriptStruct* FIKRigGoalContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKRigGoalContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKRigGoalContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKRigGoalContainer, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("IKRigGoalContainer"));
	}
	return Z_Registration_Info_UScriptStruct_IKRigGoalContainer.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FIKRigGoalContainer>()
{
	return FIKRigGoalContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IKRigDataTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKRigGoalContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"IKRigGoalContainer",
	nullptr,
	0,
	sizeof(FIKRigGoalContainer),
	alignof(FIKRigGoalContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIKRigGoalContainer()
{
	if (!Z_Registration_Info_UScriptStruct_IKRigGoalContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKRigGoalContainer.InnerSingleton, Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IKRigGoalContainer.InnerSingleton;
}
// End ScriptStruct FIKRigGoalContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIKRigGoalSpace_StaticEnum, TEXT("EIKRigGoalSpace"), &Z_Registration_Info_UEnum_EIKRigGoalSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1738415194U) },
		{ EIKRigGoalTransformSource_StaticEnum, TEXT("EIKRigGoalTransformSource"), &Z_Registration_Info_UEnum_EIKRigGoalTransformSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3011611982U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIKRigGoal::StaticStruct, Z_Construct_UScriptStruct_FIKRigGoal_Statics::NewStructOps, TEXT("IKRigGoal"), &Z_Registration_Info_UScriptStruct_IKRigGoal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKRigGoal), 81720564U) },
		{ FIKRigGoalContainer::StaticStruct, Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics::NewStructOps, TEXT("IKRigGoalContainer"), &Z_Registration_Info_UScriptStruct_IKRigGoalContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKRigGoalContainer), 3682790253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h_4252789472(TEXT("/Script/IKRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
