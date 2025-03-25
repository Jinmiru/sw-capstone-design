// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDOFMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponse();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FResponseChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ESleepFamily();
PHYSICSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstanceCore();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDOFMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDOFMode;
static UEnum* EDOFMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDOFMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDOFMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDOFMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDOFMode"));
	}
	return Z_Registration_Info_UEnum_EDOFMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDOFMode::Type>()
{
	return EDOFMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDOFMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomPlane.Comment", "/*Allows 2D movement along the plane of a given normal*/" },
		{ "CustomPlane.Name", "EDOFMode::CustomPlane" },
		{ "CustomPlane.ToolTip", "Allows 2D movement along the plane of a given normal" },
		{ "Default.Comment", "/*Inherits the degrees of freedom from the project settings.*/" },
		{ "Default.Name", "EDOFMode::Default" },
		{ "Default.ToolTip", "Inherits the degrees of freedom from the project settings." },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "None.Comment", "/*No constraints.*/" },
		{ "None.Name", "EDOFMode::None" },
		{ "None.ToolTip", "No constraints." },
		{ "SixDOF.Comment", "/*Specifies which axis to freeze rotation and movement along.*/" },
		{ "SixDOF.Name", "EDOFMode::SixDOF" },
		{ "SixDOF.ToolTip", "Specifies which axis to freeze rotation and movement along." },
		{ "XYPlane.Comment", "/*Allows 2D movement along the X-Y plane.*/" },
		{ "XYPlane.Name", "EDOFMode::XYPlane" },
		{ "XYPlane.ToolTip", "Allows 2D movement along the X-Y plane." },
		{ "XZPlane.Comment", "/*Allows 2D movement along the X-Z plane.*/" },
		{ "XZPlane.Name", "EDOFMode::XZPlane" },
		{ "XZPlane.ToolTip", "Allows 2D movement along the X-Z plane." },
		{ "YZPlane.Comment", "/*Allows 2D movement along the Y-Z plane.*/" },
		{ "YZPlane.Name", "EDOFMode::YZPlane" },
		{ "YZPlane.ToolTip", "Allows 2D movement along the Y-Z plane." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDOFMode::Default", (int64)EDOFMode::Default },
		{ "EDOFMode::SixDOF", (int64)EDOFMode::SixDOF },
		{ "EDOFMode::YZPlane", (int64)EDOFMode::YZPlane },
		{ "EDOFMode::XZPlane", (int64)EDOFMode::XZPlane },
		{ "EDOFMode::XYPlane", (int64)EDOFMode::XYPlane },
		{ "EDOFMode::CustomPlane", (int64)EDOFMode::CustomPlane },
		{ "EDOFMode::None", (int64)EDOFMode::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDOFMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDOFMode",
	"EDOFMode::Type",
	Z_Construct_UEnum_Engine_EDOFMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDOFMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDOFMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDOFMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDOFMode()
{
	if (!Z_Registration_Info_UEnum_EDOFMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDOFMode.InnerSingleton, Z_Construct_UEnum_Engine_EDOFMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDOFMode.InnerSingleton;
}
// End Enum EDOFMode

// Begin ScriptStruct FCollisionResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionResponse;
class UScriptStruct* FCollisionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionResponse, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollisionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionResponse.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollisionResponse>()
{
	return FCollisionResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseToChannels_MetaData[] = {
		{ "Comment", "/** Types of objects that this physics objects will collide with. */// we have to still load them until resave\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with. // we have to still load them until resave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseArray_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "/** Custom Channels for Responses */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Custom Channels for Responses" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResponseToChannels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResponseArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResponseArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels = { "ResponseToChannels", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionResponse, ResponseToChannels), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseToChannels_MetaData), NewProp_ResponseToChannels_MetaData) }; // 3070728355
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_Inner = { "ResponseArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FResponseChannel, METADATA_PARAMS(0, nullptr) }; // 1194566750
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray = { "ResponseArray", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionResponse, ResponseArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseArray_MetaData), NewProp_ResponseArray_MetaData) }; // 1194566750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CollisionResponse",
	Z_Construct_UScriptStruct_FCollisionResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::PropPointers),
	sizeof(FCollisionResponse),
	alignof(FCollisionResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponse()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionResponse.InnerSingleton, Z_Construct_UScriptStruct_FCollisionResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionResponse.InnerSingleton;
}
// End ScriptStruct FCollisionResponse

// Begin ScriptStruct FBodyInstanceAsyncPhysicsTickHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyInstanceAsyncPhysicsTickHandle;
class UScriptStruct* FBodyInstanceAsyncPhysicsTickHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyInstanceAsyncPhysicsTickHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyInstanceAsyncPhysicsTickHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BodyInstanceAsyncPhysicsTickHandle"));
	}
	return Z_Registration_Info_UScriptStruct_BodyInstanceAsyncPhysicsTickHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBodyInstanceAsyncPhysicsTickHandle>()
{
	return FBodyInstanceAsyncPhysicsTickHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyInstanceAsyncPhysicsTickHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BodyInstanceAsyncPhysicsTickHandle",
	nullptr,
	0,
	sizeof(FBodyInstanceAsyncPhysicsTickHandle),
	alignof(FBodyInstanceAsyncPhysicsTickHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle()
{
	if (!Z_Registration_Info_UScriptStruct_BodyInstanceAsyncPhysicsTickHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyInstanceAsyncPhysicsTickHandle.InnerSingleton, Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BodyInstanceAsyncPhysicsTickHandle.InnerSingleton;
}
// End ScriptStruct FBodyInstanceAsyncPhysicsTickHandle

// Begin ScriptStruct FBodyInstance
static_assert(std::is_polymorphic<FBodyInstance>() == std::is_polymorphic<FBodyInstanceCore>(), "USTRUCT FBodyInstance cannot be polymorphic unless super FBodyInstanceCore is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyInstance;
class UScriptStruct* FBodyInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BodyInstance"));
	}
	return Z_Registration_Info_UScriptStruct_BodyInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBodyInstance>()
{
	return FBodyInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBodyInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Container for a physics representation of an object */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Container for a physics representation of an object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "/** Enum indicating what type of object this should be considered as when it moves */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Enum indicating what type of object this should be considered as when it moves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "/**\n\x09* Type of collision enabled.\n\x09* \n\x09*\x09No Collision      : Will not create any representation in the physics engine. Cannot be used for spatial queries (raycasts, sweeps, overlaps) or simulation (rigid body, constraints). Best performance possible (especially for moving objects)\n\x09*\x09Query Only        : Only used for spatial queries (raycasts, sweeps, and overlaps). Cannot be used for simulation (rigid body, constraints). Useful for character movement and things that do not need physical simulation. Performance gains by keeping data out of simulation tree.\n\x09*\x09Physics Only      : Only used only for physics simulation (rigid body, constraints). Cannot be used for spatial queries (raycasts, sweeps, overlaps). Useful for jiggly bits on characters that do not need per bone detection. Performance gains by keeping data out of query tree\n\x09*\x09""Collision Enabled : Can be used for both spatial queries (raycasts, sweeps, overlaps) and simulation (rigid body, constraints).\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Type of collision enabled.\n\n      No Collision      : Will not create any representation in the physics engine. Cannot be used for spatial queries (raycasts, sweeps, overlaps) or simulation (rigid body, constraints). Best performance possible (especially for moving objects)\n      Query Only        : Only used for spatial queries (raycasts, sweeps, and overlaps). Cannot be used for simulation (rigid body, constraints). Useful for character movement and things that do not need physical simulation. Performance gains by keeping data out of simulation tree.\n      Physics Only      : Only used only for physics simulation (rigid body, constraints). Cannot be used for spatial queries (raycasts, sweeps, overlaps). Useful for jiggly bits on characters that do not need per bone detection. Performance gains by keeping data out of query tree\n      Collision Enabled : Can be used for both spatial queries (raycasts, sweeps, overlaps) and simulation (rigid body, constraints)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SleepFamily_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** The set of values used in considering when put this body to sleep. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "The set of values used in considering when put this body to sleep." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DOFMode_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Locks physical movement along specified axis.*/" },
		{ "DisplayName", "Mode" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Locks physical movement along specified axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCCD_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** If true Continuous Collision Detection (CCD) will be used for this component */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If true Continuous Collision Detection (CCD) will be used for this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMACD_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** [EXPERIMENTAL] If true Motion-Aware Collision Detection (MACD) will be used for this component */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[EXPERIMENTAL] If true Motion-Aware Collision Detection (MACD) will be used for this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAnalyticCollisions_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** If true ignore analytic collisions and treat objects as a general implicit surface */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If true ignore analytic collisions and treat objects as a general implicit surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyRigidBodyCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\x09Should 'Hit' events fire when this object collides during physics simulation. */" },
		{ "DisplayName", "Simulation Generates Hit Events" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Should 'Hit' events fire when this object collides during physics simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothEdgeCollisions_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Remove unnecessary edge collisions to allow smooth sliding over surfaces composed of multiple actors/components.\n\x09 * This is fairly expensive and should only be enabled on hero objects. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Remove unnecessary edge collisions to allow smooth sliding over surfaces composed of multiple actors/components.\nThis is fairly expensive and should only be enabled on hero objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] When a Locked Axis Mode is selected, will lock translation on the specified axis*/" },
		{ "DisplayName", "Lock Axis Translation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] When a Locked Axis Mode is selected, will lock translation on the specified axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] When a Locked Axis Mode is selected, will lock rotation to the specified axis*/" },
		{ "DisplayName", "Lock Axis Rotation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] When a Locked Axis Mode is selected, will lock rotation to the specified axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockXTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock translation along the X-axis*/" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock translation along the X-axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockYTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock translation along the Y-axis*/" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock translation along the Y-axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockZTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock translation along the Z-axis*/" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock translation along the Z-axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockXRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock rotation about the X-axis*/" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock rotation about the X-axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockYRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock rotation about the Y-axis*/" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock rotation about the Y-axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockZRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock rotation about the Z-axis*/" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock rotation about the Z-axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaxAngularVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Override the default max angular velocity */" },
		{ "editcondition", "bSimulatePhysics" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Override the default max angular velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaxDepenetrationVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Whether this body instance has its own custom MaxDepenetrationVelocity*/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Whether this body instance has its own custom MaxDepenetrationVelocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWalkableSlopeOnInstance_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Whether this instance of the object has its own custom walkable slope override setting. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Whether this instance of the object has its own custom walkable slope override setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolateWhenSubStepping_MetaData[] = {
		{ "Comment", "/** \n\x09 * Internal flag to allow us to quickly check whether we should interpolate when substepping \n\x09 * e.g. kinematic bodies that are QueryOnly do not need to interpolate as we will not be querying them\n\x09 * at a sub-position.\n\x09 * This is complicated by welding, where multiple the CollisionEnabled flag of the root must be considered.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Internal flag to allow us to quickly check whether we should interpolate when substepping\ne.g. kinematic bodies that are QueryOnly do not need to interpolate as we will not be querying them\nat a sub-position.\nThis is complicated by welding, where multiple the CollisionEnabled flag of the root must be considered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInertiaConditioning_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** \n\x09 * @brief Enable automatic inertia conditioning to stabilize constraints.\n\x09 * \n\x09 * Inertia conitioning increases inertia when an object is long and thin and also when it has joints that are outside the\n\x09 * collision shapes of the body. Increasing the inertia reduces the amount of rotation applied at joints which helps stabilize\n\x09 * joint chains, especially when bodies are small. In principle you can get the same behaviour by setting the InertiaTensorScale\n\x09 * appropriately, but this takes some of the guesswork out of it.\n\x09 * \n\x09 * @note This only changes the inertia used in the low-level solver. That inertia is not visible to the BodyInstance\n\x09 * which will still report the inertia calculated from the mass, shapes, and InertiaTensorScale.\n\x09 * \n\x09 * @note When enabled, the effective inertia depends on the joints attached to the body so the inertia will change when\n\x09 * joints are added or removed (automatically - no user action required).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "@brief Enable automatic inertia conditioning to stabilize constraints.\n\nInertia conitioning increases inertia when an object is long and thin and also when it has joints that are outside the\ncollision shapes of the body. Increasing the inertia reduces the amount of rotation applied at joints which helps stabilize\njoint chains, especially when bodies are small. In principle you can get the same behaviour by setting the InertiaTensorScale\nappropriately, but this takes some of the guesswork out of it.\n\n@note This only changes the inertia used in the low-level solver. That inertia is not visible to the BodyInstance\nwhich will still report the inertia calculated from the mass, shapes, and InertiaTensorScale.\n\n@note When enabled, the effective inertia depends on the joints attached to the body so the inertia will change when\njoints are added or removed (automatically - no user action required)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOneWayInteraction_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If set to true, this body will treat bodies that do not have the flag set as having infinite mass */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If set to true, this body will treat bodies that do not have the flag set as having infinite mass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSolverAsyncDeltaTime_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Set the desired delta time for the body. **/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Set the desired delta time for the body. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverAsyncDeltaTime_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Override value for physics solver async delta time.  With multiple actors specifying this, the solver will use the smallest delta time **/" },
		{ "editcondition", "bOverrideSolverAsyncDeltaTime" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Override value for physics solver async delta time.  With multiple actors specifying this, the solver will use the smallest delta time *" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseToChannels_MetaData[] = {
		{ "Comment", "/** Types of objects that this physics objects will collide with. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "/** Collision Profile Name **/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Collision Profile Name *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionSolverIterationCount_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [PhysX Only] This physics body's solver iteration count for position. Increasing this will be more CPU intensive, but better stabilized.  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[PhysX Only] This physics body's solver iteration count for position. Increasing this will be more CPU intensive, but better stabilized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocitySolverIterationCount_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [PhysX Only] This physics body's solver iteration count for velocity. Increasing this will be more CPU intensive, but better stabilized. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[PhysX Only] This physics body's solver iteration count for velocity. Increasing this will be more CPU intensive, but better stabilized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionResponses_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "/** Custom Channels for Responses*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Custom Channels for Responses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09 * The maximum velocity used to depenetrate this object from others when spawned or teleported with initial overlaps (does not affect overlaps as a result of normal movement).\n\x09 * A value of zero will allow objects that are spawned overlapping to go to sleep without moving rather than pop out of each other. E.g., use zero if you spawn dynamic rocks \n\x09 * partially embedded in the ground and want them to be interactive but not pop out of the ground when touched.\n\x09 * A negative value is equivalent to bOverrideMaxDepenetrationVelocity = false, meaning use the project setting.\n\x09 * This overrides the CollisionInitialOverlapDepenetrationVelocity project setting on a per-body basis (and not the MaxDepenetrationVelocity solver setting that will be deprecated).\n\x09*/" },
		{ "editcondition", "bOverrideMaxDepenetrationVelocity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "The maximum velocity used to depenetrate this object from others when spawned or teleported with initial overlaps (does not affect overlaps as a result of normal movement).\nA value of zero will allow objects that are spawned overlapping to go to sleep without moving rather than pop out of each other. E.g., use zero if you spawn dynamic rocks\npartially embedded in the ground and want them to be interactive but not pop out of the ground when touched.\nA negative value is equivalent to bOverrideMaxDepenetrationVelocity = false, meaning use the project setting.\nThis overrides the CollisionInitialOverlapDepenetrationVelocity project setting on a per-body basis (and not the MaxDepenetrationVelocity solver setting that will be deprecated)." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassInKgOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**Mass of the body in KG. By default we compute this based on physical material and mass scale.\n\x09*@see bOverrideMass to set this directly */" },
		{ "DisplayName", "Mass (kg)" },
		{ "editcondition", "bOverrideMass" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Mass of the body in KG. By default we compute this based on physical material and mass scale.\n@see bOverrideMass to set this directly" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** 'Drag' force added to reduce linear movement */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "'Drag' force added to reduce linear movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** 'Drag' force added to reduce angular movement */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "'Drag' force added to reduce angular movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDOFPlaneNormal_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Locks physical movement along a custom plane for a given normal.*/" },
		{ "DisplayName", "Plane Normal" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Locks physical movement along a custom plane for a given normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_COMNudge_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** User specified offset for the center of mass of this object, from the calculated location */" },
		{ "DisplayName", "Center Of Mass Offset" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "User specified offset for the center of mass of this object, from the calculated location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Per-instance scaling of mass */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Per-instance scaling of mass" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InertiaTensorScale_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Per-instance scaling of inertia (bigger number means  it'll be harder to rotate) */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Per-instance scaling of inertia (bigger number means  it'll be harder to rotate)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09* Custom walkable slope override setting for this instance.\n\x09* @see GetWalkableSlopeOverride(), SetWalkableSlopeOverride()\n\x09*/" },
		{ "editcondition", "bOverrideWalkableSlopeOnInstance" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Custom walkable slope override setting for this instance.\n@see GetWalkableSlopeOverride(), SetWalkableSlopeOverride()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterialOverride_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\x09""Allows you to override the PhysicalMaterial to use for simple collision on this body. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Allows you to override the PhysicalMaterial to use for simple collision on this body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** The maximum angular velocity for this instance [degrees/s]*/" },
		{ "editcondition", "bOverrideMaxAngularVelocity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "The maximum angular velocity for this instance [degrees/s]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSleepThresholdMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If the SleepFamily is set to custom, multiply the natural sleep threshold by this amount. A higher number will cause the body to sleep sooner. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If the SleepFamily is set to custom, multiply the natural sleep threshold by this amount. A higher number will cause the body to sleep sooner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StabilizationThresholdMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Stabilization factor for this body if Physics stabilization is enabled. A higher number will cause more aggressive stabilization at the risk of loss of momentum at low speeds. A value of 0 will disable stabilization for this body.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Stabilization factor for this body if Physics stabilization is enabled. A higher number will cause more aggressive stabilization at the risk of loss of momentum at low speeds. A value of 0 will disable stabilization for this body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsBlendWeight_MetaData[] = {
		{ "Comment", "/** Provide appropriate interface for doing this instead of allowing BlueprintReadWrite **/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Provide appropriate interface for doing this instead of allowing BlueprintReadWrite *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SleepFamily_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SleepFamily;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DOFMode;
	static void NewProp_bUseCCD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCCD;
	static void NewProp_bUseMACD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMACD;
	static void NewProp_bIgnoreAnalyticCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAnalyticCollisions;
	static void NewProp_bNotifyRigidBodyCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyRigidBodyCollision;
	static void NewProp_bSmoothEdgeCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothEdgeCollisions;
	static void NewProp_bLockTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockTranslation;
	static void NewProp_bLockRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockRotation;
	static void NewProp_bLockXTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockXTranslation;
	static void NewProp_bLockYTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockYTranslation;
	static void NewProp_bLockZTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockZTranslation;
	static void NewProp_bLockXRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockXRotation;
	static void NewProp_bLockYRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockYRotation;
	static void NewProp_bLockZRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockZRotation;
	static void NewProp_bOverrideMaxAngularVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaxAngularVelocity;
	static void NewProp_bOverrideMaxDepenetrationVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaxDepenetrationVelocity;
	static void NewProp_bOverrideWalkableSlopeOnInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWalkableSlopeOnInstance;
	static void NewProp_bInterpolateWhenSubStepping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolateWhenSubStepping;
	static void NewProp_bInertiaConditioning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInertiaConditioning;
	static void NewProp_bOneWayInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneWayInteraction;
	static void NewProp_bOverrideSolverAsyncDeltaTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSolverAsyncDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SolverAsyncDeltaTime;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResponseToChannels;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionSolverIterationCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VelocitySolverIterationCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionResponses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MassInKgOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomDOFPlaneNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_COMNudge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MassScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InertiaTensorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterialOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomSleepThresholdMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StabilizationThresholdMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsBlendWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, ObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectType_MetaData), NewProp_ObjectType_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEnabled_MetaData), NewProp_CollisionEnabled_MetaData) }; // 2362857466
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily = { "SleepFamily", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, SleepFamily), Z_Construct_UEnum_PhysicsCore_ESleepFamily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SleepFamily_MetaData), NewProp_SleepFamily_MetaData) }; // 3697715431
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode = { "DOFMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, DOFMode), Z_Construct_UEnum_Engine_EDOFMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DOFMode_MetaData), NewProp_DOFMode_MetaData) }; // 355644319
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bUseCCD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD = { "bUseCCD", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCCD_MetaData), NewProp_bUseCCD_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseMACD_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bUseMACD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseMACD = { "bUseMACD", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseMACD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMACD_MetaData), NewProp_bUseMACD_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bIgnoreAnalyticCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions = { "bIgnoreAnalyticCollisions", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreAnalyticCollisions_MetaData), NewProp_bIgnoreAnalyticCollisions_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bNotifyRigidBodyCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision = { "bNotifyRigidBodyCollision", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyRigidBodyCollision_MetaData), NewProp_bNotifyRigidBodyCollision_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSmoothEdgeCollisions_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bSmoothEdgeCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSmoothEdgeCollisions = { "bSmoothEdgeCollisions", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSmoothEdgeCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothEdgeCollisions_MetaData), NewProp_bSmoothEdgeCollisions_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bLockTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation = { "bLockTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockTranslation_MetaData), NewProp_bLockTranslation_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bLockRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation = { "bLockRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockRotation_MetaData), NewProp_bLockRotation_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bLockXTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation = { "bLockXTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockXTranslation_MetaData), NewProp_bLockXTranslation_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bLockYTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation = { "bLockYTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockYTranslation_MetaData), NewProp_bLockYTranslation_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bLockZTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation = { "bLockZTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockZTranslation_MetaData), NewProp_bLockZTranslation_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bLockXRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation = { "bLockXRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockXRotation_MetaData), NewProp_bLockXRotation_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bLockYRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation = { "bLockYRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockYRotation_MetaData), NewProp_bLockYRotation_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bLockZRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation = { "bLockZRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockZRotation_MetaData), NewProp_bLockZRotation_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bOverrideMaxAngularVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity = { "bOverrideMaxAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMaxAngularVelocity_MetaData), NewProp_bOverrideMaxAngularVelocity_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bOverrideMaxDepenetrationVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity = { "bOverrideMaxDepenetrationVelocity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMaxDepenetrationVelocity_MetaData), NewProp_bOverrideMaxDepenetrationVelocity_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bOverrideWalkableSlopeOnInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance = { "bOverrideWalkableSlopeOnInstance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideWalkableSlopeOnInstance_MetaData), NewProp_bOverrideWalkableSlopeOnInstance_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bInterpolateWhenSubStepping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping = { "bInterpolateWhenSubStepping", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolateWhenSubStepping_MetaData), NewProp_bInterpolateWhenSubStepping_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInertiaConditioning_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bInertiaConditioning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInertiaConditioning = { "bInertiaConditioning", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInertiaConditioning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInertiaConditioning_MetaData), NewProp_bInertiaConditioning_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOneWayInteraction_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bOneWayInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOneWayInteraction = { "bOneWayInteraction", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOneWayInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOneWayInteraction_MetaData), NewProp_bOneWayInteraction_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideSolverAsyncDeltaTime_SetBit(void* Obj)
{
	((FBodyInstance*)Obj)->bOverrideSolverAsyncDeltaTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideSolverAsyncDeltaTime = { "bOverrideSolverAsyncDeltaTime", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideSolverAsyncDeltaTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSolverAsyncDeltaTime_MetaData), NewProp_bOverrideSolverAsyncDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SolverAsyncDeltaTime = { "SolverAsyncDeltaTime", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, SolverAsyncDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverAsyncDeltaTime_MetaData), NewProp_SolverAsyncDeltaTime_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels = { "ResponseToChannels", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, ResponseToChannels_DEPRECATED), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseToChannels_MetaData), NewProp_ResponseToChannels_MetaData) }; // 3070728355
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, CollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionProfileName_MetaData), NewProp_CollisionProfileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount = { "PositionSolverIterationCount", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, PositionSolverIterationCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionSolverIterationCount_MetaData), NewProp_PositionSolverIterationCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount = { "VelocitySolverIterationCount", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, VelocitySolverIterationCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocitySolverIterationCount_MetaData), NewProp_VelocitySolverIterationCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses = { "CollisionResponses", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, CollisionResponses), Z_Construct_UScriptStruct_FCollisionResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionResponses_MetaData), NewProp_CollisionResponses_MetaData) }; // 4258301817
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity = { "MaxDepenetrationVelocity", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, MaxDepenetrationVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepenetrationVelocity_MetaData), NewProp_MaxDepenetrationVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride = { "MassInKgOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, MassInKgOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassInKgOverride_MetaData), NewProp_MassInKgOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, LinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDamping_MetaData), NewProp_LinearDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping = { "AngularDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, AngularDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDamping_MetaData), NewProp_AngularDamping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal = { "CustomDOFPlaneNormal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, CustomDOFPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDOFPlaneNormal_MetaData), NewProp_CustomDOFPlaneNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge = { "COMNudge", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, COMNudge), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_COMNudge_MetaData), NewProp_COMNudge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale = { "MassScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, MassScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassScale_MetaData), NewProp_MassScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale = { "InertiaTensorScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, InertiaTensorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InertiaTensorScale_MetaData), NewProp_InertiaTensorScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride = { "WalkableSlopeOverride", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkableSlopeOverride_MetaData), NewProp_WalkableSlopeOverride_MetaData) }; // 4238734711
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride = { "PhysMaterialOverride", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, PhysMaterialOverride), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMaterialOverride_MetaData), NewProp_PhysMaterialOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity = { "MaxAngularVelocity", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, MaxAngularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngularVelocity_MetaData), NewProp_MaxAngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier = { "CustomSleepThresholdMultiplier", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, CustomSleepThresholdMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSleepThresholdMultiplier_MetaData), NewProp_CustomSleepThresholdMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier = { "StabilizationThresholdMultiplier", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, StabilizationThresholdMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StabilizationThresholdMultiplier_MetaData), NewProp_StabilizationThresholdMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight = { "PhysicsBlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyInstance, PhysicsBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsBlendWeight_MetaData), NewProp_PhysicsBlendWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseMACD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSmoothEdgeCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInertiaConditioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOneWayInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideSolverAsyncDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SolverAsyncDeltaTime,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FBodyInstanceCore,
	&NewStructOps,
	"BodyInstance",
	Z_Construct_UScriptStruct_FBodyInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::PropPointers),
	sizeof(FBodyInstance),
	alignof(FBodyInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBodyInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance()
{
	if (!Z_Registration_Info_UScriptStruct_BodyInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyInstance.InnerSingleton, Z_Construct_UScriptStruct_FBodyInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BodyInstance.InnerSingleton;
}
// End ScriptStruct FBodyInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDOFMode_StaticEnum, TEXT("EDOFMode"), &Z_Registration_Info_UEnum_EDOFMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 355644319U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCollisionResponse::StaticStruct, Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewStructOps, TEXT("CollisionResponse"), &Z_Registration_Info_UScriptStruct_CollisionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionResponse), 4258301817U) },
		{ FBodyInstanceAsyncPhysicsTickHandle::StaticStruct, Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle_Statics::NewStructOps, TEXT("BodyInstanceAsyncPhysicsTickHandle"), &Z_Registration_Info_UScriptStruct_BodyInstanceAsyncPhysicsTickHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyInstanceAsyncPhysicsTickHandle), 3408086406U) },
		{ FBodyInstance::StaticStruct, Z_Construct_UScriptStruct_FBodyInstance_Statics::NewStructOps, TEXT("BodyInstance"), &Z_Registration_Info_UScriptStruct_BodyInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyInstance), 3706165537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_1468872177(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
