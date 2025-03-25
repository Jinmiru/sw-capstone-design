// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Math/Simulation/CRSimPointForce.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimPointForce() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ECRSimPointForceType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointForce();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum ECRSimPointForceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECRSimPointForceType;
static UEnum* ECRSimPointForceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimPointForceType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ECRSimPointForceType"));
	}
	return Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ECRSimPointForceType>()
{
	return ECRSimPointForceType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Direction.Name", "ECRSimPointForceType::Direction" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECRSimPointForceType::Direction", (int64)ECRSimPointForceType::Direction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ECRSimPointForceType",
	"ECRSimPointForceType",
	Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ECRSimPointForceType()
{
	if (!Z_Registration_Info_UEnum_ECRSimPointForceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECRSimPointForceType.InnerSingleton, Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECRSimPointForceType.InnerSingleton;
}
// End Enum ECRSimPointForceType

// Begin ScriptStruct FCRSimPointForce
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimPointForce;
class UScriptStruct* FCRSimPointForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimPointForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimPointForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimPointForce, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimPointForce"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimPointForce.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimPointForce>()
{
	return FCRSimPointForce::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCRSimPointForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceType_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The type of force.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
		{ "ToolTip", "The type of force." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The point / direction to use for the force.\n\x09 * This is a direction for direction based forces,\n\x09 * while this is a position for attractor / repel based forces.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
		{ "ToolTip", "The point / direction to use for the force.\nThis is a direction for direction based forces,\nwhile this is a position for attractor / repel based forces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coefficient_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The strength of the force (a multiplier for direction based forces)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
		{ "ToolTip", "The strength of the force (a multiplier for direction based forces)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * If set to true the input vector will be normalized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
		{ "ToolTip", "If set to true the input vector will be normalized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
	static void NewProp_bNormalize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimPointForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType = { "ForceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointForce, ForceType), Z_Construct_UEnum_ControlRig_ECRSimPointForceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceType_MetaData), NewProp_ForceType_MetaData) }; // 3760396945
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointForce, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointForce, Coefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coefficient_MetaData), NewProp_Coefficient_MetaData) };
void Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize_SetBit(void* Obj)
{
	((FCRSimPointForce*)Obj)->bNormalize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCRSimPointForce), &Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalize_MetaData), NewProp_bNormalize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimPointForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Coefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"CRSimPointForce",
	Z_Construct_UScriptStruct_FCRSimPointForce_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::PropPointers),
	sizeof(FCRSimPointForce),
	alignof(FCRSimPointForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCRSimPointForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointForce()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimPointForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimPointForce.InnerSingleton, Z_Construct_UScriptStruct_FCRSimPointForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CRSimPointForce.InnerSingleton;
}
// End ScriptStruct FCRSimPointForce

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECRSimPointForceType_StaticEnum, TEXT("ECRSimPointForceType"), &Z_Registration_Info_UEnum_ECRSimPointForceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3760396945U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCRSimPointForce::StaticStruct, Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewStructOps, TEXT("CRSimPointForce"), &Z_Registration_Info_UScriptStruct_CRSimPointForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimPointForce), 3337756034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_3573290000(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
