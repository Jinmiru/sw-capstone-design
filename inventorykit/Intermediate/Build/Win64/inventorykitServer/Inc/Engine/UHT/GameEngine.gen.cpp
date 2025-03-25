// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/GameEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEngine() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngine();
ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
ENGINE_API UClass* Z_Construct_UClass_UGameEngine_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UGameEngine
void UGameEngine::StaticRegisterNativesUGameEngine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameEngine);
UClass* Z_Construct_UClass_UGameEngine_NoRegister()
{
	return UGameEngine::StaticClass();
}
struct Z_Construct_UClass_UGameEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Engine that manages core systems that enable a game.\n */" },
		{ "IncludePath", "Engine/GameEngine.h" },
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
		{ "ToolTip", "Engine that manages core systems that enable a game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[] = {
		{ "Comment", "/** Maximium delta time the engine uses to populate FApp::DeltaTime. If 0, unbound. */" },
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
		{ "ToolTip", "Maximium delta time the engine uses to populate FApp::DeltaTime. If 0, unbound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFlushLogInterval_MetaData[] = {
		{ "Comment", "/** Maximium time (in seconds) between the flushes of the logs on the server (best effort). If 0, this will happen every tick. */" },
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
		{ "ToolTip", "Maximium time (in seconds) between the flushes of the logs on the server (best effort). If 0, this will happen every tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerFlushLogInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEngine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime = { "MaxDeltaTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEngine, MaxDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDeltaTime_MetaData), NewProp_MaxDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval = { "ServerFlushLogInterval", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEngine, ServerFlushLogInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFlushLogInterval_MetaData), NewProp_ServerFlushLogInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEngine, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameInstance_MetaData), NewProp_GameInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameEngine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameEngine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngine,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameEngine_Statics::ClassParams = {
	&UGameEngine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameEngine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::PropPointers),
	0,
	0x000800AEu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameEngine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameEngine()
{
	if (!Z_Registration_Info_UClass_UGameEngine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameEngine.OuterSingleton, Z_Construct_UClass_UGameEngine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameEngine.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UGameEngine>()
{
	return UGameEngine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEngine);
UGameEngine::~UGameEngine() {}
// End Class UGameEngine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameEngine, UGameEngine::StaticClass, TEXT("UGameEngine"), &Z_Registration_Info_UClass_UGameEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameEngine), 2993103098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_3675079508(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
