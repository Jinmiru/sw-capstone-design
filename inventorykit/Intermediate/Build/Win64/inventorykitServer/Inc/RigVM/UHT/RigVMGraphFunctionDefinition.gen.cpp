// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMGraphFunctionDefinition.h"
#include "RigVM/Public/RigVMCore/RigVMByteCode.h"
#include "RigVM/Public/RigVMCore/RigVMExternalVariable.h"
#include "RigVM/Public/RigVMCore/RigVMMemoryCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMGraphFunctionDefinition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMPinDirection();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMByteCode();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExternalVariable();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationData();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionData();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunctionCompilationPropertyDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription;
class UScriptStruct* FRigVMFunctionCompilationPropertyDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunctionCompilationPropertyDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunctionCompilationPropertyDescription>()
{
	return FRigVMFunctionCompilationPropertyDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "// The name of the property to create\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
		{ "ToolTip", "The name of the property to create" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[] = {
		{ "Comment", "// The complete CPP type to base a new property off of (for ex: 'TArray<TArray<FVector>>')\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
		{ "ToolTip", "The complete CPP type to base a new property off of (for ex: 'TArray<TArray<FVector>>')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObject_MetaData[] = {
		{ "Comment", "// The tail CPP Type object, for example the UScriptStruct for a struct\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
		{ "ToolTip", "The tail CPP Type object, for example the UScriptStruct for a struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "// The default value to use for this property (for example: '(((X=1.000000, Y=2.000000, Z=3.000000)))')\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
		{ "ToolTip", "The default value to use for this property (for example: '(((X=1.000000, Y=2.000000, Z=3.000000)))')" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CPPType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CPPTypeObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunctionCompilationPropertyDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyDescription, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyDescription, CPPType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPPType_MetaData), NewProp_CPPType_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPTypeObject = { "CPPTypeObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyDescription, CPPTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPPTypeObject_MetaData), NewProp_CPPTypeObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyDescription, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPTypeObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMFunctionCompilationPropertyDescription",
	Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::PropPointers),
	sizeof(FRigVMFunctionCompilationPropertyDescription),
	alignof(FRigVMFunctionCompilationPropertyDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.InnerSingleton;
}
// End ScriptStruct FRigVMFunctionCompilationPropertyDescription

// Begin ScriptStruct FRigVMFunctionCompilationPropertyPath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath;
class UScriptStruct* FRigVMFunctionCompilationPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunctionCompilationPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunctionCompilationPropertyPath>()
{
	return FRigVMFunctionCompilationPropertyPath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadCPPType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeadCPPType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SegmentPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunctionCompilationPropertyPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_PropertyIndex = { "PropertyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyPath, PropertyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyIndex_MetaData), NewProp_PropertyIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_HeadCPPType = { "HeadCPPType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyPath, HeadCPPType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadCPPType_MetaData), NewProp_HeadCPPType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_SegmentPath = { "SegmentPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyPath, SegmentPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentPath_MetaData), NewProp_SegmentPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_PropertyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_HeadCPPType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_SegmentPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMFunctionCompilationPropertyPath",
	Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::PropPointers),
	sizeof(FRigVMFunctionCompilationPropertyPath),
	alignof(FRigVMFunctionCompilationPropertyPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.InnerSingleton;
}
// End ScriptStruct FRigVMFunctionCompilationPropertyPath

// Begin ScriptStruct FRigVMFunctionCompilationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData;
class UScriptStruct* FRigVMFunctionCompilationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunctionCompilationData"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunctionCompilationData>()
{
	return FRigVMFunctionCompilationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkPropertyDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkPropertyPathDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiteralPropertyDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiteralPropertyPathDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugPropertyDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugPropertyPathDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalPropertyDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalPropertyPathDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalRegisterIndexToVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operands_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEncounteredSurpressedErrors_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ByteCode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkPropertyDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkPropertyDescriptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkPropertyPathDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkPropertyPathDescriptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LiteralPropertyDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LiteralPropertyDescriptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LiteralPropertyPathDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LiteralPropertyPathDescriptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugPropertyDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugPropertyDescriptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugPropertyPathDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugPropertyPathDescriptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalPropertyDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalPropertyDescriptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalPropertyPathDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalPropertyPathDescriptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExternalRegisterIndexToVariable_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalRegisterIndexToVariable_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExternalRegisterIndexToVariable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Operands_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Operands_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Operands;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
	static void NewProp_bEncounteredSurpressedErrors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncounteredSurpressedErrors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunctionCompilationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ByteCode = { "ByteCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, ByteCode), Z_Construct_UScriptStruct_FRigVMByteCode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteCode_MetaData), NewProp_ByteCode_MetaData) }; // 1247340583
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames_Inner = { "FunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames = { "FunctionNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, FunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNames_MetaData), NewProp_FunctionNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions_Inner = { "WorkPropertyDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription, METADATA_PARAMS(0, nullptr) }; // 1972642747
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions = { "WorkPropertyDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, WorkPropertyDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkPropertyDescriptions_MetaData), NewProp_WorkPropertyDescriptions_MetaData) }; // 1972642747
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions_Inner = { "WorkPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath, METADATA_PARAMS(0, nullptr) }; // 1592580567
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions = { "WorkPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, WorkPropertyPathDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkPropertyPathDescriptions_MetaData), NewProp_WorkPropertyPathDescriptions_MetaData) }; // 1592580567
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions_Inner = { "LiteralPropertyDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription, METADATA_PARAMS(0, nullptr) }; // 1972642747
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions = { "LiteralPropertyDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, LiteralPropertyDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiteralPropertyDescriptions_MetaData), NewProp_LiteralPropertyDescriptions_MetaData) }; // 1972642747
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions_Inner = { "LiteralPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath, METADATA_PARAMS(0, nullptr) }; // 1592580567
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions = { "LiteralPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, LiteralPropertyPathDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiteralPropertyPathDescriptions_MetaData), NewProp_LiteralPropertyPathDescriptions_MetaData) }; // 1592580567
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions_Inner = { "DebugPropertyDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription, METADATA_PARAMS(0, nullptr) }; // 1972642747
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions = { "DebugPropertyDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, DebugPropertyDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugPropertyDescriptions_MetaData), NewProp_DebugPropertyDescriptions_MetaData) }; // 1972642747
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions_Inner = { "DebugPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath, METADATA_PARAMS(0, nullptr) }; // 1592580567
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions = { "DebugPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, DebugPropertyPathDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugPropertyPathDescriptions_MetaData), NewProp_DebugPropertyPathDescriptions_MetaData) }; // 1592580567
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions_Inner = { "ExternalPropertyDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription, METADATA_PARAMS(0, nullptr) }; // 1972642747
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions = { "ExternalPropertyDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, ExternalPropertyDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalPropertyDescriptions_MetaData), NewProp_ExternalPropertyDescriptions_MetaData) }; // 1972642747
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions_Inner = { "ExternalPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath, METADATA_PARAMS(0, nullptr) }; // 1592580567
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions = { "ExternalPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, ExternalPropertyPathDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalPropertyPathDescriptions_MetaData), NewProp_ExternalPropertyPathDescriptions_MetaData) }; // 1592580567
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_ValueProp = { "ExternalRegisterIndexToVariable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_Key_KeyProp = { "ExternalRegisterIndexToVariable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable = { "ExternalRegisterIndexToVariable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, ExternalRegisterIndexToVariable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalRegisterIndexToVariable_MetaData), NewProp_ExternalRegisterIndexToVariable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_ValueProp = { "Operands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRigVMOperand, METADATA_PARAMS(0, nullptr) }; // 198266810
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_Key_KeyProp = { "Operands_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands = { "Operands", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, Operands), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operands_MetaData), NewProp_Operands_MetaData) }; // 198266810
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunctionCompilationData, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_bEncounteredSurpressedErrors_SetBit(void* Obj)
{
	((FRigVMFunctionCompilationData*)Obj)->bEncounteredSurpressedErrors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_bEncounteredSurpressedErrors = { "bEncounteredSurpressedErrors", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunctionCompilationData), &Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_bEncounteredSurpressedErrors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEncounteredSurpressedErrors_MetaData), NewProp_bEncounteredSurpressedErrors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ByteCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_bEncounteredSurpressedErrors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMFunctionCompilationData",
	Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::PropPointers),
	sizeof(FRigVMFunctionCompilationData),
	alignof(FRigVMFunctionCompilationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationData()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.InnerSingleton;
}
// End ScriptStruct FRigVMFunctionCompilationData

// Begin ScriptStruct FRigVMGraphFunctionArgument
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument;
class UScriptStruct* FRigVMGraphFunctionArgument::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionArgument"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionArgument>()
{
	return FRigVMGraphFunctionArgument::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObject_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsConst_MetaData[] = {
		{ "Category", "FunctionArgument" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathToTooltip_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CPPType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CPPTypeObject;
	static void NewProp_bIsArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static void NewProp_bIsConst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConst;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PathToTooltip_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathToTooltip_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PathToTooltip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionArgument>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionArgument, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionArgument, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionArgument, CPPType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPPType_MetaData), NewProp_CPPType_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPTypeObject = { "CPPTypeObject", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionArgument, CPPTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPPTypeObject_MetaData), NewProp_CPPTypeObject_MetaData) };
void Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray_SetBit(void* Obj)
{
	((FRigVMGraphFunctionArgument*)Obj)->bIsArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMGraphFunctionArgument), &Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsArray_MetaData), NewProp_bIsArray_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionArgument, Direction), Z_Construct_UEnum_RigVM_ERigVMPinDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 2587438365
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionArgument, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst_SetBit(void* Obj)
{
	((FRigVMGraphFunctionArgument*)Obj)->bIsConst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst = { "bIsConst", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMGraphFunctionArgument), &Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsConst_MetaData), NewProp_bIsConst_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_ValueProp = { "PathToTooltip", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_Key_KeyProp = { "PathToTooltip_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip = { "PathToTooltip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionArgument, PathToTooltip), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathToTooltip_MetaData), NewProp_PathToTooltip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPTypeObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMGraphFunctionArgument",
	Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::PropPointers),
	sizeof(FRigVMGraphFunctionArgument),
	alignof(FRigVMGraphFunctionArgument),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.InnerSingleton;
}
// End ScriptStruct FRigVMGraphFunctionArgument

// Begin ScriptStruct FRigVMGraphFunctionIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier;
class UScriptStruct* FRigVMGraphFunctionIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionIdentifier>()
{
	return FRigVMGraphFunctionIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LibraryNode_MetaData[] = {
		{ "Category", "FunctionIdentifier" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostObject_MetaData[] = {
		{ "Category", "FunctionIdentifier" },
		{ "Comment", "// A path to the IRigVMGraphFunctionHost that stores the function information, and compilation data (e.g. RigVMBlueprintGeneratedClass)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
		{ "ToolTip", "A path to the IRigVMGraphFunctionHost that stores the function information, and compilation data (e.g. RigVMBlueprintGeneratedClass)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LibraryNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HostObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_LibraryNode = { "LibraryNode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionIdentifier, LibraryNode), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LibraryNode_MetaData), NewProp_LibraryNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_HostObject = { "HostObject", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionIdentifier, HostObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostObject_MetaData), NewProp_HostObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_LibraryNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_HostObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMGraphFunctionIdentifier",
	Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::PropPointers),
	sizeof(FRigVMGraphFunctionIdentifier),
	alignof(FRigVMGraphFunctionIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.InnerSingleton;
}
// End ScriptStruct FRigVMGraphFunctionIdentifier

// Begin ScriptStruct FRigVMGraphFunctionHeader
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader;
class UScriptStruct* FRigVMGraphFunctionHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionHeader"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionHeader>()
{
	return FRigVMGraphFunctionHeader::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LibraryPointer_MetaData[] = {
		{ "Category", "FunctionHeader" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "FunctionHeader" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTitle_MetaData[] = {
		{ "Category", "FunctionHeader" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[] = {
		{ "Category", "FunctionHeader" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "FunctionHeader" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "FunctionHeader" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[] = {
		{ "Category", "FunctionHeader" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[] = {
		{ "Category", "FunctionHeader" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalVariables_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LibraryPointer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeTitle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Arguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Dependencies_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dependencies_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Dependencies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalVariables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalVariables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionHeader>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_LibraryPointer = { "LibraryPointer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, LibraryPointer), Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LibraryPointer_MetaData), NewProp_LibraryPointer_MetaData) }; // 3971861078
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeTitle = { "NodeTitle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, NodeTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTitle_MetaData), NewProp_NodeTitle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeColor_MetaData), NewProp_NodeColor_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Tooltip_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Keywords), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keywords_MetaData), NewProp_Keywords_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument, METADATA_PARAMS(0, nullptr) }; // 1691196313
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arguments_MetaData), NewProp_Arguments_MetaData) }; // 1691196313
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_ValueProp = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_Key_KeyProp = { "Dependencies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier, METADATA_PARAMS(0, nullptr) }; // 3971861078
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Dependencies), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dependencies_MetaData), NewProp_Dependencies_MetaData) }; // 3971861078
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables_Inner = { "ExternalVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMExternalVariable, METADATA_PARAMS(0, nullptr) }; // 2881080269
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables = { "ExternalVariables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeader, ExternalVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalVariables_MetaData), NewProp_ExternalVariables_MetaData) }; // 2881080269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_LibraryPointer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Keywords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMGraphFunctionHeader",
	Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::PropPointers),
	sizeof(FRigVMGraphFunctionHeader),
	alignof(FRigVMGraphFunctionHeader),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.InnerSingleton;
}
// End ScriptStruct FRigVMGraphFunctionHeader

// Begin ScriptStruct FRigVMGraphFunctionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData;
class UScriptStruct* FRigVMGraphFunctionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionData, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionData"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionData>()
{
	return FRigVMGraphFunctionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompilationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SerializedCollapsedNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompilationData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SerializedCollapsedNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionData, Header), Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 2599062278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_CompilationData = { "CompilationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionData, CompilationData), Z_Construct_UScriptStruct_FRigVMFunctionCompilationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompilationData_MetaData), NewProp_CompilationData_MetaData) }; // 632610858
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_SerializedCollapsedNode = { "SerializedCollapsedNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionData, SerializedCollapsedNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SerializedCollapsedNode_MetaData), NewProp_SerializedCollapsedNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_CompilationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_SerializedCollapsedNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMGraphFunctionData",
	Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::PropPointers),
	sizeof(FRigVMGraphFunctionData),
	alignof(FRigVMGraphFunctionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionData()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.InnerSingleton;
}
// End ScriptStruct FRigVMGraphFunctionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunctionCompilationPropertyDescription::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewStructOps, TEXT("RigVMFunctionCompilationPropertyDescription"), &Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunctionCompilationPropertyDescription), 1972642747U) },
		{ FRigVMFunctionCompilationPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewStructOps, TEXT("RigVMFunctionCompilationPropertyPath"), &Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunctionCompilationPropertyPath), 1592580567U) },
		{ FRigVMFunctionCompilationData::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewStructOps, TEXT("RigVMFunctionCompilationData"), &Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunctionCompilationData), 632610858U) },
		{ FRigVMGraphFunctionArgument::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewStructOps, TEXT("RigVMGraphFunctionArgument"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionArgument), 1691196313U) },
		{ FRigVMGraphFunctionIdentifier::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewStructOps, TEXT("RigVMGraphFunctionIdentifier"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionIdentifier), 3971861078U) },
		{ FRigVMGraphFunctionHeader::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewStructOps, TEXT("RigVMGraphFunctionHeader"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionHeader), 2599062278U) },
		{ FRigVMGraphFunctionData::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewStructOps, TEXT("RigVMGraphFunctionData"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionData), 1974764230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h_4231138238(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
