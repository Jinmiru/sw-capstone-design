// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Private/Iris/DataStream/DataStreamDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataStreamDefinitions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UDataStreamDefinitions();
IRISCORE_API UClass* Z_Construct_UClass_UDataStreamDefinitions_NoRegister();
IRISCORE_API UEnum* Z_Construct_UEnum_IrisCore_EDataStreamSendStatus();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataStreamDefinition();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FDataStreamDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataStreamDefinition;
class UScriptStruct* FDataStreamDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataStreamDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataStreamDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataStreamDefinition, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("DataStreamDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_DataStreamDefinition.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FDataStreamDefinition>()
{
	return FDataStreamDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataStreamDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataStreamName_MetaData[] = {
		{ "Comment", "// Data stream identifier\n" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
		{ "ToolTip", "Data stream identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "// UClass name used to create the UDataStream\n" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
		{ "ToolTip", "UClass name used to create the UDataStream" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Comment", "// UClass used to create the UDataStream\n" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
		{ "ToolTip", "UClass used to create the UDataStream" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSendStatus_MetaData[] = {
		{ "Comment", "// Default send status when created.\n" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
		{ "ToolTip", "Default send status when created." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCreate_MetaData[] = {
		{ "Comment", "// Whether the DataStream should be auto created for each connection. If not then CreateStream need be called manually.\n" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
		{ "ToolTip", "Whether the DataStream should be auto created for each connection. If not then CreateStream need be called manually." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataStreamName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSendStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultSendStatus;
	static void NewProp_bAutoCreate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCreate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataStreamDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DataStreamName = { "DataStreamName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataStreamDefinition, DataStreamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataStreamName_MetaData), NewProp_DataStreamName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataStreamDefinition, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataStreamDefinition, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus = { "DefaultSendStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataStreamDefinition, DefaultSendStatus), Z_Construct_UEnum_IrisCore_EDataStreamSendStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSendStatus_MetaData), NewProp_DefaultSendStatus_MetaData) }; // 1815584412
void Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate_SetBit(void* Obj)
{
	((FDataStreamDefinition*)Obj)->bAutoCreate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate = { "bAutoCreate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDataStreamDefinition), &Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCreate_MetaData), NewProp_bAutoCreate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DataStreamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"DataStreamDefinition",
	Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::PropPointers),
	sizeof(FDataStreamDefinition),
	alignof(FDataStreamDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataStreamDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_DataStreamDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataStreamDefinition.InnerSingleton, Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataStreamDefinition.InnerSingleton;
}
// End ScriptStruct FDataStreamDefinition

// Begin Class UDataStreamDefinitions
void UDataStreamDefinitions::StaticRegisterNativesUDataStreamDefinitions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataStreamDefinitions);
UClass* Z_Construct_UClass_UDataStreamDefinitions_NoRegister()
{
	return UDataStreamDefinitions::StaticClass();
}
struct Z_Construct_UClass_UDataStreamDefinitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/DataStream/DataStreamDefinitions.h" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataStreamDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataStreamDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataStreamDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataStreamDefinitions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions_Inner = { "DataStreamDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataStreamDefinition, METADATA_PARAMS(0, nullptr) }; // 771307936
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions = { "DataStreamDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataStreamDefinitions, DataStreamDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataStreamDefinitions_MetaData), NewProp_DataStreamDefinitions_MetaData) }; // 771307936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataStreamDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamDefinitions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataStreamDefinitions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamDefinitions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataStreamDefinitions_Statics::ClassParams = {
	&UDataStreamDefinitions::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataStreamDefinitions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamDefinitions_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamDefinitions_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataStreamDefinitions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataStreamDefinitions()
{
	if (!Z_Registration_Info_UClass_UDataStreamDefinitions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataStreamDefinitions.OuterSingleton, Z_Construct_UClass_UDataStreamDefinitions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataStreamDefinitions.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UDataStreamDefinitions>()
{
	return UDataStreamDefinitions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataStreamDefinitions);
UDataStreamDefinitions::~UDataStreamDefinitions() {}
// End Class UDataStreamDefinitions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataStreamDefinition::StaticStruct, Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewStructOps, TEXT("DataStreamDefinition"), &Z_Registration_Info_UScriptStruct_DataStreamDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataStreamDefinition), 771307936U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataStreamDefinitions, UDataStreamDefinitions::StaticClass, TEXT("UDataStreamDefinitions"), &Z_Registration_Info_UClass_UDataStreamDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataStreamDefinitions), 2179364144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_3916701147(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
