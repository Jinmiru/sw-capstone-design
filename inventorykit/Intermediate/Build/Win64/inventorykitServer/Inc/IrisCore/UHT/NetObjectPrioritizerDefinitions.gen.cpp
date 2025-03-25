// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectPrioritizerDefinitions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerDefinitions();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerDefinitions_NoRegister();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FNetObjectPrioritizerDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition;
class UScriptStruct* FNetObjectPrioritizerDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NetObjectPrioritizerDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNetObjectPrioritizerDefinition>()
{
	return FNetObjectPrioritizerDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Prioritizer definition. Configurable via UNetObjectPrioritizerDefinitions. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "Prioritizer definition. Configurable via UNetObjectPrioritizerDefinitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrioritizerName_MetaData[] = {
		{ "Comment", "/** Prioritizer identifier. Used to uniquely identify a prioritizer in various APIs. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "Prioritizer identifier. Used to uniquely identify a prioritizer in various APIs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * UClass name, specified by its fully qualified path, used to create the UNetObjectPrioritizer. You can have multiple instances of the same prioritizer as long as \n\x09 * their PrioritizerNames are unique.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "UClass name, specified by its fully qualified path, used to create the UNetObjectPrioritizer. You can have multiple instances of the same prioritizer as long as\ntheir PrioritizerNames are unique." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Comment", "/** UClass used to create the UNetObjectPrioritizer. Filled in automatically when reading the config. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "UClass used to create the UNetObjectPrioritizer. Filled in automatically when reading the config." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional UClass, specified by its fully qualified path, used to create the UNetObjectPrioritizerConfig. The class default instance will be passed at prioritizer initialization.\n\x09 * If you want multiple instances of the same prioritizer then use subclassing to create unique prioritizer configs.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "Optional UClass, specified by its fully qualified path, used to create the UNetObjectPrioritizerConfig. The class default instance will be passed at prioritizer initialization.\nIf you want multiple instances of the same prioritizer then use subclassing to create unique prioritizer configs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigClass_MetaData[] = {
		{ "Comment", "/** UClass used to create the UNetObjectPrioritizerConfig. Filled in automatically when reading the config. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "UClass used to create the UNetObjectPrioritizerConfig. Filled in automatically when reading the config." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PrioritizerName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ConfigClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetObjectPrioritizerDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_PrioritizerName = { "PrioritizerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetObjectPrioritizerDefinition, PrioritizerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrioritizerName_MetaData), NewProp_PrioritizerName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetObjectPrioritizerDefinition, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetObjectPrioritizerDefinition, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClassName = { "ConfigClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetObjectPrioritizerDefinition, ConfigClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigClassName_MetaData), NewProp_ConfigClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClass = { "ConfigClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetObjectPrioritizerDefinition, ConfigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigClass_MetaData), NewProp_ConfigClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_PrioritizerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewProp_ConfigClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"NetObjectPrioritizerDefinition",
	Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::PropPointers),
	sizeof(FNetObjectPrioritizerDefinition),
	alignof(FNetObjectPrioritizerDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.InnerSingleton, Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition.InnerSingleton;
}
// End ScriptStruct FNetObjectPrioritizerDefinition

// Begin Class UNetObjectPrioritizerDefinitions
void UNetObjectPrioritizerDefinitions::StaticRegisterNativesUNetObjectPrioritizerDefinitions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectPrioritizerDefinitions);
UClass* Z_Construct_UClass_UNetObjectPrioritizerDefinitions_NoRegister()
{
	return UNetObjectPrioritizerDefinitions::StaticClass();
}
struct Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Configurable prioritizer definitions. Valid prioritizer definitions are auto-created by the prioritization system. */" },
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "Configurable prioritizer definitions. Valid prioritizer definitions are auto-created by the prioritization system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetObjectPrioritizerDefinitions_MetaData[] = {
		{ "Comment", "/**\n\x09 * Prioritizer definitions.\n\x09 * The first valid definition will assume the role as default spatial prioritizer. All objects with a RepTag_WorldLocation tag will \n\x09 * be added to the default prioritizer. To override the behavior a prioritizer must be set via calls to the ReplicationSystem.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h" },
		{ "ToolTip", "Prioritizer definitions.\nThe first valid definition will assume the role as default spatial prioritizer. All objects with a RepTag_WorldLocation tag will\nbe added to the default prioritizer. To override the behavior a prioritizer must be set via calls to the ReplicationSystem." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetObjectPrioritizerDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NetObjectPrioritizerDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectPrioritizerDefinitions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions_Inner = { "NetObjectPrioritizerDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition, METADATA_PARAMS(0, nullptr) }; // 725134039
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions = { "NetObjectPrioritizerDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectPrioritizerDefinitions, NetObjectPrioritizerDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetObjectPrioritizerDefinitions_MetaData), NewProp_NetObjectPrioritizerDefinitions_MetaData) }; // 725134039
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::NewProp_NetObjectPrioritizerDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::ClassParams = {
	&UNetObjectPrioritizerDefinitions::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectPrioritizerDefinitions()
{
	if (!Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.OuterSingleton, Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectPrioritizerDefinitions>()
{
	return UNetObjectPrioritizerDefinitions::StaticClass();
}
UNetObjectPrioritizerDefinitions::UNetObjectPrioritizerDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectPrioritizerDefinitions);
UNetObjectPrioritizerDefinitions::~UNetObjectPrioritizerDefinitions() {}
// End Class UNetObjectPrioritizerDefinitions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetObjectPrioritizerDefinition::StaticStruct, Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewStructOps, TEXT("NetObjectPrioritizerDefinition"), &Z_Registration_Info_UScriptStruct_NetObjectPrioritizerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetObjectPrioritizerDefinition), 725134039U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectPrioritizerDefinitions, UNetObjectPrioritizerDefinitions::StaticClass, TEXT("UNetObjectPrioritizerDefinitions"), &Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectPrioritizerDefinitions), 3672631655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_369477337(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
