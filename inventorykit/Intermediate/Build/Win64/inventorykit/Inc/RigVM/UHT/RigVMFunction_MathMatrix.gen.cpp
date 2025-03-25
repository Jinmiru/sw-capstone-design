// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathMatrix() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_MathMatrixBase
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixBase>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathMatrixBase cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBase;
class UScriptStruct* FRigVMFunction_MathMatrixBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixBase>()
{
	return FRigVMFunction_MathMatrixBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Matrix" },
		{ "MenuDescSuffix", "(Matrix)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
	&NewStructOps,
	"RigVMFunction_MathMatrixBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathMatrixBase),
	alignof(FRigVMFunction_MathMatrixBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathMatrixBase

// Begin ScriptStruct FRigVMFunction_MathMatrixUnaryOp
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixUnaryOp>() == std::is_polymorphic<FRigVMFunction_MathMatrixBase>(), "USTRUCT FRigVMFunction_MathMatrixUnaryOp cannot be polymorphic unless super FRigVMFunction_MathMatrixBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixUnaryOp;
class UScriptStruct* FRigVMFunction_MathMatrixUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixUnaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixUnaryOp>()
{
	return FRigVMFunction_MathMatrixUnaryOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixUnaryOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixUnaryOp, Value), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixUnaryOp, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase,
	&NewStructOps,
	"RigVMFunction_MathMatrixUnaryOp",
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::PropPointers),
	sizeof(FRigVMFunction_MathMatrixUnaryOp),
	alignof(FRigVMFunction_MathMatrixUnaryOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixUnaryOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixUnaryOp.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathMatrixUnaryOp

// Begin ScriptStruct FRigVMFunction_MathMatrixBinaryOp
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixBinaryOp>() == std::is_polymorphic<FRigVMFunction_MathMatrixBase>(), "USTRUCT FRigVMFunction_MathMatrixBinaryOp cannot be polymorphic unless super FRigVMFunction_MathMatrixBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryOp;
class UScriptStruct* FRigVMFunction_MathMatrixBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixBinaryOp>()
{
	return FRigVMFunction_MathMatrixBinaryOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixBinaryOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixBinaryOp, A), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixBinaryOp, B), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixBinaryOp, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase,
	&NewStructOps,
	"RigVMFunction_MathMatrixBinaryOp",
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::PropPointers),
	sizeof(FRigVMFunction_MathMatrixBinaryOp),
	alignof(FRigVMFunction_MathMatrixBinaryOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryOp.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathMatrixBinaryOp

// Begin ScriptStruct FRigVMFunction_MathMatrixBinaryAggregateOp
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixBinaryAggregateOp>() == std::is_polymorphic<FRigVMFunction_MathMatrixBase>(), "USTRUCT FRigVMFunction_MathMatrixBinaryAggregateOp cannot be polymorphic unless super FRigVMFunction_MathMatrixBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryAggregateOp;
class UScriptStruct* FRigVMFunction_MathMatrixBinaryAggregateOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryAggregateOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryAggregateOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixBinaryAggregateOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryAggregateOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixBinaryAggregateOp>()
{
	return FRigVMFunction_MathMatrixBinaryAggregateOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixBinaryAggregateOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixBinaryAggregateOp, A), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixBinaryAggregateOp, B), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixBinaryAggregateOp, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase,
	&NewStructOps,
	"RigVMFunction_MathMatrixBinaryAggregateOp",
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::PropPointers),
	sizeof(FRigVMFunction_MathMatrixBinaryAggregateOp),
	alignof(FRigVMFunction_MathMatrixBinaryAggregateOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryAggregateOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryAggregateOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryAggregateOp.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathMatrixBinaryAggregateOp

// Begin ScriptStruct FRigVMFunction_MathMatrixToTransform
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixToTransform>() == std::is_polymorphic<FRigVMFunction_MathMatrixBase>(), "USTRUCT FRigVMFunction_MathMatrixToTransform cannot be polymorphic unless super FRigVMFunction_MathMatrixBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToTransform;
class UScriptStruct* FRigVMFunction_MathMatrixToTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixToTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathMatrixToTransform_Execute;
		Arguments_FRigVMFunction_MathMatrixToTransform_Execute.Emplace(TEXT("Value"), TEXT("FMatrix"));
		Arguments_FRigVMFunction_MathMatrixToTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathMatrixToTransform::Execute"), &FRigVMFunction_MathMatrixToTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToTransform.OuterSingleton, Arguments_FRigVMFunction_MathMatrixToTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixToTransform>()
{
	return FRigVMFunction_MathMatrixToTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Makes a transform from a matrix\n*/" },
		{ "DisplayName", "To Transform" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a transform from a matrix" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixToTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixToTransform, Value), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixToTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase,
	&NewStructOps,
	"RigVMFunction_MathMatrixToTransform",
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::PropPointers),
	sizeof(FRigVMFunction_MathMatrixToTransform),
	alignof(FRigVMFunction_MathMatrixToTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToTransform.InnerSingleton;
}
void FRigVMFunction_MathMatrixToTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathMatrixToTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathMatrixToTransform

// Begin ScriptStruct FRigVMFunction_MathMatrixFromTransform
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixFromTransform>() == std::is_polymorphic<FRigVMFunction_MathMatrixBase>(), "USTRUCT FRigVMFunction_MathMatrixFromTransform cannot be polymorphic unless super FRigVMFunction_MathMatrixBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransform;
class UScriptStruct* FRigVMFunction_MathMatrixFromTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixFromTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathMatrixFromTransform_Execute;
		Arguments_FRigVMFunction_MathMatrixFromTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathMatrixFromTransform_Execute.Emplace(TEXT("Result"), TEXT("FMatrix"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathMatrixFromTransform::Execute"), &FRigVMFunction_MathMatrixFromTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransform.OuterSingleton, Arguments_FRigVMFunction_MathMatrixFromTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixFromTransform>()
{
	return FRigVMFunction_MathMatrixFromTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a matrix from a transform\n */" },
		{ "Deprecated", "5.0.1" },
		{ "DisplayName", "From Transform" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "ToolTip", "Makes a matrix from a transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixFromTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixFromTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixFromTransform, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase,
	&NewStructOps,
	"RigVMFunction_MathMatrixFromTransform",
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::PropPointers),
	sizeof(FRigVMFunction_MathMatrixFromTransform),
	alignof(FRigVMFunction_MathMatrixFromTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransform.InnerSingleton;
}
void FRigVMFunction_MathMatrixFromTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathMatrixFromTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathMatrixFromTransform

// Begin ScriptStruct FRigVMFunction_MathMatrixFromTransformV2
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixFromTransformV2>() == std::is_polymorphic<FRigVMFunction_MathMatrixBase>(), "USTRUCT FRigVMFunction_MathMatrixFromTransformV2 cannot be polymorphic unless super FRigVMFunction_MathMatrixBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransformV2;
class UScriptStruct* FRigVMFunction_MathMatrixFromTransformV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransformV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransformV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixFromTransformV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathMatrixFromTransformV2_Execute;
		Arguments_FRigVMFunction_MathMatrixFromTransformV2_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathMatrixFromTransformV2_Execute.Emplace(TEXT("Result"), TEXT("FMatrix"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathMatrixFromTransformV2::Execute"), &FRigVMFunction_MathMatrixFromTransformV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransformV2.OuterSingleton, Arguments_FRigVMFunction_MathMatrixFromTransformV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransformV2.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixFromTransformV2>()
{
	return FRigVMFunction_MathMatrixFromTransformV2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a matrix from a transform\n */" },
		{ "DisplayName", "From Transform" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a matrix from a transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixFromTransformV2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixFromTransformV2, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixFromTransformV2, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase,
	&NewStructOps,
	"RigVMFunction_MathMatrixFromTransformV2",
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::PropPointers),
	sizeof(FRigVMFunction_MathMatrixFromTransformV2),
	alignof(FRigVMFunction_MathMatrixFromTransformV2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransformV2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransformV2.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransformV2.InnerSingleton;
}
void FRigVMFunction_MathMatrixFromTransformV2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathMatrixFromTransformV2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathMatrixFromTransformV2

// Begin ScriptStruct FRigVMFunction_MathMatrixToVectors
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixToVectors>() == std::is_polymorphic<FRigVMFunction_MathMatrixBase>(), "USTRUCT FRigVMFunction_MathMatrixToVectors cannot be polymorphic unless super FRigVMFunction_MathMatrixBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToVectors;
class UScriptStruct* FRigVMFunction_MathMatrixToVectors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToVectors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToVectors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixToVectors"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathMatrixToVectors_Execute;
		Arguments_FRigVMFunction_MathMatrixToVectors_Execute.Emplace(TEXT("Value"), TEXT("FMatrix"));
		Arguments_FRigVMFunction_MathMatrixToVectors_Execute.Emplace(TEXT("Origin"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathMatrixToVectors_Execute.Emplace(TEXT("X"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathMatrixToVectors_Execute.Emplace(TEXT("Y"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathMatrixToVectors_Execute.Emplace(TEXT("Z"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathMatrixToVectors::Execute"), &FRigVMFunction_MathMatrixToVectors::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToVectors.OuterSingleton, Arguments_FRigVMFunction_MathMatrixToVectors_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToVectors.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixToVectors>()
{
	return FRigVMFunction_MathMatrixToVectors::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Converts the matrix to its vectors\n */" },
		{ "DisplayName", "To Vectors" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "ToolTip", "Converts the matrix to its vectors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_X;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixToVectors>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixToVectors, Value), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixToVectors, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixToVectors, X), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixToVectors, Y), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixToVectors, Z), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewProp_Z,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase,
	&NewStructOps,
	"RigVMFunction_MathMatrixToVectors",
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::PropPointers),
	sizeof(FRigVMFunction_MathMatrixToVectors),
	alignof(FRigVMFunction_MathMatrixToVectors),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToVectors.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToVectors.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToVectors.InnerSingleton;
}
void FRigVMFunction_MathMatrixToVectors::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathMatrixToVectors::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Origin,
		X,
		Y,
		Z
	);
}
// End ScriptStruct FRigVMFunction_MathMatrixToVectors

// Begin ScriptStruct FRigVMFunction_MathMatrixFromVectors
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixFromVectors>() == std::is_polymorphic<FRigVMFunction_MathMatrixBase>(), "USTRUCT FRigVMFunction_MathMatrixFromVectors cannot be polymorphic unless super FRigVMFunction_MathMatrixBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromVectors;
class UScriptStruct* FRigVMFunction_MathMatrixFromVectors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromVectors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromVectors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixFromVectors"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathMatrixFromVectors_Execute;
		Arguments_FRigVMFunction_MathMatrixFromVectors_Execute.Emplace(TEXT("Origin"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathMatrixFromVectors_Execute.Emplace(TEXT("X"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathMatrixFromVectors_Execute.Emplace(TEXT("Y"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathMatrixFromVectors_Execute.Emplace(TEXT("Z"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathMatrixFromVectors_Execute.Emplace(TEXT("Result"), TEXT("FMatrix"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathMatrixFromVectors::Execute"), &FRigVMFunction_MathMatrixFromVectors::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromVectors.OuterSingleton, Arguments_FRigVMFunction_MathMatrixFromVectors_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromVectors.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixFromVectors>()
{
	return FRigVMFunction_MathMatrixFromVectors::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Makes a matrix from its vectors\n*/" },
		{ "DisplayName", "From Vectors" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "ToolTip", "Makes a matrix from its vectors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_X;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixFromVectors>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixFromVectors, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixFromVectors, X), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixFromVectors, Y), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixFromVectors, Z), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathMatrixFromVectors, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase,
	&NewStructOps,
	"RigVMFunction_MathMatrixFromVectors",
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::PropPointers),
	sizeof(FRigVMFunction_MathMatrixFromVectors),
	alignof(FRigVMFunction_MathMatrixFromVectors),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromVectors.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromVectors.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromVectors.InnerSingleton;
}
void FRigVMFunction_MathMatrixFromVectors::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathMatrixFromVectors::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Origin,
		X,
		Y,
		Z,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathMatrixFromVectors

// Begin ScriptStruct FRigVMFunction_MathMatrixMul
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixMul>() == std::is_polymorphic<FRigVMFunction_MathMatrixBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathMatrixMul cannot be polymorphic unless super FRigVMFunction_MathMatrixBinaryAggregateOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixMul;
class UScriptStruct* FRigVMFunction_MathMatrixMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathMatrixMul_Execute;
		Arguments_FRigVMFunction_MathMatrixMul_Execute.Emplace(TEXT("A"), TEXT("FMatrix"));
		Arguments_FRigVMFunction_MathMatrixMul_Execute.Emplace(TEXT("B"), TEXT("FMatrix"));
		Arguments_FRigVMFunction_MathMatrixMul_Execute.Emplace(TEXT("Result"), TEXT("FMatrix"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathMatrixMul::Execute"), &FRigVMFunction_MathMatrixMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixMul.OuterSingleton, Arguments_FRigVMFunction_MathMatrixMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixMul.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixMul>()
{
	return FRigVMFunction_MathMatrixMul::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*,Global" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "TemplateName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixMul>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp,
	&NewStructOps,
	"RigVMFunction_MathMatrixMul",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathMatrixMul),
	alignof(FRigVMFunction_MathMatrixMul),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixMul.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixMul.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixMul.InnerSingleton;
}
void FRigVMFunction_MathMatrixMul::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathMatrixMul::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathMatrixMul

// Begin ScriptStruct FRigVMFunction_MathMatrixInverse
static_assert(std::is_polymorphic<FRigVMFunction_MathMatrixInverse>() == std::is_polymorphic<FRigVMFunction_MathMatrixUnaryOp>(), "USTRUCT FRigVMFunction_MathMatrixInverse cannot be polymorphic unless super FRigVMFunction_MathMatrixUnaryOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixInverse;
class UScriptStruct* FRigVMFunction_MathMatrixInverse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixInverse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixInverse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMatrixInverse"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathMatrixInverse_Execute;
		Arguments_FRigVMFunction_MathMatrixInverse_Execute.Emplace(TEXT("Value"), TEXT("FMatrix"));
		Arguments_FRigVMFunction_MathMatrixInverse_Execute.Emplace(TEXT("Result"), TEXT("FMatrix"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathMatrixInverse::Execute"), &FRigVMFunction_MathMatrixInverse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixInverse.OuterSingleton, Arguments_FRigVMFunction_MathMatrixInverse_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixInverse.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMatrixInverse>()
{
	return FRigVMFunction_MathMatrixInverse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the inverse value\n */" },
		{ "DisplayName", "Inverse" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathMatrix.h" },
		{ "TemplateName", "Inverse" },
		{ "ToolTip", "Returns the inverse value" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMatrixInverse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp,
	&NewStructOps,
	"RigVMFunction_MathMatrixInverse",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathMatrixInverse),
	alignof(FRigVMFunction_MathMatrixInverse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixInverse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixInverse.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixInverse.InnerSingleton;
}
void FRigVMFunction_MathMatrixInverse::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathMatrixInverse::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathMatrixInverse

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_MathMatrixBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixBase), 3331647273U) },
		{ FRigVMFunction_MathMatrixUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixUnaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixUnaryOp), 524160040U) },
		{ FRigVMFunction_MathMatrixBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixBinaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixBinaryOp), 2400709731U) },
		{ FRigVMFunction_MathMatrixBinaryAggregateOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixBinaryAggregateOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixBinaryAggregateOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixBinaryAggregateOp), 1380697794U) },
		{ FRigVMFunction_MathMatrixToTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixToTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixToTransform), 3815372155U) },
		{ FRigVMFunction_MathMatrixFromTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixFromTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixFromTransform), 2696168059U) },
		{ FRigVMFunction_MathMatrixFromTransformV2::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixFromTransformV2"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromTransformV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixFromTransformV2), 2322037998U) },
		{ FRigVMFunction_MathMatrixToVectors::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixToVectors"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixToVectors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixToVectors), 629346709U) },
		{ FRigVMFunction_MathMatrixFromVectors::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixFromVectors"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixFromVectors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixFromVectors), 3218156732U) },
		{ FRigVMFunction_MathMatrixMul::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixMul"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixMul), 166390117U) },
		{ FRigVMFunction_MathMatrixInverse::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse_Statics::NewStructOps, TEXT("RigVMFunction_MathMatrixInverse"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMatrixInverse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMatrixInverse), 3601877740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_2052784980(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
