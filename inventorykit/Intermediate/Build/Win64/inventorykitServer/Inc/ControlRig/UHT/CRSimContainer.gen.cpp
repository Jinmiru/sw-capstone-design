// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Math/Simulation/CRSimContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimContainer() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimContainer();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FCRSimContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimContainer;
class UScriptStruct* FCRSimContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimContainer, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimContainer"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimContainer.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimContainer>()
{
	return FCRSimContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCRSimContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "Comment", "/**\n\x09 * The time step used by this container\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimContainer.h" },
		{ "ToolTip", "The time step used by this container" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTime_MetaData[] = {
		{ "Comment", "/**\n\x09 * The time step used by this container\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimContainer.h" },
		{ "ToolTip", "The time step used by this container" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeftForStep_MetaData[] = {
		{ "Comment", "/**\n\x09 * The time left until the next step\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimContainer.h" },
		{ "ToolTip", "The time left until the next step" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeftForStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimContainer, TimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_AccumulatedTime = { "AccumulatedTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimContainer, AccumulatedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedTime_MetaData), NewProp_AccumulatedTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeLeftForStep = { "TimeLeftForStep", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimContainer, TimeLeftForStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLeftForStep_MetaData), NewProp_TimeLeftForStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_AccumulatedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeLeftForStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"CRSimContainer",
	Z_Construct_UScriptStruct_FCRSimContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimContainer_Statics::PropPointers),
	sizeof(FCRSimContainer),
	alignof(FCRSimContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCRSimContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCRSimContainer()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimContainer.InnerSingleton, Z_Construct_UScriptStruct_FCRSimContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CRSimContainer.InnerSingleton;
}
// End ScriptStruct FCRSimContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCRSimContainer::StaticStruct, Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewStructOps, TEXT("CRSimContainer"), &Z_Registration_Info_UScriptStruct_CRSimContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimContainer), 4074716922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h_2938569320(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
