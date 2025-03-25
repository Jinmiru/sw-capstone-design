// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayDebugger/Public/GameplayDebuggerPlayerManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerPlayerManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister();
GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData();
UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
// End Cross Module References

// Begin ScriptStruct FGameplayDebuggerPlayerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData;
class UScriptStruct* FGameplayDebuggerPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerPlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerPlayerData>()
{
	return FGameplayDebuggerPlayerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Replicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Replicator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerPlayerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerPlayerData, Controller), Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerPlayerData, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputComponent_MetaData), NewProp_InputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator = { "Replicator", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerPlayerData, Replicator), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Replicator_MetaData), NewProp_Replicator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	nullptr,
	&NewStructOps,
	"GameplayDebuggerPlayerData",
	Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::PropPointers),
	sizeof(FGameplayDebuggerPlayerData),
	alignof(FGameplayDebuggerPlayerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.InnerSingleton;
}
// End ScriptStruct FGameplayDebuggerPlayerData

// Begin Class AGameplayDebuggerPlayerManager
void AGameplayDebuggerPlayerManager::StaticRegisterNativesAGameplayDebuggerPlayerManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayDebuggerPlayerManager);
UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister()
{
	return AGameplayDebuggerPlayerManager::StaticClass();
}
struct Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerPlayerManager.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorWorldData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingRegistrations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingRegistrations;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorWorldData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayDebuggerPlayerManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_Inner = { "PlayerData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, METADATA_PARAMS(0, nullptr) }; // 4219508683
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayDebuggerPlayerManager, PlayerData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 4219508683
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_Inner = { "PendingRegistrations", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations = { "PendingRegistrations", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayDebuggerPlayerManager, PendingRegistrations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingRegistrations_MetaData), NewProp_PendingRegistrations_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_EditorWorldData = { "EditorWorldData", nullptr, (EPropertyFlags)0x0020088800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayDebuggerPlayerManager, EditorWorldData), Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorWorldData_MetaData), NewProp_EditorWorldData_MetaData) }; // 4219508683
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_EditorWorldData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::ClassParams = {
	&AGameplayDebuggerPlayerManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::PropPointers),
	0,
	0x048802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager()
{
	if (!Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.OuterSingleton, Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<AGameplayDebuggerPlayerManager>()
{
	return AGameplayDebuggerPlayerManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayDebuggerPlayerManager);
AGameplayDebuggerPlayerManager::~AGameplayDebuggerPlayerManager() {}
// End Class AGameplayDebuggerPlayerManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayDebuggerPlayerData::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewStructOps, TEXT("GameplayDebuggerPlayerData"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerPlayerData), 4219508683U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayDebuggerPlayerManager, AGameplayDebuggerPlayerManager::StaticClass, TEXT("AGameplayDebuggerPlayerManager"), &Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayDebuggerPlayerManager), 931609962U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_1085364401(TEXT("/Script/GameplayDebugger"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
