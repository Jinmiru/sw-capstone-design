// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/RigVMFunction_String.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_String() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_FromString();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_ToString();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatchFactory();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringConcat();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringContains();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringFind();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringJoin();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringLeft();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringLength();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringReplace();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringReverse();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringRight();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringSplit();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_StringBase
static_assert(std::is_polymorphic<FRigVMFunction_StringBase>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_StringBase cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringBase;
class UScriptStruct* FRigVMFunction_StringBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringBase>()
{
	return FRigVMFunction_StringBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Core|String" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMFunction_StringBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_StringBase),
	alignof(FRigVMFunction_StringBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_StringBase

// Begin ScriptStruct FRigVMFunction_StringConcat
static_assert(std::is_polymorphic<FRigVMFunction_StringConcat>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringConcat cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringConcat;
class UScriptStruct* FRigVMFunction_StringConcat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringConcat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringConcat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringConcat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringConcat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringConcat_Execute;
		Arguments_FRigVMFunction_StringConcat_Execute.Emplace(TEXT("A"), TEXT("FString"));
		Arguments_FRigVMFunction_StringConcat_Execute.Emplace(TEXT("B"), TEXT("FString"));
		Arguments_FRigVMFunction_StringConcat_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringConcat::Execute"), &FRigVMFunction_StringConcat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringConcat.OuterSingleton, Arguments_FRigVMFunction_StringConcat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringConcat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringConcat>()
{
	return FRigVMFunction_StringConcat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Concatenates two strings together to make a new string\n */" },
		{ "DisplayName", "Concat" },
		{ "Keywords", "Add,+,Combine,Merge,Append" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "TemplateName", "Concat" },
		{ "ToolTip", "Concatenates two strings together to make a new string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_A;
	static const UECodeGen_Private::FStrPropertyParams NewProp_B;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringConcat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringConcat, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringConcat, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringConcat, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringConcat",
	Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::PropPointers),
	sizeof(FRigVMFunction_StringConcat),
	alignof(FRigVMFunction_StringConcat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringConcat()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringConcat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringConcat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringConcat.InnerSingleton;
}
void FRigVMFunction_StringConcat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringConcat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringConcat

// Begin ScriptStruct FRigVMFunction_StringTruncate
static_assert(std::is_polymorphic<FRigVMFunction_StringTruncate>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringTruncate cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringTruncate;
class UScriptStruct* FRigVMFunction_StringTruncate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringTruncate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringTruncate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringTruncate"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringTruncate_Execute;
		Arguments_FRigVMFunction_StringTruncate_Execute.Emplace(TEXT("Name"), TEXT("FString"));
		Arguments_FRigVMFunction_StringTruncate_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigVMFunction_StringTruncate_Execute.Emplace(TEXT("FromEnd"), TEXT("bool"));
		Arguments_FRigVMFunction_StringTruncate_Execute.Emplace(TEXT("Remainder"), TEXT("FString"));
		Arguments_FRigVMFunction_StringTruncate_Execute.Emplace(TEXT("Chopped"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringTruncate::Execute"), &FRigVMFunction_StringTruncate::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringTruncate.OuterSingleton, Arguments_FRigVMFunction_StringTruncate_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringTruncate.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringTruncate>()
{
	return FRigVMFunction_StringTruncate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the left or right most characters from the string chopping the given number of characters from the start or the end\n */" },
		{ "DisplayName", "Chop" },
		{ "Keywords", "Truncate,-,Remove,Subtract,Split" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "TemplateName", "Chop" },
		{ "ToolTip", "Returns the left or right most characters from the string chopping the given number of characters from the start or the end" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Number of characters to remove from left or right\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Number of characters to remove from left or right" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromEnd_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// if set to true the characters will be removed from the end\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "if set to true the characters will be removed from the end" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Remainder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the part of the string without the chopped characters\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
		{ "ToolTip", "the part of the string without the chopped characters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chopped_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the part of the name that has been chopped off\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
		{ "ToolTip", "the part of the name that has been chopped off" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_FromEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FromEnd;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Remainder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Chopped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringTruncate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringTruncate, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringTruncate, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_FromEnd_SetBit(void* Obj)
{
	((FRigVMFunction_StringTruncate*)Obj)->FromEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_FromEnd = { "FromEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_StringTruncate), &Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_FromEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromEnd_MetaData), NewProp_FromEnd_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_Remainder = { "Remainder", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringTruncate, Remainder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Remainder_MetaData), NewProp_Remainder_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_Chopped = { "Chopped", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringTruncate, Chopped), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chopped_MetaData), NewProp_Chopped_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_FromEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_Remainder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewProp_Chopped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringTruncate",
	Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::PropPointers),
	sizeof(FRigVMFunction_StringTruncate),
	alignof(FRigVMFunction_StringTruncate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringTruncate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringTruncate.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringTruncate.InnerSingleton;
}
void FRigVMFunction_StringTruncate::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringTruncate::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Count,
		FromEnd,
		Remainder,
		Chopped
	);
}
// End ScriptStruct FRigVMFunction_StringTruncate

// Begin ScriptStruct FRigVMFunction_StringReplace
static_assert(std::is_polymorphic<FRigVMFunction_StringReplace>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringReplace cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringReplace;
class UScriptStruct* FRigVMFunction_StringReplace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringReplace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringReplace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringReplace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringReplace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringReplace_Execute;
		Arguments_FRigVMFunction_StringReplace_Execute.Emplace(TEXT("Name"), TEXT("FString"));
		Arguments_FRigVMFunction_StringReplace_Execute.Emplace(TEXT("Old"), TEXT("FString"));
		Arguments_FRigVMFunction_StringReplace_Execute.Emplace(TEXT("New"), TEXT("FString"));
		Arguments_FRigVMFunction_StringReplace_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringReplace::Execute"), &FRigVMFunction_StringReplace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringReplace.OuterSingleton, Arguments_FRigVMFunction_StringReplace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringReplace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringReplace>()
{
	return FRigVMFunction_StringReplace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Replace all occurrences of a substring in this string\n */" },
		{ "DisplayName", "Replace" },
		{ "Keywords", "Search,Emplace,Find" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "TemplateName", "Replace" },
		{ "ToolTip", "Replace all occurrences of a substring in this string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Old;
	static const UECodeGen_Private::FStrPropertyParams NewProp_New;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringReplace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringReplace, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringReplace, Old), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Old_MetaData), NewProp_Old_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringReplace, New), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_New_MetaData), NewProp_New_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringReplace, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::NewProp_Old,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::NewProp_New,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringReplace",
	Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::PropPointers),
	sizeof(FRigVMFunction_StringReplace),
	alignof(FRigVMFunction_StringReplace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringReplace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringReplace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringReplace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringReplace.InnerSingleton;
}
void FRigVMFunction_StringReplace::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringReplace::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Old,
		New,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringReplace

// Begin ScriptStruct FRigVMFunction_StringEndsWith
static_assert(std::is_polymorphic<FRigVMFunction_StringEndsWith>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringEndsWith cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringEndsWith;
class UScriptStruct* FRigVMFunction_StringEndsWith::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringEndsWith.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringEndsWith.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringEndsWith"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringEndsWith_Execute;
		Arguments_FRigVMFunction_StringEndsWith_Execute.Emplace(TEXT("Name"), TEXT("FString"));
		Arguments_FRigVMFunction_StringEndsWith_Execute.Emplace(TEXT("Ending"), TEXT("FString"));
		Arguments_FRigVMFunction_StringEndsWith_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringEndsWith::Execute"), &FRigVMFunction_StringEndsWith::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringEndsWith.OuterSingleton, Arguments_FRigVMFunction_StringEndsWith_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringEndsWith.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringEndsWith>()
{
	return FRigVMFunction_StringEndsWith::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tests whether this string ends with given string\n */" },
		{ "DisplayName", "Ends With" },
		{ "Keywords", "Right" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "TemplateName", "EndsWith" },
		{ "ToolTip", "Tests whether this string ends with given string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ending_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ending;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringEndsWith>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringEndsWith, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::NewProp_Ending = { "Ending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringEndsWith, Ending), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ending_MetaData), NewProp_Ending_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigVMFunction_StringEndsWith*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_StringEndsWith), &Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::NewProp_Ending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringEndsWith",
	Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::PropPointers),
	sizeof(FRigVMFunction_StringEndsWith),
	alignof(FRigVMFunction_StringEndsWith),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringEndsWith.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringEndsWith.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringEndsWith.InnerSingleton;
}
void FRigVMFunction_StringEndsWith::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringEndsWith::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Ending,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringEndsWith

// Begin ScriptStruct FRigVMFunction_StringStartsWith
static_assert(std::is_polymorphic<FRigVMFunction_StringStartsWith>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringStartsWith cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringStartsWith;
class UScriptStruct* FRigVMFunction_StringStartsWith::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringStartsWith.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringStartsWith.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringStartsWith"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringStartsWith_Execute;
		Arguments_FRigVMFunction_StringStartsWith_Execute.Emplace(TEXT("Name"), TEXT("FString"));
		Arguments_FRigVMFunction_StringStartsWith_Execute.Emplace(TEXT("Start"), TEXT("FString"));
		Arguments_FRigVMFunction_StringStartsWith_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringStartsWith::Execute"), &FRigVMFunction_StringStartsWith::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringStartsWith.OuterSingleton, Arguments_FRigVMFunction_StringStartsWith_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringStartsWith.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringStartsWith>()
{
	return FRigVMFunction_StringStartsWith::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tests whether this string starts with given string\n */" },
		{ "DisplayName", "Starts With" },
		{ "Keywords", "Left" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "TemplateName", "StartsWith" },
		{ "ToolTip", "Tests whether this string starts with given string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Start;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringStartsWith>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringStartsWith, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringStartsWith, Start), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigVMFunction_StringStartsWith*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_StringStartsWith), &Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringStartsWith",
	Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::PropPointers),
	sizeof(FRigVMFunction_StringStartsWith),
	alignof(FRigVMFunction_StringStartsWith),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringStartsWith.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringStartsWith.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringStartsWith.InnerSingleton;
}
void FRigVMFunction_StringStartsWith::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringStartsWith::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Start,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringStartsWith

// Begin ScriptStruct FRigVMFunction_StringContains
static_assert(std::is_polymorphic<FRigVMFunction_StringContains>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringContains cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringContains;
class UScriptStruct* FRigVMFunction_StringContains::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringContains.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringContains.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringContains, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringContains"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringContains_Execute;
		Arguments_FRigVMFunction_StringContains_Execute.Emplace(TEXT("Name"), TEXT("FString"));
		Arguments_FRigVMFunction_StringContains_Execute.Emplace(TEXT("Search"), TEXT("FString"));
		Arguments_FRigVMFunction_StringContains_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringContains::Execute"), &FRigVMFunction_StringContains::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringContains.OuterSingleton, Arguments_FRigVMFunction_StringContains_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringContains.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringContains>()
{
	return FRigVMFunction_StringContains::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true or false if a given name exists in another given name\n */" },
		{ "DisplayName", "Contains" },
		{ "Keywords", "Contains,Find,Has,Search" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "TemplateName", "Contains" },
		{ "ToolTip", "Returns true or false if a given name exists in another given name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Search_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Search;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringContains>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringContains, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::NewProp_Search = { "Search", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringContains, Search), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Search_MetaData), NewProp_Search_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigVMFunction_StringContains*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_StringContains), &Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::NewProp_Search,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringContains",
	Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::PropPointers),
	sizeof(FRigVMFunction_StringContains),
	alignof(FRigVMFunction_StringContains),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringContains()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringContains.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringContains.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringContains.InnerSingleton;
}
void FRigVMFunction_StringContains::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringContains::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Search,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringContains

// Begin ScriptStruct FRigVMFunction_StringLength
static_assert(std::is_polymorphic<FRigVMFunction_StringLength>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringLength cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringLength;
class UScriptStruct* FRigVMFunction_StringLength::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringLength.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringLength.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringLength, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringLength"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringLength_Execute;
		Arguments_FRigVMFunction_StringLength_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigVMFunction_StringLength_Execute.Emplace(TEXT("Length"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringLength::Execute"), &FRigVMFunction_StringLength::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringLength.OuterSingleton, Arguments_FRigVMFunction_StringLength_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringLength.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringLength>()
{
	return FRigVMFunction_StringLength::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the length of a string \n */" },
		{ "DisplayName", "Length" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Returns the length of a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringLength>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringLength, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringLength, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringLength",
	Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::PropPointers),
	sizeof(FRigVMFunction_StringLength),
	alignof(FRigVMFunction_StringLength),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringLength()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringLength.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringLength.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringLength.InnerSingleton;
}
void FRigVMFunction_StringLength::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringLength::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Length
	);
}
// End ScriptStruct FRigVMFunction_StringLength

// Begin ScriptStruct FRigVMFunction_StringTrimWhitespace
static_assert(std::is_polymorphic<FRigVMFunction_StringTrimWhitespace>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringTrimWhitespace cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringTrimWhitespace;
class UScriptStruct* FRigVMFunction_StringTrimWhitespace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringTrimWhitespace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringTrimWhitespace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringTrimWhitespace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringTrimWhitespace_Execute;
		Arguments_FRigVMFunction_StringTrimWhitespace_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigVMFunction_StringTrimWhitespace_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringTrimWhitespace::Execute"), &FRigVMFunction_StringTrimWhitespace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringTrimWhitespace.OuterSingleton, Arguments_FRigVMFunction_StringTrimWhitespace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringTrimWhitespace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringTrimWhitespace>()
{
	return FRigVMFunction_StringTrimWhitespace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Trims the whitespace from a string (start and end)\n */" },
		{ "DisplayName", "Trim Whitespace" },
		{ "Keywords", "Space,WhiteSpace,Remove,Truncate" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Trims the whitespace from a string (start and end)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringTrimWhitespace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringTrimWhitespace, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringTrimWhitespace, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringTrimWhitespace",
	Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::PropPointers),
	sizeof(FRigVMFunction_StringTrimWhitespace),
	alignof(FRigVMFunction_StringTrimWhitespace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringTrimWhitespace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringTrimWhitespace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringTrimWhitespace.InnerSingleton;
}
void FRigVMFunction_StringTrimWhitespace::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringTrimWhitespace::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringTrimWhitespace

// Begin ScriptStruct FRigVMFunction_StringToUppercase
static_assert(std::is_polymorphic<FRigVMFunction_StringToUppercase>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringToUppercase cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringToUppercase;
class UScriptStruct* FRigVMFunction_StringToUppercase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringToUppercase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringToUppercase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringToUppercase"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringToUppercase_Execute;
		Arguments_FRigVMFunction_StringToUppercase_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigVMFunction_StringToUppercase_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringToUppercase::Execute"), &FRigVMFunction_StringToUppercase::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringToUppercase.OuterSingleton, Arguments_FRigVMFunction_StringToUppercase_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringToUppercase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringToUppercase>()
{
	return FRigVMFunction_StringToUppercase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Converts the string to upper case\n */" },
		{ "DisplayName", "To Uppercase" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Converts the string to upper case" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringToUppercase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringToUppercase, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringToUppercase, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringToUppercase",
	Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::PropPointers),
	sizeof(FRigVMFunction_StringToUppercase),
	alignof(FRigVMFunction_StringToUppercase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringToUppercase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringToUppercase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringToUppercase.InnerSingleton;
}
void FRigVMFunction_StringToUppercase::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringToUppercase::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringToUppercase

// Begin ScriptStruct FRigVMFunction_StringToLowercase
static_assert(std::is_polymorphic<FRigVMFunction_StringToLowercase>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringToLowercase cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringToLowercase;
class UScriptStruct* FRigVMFunction_StringToLowercase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringToLowercase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringToLowercase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringToLowercase"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringToLowercase_Execute;
		Arguments_FRigVMFunction_StringToLowercase_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigVMFunction_StringToLowercase_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringToLowercase::Execute"), &FRigVMFunction_StringToLowercase::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringToLowercase.OuterSingleton, Arguments_FRigVMFunction_StringToLowercase_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringToLowercase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringToLowercase>()
{
	return FRigVMFunction_StringToLowercase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Converts the string to lower case\n */" },
		{ "DisplayName", "To Lowercase" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Converts the string to lower case" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringToLowercase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringToLowercase, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringToLowercase, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringToLowercase",
	Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::PropPointers),
	sizeof(FRigVMFunction_StringToLowercase),
	alignof(FRigVMFunction_StringToLowercase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringToLowercase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringToLowercase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringToLowercase.InnerSingleton;
}
void FRigVMFunction_StringToLowercase::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringToLowercase::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringToLowercase

// Begin ScriptStruct FRigVMFunction_StringReverse
static_assert(std::is_polymorphic<FRigVMFunction_StringReverse>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringReverse cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringReverse;
class UScriptStruct* FRigVMFunction_StringReverse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringReverse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringReverse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringReverse, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringReverse"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringReverse_Execute;
		Arguments_FRigVMFunction_StringReverse_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigVMFunction_StringReverse_Execute.Emplace(TEXT("Reverse"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringReverse::Execute"), &FRigVMFunction_StringReverse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringReverse.OuterSingleton, Arguments_FRigVMFunction_StringReverse_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringReverse.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringReverse>()
{
	return FRigVMFunction_StringReverse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the reverse of the input string\n */" },
		{ "DisplayName", "Reverse" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Returns the reverse of the input string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reverse_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reverse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringReverse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringReverse, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringReverse, Reverse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reverse_MetaData), NewProp_Reverse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::NewProp_Reverse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringReverse",
	Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::PropPointers),
	sizeof(FRigVMFunction_StringReverse),
	alignof(FRigVMFunction_StringReverse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringReverse()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringReverse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringReverse.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringReverse.InnerSingleton;
}
void FRigVMFunction_StringReverse::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringReverse::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Reverse
	);
}
// End ScriptStruct FRigVMFunction_StringReverse

// Begin ScriptStruct FRigVMFunction_StringLeft
static_assert(std::is_polymorphic<FRigVMFunction_StringLeft>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringLeft cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringLeft;
class UScriptStruct* FRigVMFunction_StringLeft::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringLeft.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringLeft.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringLeft, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringLeft"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringLeft_Execute;
		Arguments_FRigVMFunction_StringLeft_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigVMFunction_StringLeft_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigVMFunction_StringLeft_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringLeft::Execute"), &FRigVMFunction_StringLeft::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringLeft.OuterSingleton, Arguments_FRigVMFunction_StringLeft_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringLeft.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringLeft>()
{
	return FRigVMFunction_StringLeft::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the left most characters of a string\n */" },
		{ "DisplayName", "Left" },
		{ "Keywords", "Start,Begin" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Returns the left most characters of a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringLeft>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringLeft, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringLeft, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringLeft, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringLeft",
	Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::PropPointers),
	sizeof(FRigVMFunction_StringLeft),
	alignof(FRigVMFunction_StringLeft),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringLeft()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringLeft.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringLeft.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringLeft.InnerSingleton;
}
void FRigVMFunction_StringLeft::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringLeft::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Count,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringLeft

// Begin ScriptStruct FRigVMFunction_StringRight
static_assert(std::is_polymorphic<FRigVMFunction_StringRight>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringRight cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringRight;
class UScriptStruct* FRigVMFunction_StringRight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringRight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringRight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringRight, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringRight"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringRight_Execute;
		Arguments_FRigVMFunction_StringRight_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigVMFunction_StringRight_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigVMFunction_StringRight_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringRight::Execute"), &FRigVMFunction_StringRight::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringRight.OuterSingleton, Arguments_FRigVMFunction_StringRight_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringRight.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringRight>()
{
	return FRigVMFunction_StringRight::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the right most characters of a string\n */" },
		{ "DisplayName", "Right" },
		{ "Keywords", "End" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Returns the right most characters of a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringRight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringRight, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringRight, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringRight, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringRight",
	Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::PropPointers),
	sizeof(FRigVMFunction_StringRight),
	alignof(FRigVMFunction_StringRight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringRight()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringRight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringRight.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringRight.InnerSingleton;
}
void FRigVMFunction_StringRight::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringRight::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Count,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringRight

// Begin ScriptStruct FRigVMFunction_StringMiddle
static_assert(std::is_polymorphic<FRigVMFunction_StringMiddle>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringMiddle cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringMiddle;
class UScriptStruct* FRigVMFunction_StringMiddle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringMiddle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringMiddle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringMiddle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringMiddle_Execute;
		Arguments_FRigVMFunction_StringMiddle_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigVMFunction_StringMiddle_Execute.Emplace(TEXT("Start"), TEXT("int32"));
		Arguments_FRigVMFunction_StringMiddle_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigVMFunction_StringMiddle_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringMiddle::Execute"), &FRigVMFunction_StringMiddle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringMiddle.OuterSingleton, Arguments_FRigVMFunction_StringMiddle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringMiddle.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringMiddle>()
{
	return FRigVMFunction_StringMiddle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the middle section of a string\n */" },
		{ "DisplayName", "Middle" },
		{ "Keywords", "Within,Center" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Returns the middle section of a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the index of the first character\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "the index of the first character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// if count is set to -1 all character from Start will be returned \n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "if count is set to -1 all character from Start will be returned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Start;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringMiddle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringMiddle, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringMiddle, Start), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringMiddle, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringMiddle, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringMiddle",
	Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::PropPointers),
	sizeof(FRigVMFunction_StringMiddle),
	alignof(FRigVMFunction_StringMiddle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringMiddle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringMiddle.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringMiddle.InnerSingleton;
}
void FRigVMFunction_StringMiddle::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringMiddle::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Start,
		Count,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringMiddle

// Begin ScriptStruct FRigVMFunction_StringFind
static_assert(std::is_polymorphic<FRigVMFunction_StringFind>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringFind cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringFind;
class UScriptStruct* FRigVMFunction_StringFind::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringFind.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringFind.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringFind, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringFind"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringFind_Execute;
		Arguments_FRigVMFunction_StringFind_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigVMFunction_StringFind_Execute.Emplace(TEXT("Search"), TEXT("FString"));
		Arguments_FRigVMFunction_StringFind_Execute.Emplace(TEXT("Found"), TEXT("bool"));
		Arguments_FRigVMFunction_StringFind_Execute.Emplace(TEXT("Index"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringFind::Execute"), &FRigVMFunction_StringFind::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringFind.OuterSingleton, Arguments_FRigVMFunction_StringFind_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringFind.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringFind>()
{
	return FRigVMFunction_StringFind::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Finds a string within another string\n */" },
		{ "DisplayName", "Find" },
		{ "Keywords", "IndexOf" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Finds a string within another string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Search_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Found_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Search;
	static void NewProp_Found_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Found;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringFind>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringFind, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewProp_Search = { "Search", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringFind, Search), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Search_MetaData), NewProp_Search_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewProp_Found_SetBit(void* Obj)
{
	((FRigVMFunction_StringFind*)Obj)->Found = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewProp_Found = { "Found", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_StringFind), &Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewProp_Found_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Found_MetaData), NewProp_Found_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringFind, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewProp_Search,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewProp_Found,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringFind",
	Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::PropPointers),
	sizeof(FRigVMFunction_StringFind),
	alignof(FRigVMFunction_StringFind),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringFind()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringFind.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringFind.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringFind.InnerSingleton;
}
void FRigVMFunction_StringFind::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringFind::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Search,
		Found,
		Index
	);
}
// End ScriptStruct FRigVMFunction_StringFind

// Begin ScriptStruct FRigVMFunction_StringSplit
static_assert(std::is_polymorphic<FRigVMFunction_StringSplit>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringSplit cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringSplit;
class UScriptStruct* FRigVMFunction_StringSplit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringSplit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringSplit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringSplit, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringSplit"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringSplit_Execute;
		Arguments_FRigVMFunction_StringSplit_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigVMFunction_StringSplit_Execute.Emplace(TEXT("Separator"), TEXT("FString"));
		Arguments_FRigVMFunction_StringSplit_Execute.Emplace(TEXT("Result"), TEXT("TArray<FString>"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringSplit::Execute"), &FRigVMFunction_StringSplit::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringSplit.OuterSingleton, Arguments_FRigVMFunction_StringSplit_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringSplit.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringSplit>()
{
	return FRigVMFunction_StringSplit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Splits a string into multiple sections given a separator\n */" },
		{ "DisplayName", "Split" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Splits a string into multiple sections given a separator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Separator_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Separator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringSplit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringSplit, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringSplit, Separator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Separator_MetaData), NewProp_Separator_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringSplit, Result), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::NewProp_Separator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::NewProp_Result_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringSplit",
	Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::PropPointers),
	sizeof(FRigVMFunction_StringSplit),
	alignof(FRigVMFunction_StringSplit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringSplit()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringSplit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringSplit.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringSplit.InnerSingleton;
}
void FRigVMFunction_StringSplit::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringSplit::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Separator,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringSplit

// Begin ScriptStruct FRigVMFunction_StringJoin
static_assert(std::is_polymorphic<FRigVMFunction_StringJoin>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringJoin cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringJoin;
class UScriptStruct* FRigVMFunction_StringJoin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringJoin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringJoin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringJoin, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringJoin"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringJoin_Execute;
		Arguments_FRigVMFunction_StringJoin_Execute.Emplace(TEXT("Values"), TEXT("TArray<FString>"));
		Arguments_FRigVMFunction_StringJoin_Execute.Emplace(TEXT("Separator"), TEXT("FString"));
		Arguments_FRigVMFunction_StringJoin_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringJoin::Execute"), &FRigVMFunction_StringJoin::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringJoin.OuterSingleton, Arguments_FRigVMFunction_StringJoin_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringJoin.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringJoin>()
{
	return FRigVMFunction_StringJoin::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Joins a string into multiple sections given a separator\n */" },
		{ "DisplayName", "Join" },
		{ "Keywords", "Combine" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Joins a string into multiple sections given a separator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Separator_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Separator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringJoin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringJoin, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringJoin, Separator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Separator_MetaData), NewProp_Separator_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringJoin, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::NewProp_Separator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringJoin",
	Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::PropPointers),
	sizeof(FRigVMFunction_StringJoin),
	alignof(FRigVMFunction_StringJoin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringJoin()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringJoin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringJoin.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringJoin.InnerSingleton;
}
void FRigVMFunction_StringJoin::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringJoin::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FString> Values_0_Array(Values);
	StaticExecute(
		InExecuteContext,
		Values_0_Array,
		Separator,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringJoin

// Begin ScriptStruct FRigVMFunction_StringPadInteger
static_assert(std::is_polymorphic<FRigVMFunction_StringPadInteger>() == std::is_polymorphic<FRigVMFunction_StringBase>(), "USTRUCT FRigVMFunction_StringPadInteger cannot be polymorphic unless super FRigVMFunction_StringBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StringPadInteger;
class UScriptStruct* FRigVMFunction_StringPadInteger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringPadInteger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StringPadInteger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StringPadInteger"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StringPadInteger_Execute;
		Arguments_FRigVMFunction_StringPadInteger_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigVMFunction_StringPadInteger_Execute.Emplace(TEXT("Digits"), TEXT("int32"));
		Arguments_FRigVMFunction_StringPadInteger_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StringPadInteger::Execute"), &FRigVMFunction_StringPadInteger::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StringPadInteger.OuterSingleton, Arguments_FRigVMFunction_StringPadInteger_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringPadInteger.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StringPadInteger>()
{
	return FRigVMFunction_StringPadInteger::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Converts an integer number to a string with padding\n */" },
		{ "DisplayName", "Pad Integer" },
		{ "Keywords", "FromInt,Number,LeadingZeroes" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "ToolTip", "Converts an integer number to a string with padding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Digits_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Digits;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StringPadInteger>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringPadInteger, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::NewProp_Digits = { "Digits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringPadInteger, Digits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Digits_MetaData), NewProp_Digits_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StringPadInteger, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::NewProp_Digits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_StringBase,
	&NewStructOps,
	"RigVMFunction_StringPadInteger",
	Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::PropPointers),
	sizeof(FRigVMFunction_StringPadInteger),
	alignof(FRigVMFunction_StringPadInteger),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StringPadInteger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StringPadInteger.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StringPadInteger.InnerSingleton;
}
void FRigVMFunction_StringPadInteger::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StringPadInteger::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Digits,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StringPadInteger

// Begin ScriptStruct FRigDispatch_ToString
static_assert(std::is_polymorphic<FRigDispatch_ToString>() == std::is_polymorphic<FRigVMDispatchFactory>(), "USTRUCT FRigDispatch_ToString cannot be polymorphic unless super FRigVMDispatchFactory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_ToString;
class UScriptStruct* FRigDispatch_ToString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_ToString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_ToString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_ToString, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigDispatch_ToString"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_ToString.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigDispatch_ToString>()
{
	return FRigDispatch_ToString::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Converts any value to string\n */" },
		{ "DisplayName", "To String" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "* Converts any value to string" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_ToString>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMDispatchFactory,
	&NewStructOps,
	"RigDispatch_ToString",
	nullptr,
	0,
	sizeof(FRigDispatch_ToString),
	alignof(FRigDispatch_ToString),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_ToString()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_ToString.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_ToString.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_ToString.InnerSingleton;
}
// End ScriptStruct FRigDispatch_ToString

// Begin ScriptStruct FRigDispatch_FromString
static_assert(std::is_polymorphic<FRigDispatch_FromString>() == std::is_polymorphic<FRigVMDispatchFactory>(), "USTRUCT FRigDispatch_FromString cannot be polymorphic unless super FRigVMDispatchFactory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_FromString;
class UScriptStruct* FRigDispatch_FromString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_FromString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_FromString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_FromString, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigDispatch_FromString"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_FromString.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigDispatch_FromString>()
{
	return FRigDispatch_FromString::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Converts a string into any value\n */" },
		{ "DisplayName", "From String" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_String.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "* Converts a string into any value" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_FromString>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMDispatchFactory,
	&NewStructOps,
	"RigDispatch_FromString",
	nullptr,
	0,
	sizeof(FRigDispatch_FromString),
	alignof(FRigDispatch_FromString),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_FromString()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_FromString.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_FromString.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_FromString.InnerSingleton;
}
// End ScriptStruct FRigDispatch_FromString

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_StringBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringBase_Statics::NewStructOps, TEXT("RigVMFunction_StringBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringBase), 2175321016U) },
		{ FRigVMFunction_StringConcat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics::NewStructOps, TEXT("RigVMFunction_StringConcat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringConcat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringConcat), 3651440547U) },
		{ FRigVMFunction_StringTruncate::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::NewStructOps, TEXT("RigVMFunction_StringTruncate"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringTruncate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringTruncate), 703720082U) },
		{ FRigVMFunction_StringReplace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics::NewStructOps, TEXT("RigVMFunction_StringReplace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringReplace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringReplace), 6002124U) },
		{ FRigVMFunction_StringEndsWith::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics::NewStructOps, TEXT("RigVMFunction_StringEndsWith"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringEndsWith, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringEndsWith), 4081877566U) },
		{ FRigVMFunction_StringStartsWith::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::NewStructOps, TEXT("RigVMFunction_StringStartsWith"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringStartsWith, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringStartsWith), 3963195478U) },
		{ FRigVMFunction_StringContains::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics::NewStructOps, TEXT("RigVMFunction_StringContains"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringContains, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringContains), 985165276U) },
		{ FRigVMFunction_StringLength::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics::NewStructOps, TEXT("RigVMFunction_StringLength"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringLength, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringLength), 3939903919U) },
		{ FRigVMFunction_StringTrimWhitespace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics::NewStructOps, TEXT("RigVMFunction_StringTrimWhitespace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringTrimWhitespace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringTrimWhitespace), 3262250021U) },
		{ FRigVMFunction_StringToUppercase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics::NewStructOps, TEXT("RigVMFunction_StringToUppercase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringToUppercase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringToUppercase), 3983009779U) },
		{ FRigVMFunction_StringToLowercase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics::NewStructOps, TEXT("RigVMFunction_StringToLowercase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringToLowercase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringToLowercase), 2125215885U) },
		{ FRigVMFunction_StringReverse::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics::NewStructOps, TEXT("RigVMFunction_StringReverse"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringReverse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringReverse), 4167625128U) },
		{ FRigVMFunction_StringLeft::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics::NewStructOps, TEXT("RigVMFunction_StringLeft"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringLeft, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringLeft), 1348555833U) },
		{ FRigVMFunction_StringRight::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics::NewStructOps, TEXT("RigVMFunction_StringRight"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringRight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringRight), 1621602584U) },
		{ FRigVMFunction_StringMiddle::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics::NewStructOps, TEXT("RigVMFunction_StringMiddle"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringMiddle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringMiddle), 3853940019U) },
		{ FRigVMFunction_StringFind::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics::NewStructOps, TEXT("RigVMFunction_StringFind"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringFind, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringFind), 1495927078U) },
		{ FRigVMFunction_StringSplit::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics::NewStructOps, TEXT("RigVMFunction_StringSplit"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringSplit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringSplit), 2876525698U) },
		{ FRigVMFunction_StringJoin::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::NewStructOps, TEXT("RigVMFunction_StringJoin"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringJoin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringJoin), 3464616198U) },
		{ FRigVMFunction_StringPadInteger::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics::NewStructOps, TEXT("RigVMFunction_StringPadInteger"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StringPadInteger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StringPadInteger), 1924160839U) },
		{ FRigDispatch_ToString::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::NewStructOps, TEXT("RigDispatch_ToString"), &Z_Registration_Info_UScriptStruct_RigDispatch_ToString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_ToString), 2286520278U) },
		{ FRigDispatch_FromString::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::NewStructOps, TEXT("RigDispatch_FromString"), &Z_Registration_Info_UScriptStruct_RigDispatch_FromString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_FromString), 1156737713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_2328857604(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
