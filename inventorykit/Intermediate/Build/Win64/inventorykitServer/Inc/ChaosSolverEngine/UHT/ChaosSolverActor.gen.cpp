// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosSolverActor.h"
#include "Runtime/Experimental/Chaos/Public/ChaosSolverConfiguration.h"
#include "Runtime/Experimental/Chaos/Public/SolverEventFilters.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolverActor() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FChaosSolverConfiguration();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister();
CHAOSSOLVERENGINE_API UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum();
CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosDebugSubstepControl();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References

// Begin Enum EClusterConnectionTypeEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClusterConnectionTypeEnum;
static UEnum* EClusterConnectionTypeEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, (UObject*)Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("EClusterConnectionTypeEnum"));
	}
	return Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UEnum* StaticEnum<EClusterConnectionTypeEnum>()
{
	return EClusterConnectionTypeEnum_StaticEnum();
}
struct Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Chaos_BoundsOverlapFilteredDelaunayTriangulation.Name", "EClusterConnectionTypeEnum::Chaos_BoundsOverlapFilteredDelaunayTriangulation" },
		{ "Chaos_DelaunayTriangulation.Hidden", "" },
		{ "Chaos_DelaunayTriangulation.Name", "EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation" },
		{ "Chaos_EClsuterCreationParameters_Max.Comment", "//\n" },
		{ "Chaos_EClsuterCreationParameters_Max.Hidden", "" },
		{ "Chaos_EClsuterCreationParameters_Max.Name", "EClusterConnectionTypeEnum::Chaos_EClsuterCreationParameters_Max" },
		{ "Chaos_MinimalSpanningSubsetDelaunayTriangulation.Name", "EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation" },
		{ "Chaos_None.Hidden", "" },
		{ "Chaos_None.Name", "EClusterConnectionTypeEnum::Chaos_None" },
		{ "Chaos_PointImplicit.Name", "EClusterConnectionTypeEnum::Chaos_PointImplicit" },
		{ "Chaos_PointImplicitAugmentedWithMinimalDelaunay.Name", "EClusterConnectionTypeEnum::Chaos_PointImplicitAugmentedWithMinimalDelaunay" },
		{ "Comment", "/** Legacy enum for old deprecated configuration properties. To be removed when those properties are */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Legacy enum for old deprecated configuration properties. To be removed when those properties are" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClusterConnectionTypeEnum::Chaos_PointImplicit", (int64)EClusterConnectionTypeEnum::Chaos_PointImplicit },
		{ "EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation", (int64)EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation },
		{ "EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation", (int64)EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation },
		{ "EClusterConnectionTypeEnum::Chaos_PointImplicitAugmentedWithMinimalDelaunay", (int64)EClusterConnectionTypeEnum::Chaos_PointImplicitAugmentedWithMinimalDelaunay },
		{ "EClusterConnectionTypeEnum::Chaos_BoundsOverlapFilteredDelaunayTriangulation", (int64)EClusterConnectionTypeEnum::Chaos_BoundsOverlapFilteredDelaunayTriangulation },
		{ "EClusterConnectionTypeEnum::Chaos_None", (int64)EClusterConnectionTypeEnum::Chaos_None },
		{ "EClusterConnectionTypeEnum::Chaos_EClsuterCreationParameters_Max", (int64)EClusterConnectionTypeEnum::Chaos_EClsuterCreationParameters_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	nullptr,
	"EClusterConnectionTypeEnum",
	"EClusterConnectionTypeEnum",
	Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum()
{
	if (!Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.InnerSingleton, Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.InnerSingleton;
}
// End Enum EClusterConnectionTypeEnum

// Begin ScriptStruct FChaosDebugSubstepControl
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl;
class UScriptStruct* FChaosDebugSubstepControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosDebugSubstepControl, (UObject*)Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosDebugSubstepControl"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosDebugSubstepControl>()
{
	return FChaosDebugSubstepControl::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPause_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Pause the solver at the next synchronization point.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Pause the solver at the next synchronization point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubstep_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Substep the solver to the next synchronization point.\n\x09*/" },
		{ "EditCondition", "bPause" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Substep the solver to the next synchronization point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStep_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Step the solver to the next synchronization point.\n\x09*/" },
		{ "EditCondition", "bPause" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Step the solver to the next synchronization point." },
	};
#endif // WITH_METADATA
	static void NewProp_bPause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
	static void NewProp_bSubstep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubstep;
	static void NewProp_bStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosDebugSubstepControl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_SetBit(void* Obj)
{
	((FChaosDebugSubstepControl*)Obj)->bPause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosDebugSubstepControl), &Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPause_MetaData), NewProp_bPause_MetaData) };
void Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_SetBit(void* Obj)
{
	((FChaosDebugSubstepControl*)Obj)->bSubstep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep = { "bSubstep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosDebugSubstepControl), &Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubstep_MetaData), NewProp_bSubstep_MetaData) };
void Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_SetBit(void* Obj)
{
	((FChaosDebugSubstepControl*)Obj)->bStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep = { "bStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosDebugSubstepControl), &Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStep_MetaData), NewProp_bStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	nullptr,
	&NewStructOps,
	"ChaosDebugSubstepControl",
	Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::PropPointers),
	sizeof(FChaosDebugSubstepControl),
	alignof(FChaosDebugSubstepControl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosDebugSubstepControl()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.InnerSingleton, Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.InnerSingleton;
}
// End ScriptStruct FChaosDebugSubstepControl

// Begin Class AChaosSolverActor Function SetAsCurrentWorldSolver
struct Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Makes this solver the current world solver. Dynamically spawned objects will have their physics state created in this solver. */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Makes this solver the current world solver. Dynamically spawned objects will have their physics state created in this solver." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosSolverActor, nullptr, "SetAsCurrentWorldSolver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosSolverActor::execSetAsCurrentWorldSolver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAsCurrentWorldSolver();
	P_NATIVE_END;
}
// End Class AChaosSolverActor Function SetAsCurrentWorldSolver

// Begin Class AChaosSolverActor Function SetSolverActive
struct Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics
{
	struct ChaosSolverActor_eventSetSolverActive_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Controls whether the solver is able to simulate particles it controls */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Controls whether the solver is able to simulate particles it controls" },
	};
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((ChaosSolverActor_eventSetSolverActive_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosSolverActor_eventSetSolverActive_Parms), &Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosSolverActor, nullptr, "SetSolverActive", nullptr, nullptr, Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::ChaosSolverActor_eventSetSolverActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::ChaosSolverActor_eventSetSolverActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaosSolverActor_SetSolverActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosSolverActor::execSetSolverActive)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSolverActive(Z_Param_bActive);
	P_NATIVE_END;
}
// End Class AChaosSolverActor Function SetSolverActive

// Begin Class AChaosSolverActor
void AChaosSolverActor::StaticRegisterNativesAChaosSolverActor()
{
	UClass* Class = AChaosSolverActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAsCurrentWorldSolver", &AChaosSolverActor::execSetAsCurrentWorldSolver },
		{ "SetSolverActive", &AChaosSolverActor::execSetSolverActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChaosSolverActor);
UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister()
{
	return AChaosSolverActor::StaticClass();
}
struct Z_Construct_UClass_AChaosSolverActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Chaos/ChaosSolverActor.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStepMultiplier_MetaData[] = {
		{ "Comment", "/** Deprecated solver properties (moved to FChaosSolverConfiguration)*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Deprecated solver properties (moved to FChaosSolverConfiguration)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionIterations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PushOutIterations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PushOutPairIterations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterConnectionFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterUnionConnectionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateCollisionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionFilterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateBreakingData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakingFilterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateTrailingData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailingFilterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasFloor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** End deprecated properties */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "End deprecated properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaosDebugSubstepControl_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Control to pause/step/substep the solver to the next synchronization point.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Control to pause/step/substep the solver to the next synchronization point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/*\n\x09* Display icon in the editor\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Display icon in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEventDispatcherComponent_MetaData[] = {
		{ "Comment", "/** Component responsible for harvesting and triggering physics-related gameplay events (hits, breaks, etc) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Component responsible for harvesting and triggering physics-related gameplay events (hits, breaks, etc)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStepMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PushOutIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PushOutPairIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterConnectionFactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterUnionConnectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterUnionConnectionType;
	static void NewProp_DoGenerateCollisionData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateCollisionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionFilterSettings;
	static void NewProp_DoGenerateBreakingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateBreakingData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakingFilterSettings;
	static void NewProp_DoGenerateTrailingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateTrailingData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailingFilterSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MassScale;
	static void NewProp_bHasFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFloor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChaosDebugSubstepControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplayEventDispatcherComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver, "SetAsCurrentWorldSolver" }, // 4158310196
		{ &Z_Construct_UFunction_AChaosSolverActor_SetSolverActive, "SetSolverActive" }, // 223234463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaosSolverActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, Properties), Z_Construct_UScriptStruct_FChaosSolverConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) }; // 779114720
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier = { "TimeStepMultiplier", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, TimeStepMultiplier_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStepMultiplier_MetaData), NewProp_TimeStepMultiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations = { "CollisionIterations", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, CollisionIterations_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionIterations_MetaData), NewProp_CollisionIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations = { "PushOutIterations", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, PushOutIterations_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PushOutIterations_MetaData), NewProp_PushOutIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations = { "PushOutPairIterations", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, PushOutPairIterations_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PushOutPairIterations_MetaData), NewProp_PushOutPairIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor = { "ClusterConnectionFactor", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, ClusterConnectionFactor_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterConnectionFactor_MetaData), NewProp_ClusterConnectionFactor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType = { "ClusterUnionConnectionType", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, ClusterUnionConnectionType_DEPRECATED), Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterUnionConnectionType_MetaData), NewProp_ClusterUnionConnectionType_MetaData) }; // 842739165
void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_SetBit(void* Obj)
{
	((AChaosSolverActor*)Obj)->DoGenerateCollisionData_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData = { "DoGenerateCollisionData", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoGenerateCollisionData_MetaData), NewProp_DoGenerateCollisionData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings = { "CollisionFilterSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, CollisionFilterSettings_DEPRECATED), Z_Construct_UScriptStruct_FSolverCollisionFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionFilterSettings_MetaData), NewProp_CollisionFilterSettings_MetaData) }; // 2736936784
void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_SetBit(void* Obj)
{
	((AChaosSolverActor*)Obj)->DoGenerateBreakingData_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData = { "DoGenerateBreakingData", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoGenerateBreakingData_MetaData), NewProp_DoGenerateBreakingData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings = { "BreakingFilterSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, BreakingFilterSettings_DEPRECATED), Z_Construct_UScriptStruct_FSolverBreakingFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakingFilterSettings_MetaData), NewProp_BreakingFilterSettings_MetaData) }; // 1894804595
void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_SetBit(void* Obj)
{
	((AChaosSolverActor*)Obj)->DoGenerateTrailingData_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData = { "DoGenerateTrailingData", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoGenerateTrailingData_MetaData), NewProp_DoGenerateTrailingData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings = { "TrailingFilterSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, TrailingFilterSettings_DEPRECATED), Z_Construct_UScriptStruct_FSolverTrailingFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailingFilterSettings_MetaData), NewProp_TrailingFilterSettings_MetaData) }; // 1270446885
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale = { "MassScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, MassScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassScale_MetaData), NewProp_MassScale_MetaData) };
void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_SetBit(void* Obj)
{
	((AChaosSolverActor*)Obj)->bHasFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor = { "bHasFloor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasFloor_MetaData), NewProp_bHasFloor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight = { "FloorHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, FloorHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorHeight_MetaData), NewProp_FloorHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl = { "ChaosDebugSubstepControl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, ChaosDebugSubstepControl), Z_Construct_UScriptStruct_FChaosDebugSubstepControl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaosDebugSubstepControl_MetaData), NewProp_ChaosDebugSubstepControl_MetaData) }; // 3085994039
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent = { "GameplayEventDispatcherComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosSolverActor, GameplayEventDispatcherComponent), Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEventDispatcherComponent_MetaData), NewProp_GameplayEventDispatcherComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChaosSolverActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChaosSolverActor_Statics::ClassParams = {
	&AChaosSolverActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChaosSolverActor()
{
	if (!Z_Registration_Info_UClass_AChaosSolverActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChaosSolverActor.OuterSingleton, Z_Construct_UClass_AChaosSolverActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChaosSolverActor.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UClass* StaticClass<AChaosSolverActor>()
{
	return AChaosSolverActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChaosSolverActor);
AChaosSolverActor::~AChaosSolverActor() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AChaosSolverActor)
// End Class AChaosSolverActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClusterConnectionTypeEnum_StaticEnum, TEXT("EClusterConnectionTypeEnum"), &Z_Registration_Info_UEnum_EClusterConnectionTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 842739165U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosDebugSubstepControl::StaticStruct, Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewStructOps, TEXT("ChaosDebugSubstepControl"), &Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosDebugSubstepControl), 3085994039U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChaosSolverActor, AChaosSolverActor::StaticClass, TEXT("AChaosSolverActor"), &Z_Registration_Info_UClass_AChaosSolverActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChaosSolverActor), 4276558604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_1480232542(TEXT("/Script/ChaosSolverEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
