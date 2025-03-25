// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInheritableComponentHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler();
ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentKey();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentOverrideRecord();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FComponentKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentKey;
class UScriptStruct* FComponentKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ComponentKey"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentKey>()
{
	return FComponentKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComponentKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SCSVariableName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OwnerClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SCSVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssociatedGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass = { "OwnerClass", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentKey, OwnerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerClass_MetaData), NewProp_OwnerClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName = { "SCSVariableName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentKey, SCSVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SCSVariableName_MetaData), NewProp_SCSVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid = { "AssociatedGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentKey, AssociatedGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedGuid_MetaData), NewProp_AssociatedGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ComponentKey",
	Z_Construct_UScriptStruct_FComponentKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::PropPointers),
	sizeof(FComponentKey),
	alignof(FComponentKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComponentKey()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentKey.InnerSingleton, Z_Construct_UScriptStruct_FComponentKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComponentKey.InnerSingleton;
}
// End ScriptStruct FComponentKey

// Begin ScriptStruct FComponentOverrideRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentOverrideRecord;
class UScriptStruct* FComponentOverrideRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentOverrideRecord, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ComponentOverrideRecord"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentOverrideRecord>()
{
	return FComponentOverrideRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplate_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentOverrideRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentOverrideRecord, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClass_MetaData), NewProp_ComponentClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate = { "ComponentTemplate", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentOverrideRecord, ComponentTemplate), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTemplate_MetaData), NewProp_ComponentTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey = { "ComponentKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentOverrideRecord, ComponentKey), Z_Construct_UScriptStruct_FComponentKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentKey_MetaData), NewProp_ComponentKey_MetaData) }; // 1532454791
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentOverrideRecord, CookedComponentInstancingData), Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedComponentInstancingData_MetaData), NewProp_CookedComponentInstancingData_MetaData) }; // 4287695424
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ComponentOverrideRecord",
	Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::PropPointers),
	sizeof(FComponentOverrideRecord),
	alignof(FComponentOverrideRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComponentOverrideRecord()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.InnerSingleton, Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComponentOverrideRecord.InnerSingleton;
}
// End ScriptStruct FComponentOverrideRecord

// Begin Class UInheritableComponentHandler
void UInheritableComponentHandler::StaticRegisterNativesUInheritableComponentHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInheritableComponentHandler);
UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister()
{
	return UInheritableComponentHandler::StaticClass();
}
struct Z_Construct_UClass_UInheritableComponentHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InheritableComponentHandler.h" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[] = {
		{ "Comment", "/** All component records */" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
		{ "ToolTip", "All component records" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnnecessaryComponents_MetaData[] = {
		{ "Comment", "/** List of components that were marked unnecessary, need to keep these around so it doesn't regenerate them when a child asks for one */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
		{ "ToolTip", "List of components that were marked unnecessary, need to keep these around so it doesn't regenerate them when a child asks for one" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Records;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnnecessaryComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnnecessaryComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInheritableComponentHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComponentOverrideRecord, METADATA_PARAMS(0, nullptr) }; // 4029175551
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInheritableComponentHandler, Records), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Records_MetaData), NewProp_Records_MetaData) }; // 4029175551
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_Inner = { "UnnecessaryComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents = { "UnnecessaryComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInheritableComponentHandler, UnnecessaryComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnnecessaryComponents_MetaData), NewProp_UnnecessaryComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInheritableComponentHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInheritableComponentHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInheritableComponentHandler_Statics::ClassParams = {
	&UInheritableComponentHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInheritableComponentHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UInheritableComponentHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInheritableComponentHandler()
{
	if (!Z_Registration_Info_UClass_UInheritableComponentHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInheritableComponentHandler.OuterSingleton, Z_Construct_UClass_UInheritableComponentHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInheritableComponentHandler.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInheritableComponentHandler>()
{
	return UInheritableComponentHandler::StaticClass();
}
UInheritableComponentHandler::UInheritableComponentHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInheritableComponentHandler);
UInheritableComponentHandler::~UInheritableComponentHandler() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInheritableComponentHandler)
// End Class UInheritableComponentHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FComponentKey::StaticStruct, Z_Construct_UScriptStruct_FComponentKey_Statics::NewStructOps, TEXT("ComponentKey"), &Z_Registration_Info_UScriptStruct_ComponentKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentKey), 1532454791U) },
		{ FComponentOverrideRecord::StaticStruct, Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewStructOps, TEXT("ComponentOverrideRecord"), &Z_Registration_Info_UScriptStruct_ComponentOverrideRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentOverrideRecord), 4029175551U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInheritableComponentHandler, UInheritableComponentHandler::StaticClass, TEXT("UInheritableComponentHandler"), &Z_Registration_Info_UClass_UInheritableComponentHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInheritableComponentHandler), 3955299478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_324296967(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
