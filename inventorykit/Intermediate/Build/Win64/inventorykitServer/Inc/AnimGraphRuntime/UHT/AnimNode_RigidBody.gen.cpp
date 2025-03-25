// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_RigidBody.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RigidBody() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBody();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSimSpaceSettings();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum ESimulationSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimulationSpace;
static UEnum* ESimulationSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimulationSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimulationSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESimulationSpace"));
	}
	return Z_Registration_Info_UEnum_ESimulationSpace.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESimulationSpace>()
{
	return ESimulationSpace_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BaseBoneSpace.Comment", "/** Simulate in another bone space. Moving the entire skeletal mesh and individually modifying the base bone will have no affect on velocities */" },
		{ "BaseBoneSpace.Name", "ESimulationSpace::BaseBoneSpace" },
		{ "BaseBoneSpace.ToolTip", "Simulate in another bone space. Moving the entire skeletal mesh and individually modifying the base bone will have no affect on velocities" },
		{ "Comment", "/** Determines in what space the simulation should run */" },
		{ "ComponentSpace.Comment", "/** Simulate in component space. Moving the entire skeletal mesh will have no affect on velocities */" },
		{ "ComponentSpace.Name", "ESimulationSpace::ComponentSpace" },
		{ "ComponentSpace.ToolTip", "Simulate in component space. Moving the entire skeletal mesh will have no affect on velocities" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Determines in what space the simulation should run" },
		{ "WorldSpace.Comment", "/** Simulate in world space. Moving the skeletal mesh will generate velocity changes */" },
		{ "WorldSpace.Name", "ESimulationSpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "Simulate in world space. Moving the skeletal mesh will generate velocity changes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimulationSpace::ComponentSpace", (int64)ESimulationSpace::ComponentSpace },
		{ "ESimulationSpace::WorldSpace", (int64)ESimulationSpace::WorldSpace },
		{ "ESimulationSpace::BaseBoneSpace", (int64)ESimulationSpace::BaseBoneSpace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"ESimulationSpace",
	"ESimulationSpace",
	Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace()
{
	if (!Z_Registration_Info_UEnum_ESimulationSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimulationSpace.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimulationSpace.InnerSingleton;
}
// End Enum ESimulationSpace

// Begin Enum ESimulationTiming
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimulationTiming;
static UEnum* ESimulationTiming_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimulationTiming.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimulationTiming.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESimulationTiming"));
	}
	return Z_Registration_Info_UEnum_ESimulationTiming.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESimulationTiming>()
{
	return ESimulationTiming_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Determines behaviour regarding deferral of simulation tasks. */" },
		{ "Default.Comment", "/** Use the default project setting as defined by p.RigidBodyNode.DeferredSimulationDefault. */" },
		{ "Default.Name", "ESimulationTiming::Default" },
		{ "Default.ToolTip", "Use the default project setting as defined by p.RigidBodyNode.DeferredSimulationDefault." },
		{ "Deferred.Comment", "/** Always run the simulation in the background and retrieve the result on the next animation evaluation. */" },
		{ "Deferred.Name", "ESimulationTiming::Deferred" },
		{ "Deferred.ToolTip", "Always run the simulation in the background and retrieve the result on the next animation evaluation." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "Synchronous.Comment", "/** Always run the simulation to completion during animation evaluation. */" },
		{ "Synchronous.Name", "ESimulationTiming::Synchronous" },
		{ "Synchronous.ToolTip", "Always run the simulation to completion during animation evaluation." },
		{ "ToolTip", "Determines behaviour regarding deferral of simulation tasks." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimulationTiming::Default", (int64)ESimulationTiming::Default },
		{ "ESimulationTiming::Synchronous", (int64)ESimulationTiming::Synchronous },
		{ "ESimulationTiming::Deferred", (int64)ESimulationTiming::Deferred },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"ESimulationTiming",
	"ESimulationTiming",
	Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming()
{
	if (!Z_Registration_Info_UEnum_ESimulationTiming.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimulationTiming.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimulationTiming.InnerSingleton;
}
// End Enum ESimulationTiming

// Begin ScriptStruct FSimSpaceSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimSpaceSettings;
class UScriptStruct* FSimSpaceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimSpaceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimSpaceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimSpaceSettings, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("SimSpaceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SimSpaceSettings.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FSimSpaceSettings>()
{
	return FSimSpaceSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimSpaceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Global multipler on the effects of simulation space movement. Must be in range [0, 1]. If WorldAlpha = 0.0, the system is disabled and the simulation will\n// be fully local (i.e., world-space actor movement and rotation does not affect the simulation). When WorldAlpha = 1.0 the simulation effectively acts as a \n// world-space sim, but with the ability to apply limits using the other parameters.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Global multipler on the effects of simulation space movement. Must be in range [0, 1]. If WorldAlpha = 0.0, the system is disabled and the simulation will\nbe fully local (i.e., world-space actor movement and rotation does not affect the simulation). When WorldAlpha = 1.0 the simulation effectively acts as a\nworld-space sim, but with the ability to apply limits using the other parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityScaleZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Multiplier on the Z-component of velocity and acceleration that is passed to the simulation. Usually from 0.0 to 1.0 to \n// reduce the effects of jumping and crouching on the simulation, but it can be higher than 1.0 if you need to exaggerate this motion for some reason.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Multiplier on the Z-component of velocity and acceleration that is passed to the simulation. Usually from 0.0 to 1.0 to\nreduce the effects of jumping and crouching on the simulation, but it can be higher than 1.0 if you need to exaggerate this motion for some reason." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLinearVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A clamp on the effective world-space velocity that is passed to the simulation. Units are cm/s. The default value effectively means \"unlimited\". It is not usually required to\n// change this but you would reduce this to limit the effects of drag on the bodies in the simulation (if you have bodies that have LinearDrag set to non-zero in the physics asset). \n// Expected values in this case would be somewhat less than the usual velocities of your object which is commonly a few hundred for a character.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "A clamp on the effective world-space velocity that is passed to the simulation. Units are cm/s. The default value effectively means \"unlimited\". It is not usually required to\nchange this but you would reduce this to limit the effects of drag on the bodies in the simulation (if you have bodies that have LinearDrag set to non-zero in the physics asset).\nExpected values in this case would be somewhat less than the usual velocities of your object which is commonly a few hundred for a character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A clamp on the effective world-space angular velocity that is passed to the simulation. Units are radian/s, so a value of about 6.0 is one rotation per second.\n// The default value effectively means \"unlimited\". You would reduce this (and MaxAngularAcceleration) to limit how much bodies \"fly out\" when the actor spins on the spot. \n// This is especially useful if you have characters than can rotate very quickly and you would probably want values around or less than 10 in this case.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "A clamp on the effective world-space angular velocity that is passed to the simulation. Units are radian/s, so a value of about 6.0 is one rotation per second.\nThe default value effectively means \"unlimited\". You would reduce this (and MaxAngularAcceleration) to limit how much bodies \"fly out\" when the actor spins on the spot.\nThis is especially useful if you have characters than can rotate very quickly and you would probably want values around or less than 10 in this case." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLinearAcceleration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A clamp on the effective world-space acceleration that is passed to the simulation. Units are cm/s/s. The default value effectively means \"unlimited\". \n// This property is used to stop the bodies of the simulation flying out when suddenly changing linear speed. It is useful when you have characters than can \n// changes from stationary to running very quickly such as in an FPS. A common value for a character might be in the few hundreds.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "A clamp on the effective world-space acceleration that is passed to the simulation. Units are cm/s/s. The default value effectively means \"unlimited\".\nThis property is used to stop the bodies of the simulation flying out when suddenly changing linear speed. It is useful when you have characters than can\nchanges from stationary to running very quickly such as in an FPS. A common value for a character might be in the few hundreds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngularAcceleration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A clamp on the effective world-space angular accleration that is passed to the simulation. Units are radian/s/s. The default value effectively means \"unlimited\". \n// This has a similar effect to MaxAngularVelocity, except that it is related to the flying out of bodies when the rotation speed suddenly changes. Typical limist for\n// a character might be around 100.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "A clamp on the effective world-space angular accleration that is passed to the simulation. Units are radian/s/s. The default value effectively means \"unlimited\".\nThis has a similar effect to MaxAngularVelocity, except that it is related to the flying out of bodies when the rotation speed suddenly changes. Typical limist for\na character might be around 100." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalLinearDrag_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "ExternalLinearDrag is deprecated. Please use ExternalLinearDragV instead." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalLinearDragV_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Additional linear drag applied to every body in addition to linear drag specified on them in the physics asset. \n// When combined with ExternalLinearVelocity, this can be used to add a temporary wind-blown effect without having to tune linear drag on \n// all the bodies in the physics asset. The result is that each body has a force equal to -ExternalLinearDragV * ExternalLinearVelocity applied to it, in \n// additional to all other forces. The vector is in simulation local space.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Additional linear drag applied to every body in addition to linear drag specified on them in the physics asset.\nWhen combined with ExternalLinearVelocity, this can be used to add a temporary wind-blown effect without having to tune linear drag on\nall the bodies in the physics asset. The result is that each body has a force equal to -ExternalLinearDragV * ExternalLinearVelocity applied to it, in\nadditional to all other forces. The vector is in simulation local space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalLinearVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Additional velocity that is added to the component velocity so the simulation acts as if the actor is moving at speed, even when stationary. \n// Vector is in world space. Units are cm/s. Could be used for a wind effects etc. Typical values are similar to the velocity of the object or effect, \n// and usually around or less than 1000 for characters/wind.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Additional velocity that is added to the component velocity so the simulation acts as if the actor is moving at speed, even when stationary.\nVector is in world space. Units are cm/s. Could be used for a wind effects etc. Typical values are similar to the velocity of the object or effect,\nand usually around or less than 1000 for characters/wind." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAngularVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Additional angular velocity that is added to the component angular velocity. This can be used to make the simulation act as if the actor is rotating\n// even when it is not. E.g., to apply physics to a character on a podium as the camera rotates around it, to emulate the podium itself rotating.\n// Vector is in world space. Units are rad/s.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Additional angular velocity that is added to the component angular velocity. This can be used to make the simulation act as if the actor is rotating\neven when it is not. E.g., to apply physics to a character on a podium as the camera rotates around it, to emulate the podium itself rotating.\nVector is in world space. Units are rad/s." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityScaleZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLinearVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLinearAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngularAcceleration;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExternalLinearDrag;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalLinearDragV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalLinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalAngularVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimSpaceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_WorldAlpha = { "WorldAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimSpaceSettings, WorldAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldAlpha_MetaData), NewProp_WorldAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_VelocityScaleZ = { "VelocityScaleZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimSpaceSettings, VelocityScaleZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityScaleZ_MetaData), NewProp_VelocityScaleZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearVelocity = { "MaxLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimSpaceSettings, MaxLinearVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLinearVelocity_MetaData), NewProp_MaxLinearVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularVelocity = { "MaxAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimSpaceSettings, MaxAngularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngularVelocity_MetaData), NewProp_MaxAngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearAcceleration = { "MaxLinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimSpaceSettings, MaxLinearAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLinearAcceleration_MetaData), NewProp_MaxLinearAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularAcceleration = { "MaxAngularAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimSpaceSettings, MaxAngularAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngularAcceleration_MetaData), NewProp_MaxAngularAcceleration_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDrag = { "ExternalLinearDrag", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimSpaceSettings, ExternalLinearDrag_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalLinearDrag_MetaData), NewProp_ExternalLinearDrag_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDragV = { "ExternalLinearDragV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimSpaceSettings, ExternalLinearDragV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalLinearDragV_MetaData), NewProp_ExternalLinearDragV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearVelocity = { "ExternalLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimSpaceSettings, ExternalLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalLinearVelocity_MetaData), NewProp_ExternalLinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalAngularVelocity = { "ExternalAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimSpaceSettings, ExternalAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAngularVelocity_MetaData), NewProp_ExternalAngularVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_WorldAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_VelocityScaleZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularAcceleration,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDrag,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDragV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalAngularVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"SimSpaceSettings",
	Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::PropPointers),
	sizeof(FSimSpaceSettings),
	alignof(FSimSpaceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimSpaceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SimSpaceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimSpaceSettings.InnerSingleton, Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimSpaceSettings.InnerSingleton;
}
// End ScriptStruct FSimSpaceSettings

// Begin ScriptStruct FAnimNode_RigidBody
static_assert(std::is_polymorphic<FAnimNode_RigidBody>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_RigidBody cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RigidBody;
class UScriptStruct* FAnimNode_RigidBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RigidBody"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RigidBody>()
{
	return FAnimNode_RigidBody::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Controller that simulates physics based on the physics asset of the skeletal mesh component\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Controller that simulates physics based on the physics asset of the skeletal mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridePhysicsAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Physics asset to use. If empty use the skeletal mesh's default physics asset in case Default To Skeletal Mesh Physics Asset is set to True. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Physics asset to use. If empty use the skeletal mesh's default physics asset in case Default To Skeletal Mesh Physics Asset is set to True." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultToSkeletalMeshPhysicsAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Use the skeletal mesh physics asset as default in case set to True. The Override Physics Asset will always have priority over this. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Use the skeletal mesh physics asset as default in case set to True. The Override Physics Asset will always have priority over this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalLODThresholdOnly_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Enable if you want to ignore the p.RigidBodyLODThreshold CVAR and force the node to solely use the LOD threshold. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Enable if you want to ignore the p.RigidBodyLODThreshold CVAR and force the node to solely use the LOD threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideWorldGravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Override gravity*/" },
		{ "editcondition", "bOverrideWorldGravity" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Override gravity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForce_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Applies a uniform external force in world space. This allows for easily faking inertia of movement while still simulating in component space for example */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Applies a uniform external force in world space. This allows for easily faking inertia of movement while still simulating in component space for example" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearAccScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearVelScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentAppliedLinearAccClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimSpaceSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Settings for the system which passes motion of the simulation's space\n\x09 * into the simulation. This allows the simulation to pass a\n\x09 * fraction of the world space motion onto the bodies which allows Bone-Space\n\x09 * and Component-Space simulations to react to world-space movement in a\n\x09 * controllable way.\n\x09 * This system is a superset of the functionality provided by ComponentLinearAccScale,\n\x09 * ComponentLinearVelScale, and ComponentAppliedLinearAccClamp. In general\n\x09 * you should not have both systems enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Settings for the system which passes motion of the simulation's space\ninto the simulation. This allows the simulation to pass a\nfraction of the world space motion onto the bodies which allows Bone-Space\nand Component-Space simulations to react to world-space movement in a\ncontrollable way.\nThis system is a superset of the functionality provided by ComponentLinearAccScale,\nComponentLinearVelScale, and ComponentAppliedLinearAccClamp. In general\nyou should not have both systems enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoundsScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/**\n\x09 * Scale of cached bounds (vs. actual bounds).\n\x09 * Increasing this may improve performance, but overlaps may not work as well.\n\x09 * (A value of 1.0 effectively disables cached bounds).\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Scale of cached bounds (vs. actual bounds).\nIncreasing this may improve performance, but overlaps may not work as well.\n(A value of 1.0 effectively disables cached bounds)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseBoneRef_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Matters if SimulationSpace is BaseBone */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Matters if SimulationSpace is BaseBone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The channel we use to find static geometry to collide with */" },
		{ "editcondition", "bEnableWorldGeometry" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "The channel we use to find static geometry to collide with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What space to simulate the bodies in. This affects how velocities are generated */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "What space to simulate the bodies in. This affects how velocities are generated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to allow collisions between two bodies joined by a constraint  */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Whether to allow collisions between two bodies joined by a constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalClothCollision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, kinematic objects will be added to the simulation at runtime to represent any cloth colliders defined for the parent object. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "If true, kinematic objects will be added to the simulation at runtime to represent any cloth colliders defined for the parent object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldGeometry_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWorldGravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransferBoneVelocities_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09\x09When simulation starts, transfer previous bone velocities (from animation)\n\x09\x09to make transition into simulation seamless.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When simulation starts, transfer previous bone velocities (from animation)\nto make transition into simulation seamless." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeIncomingPoseOnStart_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09When simulation starts, freeze incoming pose.\n\x09\x09This is useful for ragdolls, when we want the simulation to take over.\n\x09\x09It prevents non simulated bones from animating.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "When simulation starts, freeze incoming pose.\nThis is useful for ragdolls, when we want the simulation to take over.\nIt prevents non simulated bones from animating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampLinearTranslationLimitToRefPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09""Correct for linear tearing on bodies with all axes Locked.\n\x09\x09This only works if all axes linear translation are locked\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Correct for linear tearing on bodies with all axes Locked.\nThis only works if all axes linear translation are locked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceMinimumScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09""For world-space simulations, if the magnitude of the component's 3D scale is less than WorldSpaceMinimumScale, do not update the node.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "For world-space simulations, if the magnitude of the component's 3D scale is less than WorldSpaceMinimumScale, do not update the node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationResetTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09If the node is not evaluated for this amount of time (seconds), either because a lower LOD was in use for a while or the component was\n\x09\x09not visible, reset the simulation to the default pose on the next evaluation. Set to 0 to disable time-based reset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "If the node is not evaluated for this amount of time (seconds), either because a lower LOD was in use for a while or the component was\nnot visible, reset the simulation to the default pose on the next evaluation. Set to 0 to disable time-based reset." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComponentSpaceSimulation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationTiming_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Whether the physics simulation runs synchronously with the node's evaluation or is run in the background until the next frame. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Whether the physics simulation runs synchronously with the node's evaluation or is run in the background until the next frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverridePhysicsAsset;
	static void NewProp_bDefaultToSkeletalMeshPhysicsAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultToSkeletalMeshPhysicsAsset;
	static void NewProp_bUseLocalLODThresholdOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalLODThresholdOnly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideWorldGravity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentLinearAccScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentLinearVelScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentAppliedLinearAccClamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimSpaceSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedBoundsScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseBoneRef;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace;
	static void NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDisableCollisionBetweenConstraintBodies;
	static void NewProp_bUseExternalClothCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalClothCollision;
	static void NewProp_bEnableWorldGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldGeometry;
	static void NewProp_bOverrideWorldGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWorldGravity;
	static void NewProp_bTransferBoneVelocities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferBoneVelocities;
	static void NewProp_bFreezeIncomingPoseOnStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeIncomingPoseOnStart;
	static void NewProp_bClampLinearTranslationLimitToRefPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampLinearTranslationLimitToRefPose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldSpaceMinimumScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EvaluationResetTime;
#if WITH_EDITORONLY_DATA
	static void NewProp_bComponentSpaceSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComponentSpaceSimulation;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationTiming_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulationTiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RigidBody>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverridePhysicsAsset = { "OverridePhysicsAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, OverridePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridePhysicsAsset_MetaData), NewProp_OverridePhysicsAsset_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bDefaultToSkeletalMeshPhysicsAsset_SetBit(void* Obj)
{
	((FAnimNode_RigidBody*)Obj)->bDefaultToSkeletalMeshPhysicsAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bDefaultToSkeletalMeshPhysicsAsset = { "bDefaultToSkeletalMeshPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bDefaultToSkeletalMeshPhysicsAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultToSkeletalMeshPhysicsAsset_MetaData), NewProp_bDefaultToSkeletalMeshPhysicsAsset_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseLocalLODThresholdOnly_SetBit(void* Obj)
{
	((FAnimNode_RigidBody*)Obj)->bUseLocalLODThresholdOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseLocalLODThresholdOnly = { "bUseLocalLODThresholdOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseLocalLODThresholdOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalLODThresholdOnly_MetaData), NewProp_bUseLocalLODThresholdOnly_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverrideWorldGravity = { "OverrideWorldGravity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, OverrideWorldGravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideWorldGravity_MetaData), NewProp_OverrideWorldGravity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ExternalForce = { "ExternalForce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, ExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalForce_MetaData), NewProp_ExternalForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearAccScale = { "ComponentLinearAccScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, ComponentLinearAccScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentLinearAccScale_MetaData), NewProp_ComponentLinearAccScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearVelScale = { "ComponentLinearVelScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, ComponentLinearVelScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentLinearVelScale_MetaData), NewProp_ComponentLinearVelScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentAppliedLinearAccClamp = { "ComponentAppliedLinearAccClamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, ComponentAppliedLinearAccClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentAppliedLinearAccClamp_MetaData), NewProp_ComponentAppliedLinearAccClamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimSpaceSettings = { "SimSpaceSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, SimSpaceSettings), Z_Construct_UScriptStruct_FSimSpaceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimSpaceSettings_MetaData), NewProp_SimSpaceSettings_MetaData) }; // 777060581
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_CachedBoundsScale = { "CachedBoundsScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, CachedBoundsScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBoundsScale_MetaData), NewProp_CachedBoundsScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_BaseBoneRef = { "BaseBoneRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, BaseBoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseBoneRef_MetaData), NewProp_BaseBoneRef_MetaData) }; // 4218265988
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverlapChannel = { "OverlapChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, OverlapChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapChannel_MetaData), NewProp_OverlapChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace = { "SimulationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, SimulationSpace), Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationSpace_MetaData), NewProp_SimulationSpace_MetaData) }; // 2009543669
void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void* Obj)
{
	((FAnimNode_RigidBody*)Obj)->bForceDisableCollisionBetweenConstraintBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies = { "bForceDisableCollisionBetweenConstraintBodies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData), NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision_SetBit(void* Obj)
{
	((FAnimNode_RigidBody*)Obj)->bUseExternalClothCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision = { "bUseExternalClothCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExternalClothCollision_MetaData), NewProp_bUseExternalClothCollision_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry_SetBit(void* Obj)
{
	((FAnimNode_RigidBody*)Obj)->bEnableWorldGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry = { "bEnableWorldGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWorldGeometry_MetaData), NewProp_bEnableWorldGeometry_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity_SetBit(void* Obj)
{
	((FAnimNode_RigidBody*)Obj)->bOverrideWorldGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity = { "bOverrideWorldGravity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideWorldGravity_MetaData), NewProp_bOverrideWorldGravity_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities_SetBit(void* Obj)
{
	((FAnimNode_RigidBody*)Obj)->bTransferBoneVelocities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities = { "bTransferBoneVelocities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransferBoneVelocities_MetaData), NewProp_bTransferBoneVelocities_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart_SetBit(void* Obj)
{
	((FAnimNode_RigidBody*)Obj)->bFreezeIncomingPoseOnStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart = { "bFreezeIncomingPoseOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFreezeIncomingPoseOnStart_MetaData), NewProp_bFreezeIncomingPoseOnStart_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose_SetBit(void* Obj)
{
	((FAnimNode_RigidBody*)Obj)->bClampLinearTranslationLimitToRefPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose = { "bClampLinearTranslationLimitToRefPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampLinearTranslationLimitToRefPose_MetaData), NewProp_bClampLinearTranslationLimitToRefPose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_WorldSpaceMinimumScale = { "WorldSpaceMinimumScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, WorldSpaceMinimumScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSpaceMinimumScale_MetaData), NewProp_WorldSpaceMinimumScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_EvaluationResetTime = { "EvaluationResetTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, EvaluationResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationResetTime_MetaData), NewProp_EvaluationResetTime_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation_SetBit(void* Obj)
{
	((FAnimNode_RigidBody*)Obj)->bComponentSpaceSimulation_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation = { "bComponentSpaceSimulation", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComponentSpaceSimulation_MetaData), NewProp_bComponentSpaceSimulation_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming = { "SimulationTiming", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RigidBody, SimulationTiming), Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationTiming_MetaData), NewProp_SimulationTiming_MetaData) }; // 3827072219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverridePhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bDefaultToSkeletalMeshPhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseLocalLODThresholdOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverrideWorldGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ExternalForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearAccScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearVelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentAppliedLinearAccClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimSpaceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_CachedBoundsScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_BaseBoneRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverlapChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_WorldSpaceMinimumScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_EvaluationResetTime,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_RigidBody",
	Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::PropPointers),
	sizeof(FAnimNode_RigidBody),
	alignof(FAnimNode_RigidBody),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBody()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.InnerSingleton;
}
// End ScriptStruct FAnimNode_RigidBody

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESimulationSpace_StaticEnum, TEXT("ESimulationSpace"), &Z_Registration_Info_UEnum_ESimulationSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2009543669U) },
		{ ESimulationTiming_StaticEnum, TEXT("ESimulationTiming"), &Z_Registration_Info_UEnum_ESimulationTiming, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3827072219U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimSpaceSettings::StaticStruct, Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewStructOps, TEXT("SimSpaceSettings"), &Z_Registration_Info_UScriptStruct_SimSpaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimSpaceSettings), 777060581U) },
		{ FAnimNode_RigidBody::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewStructOps, TEXT("AnimNode_RigidBody"), &Z_Registration_Info_UScriptStruct_AnimNode_RigidBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RigidBody), 2619215416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_3555007655(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
