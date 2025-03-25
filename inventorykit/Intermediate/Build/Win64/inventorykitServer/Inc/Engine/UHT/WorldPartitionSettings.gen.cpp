// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionSettings();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionSettings_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionSettings
void UWorldPartitionSettings::StaticRegisterNativesUWorldPartitionSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionSettings);
UClass* Z_Construct_UClass_UWorldPartitionSettings_NoRegister()
{
	return UWorldPartitionSettings::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "World Partition" },
		{ "IncludePath", "WorldPartition/WorldPartitionSettings.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMapsDataLayersLogicOperator_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Set the default logical operator for actor data layers activation for new maps */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSettings.h" },
		{ "ToolTip", "Set the default logical operator for actor data layers activation for new maps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewMapsEnableWorldPartition_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Set the default to whether enable world partition for new maps created in the content broswer */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSettings.h" },
		{ "ToolTip", "Set the default to whether enable world partition for new maps created in the content broswer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewMapsEnableWorldPartitionStreaming_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Set the default to whether enable world partition streaming for new maps created in the content broswer */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSettings.h" },
		{ "ToolTip", "Set the default to whether enable world partition streaming for new maps created in the content broswer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorHashDefaultClass_MetaData[] = {
		{ "Comment", "/** Set the default editor hash class to use for the editor */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSettings.h" },
		{ "ToolTip", "Set the default editor hash class to use for the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeHashDefaultClass_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Set the default runtime hash class to use for new maps  */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSettings.h" },
		{ "ToolTip", "Set the default runtime hash class to use for new maps" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMapsDataLayersLogicOperator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMapsDataLayersLogicOperator;
	static void NewProp_bNewMapsEnableWorldPartition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewMapsEnableWorldPartition;
	static void NewProp_bNewMapsEnableWorldPartitionStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewMapsEnableWorldPartitionStreaming;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EditorHashDefaultClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RuntimeHashDefaultClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_NewMapsDataLayersLogicOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_NewMapsDataLayersLogicOperator = { "NewMapsDataLayersLogicOperator", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionSettings, NewMapsDataLayersLogicOperator), Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMapsDataLayersLogicOperator_MetaData), NewProp_NewMapsDataLayersLogicOperator_MetaData) }; // 918824297
void Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_bNewMapsEnableWorldPartition_SetBit(void* Obj)
{
	((UWorldPartitionSettings*)Obj)->bNewMapsEnableWorldPartition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_bNewMapsEnableWorldPartition = { "bNewMapsEnableWorldPartition", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionSettings), &Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_bNewMapsEnableWorldPartition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewMapsEnableWorldPartition_MetaData), NewProp_bNewMapsEnableWorldPartition_MetaData) };
void Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_bNewMapsEnableWorldPartitionStreaming_SetBit(void* Obj)
{
	((UWorldPartitionSettings*)Obj)->bNewMapsEnableWorldPartitionStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_bNewMapsEnableWorldPartitionStreaming = { "bNewMapsEnableWorldPartitionStreaming", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionSettings), &Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_bNewMapsEnableWorldPartitionStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewMapsEnableWorldPartitionStreaming_MetaData), NewProp_bNewMapsEnableWorldPartitionStreaming_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_EditorHashDefaultClass = { "EditorHashDefaultClass", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionSettings, EditorHashDefaultClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorHashDefaultClass_MetaData), NewProp_EditorHashDefaultClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_RuntimeHashDefaultClass = { "RuntimeHashDefaultClass", nullptr, (EPropertyFlags)0x0024080002004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionSettings, RuntimeHashDefaultClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeHashDefaultClass_MetaData), NewProp_RuntimeHashDefaultClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_NewMapsDataLayersLogicOperator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_NewMapsDataLayersLogicOperator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_bNewMapsEnableWorldPartition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_bNewMapsEnableWorldPartitionStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_EditorHashDefaultClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_RuntimeHashDefaultClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionSettings_Statics::ClassParams = {
	&UWorldPartitionSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionSettings()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionSettings.OuterSingleton, Z_Construct_UClass_UWorldPartitionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionSettings>()
{
	return UWorldPartitionSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionSettings);
UWorldPartitionSettings::~UWorldPartitionSettings() {}
// End Class UWorldPartitionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionSettings, UWorldPartitionSettings::StaticClass, TEXT("UWorldPartitionSettings"), &Z_Registration_Info_UClass_UWorldPartitionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionSettings), 3298713606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_1067777115(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
