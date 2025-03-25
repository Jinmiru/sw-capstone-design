// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayDebugger/Public/GameplayDebuggerLocalController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerLocalController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
// End Cross Module References

// Begin Class UGameplayDebuggerLocalController
void UGameplayDebuggerLocalController::StaticRegisterNativesUGameplayDebuggerLocalController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayDebuggerLocalController);
UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister()
{
	return UGameplayDebuggerLocalController::StaticClass();
}
struct Z_Construct_UClass_UGameplayDebuggerLocalController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerLocalController.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedReplicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugActorCandidate_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedReplicator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugActorCandidate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDFont;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayDebuggerLocalController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator = { "CachedReplicator", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayDebuggerLocalController, CachedReplicator), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedReplicator_MetaData), NewProp_CachedReplicator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager = { "CachedPlayerManager", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayDebuggerLocalController, CachedPlayerManager), Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayerManager_MetaData), NewProp_CachedPlayerManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate = { "DebugActorCandidate", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayDebuggerLocalController, DebugActorCandidate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugActorCandidate_MetaData), NewProp_DebugActorCandidate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_HUDFont = { "HUDFont", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayDebuggerLocalController, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDFont_MetaData), NewProp_HUDFont_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_HUDFont,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::ClassParams = {
	&UGameplayDebuggerLocalController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::PropPointers),
	0,
	0x040000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayDebuggerLocalController()
{
	if (!Z_Registration_Info_UClass_UGameplayDebuggerLocalController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayDebuggerLocalController.OuterSingleton, Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayDebuggerLocalController.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<UGameplayDebuggerLocalController>()
{
	return UGameplayDebuggerLocalController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerLocalController);
UGameplayDebuggerLocalController::~UGameplayDebuggerLocalController() {}
// End Class UGameplayDebuggerLocalController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayDebuggerLocalController, UGameplayDebuggerLocalController::StaticClass, TEXT("UGameplayDebuggerLocalController"), &Z_Registration_Info_UClass_UGameplayDebuggerLocalController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayDebuggerLocalController), 1791788227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_1363419311(TEXT("/Script/GameplayDebugger"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
