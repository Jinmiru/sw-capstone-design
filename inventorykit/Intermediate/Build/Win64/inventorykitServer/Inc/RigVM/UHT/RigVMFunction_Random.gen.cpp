// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMFunction_Random.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_Random() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_RandomVector();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_RandomFloat
static_assert(std::is_polymorphic<FRigVMFunction_RandomFloat>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_RandomFloat cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_RandomFloat;
class UScriptStruct* FRigVMFunction_RandomFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_RandomFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_RandomFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_RandomFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_RandomFloat_Execute;
		Arguments_FRigVMFunction_RandomFloat_Execute.Emplace(TEXT("Seed"), TEXT("int32"));
		Arguments_FRigVMFunction_RandomFloat_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigVMFunction_RandomFloat_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigVMFunction_RandomFloat_Execute.Emplace(TEXT("Duration"), TEXT("float"));
		Arguments_FRigVMFunction_RandomFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigVMFunction_RandomFloat_Execute.Emplace(TEXT("LastResult"), TEXT("float"));
		Arguments_FRigVMFunction_RandomFloat_Execute.Emplace(TEXT("LastSeed"), TEXT("int32"));
		Arguments_FRigVMFunction_RandomFloat_Execute.Emplace(TEXT("BaseSeed"), TEXT("int32"));
		Arguments_FRigVMFunction_RandomFloat_Execute.Emplace(TEXT("TimeLeft"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_RandomFloat::Execute"), &FRigVMFunction_RandomFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_RandomFloat.OuterSingleton, Arguments_FRigVMFunction_RandomFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_RandomFloat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_RandomFloat>()
{
	return FRigVMFunction_RandomFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n * Generates a random float between a min and a max\n */" },
		{ "DisplayName", "Random (Float)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
		{ "TemplateName", "Random" },
		{ "ToolTip", "Generates a random float between a min and a max" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The duration at which the number won't change.\n\x09 * Use 0 for a different number every time.\n\x09 * A negative number (for ex: -1) results in an infinite duration.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
		{ "ToolTip", "The duration at which the number won't change.\nUse 0 for a different number every time.\nA negative number (for ex: -1) results in an infinite duration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastResult;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastSeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_RandomFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomFloat, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomFloat, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomFloat, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomFloat, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomFloat, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_LastResult = { "LastResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomFloat, LastResult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastResult_MetaData), NewProp_LastResult_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_LastSeed = { "LastSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomFloat, LastSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSeed_MetaData), NewProp_LastSeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_BaseSeed = { "BaseSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomFloat, BaseSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSeed_MetaData), NewProp_BaseSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomFloat, TimeLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLeft_MetaData), NewProp_TimeLeft_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_LastResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_LastSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_BaseSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewProp_TimeLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
	&NewStructOps,
	"RigVMFunction_RandomFloat",
	Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::PropPointers),
	sizeof(FRigVMFunction_RandomFloat),
	alignof(FRigVMFunction_RandomFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_RandomFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_RandomFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_RandomFloat.InnerSingleton;
}
void FRigVMFunction_RandomFloat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_RandomFloat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Seed,
		Minimum,
		Maximum,
		Duration,
		Result,
		LastResult,
		LastSeed,
		BaseSeed,
		TimeLeft
	);
}
// End ScriptStruct FRigVMFunction_RandomFloat

// Begin ScriptStruct FRigVMFunction_RandomVector
static_assert(std::is_polymorphic<FRigVMFunction_RandomVector>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_RandomVector cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_RandomVector;
class UScriptStruct* FRigVMFunction_RandomVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_RandomVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_RandomVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_RandomVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_RandomVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_RandomVector_Execute;
		Arguments_FRigVMFunction_RandomVector_Execute.Emplace(TEXT("Seed"), TEXT("int32"));
		Arguments_FRigVMFunction_RandomVector_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigVMFunction_RandomVector_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigVMFunction_RandomVector_Execute.Emplace(TEXT("Duration"), TEXT("float"));
		Arguments_FRigVMFunction_RandomVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_RandomVector_Execute.Emplace(TEXT("LastResult"), TEXT("FVector"));
		Arguments_FRigVMFunction_RandomVector_Execute.Emplace(TEXT("LastSeed"), TEXT("int32"));
		Arguments_FRigVMFunction_RandomVector_Execute.Emplace(TEXT("BaseSeed"), TEXT("int32"));
		Arguments_FRigVMFunction_RandomVector_Execute.Emplace(TEXT("TimeLeft"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_RandomVector::Execute"), &FRigVMFunction_RandomVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_RandomVector.OuterSingleton, Arguments_FRigVMFunction_RandomVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_RandomVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_RandomVector>()
{
	return FRigVMFunction_RandomVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n * Generates a random vector between a min and a max\n */" },
		{ "DisplayName", "Random (Vector)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
		{ "TemplateName", "Random" },
		{ "ToolTip", "Generates a random vector between a min and a max" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The duration at which the number won't change.\n\x09 * Use 0 for a different number every time.\n\x09 * A negative number (for ex: -1) results in an infinite duration.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
		{ "ToolTip", "The duration at which the number won't change.\nUse 0 for a different number every time.\nA negative number (for ex: -1) results in an infinite duration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Random.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastResult;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastSeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_RandomVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomVector, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomVector, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomVector, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomVector, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_LastResult = { "LastResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomVector, LastResult), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastResult_MetaData), NewProp_LastResult_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_LastSeed = { "LastSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomVector, LastSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSeed_MetaData), NewProp_LastSeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_BaseSeed = { "BaseSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomVector, BaseSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSeed_MetaData), NewProp_BaseSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_RandomVector, TimeLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLeft_MetaData), NewProp_TimeLeft_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_LastResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_LastSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_BaseSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewProp_TimeLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
	&NewStructOps,
	"RigVMFunction_RandomVector",
	Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::PropPointers),
	sizeof(FRigVMFunction_RandomVector),
	alignof(FRigVMFunction_RandomVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_RandomVector()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_RandomVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_RandomVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_RandomVector.InnerSingleton;
}
void FRigVMFunction_RandomVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_RandomVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Seed,
		Minimum,
		Maximum,
		Duration,
		Result,
		LastResult,
		LastSeed,
		BaseSeed,
		TimeLeft
	);
}
// End ScriptStruct FRigVMFunction_RandomVector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Random_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_RandomFloat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics::NewStructOps, TEXT("RigVMFunction_RandomFloat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_RandomFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_RandomFloat), 1893643624U) },
		{ FRigVMFunction_RandomVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics::NewStructOps, TEXT("RigVMFunction_RandomVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_RandomVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_RandomVector), 1234288436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Random_h_2693711397(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Random_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Random_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
