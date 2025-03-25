// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimSubsystem_SharedLinkedAnimLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSubsystem_SharedLinkedAnimLayers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystemInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinkedAnimLayerClassData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FLinkedAnimLayerInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LinkedAnimLayerInstanceData;
class UScriptStruct* FLinkedAnimLayerInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LinkedAnimLayerInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LinkedAnimLayerInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LinkedAnimLayerInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_LinkedAnimLayerInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLinkedAnimLayerInstanceData>()
{
	return FLinkedAnimLayerInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Linked layer instance info\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_SharedLinkedAnimLayers.h" },
		{ "ToolTip", "Linked layer instance info" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_SharedLinkedAnimLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_SharedLinkedAnimLayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LinkedFunctions_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LinkedFunctions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LinkedFunctions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinkedAnimLayerInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinkedAnimLayerInstanceData, Instance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::NewProp_LinkedFunctions_ValueProp = { "LinkedFunctions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::NewProp_LinkedFunctions_Key_KeyProp = { "LinkedFunctions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::NewProp_LinkedFunctions = { "LinkedFunctions", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinkedAnimLayerInstanceData, LinkedFunctions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedFunctions_MetaData), NewProp_LinkedFunctions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::NewProp_LinkedFunctions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::NewProp_LinkedFunctions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::NewProp_LinkedFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LinkedAnimLayerInstanceData",
	Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::PropPointers),
	sizeof(FLinkedAnimLayerInstanceData),
	alignof(FLinkedAnimLayerInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_LinkedAnimLayerInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LinkedAnimLayerInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LinkedAnimLayerInstanceData.InnerSingleton;
}
// End ScriptStruct FLinkedAnimLayerInstanceData

// Begin ScriptStruct FLinkedAnimLayerClassData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LinkedAnimLayerClassData;
class UScriptStruct* FLinkedAnimLayerClassData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LinkedAnimLayerClassData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LinkedAnimLayerClassData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinkedAnimLayerClassData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LinkedAnimLayerClassData"));
	}
	return Z_Registration_Info_UScriptStruct_LinkedAnimLayerClassData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLinkedAnimLayerClassData>()
{
	return FLinkedAnimLayerClassData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Linked layer class info\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_SharedLinkedAnimLayers.h" },
		{ "ToolTip", "Linked layer class info" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancesData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_SharedLinkedAnimLayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancesData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinkedAnimLayerClassData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::NewProp_InstancesData_Inner = { "InstancesData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData, METADATA_PARAMS(0, nullptr) }; // 486785726
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::NewProp_InstancesData = { "InstancesData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinkedAnimLayerClassData, InstancesData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancesData_MetaData), NewProp_InstancesData_MetaData) }; // 486785726
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::NewProp_InstancesData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::NewProp_InstancesData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LinkedAnimLayerClassData",
	Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::PropPointers),
	sizeof(FLinkedAnimLayerClassData),
	alignof(FLinkedAnimLayerClassData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLinkedAnimLayerClassData()
{
	if (!Z_Registration_Info_UScriptStruct_LinkedAnimLayerClassData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LinkedAnimLayerClassData.InnerSingleton, Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LinkedAnimLayerClassData.InnerSingleton;
}
// End ScriptStruct FLinkedAnimLayerClassData

// Begin ScriptStruct FAnimSubsystem_SharedLinkedAnimLayers
static_assert(std::is_polymorphic<FAnimSubsystem_SharedLinkedAnimLayers>() == std::is_polymorphic<FAnimSubsystemInstance>(), "USTRUCT FAnimSubsystem_SharedLinkedAnimLayers cannot be polymorphic unless super FAnimSubsystemInstance is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSubsystem_SharedLinkedAnimLayers;
class UScriptStruct* FAnimSubsystem_SharedLinkedAnimLayers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_SharedLinkedAnimLayers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSubsystem_SharedLinkedAnimLayers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSubsystem_SharedLinkedAnimLayers"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_SharedLinkedAnimLayers.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSubsystem_SharedLinkedAnimLayers>()
{
	return FAnimSubsystem_SharedLinkedAnimLayers::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Data for shared linked anim instances module\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_SharedLinkedAnimLayers.h" },
		{ "ToolTip", "Data for shared linked anim instances module" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassesData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_SharedLinkedAnimLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentClasses_MetaData[] = {
		{ "Comment", "// Anim instance classes that should be kept alive even when unlinked\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_SharedLinkedAnimLayers.h" },
		{ "ToolTip", "Anim instance classes that should be kept alive even when unlinked" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassesData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassesData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PersistentClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistentClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSubsystem_SharedLinkedAnimLayers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::NewProp_ClassesData_Inner = { "ClassesData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinkedAnimLayerClassData, METADATA_PARAMS(0, nullptr) }; // 2816691519
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::NewProp_ClassesData = { "ClassesData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSubsystem_SharedLinkedAnimLayers, ClassesData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassesData_MetaData), NewProp_ClassesData_MetaData) }; // 2816691519
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::NewProp_PersistentClasses_Inner = { "PersistentClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::NewProp_PersistentClasses = { "PersistentClasses", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSubsystem_SharedLinkedAnimLayers, PersistentClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentClasses_MetaData), NewProp_PersistentClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::NewProp_ClassesData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::NewProp_ClassesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::NewProp_PersistentClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::NewProp_PersistentClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimSubsystemInstance,
	&NewStructOps,
	"AnimSubsystem_SharedLinkedAnimLayers",
	Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::PropPointers),
	sizeof(FAnimSubsystem_SharedLinkedAnimLayers),
	alignof(FAnimSubsystem_SharedLinkedAnimLayers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_SharedLinkedAnimLayers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSubsystem_SharedLinkedAnimLayers.InnerSingleton, Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_SharedLinkedAnimLayers.InnerSingleton;
}
// End ScriptStruct FAnimSubsystem_SharedLinkedAnimLayers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_SharedLinkedAnimLayers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLinkedAnimLayerInstanceData::StaticStruct, Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::NewStructOps, TEXT("LinkedAnimLayerInstanceData"), &Z_Registration_Info_UScriptStruct_LinkedAnimLayerInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLinkedAnimLayerInstanceData), 486785726U) },
		{ FLinkedAnimLayerClassData::StaticStruct, Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::NewStructOps, TEXT("LinkedAnimLayerClassData"), &Z_Registration_Info_UScriptStruct_LinkedAnimLayerClassData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLinkedAnimLayerClassData), 2816691519U) },
		{ FAnimSubsystem_SharedLinkedAnimLayers::StaticStruct, Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::NewStructOps, TEXT("AnimSubsystem_SharedLinkedAnimLayers"), &Z_Registration_Info_UScriptStruct_AnimSubsystem_SharedLinkedAnimLayers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSubsystem_SharedLinkedAnimLayers), 4123918009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_SharedLinkedAnimLayers_h_1539653778(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_SharedLinkedAnimLayers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_SharedLinkedAnimLayers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
