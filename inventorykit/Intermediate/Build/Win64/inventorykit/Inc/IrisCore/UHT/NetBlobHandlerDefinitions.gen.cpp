// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Private/Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetBlobHandlerDefinitions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandlerDefinitions();
IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandlerDefinitions_NoRegister();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetBlobHandlerDefinition();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FNetBlobHandlerDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition;
class UScriptStruct* FNetBlobHandlerDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetBlobHandlerDefinition, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NetBlobHandlerDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNetBlobHandlerDefinition>()
{
	return FNetBlobHandlerDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * UClass name of the UNetObjectHandler derived class.\n\x09 * In order for a handler to be successfully registered via UReplicationSystem::RegisterNetBlobHandler\n\x09 * the handler class must match one of the definitions.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h" },
		{ "ToolTip", "UClass name of the UNetObjectHandler derived class.\nIn order for a handler to be successfully registered via UReplicationSystem::RegisterNetBlobHandler\nthe handler class must match one of the definitions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetBlobHandlerDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetBlobHandlerDefinition, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewProp_ClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"NetBlobHandlerDefinition",
	Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::PropPointers),
	sizeof(FNetBlobHandlerDefinition),
	alignof(FNetBlobHandlerDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetBlobHandlerDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.InnerSingleton, Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.InnerSingleton;
}
// End ScriptStruct FNetBlobHandlerDefinition

// Begin Class UNetBlobHandlerDefinitions
void UNetBlobHandlerDefinitions::StaticRegisterNativesUNetBlobHandlerDefinitions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetBlobHandlerDefinitions);
UClass* Z_Construct_UClass_UNetBlobHandlerDefinitions_NoRegister()
{
	return UNetBlobHandlerDefinitions::StaticClass();
}
struct Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Configurable net blob handler definitions. */" },
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h" },
		{ "ToolTip", "Configurable net blob handler definitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetBlobHandlerDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetBlobHandlerDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NetBlobHandlerDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetBlobHandlerDefinitions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions_Inner = { "NetBlobHandlerDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNetBlobHandlerDefinition, METADATA_PARAMS(0, nullptr) }; // 840308821
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions = { "NetBlobHandlerDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetBlobHandlerDefinitions, NetBlobHandlerDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetBlobHandlerDefinitions_MetaData), NewProp_NetBlobHandlerDefinitions_MetaData) }; // 840308821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::ClassParams = {
	&UNetBlobHandlerDefinitions::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetBlobHandlerDefinitions()
{
	if (!Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.OuterSingleton, Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetBlobHandlerDefinitions>()
{
	return UNetBlobHandlerDefinitions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetBlobHandlerDefinitions);
UNetBlobHandlerDefinitions::~UNetBlobHandlerDefinitions() {}
// End Class UNetBlobHandlerDefinitions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetBlobHandlerDefinition::StaticStruct, Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewStructOps, TEXT("NetBlobHandlerDefinition"), &Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetBlobHandlerDefinition), 840308821U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetBlobHandlerDefinitions, UNetBlobHandlerDefinitions::StaticClass, TEXT("UNetBlobHandlerDefinitions"), &Z_Registration_Info_UClass_UNetBlobHandlerDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetBlobHandlerDefinitions), 319515738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_4032567425(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
