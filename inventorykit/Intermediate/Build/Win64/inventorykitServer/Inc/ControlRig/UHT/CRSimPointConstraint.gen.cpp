// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Math/Simulation/CRSimPointConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimPointConstraint() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ECRSimConstraintType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointConstraint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum ECRSimConstraintType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECRSimConstraintType;
static UEnum* ECRSimConstraintType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimConstraintType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ECRSimConstraintType"));
	}
	return Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ECRSimConstraintType>()
{
	return ECRSimConstraintType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Distance.Name", "ECRSimConstraintType::Distance" },
		{ "DistanceFromA.Name", "ECRSimConstraintType::DistanceFromA" },
		{ "DistanceFromB.Name", "ECRSimConstraintType::DistanceFromB" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "Plane.Name", "ECRSimConstraintType::Plane" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECRSimConstraintType::Distance", (int64)ECRSimConstraintType::Distance },
		{ "ECRSimConstraintType::DistanceFromA", (int64)ECRSimConstraintType::DistanceFromA },
		{ "ECRSimConstraintType::DistanceFromB", (int64)ECRSimConstraintType::DistanceFromB },
		{ "ECRSimConstraintType::Plane", (int64)ECRSimConstraintType::Plane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ECRSimConstraintType",
	"ECRSimConstraintType",
	Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ECRSimConstraintType()
{
	if (!Z_Registration_Info_UEnum_ECRSimConstraintType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECRSimConstraintType.InnerSingleton, Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECRSimConstraintType.InnerSingleton;
}
// End Enum ECRSimConstraintType

// Begin ScriptStruct FCRSimPointConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimPointConstraint;
class UScriptStruct* FCRSimPointConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimPointConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimPointConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimPointConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimPointConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimPointConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimPointConstraint>()
{
	return FCRSimPointConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * The type of the constraint\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "ToolTip", "The type of the constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectA_MetaData[] = {
		{ "Comment", "/**\n\x09 * The first point affected by this constraint\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "ToolTip", "The first point affected by this constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectB_MetaData[] = {
		{ "Comment", "/**\n\x09 * The (optional) second point affected by this constraint\n\x09 * This is currently only used for the distance constraint\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "ToolTip", "The (optional) second point affected by this constraint\nThis is currently only used for the distance constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataA_MetaData[] = {
		{ "Comment", "/**\n\x09 * The first data member for the constraint.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "ToolTip", "The first data member for the constraint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataB_MetaData[] = {
		{ "Comment", "/**\n\x09 * The second data member for the constraint.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "ToolTip", "The second data member for the constraint." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubjectA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubjectB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimPointConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointConstraint, Type), Z_Construct_UEnum_ControlRig_ECRSimConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3194762689
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectA = { "SubjectA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointConstraint, SubjectA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectA_MetaData), NewProp_SubjectA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectB = { "SubjectB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointConstraint, SubjectB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectB_MetaData), NewProp_SubjectB_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataA = { "DataA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointConstraint, DataA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataA_MetaData), NewProp_DataA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataB = { "DataB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRSimPointConstraint, DataB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataB_MetaData), NewProp_DataB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"CRSimPointConstraint",
	Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::PropPointers),
	sizeof(FCRSimPointConstraint),
	alignof(FCRSimPointConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimPointConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimPointConstraint.InnerSingleton, Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CRSimPointConstraint.InnerSingleton;
}
// End ScriptStruct FCRSimPointConstraint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECRSimConstraintType_StaticEnum, TEXT("ECRSimConstraintType"), &Z_Registration_Info_UEnum_ECRSimConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3194762689U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCRSimPointConstraint::StaticStruct, Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewStructOps, TEXT("CRSimPointConstraint"), &Z_Registration_Info_UScriptStruct_CRSimPointConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimPointConstraint), 1946273797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_3847490083(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
