// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVM.h"
#include "RigVM/Public/RigVMCore/RigVMByteCode.h"
#include "RigVM/Public/RigVMCore/RigVMExecuteContext.h"
#include "RigVM/Public/RigVMCore/RigVMMemoryStorageStruct.h"
#include "RigVM/Public/RigVMCore/RigVMStatistics.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVM() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
RIGVM_API UClass* Z_Construct_UClass_URigVM();
RIGVM_API UClass* Z_Construct_UClass_URigVM_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorage_NoRegister();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMParameterType();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMByteCode();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMInstructionArray();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMParameter();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStatistics();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Enum ERigVMParameterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMParameterType;
static UEnum* ERigVMParameterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMParameterType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMParameterType"));
	}
	return Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton;
}
template<> RIGVM_API UEnum* StaticEnum<ERigVMParameterType>()
{
	return ERigVMParameterType_StaticEnum();
}
struct Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The type of parameter for a VM\n" },
		{ "Input.Name", "ERigVMParameterType::Input" },
		{ "Invalid.Name", "ERigVMParameterType::Invalid" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "Output.Name", "ERigVMParameterType::Output" },
		{ "ToolTip", "The type of parameter for a VM" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigVMParameterType::Input", (int64)ERigVMParameterType::Input },
		{ "ERigVMParameterType::Output", (int64)ERigVMParameterType::Output },
		{ "ERigVMParameterType::Invalid", (int64)ERigVMParameterType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	"ERigVMParameterType",
	"ERigVMParameterType",
	Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigVM_ERigVMParameterType()
{
	if (!Z_Registration_Info_UEnum_ERigVMParameterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMParameterType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigVMParameterType.InnerSingleton;
}
// End Enum ERigVMParameterType

// Begin ScriptStruct FRigVMParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMParameter;
class UScriptStruct* FRigVMParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMParameter, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMParameter"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMParameter.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMParameter>()
{
	return FRigVMParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The RigVMParameter define an input or output of the RigVM.\n * Parameters are mapped to work state memory registers and can be\n * used to set input parameters as well as retrieve output parameters.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "The RigVMParameter define an input or output of the RigVM.\nParameters are mapped to work state memory registers and can be\nused to set input parameters as well as retrieve output parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisterIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStructPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RegisterIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CPPType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScriptStruct;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScriptStructPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMParameter, Type), Z_Construct_UEnum_RigVM_ERigVMParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 302190056
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMParameter, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_RegisterIndex = { "RegisterIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMParameter, RegisterIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisterIndex_MetaData), NewProp_RegisterIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMParameter, CPPType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPPType_MetaData), NewProp_CPPType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStruct = { "ScriptStruct", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMParameter, ScriptStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptStruct_MetaData), NewProp_ScriptStruct_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStructPath = { "ScriptStructPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMParameter, ScriptStructPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptStructPath_MetaData), NewProp_ScriptStructPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_RegisterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_CPPType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStructPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMParameter",
	Z_Construct_UScriptStruct_FRigVMParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::PropPointers),
	sizeof(FRigVMParameter),
	alignof(FRigVMParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMParameter()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMParameter.InnerSingleton, Z_Construct_UScriptStruct_FRigVMParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMParameter.InnerSingleton;
}
// End ScriptStruct FRigVMParameter

// Begin Class URigVM Function AddRigVMFunction
struct Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics
{
	struct RigVM_eventAddRigVMFunction_Parms
	{
		UScriptStruct* InRigVMStruct;
		FName InMethodName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Add a function for execute instructions to this VM.\n// Execute instructions can then refer to the function by index.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "Add a function for execute instructions to this VM.\nExecute instructions can then refer to the function by index." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMethodName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigVMStruct;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InMethodName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InRigVMStruct = { "InRigVMStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventAddRigVMFunction_Parms, InRigVMStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InMethodName = { "InMethodName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventAddRigVMFunction_Parms, InMethodName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMethodName_MetaData), NewProp_InMethodName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventAddRigVMFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InRigVMStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InMethodName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "AddRigVMFunction", nullptr, nullptr, Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::RigVM_eventAddRigVMFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::RigVM_eventAddRigVMFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_AddRigVMFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execAddRigVMFunction)
{
	P_GET_OBJECT(UScriptStruct,Z_Param_InRigVMStruct);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InMethodName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddRigVMFunction(Z_Param_InRigVMStruct,Z_Param_Out_InMethodName);
	P_NATIVE_END;
}
// End Class URigVM Function AddRigVMFunction

// Begin Class URigVM Function Execute
struct Z_Construct_UFunction_URigVM_Execute_Statics
{
	struct RigVM_eventExecute_Parms
	{
		FRigVMExtendedExecuteContext Context;
		FName InEntryName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InEntryName", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEntryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InEntryName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventExecute_Parms, Context), Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext, METADATA_PARAMS(0, nullptr) }; // 1517476021
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_InEntryName = { "InEntryName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventExecute_Parms, InEntryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEntryName_MetaData), NewProp_InEntryName_MetaData) };
void Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigVM_eventExecute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVM_eventExecute_Parms), &Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_Execute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_InEntryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_Execute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "Execute", nullptr, nullptr, Z_Construct_UFunction_URigVM_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_Execute_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_Execute_Statics::RigVM_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_Execute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_Execute_Statics::RigVM_eventExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_Execute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_Execute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execExecute)
{
	P_GET_STRUCT_REF(FRigVMExtendedExecuteContext,Z_Param_Out_Context);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEntryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Execute(Z_Param_Out_Context,Z_Param_Out_InEntryName);
	P_NATIVE_END;
}
// End Class URigVM Function Execute

// Begin Class URigVM Function GetParameterValueBool
struct Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics
{
	struct RigVM_eventGetParameterValueBool_Parms
	{
		FName InParameterName;
		int32 InArrayIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueBool_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueBool_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigVM_eventGetParameterValueBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVM_eventGetParameterValueBool_Parms), &Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueBool", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::RigVM_eventGetParameterValueBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::RigVM_eventGetParameterValueBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetParameterValueBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetParameterValueBool)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetParameterValueBool(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetParameterValueBool

// Begin Class URigVM Function GetParameterValueDouble
struct Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics
{
	struct RigVM_eventGetParameterValueDouble_Parms
	{
		FName InParameterName;
		int32 InArrayIndex;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueDouble_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueDouble_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueDouble_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueDouble", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::RigVM_eventGetParameterValueDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::RigVM_eventGetParameterValueDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetParameterValueDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetParameterValueDouble)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetParameterValueDouble(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetParameterValueDouble

// Begin Class URigVM Function GetParameterValueFloat
struct Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics
{
	struct RigVM_eventGetParameterValueFloat_Parms
	{
		FName InParameterName;
		int32 InArrayIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueFloat_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueFloat_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueFloat", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::RigVM_eventGetParameterValueFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::RigVM_eventGetParameterValueFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetParameterValueFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetParameterValueFloat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetParameterValueFloat(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetParameterValueFloat

// Begin Class URigVM Function GetParameterValueInt
struct Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics
{
	struct RigVM_eventGetParameterValueInt_Parms
	{
		FName InParameterName;
		int32 InArrayIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueInt_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueInt_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueInt", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::RigVM_eventGetParameterValueInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::RigVM_eventGetParameterValueInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetParameterValueInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetParameterValueInt)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetParameterValueInt(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetParameterValueInt

// Begin Class URigVM Function GetParameterValueName
struct Z_Construct_UFunction_URigVM_GetParameterValueName_Statics
{
	struct RigVM_eventGetParameterValueName_Parms
	{
		FName InParameterName;
		int32 InArrayIndex;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueName_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueName_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueName", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::RigVM_eventGetParameterValueName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::RigVM_eventGetParameterValueName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetParameterValueName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetParameterValueName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetParameterValueName(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetParameterValueName

// Begin Class URigVM Function GetParameterValueQuat
struct Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics
{
	struct RigVM_eventGetParameterValueQuat_Parms
	{
		FName InParameterName;
		int32 InArrayIndex;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueQuat_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueQuat_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueQuat", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::RigVM_eventGetParameterValueQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::RigVM_eventGetParameterValueQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetParameterValueQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetParameterValueQuat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=P_THIS->GetParameterValueQuat(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetParameterValueQuat

// Begin Class URigVM Function GetParameterValueString
struct Z_Construct_UFunction_URigVM_GetParameterValueString_Statics
{
	struct RigVM_eventGetParameterValueString_Parms
	{
		FName InParameterName;
		int32 InArrayIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueString_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueString_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueString", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::RigVM_eventGetParameterValueString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::RigVM_eventGetParameterValueString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetParameterValueString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetParameterValueString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetParameterValueString(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetParameterValueString

// Begin Class URigVM Function GetParameterValueTransform
struct Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics
{
	struct RigVM_eventGetParameterValueTransform_Parms
	{
		FName InParameterName;
		int32 InArrayIndex;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueTransform_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueTransform_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueTransform", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::RigVM_eventGetParameterValueTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::RigVM_eventGetParameterValueTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetParameterValueTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetParameterValueTransform)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetParameterValueTransform(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetParameterValueTransform

// Begin Class URigVM Function GetParameterValueVector
struct Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics
{
	struct RigVM_eventGetParameterValueVector_Parms
	{
		FName InParameterName;
		int32 InArrayIndex;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueVector_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueVector_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueVector", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::RigVM_eventGetParameterValueVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::RigVM_eventGetParameterValueVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetParameterValueVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetParameterValueVector)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetParameterValueVector(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetParameterValueVector

// Begin Class URigVM Function GetParameterValueVector2D
struct Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics
{
	struct RigVM_eventGetParameterValueVector2D_Parms
	{
		FName InParameterName;
		int32 InArrayIndex;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueVector2D_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueVector2D_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetParameterValueVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueVector2D", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::RigVM_eventGetParameterValueVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::RigVM_eventGetParameterValueVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetParameterValueVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetParameterValueVector2D)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetParameterValueVector2D(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetParameterValueVector2D

// Begin Class URigVM Function GetRigVMFunctionName
struct Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics
{
	struct RigVM_eventGetRigVMFunctionName_Parms
	{
		int32 InFunctionIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Returns the name of a function given its index\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "Returns the name of a function given its index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFunctionIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::NewProp_InFunctionIndex = { "InFunctionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetRigVMFunctionName_Parms, InFunctionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetRigVMFunctionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::NewProp_InFunctionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetRigVMFunctionName", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::RigVM_eventGetRigVMFunctionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::RigVM_eventGetRigVMFunctionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetRigVMFunctionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetRigVMFunctionName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InFunctionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetRigVMFunctionName(Z_Param_InFunctionIndex);
	P_NATIVE_END;
}
// End Class URigVM Function GetRigVMFunctionName

// Begin Class URigVM Function GetStatistics
struct Z_Construct_UFunction_URigVM_GetStatistics_Statics
{
	struct RigVM_eventGetStatistics_Parms
	{
		FRigVMStatistics ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "// returns the statistics information\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "returns the statistics information" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_GetStatistics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventGetStatistics_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigVMStatistics, METADATA_PARAMS(0, nullptr) }; // 1804553051
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetStatistics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetStatistics_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetStatistics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetStatistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetStatistics", nullptr, nullptr, Z_Construct_UFunction_URigVM_GetStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetStatistics_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_GetStatistics_Statics::RigVM_eventGetStatistics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetStatistics_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_GetStatistics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_GetStatistics_Statics::RigVM_eventGetStatistics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_GetStatistics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetStatistics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execGetStatistics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigVMStatistics*)Z_Param__Result=P_THIS->GetStatistics();
	P_NATIVE_END;
}
// End Class URigVM Function GetStatistics

// Begin Class URigVM Function SetParameterValueBool
struct Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics
{
	struct RigVM_eventSetParameterValueBool_Parms
	{
		FName InParameterName;
		bool InValue;
		int32 InArrayIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueBool_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
void Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((RigVM_eventSetParameterValueBool_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVM_eventSetParameterValueBool_Parms), &Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueBool_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InArrayIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueBool", nullptr, nullptr, Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::RigVM_eventSetParameterValueBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::RigVM_eventSetParameterValueBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_SetParameterValueBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execSetParameterValueBool)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_UBOOL(Z_Param_InValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameterValueBool(Z_Param_Out_InParameterName,Z_Param_InValue,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function SetParameterValueBool

// Begin Class URigVM Function SetParameterValueDouble
struct Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics
{
	struct RigVM_eventSetParameterValueDouble_Parms
	{
		FName InParameterName;
		double InValue;
		int32 InArrayIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueDouble_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueDouble_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueDouble_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InArrayIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueDouble", nullptr, nullptr, Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::RigVM_eventSetParameterValueDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::RigVM_eventSetParameterValueDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_SetParameterValueDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execSetParameterValueDouble)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameterValueDouble(Z_Param_Out_InParameterName,Z_Param_InValue,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function SetParameterValueDouble

// Begin Class URigVM Function SetParameterValueFloat
struct Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics
{
	struct RigVM_eventSetParameterValueFloat_Parms
	{
		FName InParameterName;
		float InValue;
		int32 InArrayIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueFloat_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueFloat_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueFloat_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InArrayIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueFloat", nullptr, nullptr, Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::RigVM_eventSetParameterValueFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::RigVM_eventSetParameterValueFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_SetParameterValueFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execSetParameterValueFloat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameterValueFloat(Z_Param_Out_InParameterName,Z_Param_InValue,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function SetParameterValueFloat

// Begin Class URigVM Function SetParameterValueInt
struct Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics
{
	struct RigVM_eventSetParameterValueInt_Parms
	{
		FName InParameterName;
		int32 InValue;
		int32 InArrayIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueInt_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueInt_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueInt_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InArrayIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueInt", nullptr, nullptr, Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::RigVM_eventSetParameterValueInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::RigVM_eventSetParameterValueInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_SetParameterValueInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execSetParameterValueInt)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameterValueInt(Z_Param_Out_InParameterName,Z_Param_InValue,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function SetParameterValueInt

// Begin Class URigVM Function SetParameterValueName
struct Z_Construct_UFunction_URigVM_SetParameterValueName_Statics
{
	struct RigVM_eventSetParameterValueName_Parms
	{
		FName InParameterName;
		FName InValue;
		int32 InArrayIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueName_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueName_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueName_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InArrayIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueName", nullptr, nullptr, Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::RigVM_eventSetParameterValueName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::RigVM_eventSetParameterValueName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_SetParameterValueName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execSetParameterValueName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameterValueName(Z_Param_Out_InParameterName,Z_Param_Out_InValue,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function SetParameterValueName

// Begin Class URigVM Function SetParameterValueQuat
struct Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics
{
	struct RigVM_eventSetParameterValueQuat_Parms
	{
		FName InParameterName;
		FQuat InValue;
		int32 InArrayIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueQuat_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueQuat_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InArrayIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueQuat", nullptr, nullptr, Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::RigVM_eventSetParameterValueQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::RigVM_eventSetParameterValueQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_SetParameterValueQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execSetParameterValueQuat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameterValueQuat(Z_Param_Out_InParameterName,Z_Param_Out_InValue,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function SetParameterValueQuat

// Begin Class URigVM Function SetParameterValueString
struct Z_Construct_UFunction_URigVM_SetParameterValueString_Statics
{
	struct RigVM_eventSetParameterValueString_Parms
	{
		FName InParameterName;
		FString InValue;
		int32 InArrayIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueString_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueString_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueString_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InArrayIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueString", nullptr, nullptr, Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::RigVM_eventSetParameterValueString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::RigVM_eventSetParameterValueString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_SetParameterValueString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execSetParameterValueString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameterValueString(Z_Param_Out_InParameterName,Z_Param_InValue,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function SetParameterValueString

// Begin Class URigVM Function SetParameterValueTransform
struct Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics
{
	struct RigVM_eventSetParameterValueTransform_Parms
	{
		FName InParameterName;
		FTransform InValue;
		int32 InArrayIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueTransform_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueTransform_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueTransform_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InArrayIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueTransform", nullptr, nullptr, Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::RigVM_eventSetParameterValueTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::RigVM_eventSetParameterValueTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_SetParameterValueTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execSetParameterValueTransform)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameterValueTransform(Z_Param_Out_InParameterName,Z_Param_Out_InValue,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function SetParameterValueTransform

// Begin Class URigVM Function SetParameterValueVector
struct Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics
{
	struct RigVM_eventSetParameterValueVector_Parms
	{
		FName InParameterName;
		FVector InValue;
		int32 InArrayIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueVector_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueVector_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueVector_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InArrayIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueVector", nullptr, nullptr, Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::RigVM_eventSetParameterValueVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::RigVM_eventSetParameterValueVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_SetParameterValueVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execSetParameterValueVector)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameterValueVector(Z_Param_Out_InParameterName,Z_Param_Out_InValue,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function SetParameterValueVector

// Begin Class URigVM Function SetParameterValueVector2D
struct Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics
{
	struct RigVM_eventSetParameterValueVector2D_Parms
	{
		FName InParameterName;
		FVector2D InValue;
		int32 InArrayIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported, please, update your code." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueVector2D_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterName_MetaData), NewProp_InParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueVector2D_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVM_eventSetParameterValueVector2D_Parms, InArrayIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InArrayIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueVector2D", nullptr, nullptr, Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::RigVM_eventSetParameterValueVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::RigVM_eventSetParameterValueVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVM_SetParameterValueVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVM::execSetParameterValueVector2D)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameterValueVector2D(Z_Param_Out_InParameterName,Z_Param_Out_InValue,Z_Param_InArrayIndex);
	P_NATIVE_END;
}
// End Class URigVM Function SetParameterValueVector2D

// Begin Class URigVM
void URigVM::StaticRegisterNativesURigVM()
{
	UClass* Class = URigVM::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddRigVMFunction", &URigVM::execAddRigVMFunction },
		{ "Execute", &URigVM::execExecute },
		{ "GetParameterValueBool", &URigVM::execGetParameterValueBool },
		{ "GetParameterValueDouble", &URigVM::execGetParameterValueDouble },
		{ "GetParameterValueFloat", &URigVM::execGetParameterValueFloat },
		{ "GetParameterValueInt", &URigVM::execGetParameterValueInt },
		{ "GetParameterValueName", &URigVM::execGetParameterValueName },
		{ "GetParameterValueQuat", &URigVM::execGetParameterValueQuat },
		{ "GetParameterValueString", &URigVM::execGetParameterValueString },
		{ "GetParameterValueTransform", &URigVM::execGetParameterValueTransform },
		{ "GetParameterValueVector", &URigVM::execGetParameterValueVector },
		{ "GetParameterValueVector2D", &URigVM::execGetParameterValueVector2D },
		{ "GetRigVMFunctionName", &URigVM::execGetRigVMFunctionName },
		{ "GetStatistics", &URigVM::execGetStatistics },
		{ "SetParameterValueBool", &URigVM::execSetParameterValueBool },
		{ "SetParameterValueDouble", &URigVM::execSetParameterValueDouble },
		{ "SetParameterValueFloat", &URigVM::execSetParameterValueFloat },
		{ "SetParameterValueInt", &URigVM::execSetParameterValueInt },
		{ "SetParameterValueName", &URigVM::execSetParameterValueName },
		{ "SetParameterValueQuat", &URigVM::execSetParameterValueQuat },
		{ "SetParameterValueString", &URigVM::execSetParameterValueString },
		{ "SetParameterValueTransform", &URigVM::execSetParameterValueTransform },
		{ "SetParameterValueVector", &URigVM::execSetParameterValueVector },
		{ "SetParameterValueVector2D", &URigVM::execSetParameterValueVector2D },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVM);
UClass* Z_Construct_UClass_URigVM_NoRegister()
{
	return URigVM::StaticClass();
}
struct Z_Construct_UClass_URigVM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The RigVM is the main object for evaluating FRigVMByteCode instructions.\n * It combines the byte code, a list of required function pointers for \n * execute instructions and required memory in one class.\n */" },
		{ "IncludePath", "RigVMCore/RigVM.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "The RigVM is the main object for evaluating FRigVMByteCode instructions.\nIt combines the byte code, a list of required function pointers for\nexecute instructions and required memory in one class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiteralMemoryStorage_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWorkMemoryStorage_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDebugMemoryStorage_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkMemoryStorageObject_MetaData[] = {
		{ "Comment", "// Deprecated 5.4\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please, use DefaultWorkMemoryStorage for compiling and WorkMemoryStorage in the ExtendedExecuteContext for intance execution" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "Deprecated 5.4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiteralMemoryStorageObject_MetaData[] = {
		{ "Comment", "// Deprecated 5.4\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please, use LiteralMemoryStorage" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "Deprecated 5.4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMemoryStorageObject_MetaData[] = {
		{ "Comment", "// Deprecated 5.4, \n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please use DefaultDebugMemoryStorage for compiling and DebugMemoryStorage in the ExtendedExecuteContext for intance execution" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "Deprecated 5.4," },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteCodeStorage_MetaData[] = {
		{ "Comment", "// The byte code of the VM\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "The byte code of the VM" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instructions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumExecutions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNamesStorage_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedVMHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LiteralMemoryStorage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWorkMemoryStorage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDebugMemoryStorage;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorkMemoryStorageObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LiteralMemoryStorageObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugMemoryStorageObject;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ByteCodeStorage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instructions;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumExecutions;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNamesStorage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionNamesStorage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CachedVMHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVM_AddRigVMFunction, "AddRigVMFunction" }, // 502052288
		{ &Z_Construct_UFunction_URigVM_Execute, "Execute" }, // 3511866117
		{ &Z_Construct_UFunction_URigVM_GetParameterValueBool, "GetParameterValueBool" }, // 1524243339
		{ &Z_Construct_UFunction_URigVM_GetParameterValueDouble, "GetParameterValueDouble" }, // 2354851837
		{ &Z_Construct_UFunction_URigVM_GetParameterValueFloat, "GetParameterValueFloat" }, // 2771190204
		{ &Z_Construct_UFunction_URigVM_GetParameterValueInt, "GetParameterValueInt" }, // 4171467421
		{ &Z_Construct_UFunction_URigVM_GetParameterValueName, "GetParameterValueName" }, // 2026336875
		{ &Z_Construct_UFunction_URigVM_GetParameterValueQuat, "GetParameterValueQuat" }, // 2016069887
		{ &Z_Construct_UFunction_URigVM_GetParameterValueString, "GetParameterValueString" }, // 4026535096
		{ &Z_Construct_UFunction_URigVM_GetParameterValueTransform, "GetParameterValueTransform" }, // 778771575
		{ &Z_Construct_UFunction_URigVM_GetParameterValueVector, "GetParameterValueVector" }, // 724407639
		{ &Z_Construct_UFunction_URigVM_GetParameterValueVector2D, "GetParameterValueVector2D" }, // 906784153
		{ &Z_Construct_UFunction_URigVM_GetRigVMFunctionName, "GetRigVMFunctionName" }, // 1596769999
		{ &Z_Construct_UFunction_URigVM_GetStatistics, "GetStatistics" }, // 3962959340
		{ &Z_Construct_UFunction_URigVM_SetParameterValueBool, "SetParameterValueBool" }, // 3049774749
		{ &Z_Construct_UFunction_URigVM_SetParameterValueDouble, "SetParameterValueDouble" }, // 2433497833
		{ &Z_Construct_UFunction_URigVM_SetParameterValueFloat, "SetParameterValueFloat" }, // 446652398
		{ &Z_Construct_UFunction_URigVM_SetParameterValueInt, "SetParameterValueInt" }, // 4073711677
		{ &Z_Construct_UFunction_URigVM_SetParameterValueName, "SetParameterValueName" }, // 1756162565
		{ &Z_Construct_UFunction_URigVM_SetParameterValueQuat, "SetParameterValueQuat" }, // 632189814
		{ &Z_Construct_UFunction_URigVM_SetParameterValueString, "SetParameterValueString" }, // 292895167
		{ &Z_Construct_UFunction_URigVM_SetParameterValueTransform, "SetParameterValueTransform" }, // 847358231
		{ &Z_Construct_UFunction_URigVM_SetParameterValueVector, "SetParameterValueVector" }, // 13358661
		{ &Z_Construct_UFunction_URigVM_SetParameterValueVector2D, "SetParameterValueVector2D" }, // 2595321989
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_LiteralMemoryStorage = { "LiteralMemoryStorage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, LiteralMemoryStorage), Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiteralMemoryStorage_MetaData), NewProp_LiteralMemoryStorage_MetaData) }; // 713948944
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_DefaultWorkMemoryStorage = { "DefaultWorkMemoryStorage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, DefaultWorkMemoryStorage), Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWorkMemoryStorage_MetaData), NewProp_DefaultWorkMemoryStorage_MetaData) }; // 713948944
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_DefaultDebugMemoryStorage = { "DefaultDebugMemoryStorage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, DefaultDebugMemoryStorage), Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDebugMemoryStorage_MetaData), NewProp_DefaultDebugMemoryStorage_MetaData) }; // 713948944
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_WorkMemoryStorageObject = { "WorkMemoryStorageObject", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, WorkMemoryStorageObject_DEPRECATED), Z_Construct_UClass_URigVMMemoryStorage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkMemoryStorageObject_MetaData), NewProp_WorkMemoryStorageObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_LiteralMemoryStorageObject = { "LiteralMemoryStorageObject", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, LiteralMemoryStorageObject_DEPRECATED), Z_Construct_UClass_URigVMMemoryStorage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiteralMemoryStorageObject_MetaData), NewProp_LiteralMemoryStorageObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_DebugMemoryStorageObject = { "DebugMemoryStorageObject", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, DebugMemoryStorageObject_DEPRECATED), Z_Construct_UClass_URigVMMemoryStorage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMemoryStorageObject_MetaData), NewProp_DebugMemoryStorageObject_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_ByteCodeStorage = { "ByteCodeStorage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, ByteCodeStorage), Z_Construct_UScriptStruct_FRigVMByteCode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteCodeStorage_MetaData), NewProp_ByteCodeStorage_MetaData) }; // 1247340583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_Instructions = { "Instructions", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, Instructions), Z_Construct_UScriptStruct_FRigVMInstructionArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instructions_MetaData), NewProp_Instructions_MetaData) }; // 3028247874
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_NumExecutions = { "NumExecutions", nullptr, (EPropertyFlags)0x0020080820002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, NumExecutions_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumExecutions_MetaData), NewProp_NumExecutions_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage_Inner = { "FunctionNamesStorage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage = { "FunctionNamesStorage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, FunctionNamesStorage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNamesStorage_MetaData), NewProp_FunctionNamesStorage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMParameter, METADATA_PARAMS(0, nullptr) }; // 146078495
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 146078495
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_CachedVMHash = { "CachedVMHash", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVM, CachedVMHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedVMHash_MetaData), NewProp_CachedVMHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_LiteralMemoryStorage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_DefaultWorkMemoryStorage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_DefaultDebugMemoryStorage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_WorkMemoryStorageObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_LiteralMemoryStorageObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_DebugMemoryStorageObject,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_ByteCodeStorage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_Instructions,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_NumExecutions,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_CachedVMHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URigVM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVM_Statics::ClassParams = {
	&URigVM::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URigVM_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URigVM()
{
	if (!Z_Registration_Info_UClass_URigVM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVM.OuterSingleton, Z_Construct_UClass_URigVM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URigVM.OuterSingleton;
}
template<> RIGVM_API UClass* StaticClass<URigVM>()
{
	return URigVM::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URigVM);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVM)
// End Class URigVM

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigVMParameterType_StaticEnum, TEXT("ERigVMParameterType"), &Z_Registration_Info_UEnum_ERigVMParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 302190056U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMParameter::StaticStruct, Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewStructOps, TEXT("RigVMParameter"), &Z_Registration_Info_UScriptStruct_RigVMParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMParameter), 146078495U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URigVM, URigVM::StaticClass, TEXT("URigVM"), &Z_Registration_Info_UClass_URigVM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVM), 2918646218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_2102116257(TEXT("/Script/RigVM"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
