// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Math/Simulation/CRSimLinearSpring.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimLinearSpring() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimLinearSpring();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FCRSimLinearSpring
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimLinearSpring;
class UScriptStruct* FCRSimLinearSpring::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimLinearSpring.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimLinearSpring.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimLinearSpring, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimLinearSpring"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimLinearSpring.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimLinearSpring>()
{
	return FCRSimLinearSpring::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimLinearSpring.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectA_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The first point affected by this spring\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimLinearSpring.h" },
		{ "ToolTip", "The first point affected by this spring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectB_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The second point affected by this spring\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimLinearSpring.h" },
		{ "ToolTip", "The second point affected by this spring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coefficient_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The power of this spring\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimLinearSpring.h" },
		{ "ToolTip", "The power of this spring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equilibrium_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The rest length of this spring.\n\x09 * A value of lower than zero indicates that the equilibrium\n\x09 * should be based on the current distance of the two subjects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimLinearSpring.h" },
		{ "ToolTip", "The rest length of this spring.\nA value of lower than zero indicates that the equilibrium\nshould be based on the current distance of the two subjects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubjectA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubjectB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Equilibrium;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimLinearSpring>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectA = { "SubjectA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimLinearSpring, SubjectA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectA_MetaData), NewProp_SubjectA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectB = { "SubjectB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimLinearSpring, SubjectB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectB_MetaData), NewProp_SubjectB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimLinearSpring, Coefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coefficient_MetaData), NewProp_Coefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Equilibrium = { "Equilibrium", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimLinearSpring, Equilibrium), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equilibrium_MetaData), NewProp_Equilibrium_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Coefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Equilibrium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"CRSimLinearSpring",
	Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::PropPointers),
	sizeof(FCRSimLinearSpring),
	alignof(FCRSimLinearSpring),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCRSimLinearSpring()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimLinearSpring.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimLinearSpring.InnerSingleton, Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CRSimLinearSpring.InnerSingleton;
}
// End ScriptStruct FCRSimLinearSpring

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCRSimLinearSpring::StaticStruct, Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewStructOps, TEXT("CRSimLinearSpring"), &Z_Registration_Info_UScriptStruct_CRSimLinearSpring, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimLinearSpring), 1992971679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h_1497127498(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
