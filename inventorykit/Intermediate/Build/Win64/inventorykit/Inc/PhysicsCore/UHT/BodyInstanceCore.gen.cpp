// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyInstanceCore() {}

// Begin Cross Module References
PHYSICSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstanceCore();
UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References

// Begin ScriptStruct FBodyInstanceCore
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyInstanceCore;
class UScriptStruct* FBodyInstanceCore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyInstanceCore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyInstanceCore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyInstanceCore, (UObject*)Z_Construct_UPackage__Script_PhysicsCore(), TEXT("BodyInstanceCore"));
	}
	return Z_Registration_Info_UScriptStruct_BodyInstanceCore.OuterSingleton;
}
template<> PHYSICSCORE_API UScriptStruct* StaticStruct<FBodyInstanceCore>()
{
	return FBodyInstanceCore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBodyInstanceCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulatePhysics_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** \n\x09 * If true, this body will use simulation. If false, will be 'fixed' (ie kinematic) and move where it is told. \n\x09 * For a Skeletal Mesh Component, simulating requires a physics asset setup and assigned on the SkeletalMesh asset.\n\x09 * For a Static Mesh Component, simulating requires simple collision to be setup on the StaticMesh asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If true, this body will use simulation. If false, will be 'fixed' (ie kinematic) and move where it is told.\nFor a Skeletal Mesh Component, simulating requires a physics asset setup and assigned on the SkeletalMesh asset.\nFor a Static Mesh Component, simulating requires simple collision to be setup on the StaticMesh asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMass_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If true, mass will not be automatically computed and you must set it directly */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If true, mass will not be automatically computed and you must set it directly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGravity_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If object should have the force of gravity applied */" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If object should have the force of gravity applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateKinematicFromSimulation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** When kinematic, whether the actor transform should be updated as a result of movement in the simulation, rather than immediately whenever a target transform is set. */" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "When kinematic, whether the actor transform should be updated as a result of movement in the simulation, rather than immediately whenever a target transform is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoWeld_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If true and is attached to a parent, the two bodies will be joined into a single rigid body. Physical settings like collision profile and body settings are determined by the root */" },
		{ "editcondition", "!bSimulatePhysics" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If true and is attached to a parent, the two bodies will be joined into a single rigid body. Physical settings like collision profile and body settings are determined by the root" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartAwake_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If object should start awake, or if it should initially be sleeping */" },
		{ "editcondition", "bSimulatePhysics" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If object should start awake, or if it should initially be sleeping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateWakeEvents_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\x09Should 'wake/sleep' events fire when this object is woken up or put to sleep by the physics simulation. */" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "Should 'wake/sleep' events fire when this object is woken up or put to sleep by the physics simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateMassWhenScaleChanges_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If true, it will update mass when scale change **/" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If true, it will update mass when scale change *" },
	};
#endif // WITH_METADATA
	static void NewProp_bSimulatePhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulatePhysics;
	static void NewProp_bOverrideMass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMass;
	static void NewProp_bEnableGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
	static void NewProp_bUpdateKinematicFromSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateKinematicFromSimulation;
	static void NewProp_bAutoWeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoWeld;
	static void NewProp_bStartAwake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAwake;
	static void NewProp_bGenerateWakeEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateWakeEvents;
	static void NewProp_bUpdateMassWhenScaleChanges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMassWhenScaleChanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyInstanceCore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics_SetBit(void* Obj)
{
	((FBodyInstanceCore*)Obj)->bSimulatePhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics = { "bSimulatePhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulatePhysics_MetaData), NewProp_bSimulatePhysics_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass_SetBit(void* Obj)
{
	((FBodyInstanceCore*)Obj)->bOverrideMass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass = { "bOverrideMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMass_MetaData), NewProp_bOverrideMass_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
{
	((FBodyInstanceCore*)Obj)->bEnableGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity = { "bEnableGravity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGravity_MetaData), NewProp_bEnableGravity_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateKinematicFromSimulation_SetBit(void* Obj)
{
	((FBodyInstanceCore*)Obj)->bUpdateKinematicFromSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateKinematicFromSimulation = { "bUpdateKinematicFromSimulation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateKinematicFromSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateKinematicFromSimulation_MetaData), NewProp_bUpdateKinematicFromSimulation_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld_SetBit(void* Obj)
{
	((FBodyInstanceCore*)Obj)->bAutoWeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld = { "bAutoWeld", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoWeld_MetaData), NewProp_bAutoWeld_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake_SetBit(void* Obj)
{
	((FBodyInstanceCore*)Obj)->bStartAwake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake = { "bStartAwake", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartAwake_MetaData), NewProp_bStartAwake_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents_SetBit(void* Obj)
{
	((FBodyInstanceCore*)Obj)->bGenerateWakeEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents = { "bGenerateWakeEvents", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateWakeEvents_MetaData), NewProp_bGenerateWakeEvents_MetaData) };
void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges_SetBit(void* Obj)
{
	((FBodyInstanceCore*)Obj)->bUpdateMassWhenScaleChanges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges = { "bUpdateMassWhenScaleChanges", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateMassWhenScaleChanges_MetaData), NewProp_bUpdateMassWhenScaleChanges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateKinematicFromSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
	nullptr,
	&NewStructOps,
	"BodyInstanceCore",
	Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::PropPointers),
	sizeof(FBodyInstanceCore),
	alignof(FBodyInstanceCore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBodyInstanceCore()
{
	if (!Z_Registration_Info_UScriptStruct_BodyInstanceCore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyInstanceCore.InnerSingleton, Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BodyInstanceCore.InnerSingleton;
}
// End ScriptStruct FBodyInstanceCore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBodyInstanceCore::StaticStruct, Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewStructOps, TEXT("BodyInstanceCore"), &Z_Registration_Info_UScriptStruct_BodyInstanceCore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyInstanceCore), 175851848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h_3275633718(TEXT("/Script/PhysicsCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
