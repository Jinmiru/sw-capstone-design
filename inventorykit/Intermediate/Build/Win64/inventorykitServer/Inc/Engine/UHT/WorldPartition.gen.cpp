// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartition.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartition();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartition_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EWorldPartitionServerStreamingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode;
static UEnum* EWorldPartitionServerStreamingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPartitionServerStreamingMode"));
	}
	return Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionServerStreamingMode>()
{
	return EWorldPartitionServerStreamingMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.Name", "EWorldPartitionServerStreamingMode::Disabled" },
		{ "Disabled.ToolTip", "Server streaming is disabled" },
		{ "Enabled.Name", "EWorldPartitionServerStreamingMode::Enabled" },
		{ "Enabled.ToolTip", "Server streaming is enabled" },
		{ "EnabledInPIE.Name", "EWorldPartitionServerStreamingMode::EnabledInPIE" },
		{ "EnabledInPIE.ToolTip", "Server streaming is only enabled in PIE" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ProjectDefault.Name", "EWorldPartitionServerStreamingMode::ProjectDefault" },
		{ "ProjectDefault.ToolTip", "Use project default (wp.Runtime.EnableServerStreaming)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPartitionServerStreamingMode::ProjectDefault", (int64)EWorldPartitionServerStreamingMode::ProjectDefault },
		{ "EWorldPartitionServerStreamingMode::Disabled", (int64)EWorldPartitionServerStreamingMode::Disabled },
		{ "EWorldPartitionServerStreamingMode::Enabled", (int64)EWorldPartitionServerStreamingMode::Enabled },
		{ "EWorldPartitionServerStreamingMode::EnabledInPIE", (int64)EWorldPartitionServerStreamingMode::EnabledInPIE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EWorldPartitionServerStreamingMode",
	"EWorldPartitionServerStreamingMode",
	Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.InnerSingleton, Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.InnerSingleton;
}
// End Enum EWorldPartitionServerStreamingMode

// Begin Enum EWorldPartitionServerStreamingOutMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode;
static UEnum* EWorldPartitionServerStreamingOutMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPartitionServerStreamingOutMode"));
	}
	return Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionServerStreamingOutMode>()
{
	return EWorldPartitionServerStreamingOutMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.Name", "EWorldPartitionServerStreamingOutMode::Disabled" },
		{ "Disabled.ToolTip", "Server streaming out is disabled" },
		{ "Enabled.Name", "EWorldPartitionServerStreamingOutMode::Enabled" },
		{ "Enabled.ToolTip", "Server streaming out is enabled" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ProjectDefault.Name", "EWorldPartitionServerStreamingOutMode::ProjectDefault" },
		{ "ProjectDefault.ToolTip", "Use project default (wp.Runtime.EnableServerStreamingOut)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPartitionServerStreamingOutMode::ProjectDefault", (int64)EWorldPartitionServerStreamingOutMode::ProjectDefault },
		{ "EWorldPartitionServerStreamingOutMode::Disabled", (int64)EWorldPartitionServerStreamingOutMode::Disabled },
		{ "EWorldPartitionServerStreamingOutMode::Enabled", (int64)EWorldPartitionServerStreamingOutMode::Enabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EWorldPartitionServerStreamingOutMode",
	"EWorldPartitionServerStreamingOutMode",
	Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.InnerSingleton, Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.InnerSingleton;
}
// End Enum EWorldPartitionServerStreamingOutMode

// Begin Enum EWorldPartitionDataLayersLogicOperator
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator;
static UEnum* EWorldPartitionDataLayersLogicOperator_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPartitionDataLayersLogicOperator"));
	}
	return Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionDataLayersLogicOperator>()
{
	return EWorldPartitionDataLayersLogicOperator_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "And.Name", "EWorldPartitionDataLayersLogicOperator::And" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "Or.Name", "EWorldPartitionDataLayersLogicOperator::Or" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPartitionDataLayersLogicOperator::Or", (int64)EWorldPartitionDataLayersLogicOperator::Or },
		{ "EWorldPartitionDataLayersLogicOperator::And", (int64)EWorldPartitionDataLayersLogicOperator::And },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EWorldPartitionDataLayersLogicOperator",
	"EWorldPartitionDataLayersLogicOperator",
	Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.InnerSingleton, Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.InnerSingleton;
}
// End Enum EWorldPartitionDataLayersLogicOperator

// Begin Class UWorldPartition
void UWorldPartition::StaticRegisterNativesUWorldPartition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartition);
UClass* Z_Construct_UClass_UWorldPartition_NoRegister()
{
	return UWorldPartition::StaticClass();
}
struct Z_Construct_UClass_UWorldPartition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "WorldPartition" },
		{ "IncludePath", "WorldPartition/WorldPartition.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionStreamingPolicyClass_MetaData[] = {
		{ "Comment", "/** Class of WorldPartitionStreamingPolicy to be used to manage world partition streaming. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ToolTip", "Class of WorldPartitionStreamingPolicy to be used to manage world partition streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreamingWasEnabled_MetaData[] = {
		{ "Comment", "/** Used to know if it's the first time streaming is enabled on this world. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ToolTip", "Used to know if it's the first time streaming is enabled on this world." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStreaming_MetaData[] = {
		{ "Comment", "/** Enables streaming for this world. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ToolTip", "Enables streaming for this world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerStreamingMode_MetaData[] = {
		{ "Category", "WorldPartitionSetup" },
		{ "EditCondition", "bEnableStreaming" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerStreamingOutMode_MetaData[] = {
		{ "Category", "WorldPartitionSetup" },
		{ "EditCondition", "bEnableStreaming" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayersLogicOperator_MetaData[] = {
		{ "Category", "WorldPartitionSetup" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowShowingHLODsInEditor_MetaData[] = {
		{ "Category", "WorldPartitionSetup" },
		{ "Comment", "/** Whether HLODs should be allowed to be displayed in the editor for this map */" },
		{ "EditCondition", "bEnableStreaming" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ToolTip", "Whether HLODs should be allowed to be displayed in the editor for this map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHLODLayer_MetaData[] = {
		{ "Category", "WorldPartitionSetup" },
		{ "Comment", "// Default HLOD layer\n" },
		{ "DisplayName", "Default HLOD Layer" },
		{ "EditCondition", "bEnableStreaming" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ToolTip", "Default HLOD layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorDescContainerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDataLayerManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredEditorLoaderAdapters_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorHash;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WorldPartitionStreamingPolicyClass;
	static void NewProp_bStreamingWasEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreamingWasEnabled;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeHash;
	static void NewProp_bEnableStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStreaming;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ServerStreamingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ServerStreamingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ServerStreamingOutMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ServerStreamingOutMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataLayersLogicOperator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataLayersLogicOperator;
#if WITH_EDITORONLY_DATA
	static void NewProp_bAllowShowingHLODsInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShowingHLODsInEditor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultHLODLayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorDescContainerInstance;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalDataLayerManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingPolicy;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredEditorLoaderAdapters_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RegisteredEditorLoaderAdapters;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_EditorHash = { "EditorHash", nullptr, (EPropertyFlags)0x0114000800200000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, EditorHash), Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorHash_MetaData), NewProp_EditorHash_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_WorldPartitionStreamingPolicyClass = { "WorldPartitionStreamingPolicyClass", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, WorldPartitionStreamingPolicyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPartitionStreamingPolicyClass_MetaData), NewProp_WorldPartitionStreamingPolicyClass_MetaData) };
void Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled_SetBit(void* Obj)
{
	((UWorldPartition*)Obj)->bStreamingWasEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled = { "bStreamingWasEnabled", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartition), &Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreamingWasEnabled_MetaData), NewProp_bStreamingWasEnabled_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_RuntimeHash = { "RuntimeHash", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, RuntimeHash), Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeHash_MetaData), NewProp_RuntimeHash_MetaData) };
void Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming_SetBit(void* Obj)
{
	((UWorldPartition*)Obj)->bEnableStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming = { "bEnableStreaming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartition), &Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStreaming_MetaData), NewProp_bEnableStreaming_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_ServerStreamingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_ServerStreamingMode = { "ServerStreamingMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, ServerStreamingMode), Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerStreamingMode_MetaData), NewProp_ServerStreamingMode_MetaData) }; // 1314191278
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_ServerStreamingOutMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_ServerStreamingOutMode = { "ServerStreamingOutMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, ServerStreamingOutMode), Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerStreamingOutMode_MetaData), NewProp_ServerStreamingOutMode_MetaData) }; // 4279420847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_DataLayersLogicOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_DataLayersLogicOperator = { "DataLayersLogicOperator", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, DataLayersLogicOperator), Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayersLogicOperator_MetaData), NewProp_DataLayersLogicOperator_MetaData) }; // 918824297
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UWorldPartition_Statics::NewProp_bAllowShowingHLODsInEditor_SetBit(void* Obj)
{
	((UWorldPartition*)Obj)->bAllowShowingHLODsInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_bAllowShowingHLODsInEditor = { "bAllowShowingHLODsInEditor", nullptr, (EPropertyFlags)0x0040040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWorldPartition), &Z_Construct_UClass_UWorldPartition_Statics::NewProp_bAllowShowingHLODsInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowShowingHLODsInEditor_MetaData), NewProp_bAllowShowingHLODsInEditor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_DefaultHLODLayer = { "DefaultHLODLayer", nullptr, (EPropertyFlags)0x0144000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, DefaultHLODLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHLODLayer_MetaData), NewProp_DefaultHLODLayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_ActorDescContainerInstance = { "ActorDescContainerInstance", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, ActorDescContainerInstance), Z_Construct_UClass_UActorDescContainerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorDescContainerInstance_MetaData), NewProp_ActorDescContainerInstance_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_DataLayerManager = { "DataLayerManager", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, DataLayerManager), Z_Construct_UClass_UDataLayerManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerManager_MetaData), NewProp_DataLayerManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_ExternalDataLayerManager = { "ExternalDataLayerManager", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, ExternalDataLayerManager), Z_Construct_UClass_UExternalDataLayerManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalDataLayerManager_MetaData), NewProp_ExternalDataLayerManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_StreamingPolicy = { "StreamingPolicy", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, StreamingPolicy), Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingPolicy_MetaData), NewProp_StreamingPolicy_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters_ElementProp = { "RegisteredEditorLoaderAdapters", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters = { "RegisteredEditorLoaderAdapters", nullptr, (EPropertyFlags)0x0144000c00002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartition, RegisteredEditorLoaderAdapters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredEditorLoaderAdapters_MetaData), NewProp_RegisteredEditorLoaderAdapters_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartition_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_EditorHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_WorldPartitionStreamingPolicyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_RuntimeHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_ServerStreamingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_ServerStreamingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_ServerStreamingOutMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_ServerStreamingOutMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_DataLayersLogicOperator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_DataLayersLogicOperator,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_bAllowShowingHLODsInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_DefaultHLODLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_ActorDescContainerInstance,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_DataLayerManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_ExternalDataLayerManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_StreamingPolicy,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartition_Statics::ClassParams = {
	&UWorldPartition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartition()
{
	if (!Z_Registration_Info_UClass_UWorldPartition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartition.OuterSingleton, Z_Construct_UClass_UWorldPartition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartition.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartition>()
{
	return UWorldPartition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartition);
UWorldPartition::~UWorldPartition() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartition)
// End Class UWorldPartition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWorldPartitionServerStreamingMode_StaticEnum, TEXT("EWorldPartitionServerStreamingMode"), &Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1314191278U) },
		{ EWorldPartitionServerStreamingOutMode_StaticEnum, TEXT("EWorldPartitionServerStreamingOutMode"), &Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4279420847U) },
		{ EWorldPartitionDataLayersLogicOperator_StaticEnum, TEXT("EWorldPartitionDataLayersLogicOperator"), &Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 918824297U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartition, UWorldPartition::StaticClass, TEXT("UWorldPartition"), &Z_Registration_Info_UClass_UWorldPartition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartition), 2069498467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_3876162986(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
