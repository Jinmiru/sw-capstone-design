// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathQuaternion() {}

// Begin Cross Module References
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_MathQuaternionBase
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionBase>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathQuaternionBase cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase;
class UScriptStruct* FRigVMFunction_MathQuaternionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionBase>()
{
	return FRigVMFunction_MathQuaternionBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Quaternion" },
		{ "MenuDescSuffix", "(Quaternion)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathQuaternionBase),
	alignof(FRigVMFunction_MathQuaternionBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathQuaternionBase

// Begin ScriptStruct FRigVMFunction_MathQuaternionUnaryOp
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionUnaryOp>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionUnaryOp cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp;
class UScriptStruct* FRigVMFunction_MathQuaternionUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionUnaryOp>()
{
	return FRigVMFunction_MathQuaternionUnaryOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionUnaryOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionUnaryOp, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionUnaryOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionUnaryOp",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionUnaryOp),
	alignof(FRigVMFunction_MathQuaternionUnaryOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathQuaternionUnaryOp

// Begin ScriptStruct FRigVMFunction_MathQuaternionBinaryOp
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionBinaryOp>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionBinaryOp cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp;
class UScriptStruct* FRigVMFunction_MathQuaternionBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionBinaryOp>()
{
	return FRigVMFunction_MathQuaternionBinaryOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionBinaryOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryOp, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryOp, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionBinaryOp",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionBinaryOp),
	alignof(FRigVMFunction_MathQuaternionBinaryOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathQuaternionBinaryOp

// Begin ScriptStruct FRigVMFunction_MathQuaternionBinaryAggregateOp
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionBinaryAggregateOp>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionBinaryAggregateOp cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp;
class UScriptStruct* FRigVMFunction_MathQuaternionBinaryAggregateOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionBinaryAggregateOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionBinaryAggregateOp>()
{
	return FRigVMFunction_MathQuaternionBinaryAggregateOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionBinaryAggregateOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryAggregateOp, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryAggregateOp, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryAggregateOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionBinaryAggregateOp",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionBinaryAggregateOp),
	alignof(FRigVMFunction_MathQuaternionBinaryAggregateOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathQuaternionBinaryAggregateOp

// Begin ScriptStruct FRigVMFunction_MathQuaternionMake
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionMake>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionMake cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake;
class UScriptStruct* FRigVMFunction_MathQuaternionMake::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionMake"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionMake_Execute;
		Arguments_FRigVMFunction_MathQuaternionMake_Execute.Emplace(TEXT("X"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionMake_Execute.Emplace(TEXT("Y"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionMake_Execute.Emplace(TEXT("Z"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionMake_Execute.Emplace(TEXT("W"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionMake_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionMake::Execute"), &FRigVMFunction_MathQuaternionMake::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionMake_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionMake>()
{
	return FRigVMFunction_MathQuaternionMake::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from its components\n */" },
		{ "DisplayName", "Make Quat" },
		{ "Keywords", "Make,Construct,Constant" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Makes a quaternion from its components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_W;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionMake>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMake, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMake, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMake, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMake, W), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W_MetaData), NewProp_W_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMake, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_W,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionMake",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionMake),
	alignof(FRigVMFunction_MathQuaternionMake),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.InnerSingleton;
}
void FRigVMFunction_MathQuaternionMake::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionMake::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		X,
		Y,
		Z,
		W,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionMake

// Begin ScriptStruct FRigVMFunction_MathQuaternionFromAxisAndAngle
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionFromAxisAndAngle>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionFromAxisAndAngle cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle;
class UScriptStruct* FRigVMFunction_MathQuaternionFromAxisAndAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionFromAxisAndAngle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute;
		Arguments_FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Axis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Angle"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionFromAxisAndAngle::Execute"), &FRigVMFunction_MathQuaternionFromAxisAndAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionFromAxisAndAngle>()
{
	return FRigVMFunction_MathQuaternionFromAxisAndAngle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from an axis and an angle in radians\n */" },
		{ "DisplayName", "From Axis And Angle" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "FromAxisAndAngle" },
		{ "ToolTip", "Makes a quaternion from an axis and an angle in radians" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionFromAxisAndAngle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromAxisAndAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromAxisAndAngle, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromAxisAndAngle, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionFromAxisAndAngle",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionFromAxisAndAngle),
	alignof(FRigVMFunction_MathQuaternionFromAxisAndAngle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.InnerSingleton;
}
void FRigVMFunction_MathQuaternionFromAxisAndAngle::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionFromAxisAndAngle::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Axis,
		Angle,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionFromAxisAndAngle

// Begin ScriptStruct FRigVMFunction_MathQuaternionFromEuler
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionFromEuler>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionFromEuler cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler;
class UScriptStruct* FRigVMFunction_MathQuaternionFromEuler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionFromEuler"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionFromEuler_Execute;
		Arguments_FRigVMFunction_MathQuaternionFromEuler_Execute.Emplace(TEXT("Euler"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionFromEuler_Execute.Emplace(TEXT("RotationOrder"), TEXT("EEulerRotationOrder"));
		Arguments_FRigVMFunction_MathQuaternionFromEuler_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionFromEuler::Execute"), &FRigVMFunction_MathQuaternionFromEuler::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionFromEuler_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionFromEuler>()
{
	return FRigVMFunction_MathQuaternionFromEuler::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from euler values in degrees\n */" },
		{ "DisplayName", "From Euler" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "FromEuler" },
		{ "ToolTip", "Makes a quaternion from euler values in degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Euler_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Euler;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionFromEuler>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Euler = { "Euler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromEuler, Euler), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Euler_MetaData), NewProp_Euler_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromEuler, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrder_MetaData), NewProp_RotationOrder_MetaData) }; // 1031303920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromEuler, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Euler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionFromEuler",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionFromEuler),
	alignof(FRigVMFunction_MathQuaternionFromEuler),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.InnerSingleton;
}
void FRigVMFunction_MathQuaternionFromEuler::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionFromEuler::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Euler,
		RotationOrder,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionFromEuler

// Begin ScriptStruct FRigVMFunction_MathQuaternionFromRotator
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionFromRotator>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionFromRotator cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator;
class UScriptStruct* FRigVMFunction_MathQuaternionFromRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionFromRotator"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionFromRotator_Execute;
		Arguments_FRigVMFunction_MathQuaternionFromRotator_Execute.Emplace(TEXT("Rotator"), TEXT("FRotator"));
		Arguments_FRigVMFunction_MathQuaternionFromRotator_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionFromRotator::Execute"), &FRigVMFunction_MathQuaternionFromRotator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionFromRotator_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionFromRotator>()
{
	return FRigVMFunction_MathQuaternionFromRotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from a rotator\n */" },
		{ "Deprecated", "5.0.1" },
		{ "DisplayName", "From Rotator" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Makes a quaternion from a rotator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionFromRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromRotator, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator_MetaData), NewProp_Rotator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromRotator, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Rotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionFromRotator",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionFromRotator),
	alignof(FRigVMFunction_MathQuaternionFromRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.InnerSingleton;
}
void FRigVMFunction_MathQuaternionFromRotator::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionFromRotator::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Rotator,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionFromRotator

// Begin ScriptStruct FRigVMFunction_MathQuaternionFromRotatorV2
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionFromRotatorV2>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionFromRotatorV2 cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2;
class UScriptStruct* FRigVMFunction_MathQuaternionFromRotatorV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionFromRotatorV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionFromRotatorV2_Execute;
		Arguments_FRigVMFunction_MathQuaternionFromRotatorV2_Execute.Emplace(TEXT("Value"), TEXT("FRotator"));
		Arguments_FRigVMFunction_MathQuaternionFromRotatorV2_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionFromRotatorV2::Execute"), &FRigVMFunction_MathQuaternionFromRotatorV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionFromRotatorV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionFromRotatorV2>()
{
	return FRigVMFunction_MathQuaternionFromRotatorV2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from a rotator\n */" },
		{ "DisplayName", "From Rotator" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a quaternion from a rotator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionFromRotatorV2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromRotatorV2, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromRotatorV2, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionFromRotatorV2",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionFromRotatorV2),
	alignof(FRigVMFunction_MathQuaternionFromRotatorV2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.InnerSingleton;
}
void FRigVMFunction_MathQuaternionFromRotatorV2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionFromRotatorV2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionFromRotatorV2

// Begin ScriptStruct FRigVMFunction_MathQuaternionFromTwoVectors
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionFromTwoVectors>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionFromTwoVectors cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors;
class UScriptStruct* FRigVMFunction_MathQuaternionFromTwoVectors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionFromTwoVectors"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionFromTwoVectors_Execute;
		Arguments_FRigVMFunction_MathQuaternionFromTwoVectors_Execute.Emplace(TEXT("A"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionFromTwoVectors_Execute.Emplace(TEXT("B"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionFromTwoVectors_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionFromTwoVectors::Execute"), &FRigVMFunction_MathQuaternionFromTwoVectors::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionFromTwoVectors_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionFromTwoVectors>()
{
	return FRigVMFunction_MathQuaternionFromTwoVectors::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from two vectors, representing the shortest rotation between the two vectors.\n */" },
		{ "DisplayName", "From Two Vectors" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "FromTwoVectors" },
		{ "ToolTip", "Makes a quaternion from two vectors, representing the shortest rotation between the two vectors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionFromTwoVectors>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromTwoVectors, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromTwoVectors, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromTwoVectors, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionFromTwoVectors",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionFromTwoVectors),
	alignof(FRigVMFunction_MathQuaternionFromTwoVectors),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.InnerSingleton;
}
void FRigVMFunction_MathQuaternionFromTwoVectors::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionFromTwoVectors::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionFromTwoVectors

// Begin ScriptStruct FRigVMFunction_MathQuaternionToAxisAndAngle
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionToAxisAndAngle>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionToAxisAndAngle cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle;
class UScriptStruct* FRigVMFunction_MathQuaternionToAxisAndAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionToAxisAndAngle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionToAxisAndAngle_Execute;
		Arguments_FRigVMFunction_MathQuaternionToAxisAndAngle_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionToAxisAndAngle_Execute.Emplace(TEXT("Axis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionToAxisAndAngle_Execute.Emplace(TEXT("Angle"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionToAxisAndAngle::Execute"), &FRigVMFunction_MathQuaternionToAxisAndAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionToAxisAndAngle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionToAxisAndAngle>()
{
	return FRigVMFunction_MathQuaternionToAxisAndAngle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Retrieves the axis and angle of a quaternion in radians\n */" },
		{ "DisplayName", "To Axis And Angle" },
		{ "Keywords", "Make,Construct,GetAxis,GetAngle" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "ToAxisAndAngle" },
		{ "ToolTip", "Retrieves the axis and angle of a quaternion in radians" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionToAxisAndAngle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToAxisAndAngle, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToAxisAndAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToAxisAndAngle, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionToAxisAndAngle",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionToAxisAndAngle),
	alignof(FRigVMFunction_MathQuaternionToAxisAndAngle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.InnerSingleton;
}
void FRigVMFunction_MathQuaternionToAxisAndAngle::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionToAxisAndAngle::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Axis,
		Angle
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionToAxisAndAngle

// Begin ScriptStruct FRigVMFunction_MathQuaternionToVectors
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionToVectors>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionToVectors cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToVectors;
class UScriptStruct* FRigVMFunction_MathQuaternionToVectors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToVectors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToVectors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionToVectors"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionToVectors_Execute;
		Arguments_FRigVMFunction_MathQuaternionToVectors_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionToVectors_Execute.Emplace(TEXT("Forward"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionToVectors_Execute.Emplace(TEXT("Right"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionToVectors_Execute.Emplace(TEXT("Up"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionToVectors::Execute"), &FRigVMFunction_MathQuaternionToVectors::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToVectors.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionToVectors_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToVectors.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionToVectors>()
{
	return FRigVMFunction_MathQuaternionToVectors::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Retrieves the forward, right and up vectors of a quaternion\n */" },
		{ "DisplayName", "To Vectors" },
		{ "Keywords", "Forward,Right,Up" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "ToVectors" },
		{ "ToolTip", "Retrieves the forward, right and up vectors of a quaternion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionToVectors>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToVectors, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToVectors, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Forward_MetaData), NewProp_Forward_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToVectors, Right), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToVectors, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Up_MetaData), NewProp_Up_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::NewProp_Forward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::NewProp_Up,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionToVectors",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionToVectors),
	alignof(FRigVMFunction_MathQuaternionToVectors),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToVectors.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToVectors.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToVectors.InnerSingleton;
}
void FRigVMFunction_MathQuaternionToVectors::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionToVectors::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Forward,
		Right,
		Up
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionToVectors

// Begin ScriptStruct FRigVMFunction_MathQuaternionScale
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionScale>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionScale cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale;
class UScriptStruct* FRigVMFunction_MathQuaternionScale::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionScale"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionScale_Execute;
		Arguments_FRigVMFunction_MathQuaternionScale_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionScale_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionScale::Execute"), &FRigVMFunction_MathQuaternionScale::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionScale_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionScale>()
{
	return FRigVMFunction_MathQuaternionScale::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Scales a quaternion's angle\n */" },
		{ "Constant", "" },
		{ "Deprecated", "5.0.1" },
		{ "DisplayName", "Scale" },
		{ "Keywords", "Multiply,Angle,Scale" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Scales a quaternion's angle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionScale>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionScale, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionScale, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionScale",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionScale),
	alignof(FRigVMFunction_MathQuaternionScale),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.InnerSingleton;
}
void FRigVMFunction_MathQuaternionScale::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionScale::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Scale
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionScale

// Begin ScriptStruct FRigVMFunction_MathQuaternionScaleV2
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionScaleV2>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionScaleV2 cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2;
class UScriptStruct* FRigVMFunction_MathQuaternionScaleV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionScaleV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionScaleV2_Execute;
		Arguments_FRigVMFunction_MathQuaternionScaleV2_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionScaleV2_Execute.Emplace(TEXT("Factor"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionScaleV2_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionScaleV2::Execute"), &FRigVMFunction_MathQuaternionScaleV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionScaleV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionScaleV2>()
{
	return FRigVMFunction_MathQuaternionScaleV2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Scales a quaternion's angle\n */" },
		{ "Constant", "" },
		{ "DisplayName", "Scale" },
		{ "Keywords", "Multiply,Angle,Scale" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Scale" },
		{ "ToolTip", "Scales a quaternion's angle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factor_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Factor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionScaleV2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionScaleV2, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionScaleV2, Factor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factor_MetaData), NewProp_Factor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionScaleV2, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Factor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionScaleV2",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionScaleV2),
	alignof(FRigVMFunction_MathQuaternionScaleV2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.InnerSingleton;
}
void FRigVMFunction_MathQuaternionScaleV2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionScaleV2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Factor,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionScaleV2

// Begin ScriptStruct FRigVMFunction_MathQuaternionToEuler
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionToEuler>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionToEuler cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler;
class UScriptStruct* FRigVMFunction_MathQuaternionToEuler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionToEuler"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionToEuler_Execute;
		Arguments_FRigVMFunction_MathQuaternionToEuler_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionToEuler_Execute.Emplace(TEXT("RotationOrder"), TEXT("EEulerRotationOrder"));
		Arguments_FRigVMFunction_MathQuaternionToEuler_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionToEuler::Execute"), &FRigVMFunction_MathQuaternionToEuler::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionToEuler_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionToEuler>()
{
	return FRigVMFunction_MathQuaternionToEuler::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Retrieves the euler angles in degrees\n */" },
		{ "DisplayName", "To Euler" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "ToEuler" },
		{ "ToolTip", "Retrieves the euler angles in degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionToEuler>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToEuler, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToEuler, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrder_MetaData), NewProp_RotationOrder_MetaData) }; // 1031303920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToEuler, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionToEuler",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionToEuler),
	alignof(FRigVMFunction_MathQuaternionToEuler),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.InnerSingleton;
}
void FRigVMFunction_MathQuaternionToEuler::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionToEuler::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		RotationOrder,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionToEuler

// Begin ScriptStruct FRigVMFunction_MathQuaternionToRotator
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionToRotator>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionToRotator cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator;
class UScriptStruct* FRigVMFunction_MathQuaternionToRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionToRotator"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionToRotator_Execute;
		Arguments_FRigVMFunction_MathQuaternionToRotator_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionToRotator_Execute.Emplace(TEXT("Result"), TEXT("FRotator"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionToRotator::Execute"), &FRigVMFunction_MathQuaternionToRotator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionToRotator_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionToRotator>()
{
	return FRigVMFunction_MathQuaternionToRotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Retrieves the rotator\n */" },
		{ "DisplayName", "To Rotator" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Retrieves the rotator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionToRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToRotator, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToRotator, Result), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionToRotator",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionToRotator),
	alignof(FRigVMFunction_MathQuaternionToRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.InnerSingleton;
}
void FRigVMFunction_MathQuaternionToRotator::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionToRotator::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionToRotator

// Begin ScriptStruct FRigVMFunction_MathQuaternionMul
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionMul>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathQuaternionMul cannot be polymorphic unless super FRigVMFunction_MathQuaternionBinaryAggregateOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul;
class UScriptStruct* FRigVMFunction_MathQuaternionMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionMul_Execute;
		Arguments_FRigVMFunction_MathQuaternionMul_Execute.Emplace(TEXT("A"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMul_Execute.Emplace(TEXT("B"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMul_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionMul::Execute"), &FRigVMFunction_MathQuaternionMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionMul>()
{
	return FRigVMFunction_MathQuaternionMul::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionMul>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp,
	&NewStructOps,
	"RigVMFunction_MathQuaternionMul",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathQuaternionMul),
	alignof(FRigVMFunction_MathQuaternionMul),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.InnerSingleton;
}
void FRigVMFunction_MathQuaternionMul::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionMul::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionMul

// Begin ScriptStruct FRigVMFunction_MathQuaternionInverse
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionInverse>() == std::is_polymorphic<FRigVMFunction_MathQuaternionUnaryOp>(), "USTRUCT FRigVMFunction_MathQuaternionInverse cannot be polymorphic unless super FRigVMFunction_MathQuaternionUnaryOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse;
class UScriptStruct* FRigVMFunction_MathQuaternionInverse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionInverse"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionInverse_Execute;
		Arguments_FRigVMFunction_MathQuaternionInverse_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionInverse_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionInverse::Execute"), &FRigVMFunction_MathQuaternionInverse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionInverse_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionInverse>()
{
	return FRigVMFunction_MathQuaternionInverse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the negative value\n */" },
		{ "DisplayName", "Inverse" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Inverse" },
		{ "ToolTip", "Returns the negative value" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionInverse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp,
	&NewStructOps,
	"RigVMFunction_MathQuaternionInverse",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathQuaternionInverse),
	alignof(FRigVMFunction_MathQuaternionInverse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.InnerSingleton;
}
void FRigVMFunction_MathQuaternionInverse::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionInverse::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionInverse

// Begin ScriptStruct FRigVMFunction_MathQuaternionSlerp
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionSlerp>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionSlerp cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp;
class UScriptStruct* FRigVMFunction_MathQuaternionSlerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionSlerp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionSlerp_Execute;
		Arguments_FRigVMFunction_MathQuaternionSlerp_Execute.Emplace(TEXT("A"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSlerp_Execute.Emplace(TEXT("B"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSlerp_Execute.Emplace(TEXT("T"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionSlerp_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionSlerp::Execute"), &FRigVMFunction_MathQuaternionSlerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionSlerp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionSlerp>()
{
	return FRigVMFunction_MathQuaternionSlerp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Linearly interpolates between A and B using the ratio T\n */" },
		{ "DisplayName", "Interpolate" },
		{ "Keywords", "Lerp,Mix,Blend,Slerp,SphericalInterpolate" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Interpolate" },
		{ "ToolTip", "Linearly interpolates between A and B using the ratio T" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_T;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionSlerp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSlerp, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSlerp, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSlerp, T), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_MetaData), NewProp_T_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSlerp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionSlerp",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionSlerp),
	alignof(FRigVMFunction_MathQuaternionSlerp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.InnerSingleton;
}
void FRigVMFunction_MathQuaternionSlerp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionSlerp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		T,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionSlerp

// Begin ScriptStruct FRigVMFunction_MathQuaternionEquals
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionEquals>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionEquals cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals;
class UScriptStruct* FRigVMFunction_MathQuaternionEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionEquals_Execute;
		Arguments_FRigVMFunction_MathQuaternionEquals_Execute.Emplace(TEXT("A"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionEquals_Execute.Emplace(TEXT("B"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionEquals::Execute"), &FRigVMFunction_MathQuaternionEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionEquals>()
{
	return FRigVMFunction_MathQuaternionEquals::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A equals B\n */" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Equals" },
		{ "Keywords", "Same,==" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Equals" },
		{ "ToolTip", "Returns true if the value A equals B" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionEquals>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionEquals, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionEquals, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigVMFunction_MathQuaternionEquals*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_MathQuaternionEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionEquals",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionEquals),
	alignof(FRigVMFunction_MathQuaternionEquals),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.InnerSingleton;
}
void FRigVMFunction_MathQuaternionEquals::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionEquals::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionEquals

// Begin ScriptStruct FRigVMFunction_MathQuaternionNotEquals
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionNotEquals>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionNotEquals cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals;
class UScriptStruct* FRigVMFunction_MathQuaternionNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionNotEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionNotEquals_Execute;
		Arguments_FRigVMFunction_MathQuaternionNotEquals_Execute.Emplace(TEXT("A"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionNotEquals_Execute.Emplace(TEXT("B"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionNotEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionNotEquals::Execute"), &FRigVMFunction_MathQuaternionNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionNotEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionNotEquals>()
{
	return FRigVMFunction_MathQuaternionNotEquals::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A does not equal B\n */" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Not Equals" },
		{ "Keywords", "Different,!=" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "NotEquals" },
		{ "ToolTip", "Returns true if the value A does not equal B" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionNotEquals>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionNotEquals, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionNotEquals, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigVMFunction_MathQuaternionNotEquals*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_MathQuaternionNotEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionNotEquals",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionNotEquals),
	alignof(FRigVMFunction_MathQuaternionNotEquals),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.InnerSingleton;
}
void FRigVMFunction_MathQuaternionNotEquals::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionNotEquals::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionNotEquals

// Begin ScriptStruct FRigVMFunction_MathQuaternionSelectBool
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionSelectBool>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionSelectBool cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool;
class UScriptStruct* FRigVMFunction_MathQuaternionSelectBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionSelectBool"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute;
		Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute.Emplace(TEXT("Condition"), TEXT("bool"));
		Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute.Emplace(TEXT("IfTrue"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute.Emplace(TEXT("IfFalse"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionSelectBool::Execute"), &FRigVMFunction_MathQuaternionSelectBool::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionSelectBool>()
{
	return FRigVMFunction_MathQuaternionSelectBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Return one of the two values based on the condition\n */" },
		{ "Deprecated", "4.26.0" },
		{ "DisplayName", "Select" },
		{ "Keywords", "Pick,If" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Return one of the two values based on the condition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IfTrue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IfFalse_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Condition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IfTrue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IfFalse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionSelectBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition_SetBit(void* Obj)
{
	((FRigVMFunction_MathQuaternionSelectBool*)Obj)->Condition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_MathQuaternionSelectBool), &Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfTrue = { "IfTrue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSelectBool, IfTrue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IfTrue_MetaData), NewProp_IfTrue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfFalse = { "IfFalse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSelectBool, IfFalse), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IfFalse_MetaData), NewProp_IfFalse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSelectBool, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfFalse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionSelectBool",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionSelectBool),
	alignof(FRigVMFunction_MathQuaternionSelectBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.InnerSingleton;
}
void FRigVMFunction_MathQuaternionSelectBool::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionSelectBool::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Condition,
		IfTrue,
		IfFalse,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionSelectBool

// Begin ScriptStruct FRigVMFunction_MathQuaternionDot
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionDot>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionDot cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot;
class UScriptStruct* FRigVMFunction_MathQuaternionDot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionDot"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionDot_Execute;
		Arguments_FRigVMFunction_MathQuaternionDot_Execute.Emplace(TEXT("A"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionDot_Execute.Emplace(TEXT("B"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionDot_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionDot::Execute"), &FRigVMFunction_MathQuaternionDot::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionDot_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionDot>()
{
	return FRigVMFunction_MathQuaternionDot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the dot product between two quaternions\n */" },
		{ "DisplayName", "Dot" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Dot,|" },
		{ "ToolTip", "Returns the dot product between two quaternions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionDot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionDot, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionDot, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionDot, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionDot",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionDot),
	alignof(FRigVMFunction_MathQuaternionDot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.InnerSingleton;
}
void FRigVMFunction_MathQuaternionDot::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionDot::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionDot

// Begin ScriptStruct FRigVMFunction_MathQuaternionUnit
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionUnit>() == std::is_polymorphic<FRigVMFunction_MathQuaternionUnaryOp>(), "USTRUCT FRigVMFunction_MathQuaternionUnit cannot be polymorphic unless super FRigVMFunction_MathQuaternionUnaryOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit;
class UScriptStruct* FRigVMFunction_MathQuaternionUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionUnit"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionUnit_Execute;
		Arguments_FRigVMFunction_MathQuaternionUnit_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionUnit_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionUnit::Execute"), &FRigVMFunction_MathQuaternionUnit::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionUnit_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionUnit>()
{
	return FRigVMFunction_MathQuaternionUnit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the normalized quaternion\n */" },
		{ "DisplayName", "Unit" },
		{ "Keywords", "Normalize" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Unit" },
		{ "ToolTip", "Returns the normalized quaternion" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionUnit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp,
	&NewStructOps,
	"RigVMFunction_MathQuaternionUnit",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathQuaternionUnit),
	alignof(FRigVMFunction_MathQuaternionUnit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.InnerSingleton;
}
void FRigVMFunction_MathQuaternionUnit::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionUnit::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionUnit

// Begin ScriptStruct FRigVMFunction_MathQuaternionRotateVector
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionRotateVector>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionRotateVector cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector;
class UScriptStruct* FRigVMFunction_MathQuaternionRotateVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionRotateVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionRotateVector_Execute;
		Arguments_FRigVMFunction_MathQuaternionRotateVector_Execute.Emplace(TEXT("Transform"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionRotateVector_Execute.Emplace(TEXT("Vector"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionRotateVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionRotateVector::Execute"), &FRigVMFunction_MathQuaternionRotateVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionRotateVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionRotateVector>()
{
	return FRigVMFunction_MathQuaternionRotateVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Rotates a given vector by the quaternion\n */" },
		{ "DisplayName", "Rotate Vector" },
		{ "Keywords", "Transform,Multiply" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Rotate Vector" },
		{ "ToolTip", "Rotates a given vector by the quaternion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionRotateVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionRotateVector, Transform), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionRotateVector, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionRotateVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionRotateVector",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionRotateVector),
	alignof(FRigVMFunction_MathQuaternionRotateVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.InnerSingleton;
}
void FRigVMFunction_MathQuaternionRotateVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionRotateVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Vector,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionRotateVector

// Begin ScriptStruct FRigVMFunction_MathQuaternionGetAxis
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionGetAxis>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionGetAxis cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis;
class UScriptStruct* FRigVMFunction_MathQuaternionGetAxis::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionGetAxis"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionGetAxis_Execute;
		Arguments_FRigVMFunction_MathQuaternionGetAxis_Execute.Emplace(TEXT("Quaternion"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionGetAxis_Execute.Emplace(TEXT("Axis"), TEXT("EAxis::Type"));
		Arguments_FRigVMFunction_MathQuaternionGetAxis_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionGetAxis::Execute"), &FRigVMFunction_MathQuaternionGetAxis::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionGetAxis_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionGetAxis>()
{
	return FRigVMFunction_MathQuaternionGetAxis::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Rotates a given vector by the quaternion\n */" },
		{ "DisplayName", "Axis" },
		{ "Keywords", "GetAxis,xAxis,yAxis,zAxis" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Axis" },
		{ "ToolTip", "Rotates a given vector by the quaternion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionGetAxis>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Quaternion = { "Quaternion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionGetAxis, Quaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quaternion_MetaData), NewProp_Quaternion_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionGetAxis, Axis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) }; // 342925220
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionGetAxis, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Quaternion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionGetAxis",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionGetAxis),
	alignof(FRigVMFunction_MathQuaternionGetAxis),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.InnerSingleton;
}
void FRigVMFunction_MathQuaternionGetAxis::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionGetAxis::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Quaternion,
		Axis,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionGetAxis

// Begin ScriptStruct FRigVMFunction_MathQuaternionSwingTwist
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionSwingTwist>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionSwingTwist cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist;
class UScriptStruct* FRigVMFunction_MathQuaternionSwingTwist::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionSwingTwist"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute;
		Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute.Emplace(TEXT("Input"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute.Emplace(TEXT("TwistAxis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute.Emplace(TEXT("Swing"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute.Emplace(TEXT("Twist"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionSwingTwist::Execute"), &FRigVMFunction_MathQuaternionSwingTwist::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionSwingTwist>()
{
	return FRigVMFunction_MathQuaternionSwingTwist::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Computes the swing and twist components of a quaternion\n */" },
		{ "DisplayName", "To Swing & Twist" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Computes the swing and twist components of a quaternion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Swing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionSwingTwist>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSwingTwist, Input), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSwingTwist, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistAxis_MetaData), NewProp_TwistAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Swing = { "Swing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSwingTwist, Swing), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing_MetaData), NewProp_Swing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSwingTwist, Twist), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Twist_MetaData), NewProp_Twist_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Swing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Twist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionSwingTwist",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionSwingTwist),
	alignof(FRigVMFunction_MathQuaternionSwingTwist),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.InnerSingleton;
}
void FRigVMFunction_MathQuaternionSwingTwist::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionSwingTwist::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		TwistAxis,
		Swing,
		Twist
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionSwingTwist

// Begin ScriptStruct FRigVMFunction_MathQuaternionRotationOrder
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionRotationOrder>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathQuaternionRotationOrder cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder;
class UScriptStruct* FRigVMFunction_MathQuaternionRotationOrder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionRotationOrder"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionRotationOrder_Execute;
		Arguments_FRigVMFunction_MathQuaternionRotationOrder_Execute.Emplace(TEXT("RotationOrder"), TEXT("EEulerRotationOrder"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionRotationOrder::Execute"), &FRigVMFunction_MathQuaternionRotationOrder::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionRotationOrder_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionRotationOrder>()
{
	return FRigVMFunction_MathQuaternionRotationOrder::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Math|Quaternion" },
		{ "Comment", "/**\n * Enum of possible rotation orders\n */" },
		{ "Constant", "" },
		{ "DisplayName", "Rotation Order" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Enum of possible rotation orders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionRotationOrder>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionRotationOrder, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrder_MetaData), NewProp_RotationOrder_MetaData) }; // 1031303920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionRotationOrder",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionRotationOrder),
	alignof(FRigVMFunction_MathQuaternionRotationOrder),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.InnerSingleton;
}
void FRigVMFunction_MathQuaternionRotationOrder::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionRotationOrder::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		RotationOrder
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionRotationOrder

// Begin ScriptStruct FRigVMFunction_MathQuaternionMakeRelative
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionMakeRelative>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionMakeRelative cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative;
class UScriptStruct* FRigVMFunction_MathQuaternionMakeRelative::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionMakeRelative"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionMakeRelative_Execute;
		Arguments_FRigVMFunction_MathQuaternionMakeRelative_Execute.Emplace(TEXT("Global"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMakeRelative_Execute.Emplace(TEXT("Parent"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMakeRelative_Execute.Emplace(TEXT("Local"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionMakeRelative::Execute"), &FRigVMFunction_MathQuaternionMakeRelative::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionMakeRelative_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionMakeRelative>()
{
	return FRigVMFunction_MathQuaternionMakeRelative::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the relative local transform within a parent's transform\n */" },
		{ "DisplayName", "Make Relative" },
		{ "Keywords", "Local,Global,Absolute" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Make Relative" },
		{ "ToolTip", "Returns the relative local transform within a parent's transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Local_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Local;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionMakeRelative>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeRelative, Global), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Global_MetaData), NewProp_Global_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeRelative, Parent), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeRelative, Local), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Local_MetaData), NewProp_Local_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Global,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Local,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionMakeRelative",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionMakeRelative),
	alignof(FRigVMFunction_MathQuaternionMakeRelative),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.InnerSingleton;
}
void FRigVMFunction_MathQuaternionMakeRelative::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionMakeRelative::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Global,
		Parent,
		Local
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionMakeRelative

// Begin ScriptStruct FRigVMFunction_MathQuaternionMakeAbsolute
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionMakeAbsolute>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionMakeAbsolute cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute;
class UScriptStruct* FRigVMFunction_MathQuaternionMakeAbsolute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionMakeAbsolute"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionMakeAbsolute_Execute;
		Arguments_FRigVMFunction_MathQuaternionMakeAbsolute_Execute.Emplace(TEXT("Local"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMakeAbsolute_Execute.Emplace(TEXT("Parent"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMakeAbsolute_Execute.Emplace(TEXT("Global"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionMakeAbsolute::Execute"), &FRigVMFunction_MathQuaternionMakeAbsolute::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionMakeAbsolute_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionMakeAbsolute>()
{
	return FRigVMFunction_MathQuaternionMakeAbsolute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the absolute global transform within a parent's transform\n */" },
		{ "DisplayName", "Make Absolute" },
		{ "Keywords", "Local,Global,Relative" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Make Absolute" },
		{ "ToolTip", "Returns the absolute global transform within a parent's transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Local_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Local;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionMakeAbsolute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeAbsolute, Local), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Local_MetaData), NewProp_Local_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeAbsolute, Parent), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeAbsolute, Global), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Global_MetaData), NewProp_Global_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Local,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Global,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionMakeAbsolute",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionMakeAbsolute),
	alignof(FRigVMFunction_MathQuaternionMakeAbsolute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.InnerSingleton;
}
void FRigVMFunction_MathQuaternionMakeAbsolute::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionMakeAbsolute::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Local,
		Parent,
		Global
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionMakeAbsolute

// Begin ScriptStruct FRigVMFunction_MathQuaternionMirrorTransform
static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionMirrorTransform>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionMirrorTransform cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform;
class UScriptStruct* FRigVMFunction_MathQuaternionMirrorTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionMirrorTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute;
		Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute.Emplace(TEXT("MirrorAxis"), TEXT("EAxis::Type"));
		Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute.Emplace(TEXT("AxisToFlip"), TEXT("EAxis::Type"));
		Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute.Emplace(TEXT("CentralTransform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionMirrorTransform::Execute"), &FRigVMFunction_MathQuaternionMirrorTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionMirrorTransform>()
{
	return FRigVMFunction_MathQuaternionMirrorTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Mirror a rotation about a central transform.\n */" },
		{ "DisplayName", "Mirror" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Mirror" },
		{ "ToolTip", "Mirror a rotation about a central transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the axis to mirror against\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "the axis to mirror against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisToFlip_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the axis to flip for rotations\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "the axis to flip for rotations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CentralTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The transform about which to mirror\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "The transform about which to mirror" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToFlip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CentralTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionMirrorTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMirrorTransform, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMirrorTransform, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorAxis_MetaData), NewProp_MirrorAxis_MetaData) }; // 342925220
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_AxisToFlip = { "AxisToFlip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMirrorTransform, AxisToFlip), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisToFlip_MetaData), NewProp_AxisToFlip_MetaData) }; // 342925220
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_CentralTransform = { "CentralTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMirrorTransform, CentralTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CentralTransform_MetaData), NewProp_CentralTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMirrorTransform, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_MirrorAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_AxisToFlip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_CentralTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
	&NewStructOps,
	"RigVMFunction_MathQuaternionMirrorTransform",
	Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::PropPointers),
	sizeof(FRigVMFunction_MathQuaternionMirrorTransform),
	alignof(FRigVMFunction_MathQuaternionMirrorTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.InnerSingleton;
}
void FRigVMFunction_MathQuaternionMirrorTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathQuaternionMirrorTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		MirrorAxis,
		AxisToFlip,
		CentralTransform,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathQuaternionMirrorTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_MathQuaternionBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionBase), 3093044371U) },
		{ FRigVMFunction_MathQuaternionUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionUnaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionUnaryOp), 341537116U) },
		{ FRigVMFunction_MathQuaternionBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionBinaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionBinaryOp), 3674233787U) },
		{ FRigVMFunction_MathQuaternionBinaryAggregateOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionBinaryAggregateOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionBinaryAggregateOp), 1257570527U) },
		{ FRigVMFunction_MathQuaternionMake::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionMake"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionMake), 3280369301U) },
		{ FRigVMFunction_MathQuaternionFromAxisAndAngle::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionFromAxisAndAngle"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionFromAxisAndAngle), 1788604528U) },
		{ FRigVMFunction_MathQuaternionFromEuler::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionFromEuler"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionFromEuler), 734569845U) },
		{ FRigVMFunction_MathQuaternionFromRotator::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionFromRotator"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionFromRotator), 4033507404U) },
		{ FRigVMFunction_MathQuaternionFromRotatorV2::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionFromRotatorV2"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionFromRotatorV2), 3452576267U) },
		{ FRigVMFunction_MathQuaternionFromTwoVectors::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionFromTwoVectors"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionFromTwoVectors), 47200365U) },
		{ FRigVMFunction_MathQuaternionToAxisAndAngle::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionToAxisAndAngle"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionToAxisAndAngle), 3761863186U) },
		{ FRigVMFunction_MathQuaternionToVectors::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionToVectors"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToVectors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionToVectors), 3396765466U) },
		{ FRigVMFunction_MathQuaternionScale::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionScale"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionScale), 2640779136U) },
		{ FRigVMFunction_MathQuaternionScaleV2::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionScaleV2"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionScaleV2), 231433859U) },
		{ FRigVMFunction_MathQuaternionToEuler::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionToEuler"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionToEuler), 4034206159U) },
		{ FRigVMFunction_MathQuaternionToRotator::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionToRotator"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionToRotator), 3202279023U) },
		{ FRigVMFunction_MathQuaternionMul::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionMul"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionMul), 2167477431U) },
		{ FRigVMFunction_MathQuaternionInverse::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionInverse"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionInverse), 724116051U) },
		{ FRigVMFunction_MathQuaternionSlerp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionSlerp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionSlerp), 204768189U) },
		{ FRigVMFunction_MathQuaternionEquals::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionEquals"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionEquals), 442799215U) },
		{ FRigVMFunction_MathQuaternionNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionNotEquals"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionNotEquals), 1045461816U) },
		{ FRigVMFunction_MathQuaternionSelectBool::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionSelectBool"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionSelectBool), 150165548U) },
		{ FRigVMFunction_MathQuaternionDot::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionDot"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionDot), 3332221680U) },
		{ FRigVMFunction_MathQuaternionUnit::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionUnit"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionUnit), 477412503U) },
		{ FRigVMFunction_MathQuaternionRotateVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionRotateVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionRotateVector), 348491331U) },
		{ FRigVMFunction_MathQuaternionGetAxis::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionGetAxis"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionGetAxis), 1741431469U) },
		{ FRigVMFunction_MathQuaternionSwingTwist::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionSwingTwist"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionSwingTwist), 1615150081U) },
		{ FRigVMFunction_MathQuaternionRotationOrder::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionRotationOrder"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionRotationOrder), 3861546982U) },
		{ FRigVMFunction_MathQuaternionMakeRelative::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionMakeRelative"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionMakeRelative), 478627923U) },
		{ FRigVMFunction_MathQuaternionMakeAbsolute::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionMakeAbsolute"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionMakeAbsolute), 901521620U) },
		{ FRigVMFunction_MathQuaternionMirrorTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionMirrorTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionMirrorTransform), 1142565067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_2572639986(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
