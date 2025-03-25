// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationStateDescriptorConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationStateDescriptorConfig();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationStateDescriptorConfig_NoRegister();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FSupportsStructNetSerializerConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig;
class UScriptStruct* FSupportsStructNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("SupportsStructNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FSupportsStructNetSerializerConfig>()
{
	return FSupportsStructNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructName_MetaData[] = {
		{ "Comment", "/** Struct name. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
		{ "ToolTip", "Struct name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseStructNetSerializer_MetaData[] = {
		{ "Comment", "/** If the named struct works with the default Iris StructNetSerializer. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
		{ "ToolTip", "If the named struct works with the default Iris StructNetSerializer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StructName;
	static void NewProp_bCanUseStructNetSerializer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseStructNetSerializer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportsStructNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_StructName = { "StructName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportsStructNetSerializerConfig, StructName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructName_MetaData), NewProp_StructName_MetaData) };
void Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer_SetBit(void* Obj)
{
	((FSupportsStructNetSerializerConfig*)Obj)->bCanUseStructNetSerializer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer = { "bCanUseStructNetSerializer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSupportsStructNetSerializerConfig), &Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanUseStructNetSerializer_MetaData), NewProp_bCanUseStructNetSerializer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_StructName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"SupportsStructNetSerializerConfig",
	Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::PropPointers),
	sizeof(FSupportsStructNetSerializerConfig),
	alignof(FSupportsStructNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FSupportsStructNetSerializerConfig

// Begin Class UReplicationStateDescriptorConfig
void UReplicationStateDescriptorConfig::StaticRegisterNativesUReplicationStateDescriptorConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationStateDescriptorConfig);
UClass* Z_Construct_UClass_UReplicationStateDescriptorConfig_NoRegister()
{
	return UReplicationStateDescriptorConfig::StaticClass();
}
struct Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportsStructNetSerializerList_MetaData[] = {
		{ "Comment", "/**\n\x09 * Structs that works using the default struct NetSerializer when running iris replication even though they implement a custom NetSerialize or NetDeltaSerialize method.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
		{ "ToolTip", "Structs that works using the default struct NetSerializer when running iris replication even though they implement a custom NetSerialize or NetDeltaSerialize method." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportsStructNetSerializerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportsStructNetSerializerList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationStateDescriptorConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList_Inner = { "SupportsStructNetSerializerList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig, METADATA_PARAMS(0, nullptr) }; // 3867154096
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList = { "SupportsStructNetSerializerList", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicationStateDescriptorConfig, SupportsStructNetSerializerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportsStructNetSerializerList_MetaData), NewProp_SupportsStructNetSerializerList_MetaData) }; // 3867154096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::ClassParams = {
	&UReplicationStateDescriptorConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReplicationStateDescriptorConfig()
{
	if (!Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.OuterSingleton, Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UReplicationStateDescriptorConfig>()
{
	return UReplicationStateDescriptorConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationStateDescriptorConfig);
UReplicationStateDescriptorConfig::~UReplicationStateDescriptorConfig() {}
// End Class UReplicationStateDescriptorConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSupportsStructNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewStructOps, TEXT("SupportsStructNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSupportsStructNetSerializerConfig), 3867154096U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationStateDescriptorConfig, UReplicationStateDescriptorConfig::StaticClass, TEXT("UReplicationStateDescriptorConfig"), &Z_Registration_Info_UClass_UReplicationStateDescriptorConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationStateDescriptorConfig), 2437533249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_785575959(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
