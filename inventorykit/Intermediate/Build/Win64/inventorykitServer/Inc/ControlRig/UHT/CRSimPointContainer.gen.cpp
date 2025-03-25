// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Math/Simulation/CRSimPointContainer.h"
#include "ControlRig/Public/Math/Simulation/CRSimLinearSpring.h"
#include "ControlRig/Public/Math/Simulation/CRSimPointConstraint.h"
#include "ControlRig/Public/Math/Simulation/CRSimPointForce.h"
#include "ControlRig/Public/Math/Simulation/CRSimSoftCollision.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimPointContainer() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimContainer();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimLinearSpring();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointConstraint();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointContainer();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointForce();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimSoftCollision();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMSimPoint();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FCRSimPointContainer
static_assert(std::is_polymorphic<FCRSimPointContainer>() == std::is_polymorphic<FCRSimContainer>(), "USTRUCT FCRSimPointContainer cannot be polymorphic unless super FCRSimContainer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimPointContainer;
class UScriptStruct* FCRSimPointContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimPointContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimPointContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimPointContainer, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimPointContainer"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimPointContainer.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimPointContainer>()
{
	return FCRSimPointContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCRSimPointContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Comment", "/**\n\x09 * The points within the simulation\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
		{ "ToolTip", "The points within the simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Springs_MetaData[] = {
		{ "Comment", "/**\n\x09 * The springs within the simulation\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
		{ "ToolTip", "The springs within the simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Forces_MetaData[] = {
		{ "Comment", "/**\n\x09 * The forces to apply to the points\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
		{ "ToolTip", "The forces to apply to the points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionVolumes_MetaData[] = {
		{ "Comment", "/**\n     * The collision volumes for the simulation\n     */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
		{ "ToolTip", "The collision volumes for the simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Comment", "/**\n\x09 * The constraints within the simulation\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
		{ "ToolTip", "The constraints within the simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Springs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Springs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Forces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Forces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionVolumes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionVolumes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousStep_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimPointContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMSimPoint, METADATA_PARAMS(0, nullptr) }; // 1765622201
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointContainer, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) }; // 1765622201
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs_Inner = { "Springs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCRSimLinearSpring, METADATA_PARAMS(0, nullptr) }; // 1992971679
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs = { "Springs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointContainer, Springs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Springs_MetaData), NewProp_Springs_MetaData) }; // 1992971679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces_Inner = { "Forces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCRSimPointForce, METADATA_PARAMS(0, nullptr) }; // 3337756034
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces = { "Forces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointContainer, Forces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Forces_MetaData), NewProp_Forces_MetaData) }; // 3337756034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes_Inner = { "CollisionVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCRSimSoftCollision, METADATA_PARAMS(0, nullptr) }; // 3844221830
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes = { "CollisionVolumes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointContainer, CollisionVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionVolumes_MetaData), NewProp_CollisionVolumes_MetaData) }; // 3844221830
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCRSimPointConstraint, METADATA_PARAMS(0, nullptr) }; // 1946273797
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointContainer, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) }; // 1946273797
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep_Inner = { "PreviousStep", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMSimPoint, METADATA_PARAMS(0, nullptr) }; // 1765622201
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep = { "PreviousStep", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointContainer, PreviousStep), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousStep_MetaData), NewProp_PreviousStep_MetaData) }; // 1765622201
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FCRSimContainer,
	&NewStructOps,
	"CRSimPointContainer",
	Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::PropPointers),
	sizeof(FCRSimPointContainer),
	alignof(FCRSimPointContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointContainer()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimPointContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimPointContainer.InnerSingleton, Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CRSimPointContainer.InnerSingleton;
}
// End ScriptStruct FCRSimPointContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCRSimPointContainer::StaticStruct, Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewStructOps, TEXT("CRSimPointContainer"), &Z_Registration_Info_UScriptStruct_CRSimPointContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimPointContainer), 324899149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h_4112117383(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
