// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMMemoryCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMMemoryCommon() {}

// Begin Cross Module References
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMMemoryType();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Enum ERigVMMemoryType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMMemoryType;
static UEnum* ERigVMMemoryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMMemoryType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMMemoryType"));
	}
	return Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton;
}
template<> RIGVM_API UEnum* StaticEnum<ERigVMMemoryType>()
{
	return ERigVMMemoryType_StaticEnum();
}
struct Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The type of memory used. Typically we differentiate between\n * Work (Mutable) and Literal (Constant) memory.\n */" },
		{ "Debug.Comment", "// Unowned external memory\n" },
		{ "Debug.Name", "ERigVMMemoryType::Debug" },
		{ "Debug.ToolTip", "Unowned external memory" },
		{ "External.Comment", "// Const / fixed state\n" },
		{ "External.Name", "ERigVMMemoryType::External" },
		{ "External.ToolTip", "Const / fixed state" },
		{ "Invalid.Comment", "// Owned memory used for debug watches\n" },
		{ "Invalid.Name", "ERigVMMemoryType::Invalid" },
		{ "Invalid.ToolTip", "Owned memory used for debug watches" },
		{ "Literal.Comment", "// Mutable state\n" },
		{ "Literal.Name", "ERigVMMemoryType::Literal" },
		{ "Literal.ToolTip", "Mutable state" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
		{ "ToolTip", "The type of memory used. Typically we differentiate between\nWork (Mutable) and Literal (Constant) memory." },
		{ "Work.Name", "ERigVMMemoryType::Work" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigVMMemoryType::Work", (int64)ERigVMMemoryType::Work },
		{ "ERigVMMemoryType::Literal", (int64)ERigVMMemoryType::Literal },
		{ "ERigVMMemoryType::External", (int64)ERigVMMemoryType::External },
		{ "ERigVMMemoryType::Debug", (int64)ERigVMMemoryType::Debug },
		{ "ERigVMMemoryType::Invalid", (int64)ERigVMMemoryType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	"ERigVMMemoryType",
	"ERigVMMemoryType",
	Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigVM_ERigVMMemoryType()
{
	if (!Z_Registration_Info_UEnum_ERigVMMemoryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMMemoryType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigVMMemoryType.InnerSingleton;
}
// End Enum ERigVMMemoryType

// Begin ScriptStruct FRigVMInstructionSetExecuteState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMInstructionSetExecuteState;
class UScriptStruct* FRigVMInstructionSetExecuteState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMInstructionSetExecuteState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMInstructionSetExecuteState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMInstructionSetExecuteState"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMInstructionSetExecuteState.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMInstructionSetExecuteState>()
{
	return FRigVMInstructionSetExecuteState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A runtime cache for determining if a set of instruction has to\n// run for this execution of the VM\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
		{ "ToolTip", "A runtime cache for determining if a set of instruction has to\nrun for this execution of the VM" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliceHashToNumInstruction_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SliceHashToNumInstruction_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SliceHashToNumInstruction_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SliceHashToNumInstruction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMInstructionSetExecuteState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::NewProp_SliceHashToNumInstruction_ValueProp = { "SliceHashToNumInstruction", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::NewProp_SliceHashToNumInstruction_Key_KeyProp = { "SliceHashToNumInstruction_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::NewProp_SliceHashToNumInstruction = { "SliceHashToNumInstruction", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMInstructionSetExecuteState, SliceHashToNumInstruction), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliceHashToNumInstruction_MetaData), NewProp_SliceHashToNumInstruction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::NewProp_SliceHashToNumInstruction_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::NewProp_SliceHashToNumInstruction_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::NewProp_SliceHashToNumInstruction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMInstructionSetExecuteState",
	Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::PropPointers),
	sizeof(FRigVMInstructionSetExecuteState),
	alignof(FRigVMInstructionSetExecuteState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMInstructionSetExecuteState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMInstructionSetExecuteState.InnerSingleton, Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMInstructionSetExecuteState.InnerSingleton;
}
// End ScriptStruct FRigVMInstructionSetExecuteState

// Begin ScriptStruct FRigVMOperand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMOperand;
class UScriptStruct* FRigVMOperand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMOperand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMOperand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMOperand, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMOperand"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMOperand.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMOperand>()
{
	return FRigVMOperand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMOperand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The FRigVMOperand represents an argument used for an operator\n * within the virtual machine. Operands provide information about\n * which memory needs to be referred to, which register within the\n * memory all the way to the actual byte address in memory.\n * The FRigVMOperand is a light weight address for a register in\n * a FRigVMMemoryContainer.\n * For external variables the register index represents the\n * index of the external variable within the running VM.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
		{ "ToolTip", "The FRigVMOperand represents an argument used for an operator\nwithin the virtual machine. Operands provide information about\nwhich memory needs to be referred to, which register within the\nmemory all the way to the actual byte address in memory.\nThe FRigVMOperand is a light weight address for a register in\na FRigVMMemoryContainer.\nFor external variables the register index represents the\nindex of the external variable within the running VM." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisterIndex_MetaData[] = {
		{ "Comment", "/**\n\x09 * The index of the register inside of the specific type of memory (work, literal etc).\n\x09 * For external variables the register index represents the index of the external variable within the running VM.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
		{ "ToolTip", "The index of the register inside of the specific type of memory (work, literal etc).\nFor external variables the register index represents the index of the external variable within the running VM." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisterOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MemoryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MemoryType;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_RegisterIndex;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_RegisterOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMOperand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType = { "MemoryType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOperand, MemoryType), Z_Construct_UEnum_RigVM_ERigVMMemoryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryType_MetaData), NewProp_MemoryType_MetaData) }; // 2579333591
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterIndex = { "RegisterIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOperand, RegisterIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisterIndex_MetaData), NewProp_RegisterIndex_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterOffset = { "RegisterOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOperand, RegisterOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisterOffset_MetaData), NewProp_RegisterOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMOperand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOperand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMOperand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMOperand",
	Z_Construct_UScriptStruct_FRigVMOperand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOperand_Statics::PropPointers),
	sizeof(FRigVMOperand),
	alignof(FRigVMOperand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOperand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMOperand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMOperand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMOperand.InnerSingleton, Z_Construct_UScriptStruct_FRigVMOperand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMOperand.InnerSingleton;
}
// End ScriptStruct FRigVMOperand

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigVMMemoryType_StaticEnum, TEXT("ERigVMMemoryType"), &Z_Registration_Info_UEnum_ERigVMMemoryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2579333591U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMInstructionSetExecuteState::StaticStruct, Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics::NewStructOps, TEXT("RigVMInstructionSetExecuteState"), &Z_Registration_Info_UScriptStruct_RigVMInstructionSetExecuteState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMInstructionSetExecuteState), 459813775U) },
		{ FRigVMOperand::StaticStruct, Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewStructOps, TEXT("RigVMOperand"), &Z_Registration_Info_UScriptStruct_RigVMOperand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMOperand), 198266810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_1547664283(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
