// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectFilterDefinitions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterDefinitions();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterDefinitions_NoRegister();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetObjectFilterDefinition();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FNetObjectFilterDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition;
class UScriptStruct* FNetObjectFilterDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetObjectFilterDefinition, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NetObjectFilterDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNetObjectFilterDefinition>()
{
	return FNetObjectFilterDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterName_MetaData[] = {
		{ "Comment", "/** Filter identifier. Used to uniquely identify a filter. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
		{ "ToolTip", "Filter identifier. Used to uniquely identify a filter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * UClass name, specified by its fully qualified path, used to create the UNetObjectFilter. You can have multiple instances\n\x09 * of the same filter as long as their FilterNames are unique.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
		{ "ToolTip", "UClass name, specified by its fully qualified path, used to create the UNetObjectFilter. You can have multiple instances\nof the same filter as long as their FilterNames are unique." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional UClass name, specified by its fully qualified path, used to create the UNetObjectFilterConfig. The class default instance\n\x09 * will be passed at filter initialization time. If you want multiple instances of the same\n\x09 * filter then use subclassing to create unique filter configs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
		{ "ToolTip", "Optional UClass name, specified by its fully qualified path, used to create the UNetObjectFilterConfig. The class default instance\nwill be passed at filter initialization time. If you want multiple instances of the same\nfilter then use subclassing to create unique filter configs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetObjectFilterDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_FilterName = { "FilterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetObjectFilterDefinition, FilterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterName_MetaData), NewProp_FilterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetObjectFilterDefinition, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ConfigClassName = { "ConfigClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetObjectFilterDefinition, ConfigClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigClassName_MetaData), NewProp_ConfigClassName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_FilterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ConfigClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"NetObjectFilterDefinition",
	Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::PropPointers),
	sizeof(FNetObjectFilterDefinition),
	alignof(FNetObjectFilterDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetObjectFilterDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.InnerSingleton, Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.InnerSingleton;
}
// End ScriptStruct FNetObjectFilterDefinition

// Begin Class UNetObjectFilterDefinitions
void UNetObjectFilterDefinitions::StaticRegisterNativesUNetObjectFilterDefinitions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectFilterDefinitions);
UClass* Z_Construct_UClass_UNetObjectFilterDefinitions_NoRegister()
{
	return UNetObjectFilterDefinitions::StaticClass();
}
struct Z_Construct_UClass_UNetObjectFilterDefinitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Configurable filter definitions. Valid filter definitions are auto-created by the filter system. */" },
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
		{ "ToolTip", "Configurable filter definitions. Valid filter definitions are auto-created by the filter system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetObjectFilterDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetObjectFilterDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NetObjectFilterDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectFilterDefinitions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions_Inner = { "NetObjectFilterDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNetObjectFilterDefinition, METADATA_PARAMS(0, nullptr) }; // 3510616850
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions = { "NetObjectFilterDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectFilterDefinitions, NetObjectFilterDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetObjectFilterDefinitions_MetaData), NewProp_NetObjectFilterDefinitions_MetaData) }; // 3510616850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::ClassParams = {
	&UNetObjectFilterDefinitions::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectFilterDefinitions()
{
	if (!Z_Registration_Info_UClass_UNetObjectFilterDefinitions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectFilterDefinitions.OuterSingleton, Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectFilterDefinitions.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectFilterDefinitions>()
{
	return UNetObjectFilterDefinitions::StaticClass();
}
UNetObjectFilterDefinitions::UNetObjectFilterDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectFilterDefinitions);
UNetObjectFilterDefinitions::~UNetObjectFilterDefinitions() {}
// End Class UNetObjectFilterDefinitions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetObjectFilterDefinition::StaticStruct, Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewStructOps, TEXT("NetObjectFilterDefinition"), &Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetObjectFilterDefinition), 3510616850U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectFilterDefinitions, UNetObjectFilterDefinitions::StaticClass, TEXT("UNetObjectFilterDefinitions"), &Z_Registration_Info_UClass_UNetObjectFilterDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectFilterDefinitions), 3825777298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_2726868197(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
