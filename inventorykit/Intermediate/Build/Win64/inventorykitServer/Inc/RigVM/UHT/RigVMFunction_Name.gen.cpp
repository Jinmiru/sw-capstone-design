// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/RigVMFunction_Name.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_Name() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_Contains();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_EndsWith();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NameBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NameConcat();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NameReplace();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StartsWith();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_NameBase
static_assert(std::is_polymorphic<FRigVMFunction_NameBase>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_NameBase cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_NameBase;
class UScriptStruct* FRigVMFunction_NameBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NameBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_NameBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NameBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_NameBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NameBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_NameBase>()
{
	return FRigVMFunction_NameBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_NameBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Core|Name" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_NameBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_NameBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMFunction_NameBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_NameBase),
	alignof(FRigVMFunction_NameBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NameBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_NameBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NameBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NameBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_NameBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_NameBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NameBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_NameBase

// Begin ScriptStruct FRigVMFunction_NameConcat
static_assert(std::is_polymorphic<FRigVMFunction_NameConcat>() == std::is_polymorphic<FRigVMFunction_NameBase>(), "USTRUCT FRigVMFunction_NameConcat cannot be polymorphic unless super FRigVMFunction_NameBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_NameConcat;
class UScriptStruct* FRigVMFunction_NameConcat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NameConcat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_NameConcat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NameConcat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_NameConcat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_NameConcat_Execute;
		Arguments_FRigVMFunction_NameConcat_Execute.Emplace(TEXT("A"), TEXT("FName"));
		Arguments_FRigVMFunction_NameConcat_Execute.Emplace(TEXT("B"), TEXT("FName"));
		Arguments_FRigVMFunction_NameConcat_Execute.Emplace(TEXT("Result"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_NameConcat::Execute"), &FRigVMFunction_NameConcat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_NameConcat.OuterSingleton, Arguments_FRigVMFunction_NameConcat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NameConcat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_NameConcat>()
{
	return FRigVMFunction_NameConcat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Concatenates two strings together to make a new string\n */" },
		{ "DisplayName", "Concat" },
		{ "Keywords", "Add,+,Combine,Merge,Append" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "TemplateName", "Concat" },
		{ "ToolTip", "Concatenates two strings together to make a new string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_A;
	static const UECodeGen_Private::FNamePropertyParams NewProp_B;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_NameConcat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameConcat, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameConcat, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameConcat, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_NameBase,
	&NewStructOps,
	"RigVMFunction_NameConcat",
	Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::PropPointers),
	sizeof(FRigVMFunction_NameConcat),
	alignof(FRigVMFunction_NameConcat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NameConcat()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NameConcat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_NameConcat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NameConcat.InnerSingleton;
}
void FRigVMFunction_NameConcat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_NameConcat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_NameConcat

// Begin ScriptStruct FRigVMFunction_NameTruncate
static_assert(std::is_polymorphic<FRigVMFunction_NameTruncate>() == std::is_polymorphic<FRigVMFunction_NameBase>(), "USTRUCT FRigVMFunction_NameTruncate cannot be polymorphic unless super FRigVMFunction_NameBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_NameTruncate;
class UScriptStruct* FRigVMFunction_NameTruncate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NameTruncate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_NameTruncate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_NameTruncate"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_NameTruncate_Execute;
		Arguments_FRigVMFunction_NameTruncate_Execute.Emplace(TEXT("Name"), TEXT("FName"));
		Arguments_FRigVMFunction_NameTruncate_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigVMFunction_NameTruncate_Execute.Emplace(TEXT("FromEnd"), TEXT("bool"));
		Arguments_FRigVMFunction_NameTruncate_Execute.Emplace(TEXT("Remainder"), TEXT("FName"));
		Arguments_FRigVMFunction_NameTruncate_Execute.Emplace(TEXT("Chopped"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_NameTruncate::Execute"), &FRigVMFunction_NameTruncate::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_NameTruncate.OuterSingleton, Arguments_FRigVMFunction_NameTruncate_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NameTruncate.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_NameTruncate>()
{
	return FRigVMFunction_NameTruncate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the left or right most characters from the string chopping the given number of characters from the start or the end\n */" },
		{ "DisplayName", "Chop" },
		{ "Keywords", "Truncate,-,Remove,Subtract,Split" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "TemplateName", "Chop" },
		{ "ToolTip", "Returns the left or right most characters from the string chopping the given number of characters from the start or the end" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Number of characters to remove from left or right\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "ToolTip", "Number of characters to remove from left or right" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromEnd_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// if set to true the characters will be removed from the end\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "ToolTip", "if set to true the characters will be removed from the end" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Remainder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the part of the string without the chopped characters\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "Output", "" },
		{ "ToolTip", "the part of the string without the chopped characters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chopped_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the part of the name that has been chopped off\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "Output", "" },
		{ "ToolTip", "the part of the name that has been chopped off" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_FromEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FromEnd;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Remainder;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Chopped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_NameTruncate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameTruncate, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameTruncate, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_FromEnd_SetBit(void* Obj)
{
	((FRigVMFunction_NameTruncate*)Obj)->FromEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_FromEnd = { "FromEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_NameTruncate), &Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_FromEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromEnd_MetaData), NewProp_FromEnd_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_Remainder = { "Remainder", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameTruncate, Remainder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Remainder_MetaData), NewProp_Remainder_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_Chopped = { "Chopped", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameTruncate, Chopped), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chopped_MetaData), NewProp_Chopped_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_FromEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_Remainder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewProp_Chopped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_NameBase,
	&NewStructOps,
	"RigVMFunction_NameTruncate",
	Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::PropPointers),
	sizeof(FRigVMFunction_NameTruncate),
	alignof(FRigVMFunction_NameTruncate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NameTruncate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_NameTruncate.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NameTruncate.InnerSingleton;
}
void FRigVMFunction_NameTruncate::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_NameTruncate::Execute(const FRigVMExecuteContext& InExecuteContext)
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
// End ScriptStruct FRigVMFunction_NameTruncate

// Begin ScriptStruct FRigVMFunction_NameReplace
static_assert(std::is_polymorphic<FRigVMFunction_NameReplace>() == std::is_polymorphic<FRigVMFunction_NameBase>(), "USTRUCT FRigVMFunction_NameReplace cannot be polymorphic unless super FRigVMFunction_NameBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_NameReplace;
class UScriptStruct* FRigVMFunction_NameReplace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NameReplace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_NameReplace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NameReplace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_NameReplace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_NameReplace_Execute;
		Arguments_FRigVMFunction_NameReplace_Execute.Emplace(TEXT("Name"), TEXT("FName"));
		Arguments_FRigVMFunction_NameReplace_Execute.Emplace(TEXT("Old"), TEXT("FName"));
		Arguments_FRigVMFunction_NameReplace_Execute.Emplace(TEXT("New"), TEXT("FName"));
		Arguments_FRigVMFunction_NameReplace_Execute.Emplace(TEXT("Result"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_NameReplace::Execute"), &FRigVMFunction_NameReplace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_NameReplace.OuterSingleton, Arguments_FRigVMFunction_NameReplace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NameReplace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_NameReplace>()
{
	return FRigVMFunction_NameReplace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Replace all occurrences of a substring in this string\n */" },
		{ "DisplayName", "Replace" },
		{ "Keywords", "Search,Emplace,Find" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "TemplateName", "Replace" },
		{ "ToolTip", "Replace all occurrences of a substring in this string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Old;
	static const UECodeGen_Private::FNamePropertyParams NewProp_New;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_NameReplace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameReplace, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameReplace, Old), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Old_MetaData), NewProp_Old_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameReplace, New), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_New_MetaData), NewProp_New_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_NameReplace, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::NewProp_Old,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::NewProp_New,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_NameBase,
	&NewStructOps,
	"RigVMFunction_NameReplace",
	Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::PropPointers),
	sizeof(FRigVMFunction_NameReplace),
	alignof(FRigVMFunction_NameReplace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NameReplace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NameReplace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_NameReplace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NameReplace.InnerSingleton;
}
void FRigVMFunction_NameReplace::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_NameReplace::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Old,
		New,
		Result
	);
}
// End ScriptStruct FRigVMFunction_NameReplace

// Begin ScriptStruct FRigVMFunction_EndsWith
static_assert(std::is_polymorphic<FRigVMFunction_EndsWith>() == std::is_polymorphic<FRigVMFunction_NameBase>(), "USTRUCT FRigVMFunction_EndsWith cannot be polymorphic unless super FRigVMFunction_NameBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_EndsWith;
class UScriptStruct* FRigVMFunction_EndsWith::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_EndsWith.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_EndsWith.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_EndsWith, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_EndsWith"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_EndsWith_Execute;
		Arguments_FRigVMFunction_EndsWith_Execute.Emplace(TEXT("Name"), TEXT("FName"));
		Arguments_FRigVMFunction_EndsWith_Execute.Emplace(TEXT("Ending"), TEXT("FName"));
		Arguments_FRigVMFunction_EndsWith_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_EndsWith::Execute"), &FRigVMFunction_EndsWith::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_EndsWith.OuterSingleton, Arguments_FRigVMFunction_EndsWith_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_EndsWith.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_EndsWith>()
{
	return FRigVMFunction_EndsWith::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tests whether this string ends with given string\n */" },
		{ "DisplayName", "Ends With" },
		{ "Keywords", "Right" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "TemplateName", "EndsWith" },
		{ "ToolTip", "Tests whether this string ends with given string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ending_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Ending;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_EndsWith>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_EndsWith, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::NewProp_Ending = { "Ending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_EndsWith, Ending), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ending_MetaData), NewProp_Ending_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigVMFunction_EndsWith*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_EndsWith), &Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::NewProp_Ending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_NameBase,
	&NewStructOps,
	"RigVMFunction_EndsWith",
	Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::PropPointers),
	sizeof(FRigVMFunction_EndsWith),
	alignof(FRigVMFunction_EndsWith),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_EndsWith()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_EndsWith.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_EndsWith.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_EndsWith.InnerSingleton;
}
void FRigVMFunction_EndsWith::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_EndsWith::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Ending,
		Result
	);
}
// End ScriptStruct FRigVMFunction_EndsWith

// Begin ScriptStruct FRigVMFunction_StartsWith
static_assert(std::is_polymorphic<FRigVMFunction_StartsWith>() == std::is_polymorphic<FRigVMFunction_NameBase>(), "USTRUCT FRigVMFunction_StartsWith cannot be polymorphic unless super FRigVMFunction_NameBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_StartsWith;
class UScriptStruct* FRigVMFunction_StartsWith::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StartsWith.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_StartsWith.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StartsWith, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_StartsWith"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_StartsWith_Execute;
		Arguments_FRigVMFunction_StartsWith_Execute.Emplace(TEXT("Name"), TEXT("FName"));
		Arguments_FRigVMFunction_StartsWith_Execute.Emplace(TEXT("Start"), TEXT("FName"));
		Arguments_FRigVMFunction_StartsWith_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_StartsWith::Execute"), &FRigVMFunction_StartsWith::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_StartsWith.OuterSingleton, Arguments_FRigVMFunction_StartsWith_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StartsWith.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_StartsWith>()
{
	return FRigVMFunction_StartsWith::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tests whether this string starts with given string\n */" },
		{ "DisplayName", "Starts With" },
		{ "Keywords", "Left" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "TemplateName", "StartsWith" },
		{ "ToolTip", "Tests whether this string starts with given string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Start;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_StartsWith>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StartsWith, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_StartsWith, Start), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigVMFunction_StartsWith*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_StartsWith), &Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_NameBase,
	&NewStructOps,
	"RigVMFunction_StartsWith",
	Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::PropPointers),
	sizeof(FRigVMFunction_StartsWith),
	alignof(FRigVMFunction_StartsWith),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_StartsWith()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_StartsWith.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_StartsWith.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_StartsWith.InnerSingleton;
}
void FRigVMFunction_StartsWith::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_StartsWith::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Start,
		Result
	);
}
// End ScriptStruct FRigVMFunction_StartsWith

// Begin ScriptStruct FRigVMFunction_Contains
static_assert(std::is_polymorphic<FRigVMFunction_Contains>() == std::is_polymorphic<FRigVMFunction_NameBase>(), "USTRUCT FRigVMFunction_Contains cannot be polymorphic unless super FRigVMFunction_NameBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_Contains;
class UScriptStruct* FRigVMFunction_Contains::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_Contains.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_Contains.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_Contains, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_Contains"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_Contains_Execute;
		Arguments_FRigVMFunction_Contains_Execute.Emplace(TEXT("Name"), TEXT("FName"));
		Arguments_FRigVMFunction_Contains_Execute.Emplace(TEXT("Search"), TEXT("FName"));
		Arguments_FRigVMFunction_Contains_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_Contains::Execute"), &FRigVMFunction_Contains::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_Contains.OuterSingleton, Arguments_FRigVMFunction_Contains_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_Contains.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_Contains>()
{
	return FRigVMFunction_Contains::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true or false if a given name exists in another given name\n */" },
		{ "DisplayName", "Contains" },
		{ "Keywords", "Contains,Find,Has,Search" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "TemplateName", "Contains" },
		{ "ToolTip", "Returns true or false if a given name exists in another given name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Search_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_Name.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Search;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_Contains>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_Contains, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::NewProp_Search = { "Search", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_Contains, Search), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Search_MetaData), NewProp_Search_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigVMFunction_Contains*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_Contains), &Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::NewProp_Search,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_NameBase,
	&NewStructOps,
	"RigVMFunction_Contains",
	Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::PropPointers),
	sizeof(FRigVMFunction_Contains),
	alignof(FRigVMFunction_Contains),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_Contains()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_Contains.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_Contains.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_Contains.InnerSingleton;
}
void FRigVMFunction_Contains::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_Contains::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Search,
		Result
	);
}
// End ScriptStruct FRigVMFunction_Contains

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_NameBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_NameBase_Statics::NewStructOps, TEXT("RigVMFunction_NameBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_NameBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_NameBase), 1447875413U) },
		{ FRigVMFunction_NameConcat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics::NewStructOps, TEXT("RigVMFunction_NameConcat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_NameConcat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_NameConcat), 1978185786U) },
		{ FRigVMFunction_NameTruncate::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics::NewStructOps, TEXT("RigVMFunction_NameTruncate"), &Z_Registration_Info_UScriptStruct_RigVMFunction_NameTruncate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_NameTruncate), 2650081309U) },
		{ FRigVMFunction_NameReplace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics::NewStructOps, TEXT("RigVMFunction_NameReplace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_NameReplace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_NameReplace), 3729140171U) },
		{ FRigVMFunction_EndsWith::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics::NewStructOps, TEXT("RigVMFunction_EndsWith"), &Z_Registration_Info_UScriptStruct_RigVMFunction_EndsWith, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_EndsWith), 154388431U) },
		{ FRigVMFunction_StartsWith::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics::NewStructOps, TEXT("RigVMFunction_StartsWith"), &Z_Registration_Info_UScriptStruct_RigVMFunction_StartsWith, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_StartsWith), 1378834983U) },
		{ FRigVMFunction_Contains::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics::NewStructOps, TEXT("RigVMFunction_Contains"), &Z_Registration_Info_UScriptStruct_RigVMFunction_Contains, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_Contains), 1439848293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_2531451829(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
