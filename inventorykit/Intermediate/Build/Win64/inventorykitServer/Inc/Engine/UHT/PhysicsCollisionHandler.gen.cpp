// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsCollisionHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPhysicsCollisionHandler
void UPhysicsCollisionHandler::StaticRegisterNativesUPhysicsCollisionHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsCollisionHandler);
UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister()
{
	return UPhysicsCollisionHandler::StaticClass();
}
struct Z_Construct_UClass_UPhysicsCollisionHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactThreshold_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** How hard an impact must be to trigger effect/sound */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "How hard an impact must be to trigger effect/sound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactReFireDelay_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** Min time between effect/sound being triggered */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "Min time between effect/sound being triggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactSound_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** Sound to play  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "Sound to play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastImpactSoundTime_MetaData[] = {
		{ "Comment", "/** Time since last impact sound */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "Time since last impact sound" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactReFireDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultImpactSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastImpactSoundTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsCollisionHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold = { "ImpactThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsCollisionHandler, ImpactThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactThreshold_MetaData), NewProp_ImpactThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay = { "ImpactReFireDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsCollisionHandler, ImpactReFireDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactReFireDelay_MetaData), NewProp_ImpactReFireDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound = { "DefaultImpactSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsCollisionHandler, DefaultImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultImpactSound_MetaData), NewProp_DefaultImpactSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime = { "LastImpactSoundTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsCollisionHandler, LastImpactSoundTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastImpactSoundTime_MetaData), NewProp_LastImpactSoundTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsCollisionHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsCollisionHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::ClassParams = {
	&UPhysicsCollisionHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicsCollisionHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsCollisionHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsCollisionHandler()
{
	if (!Z_Registration_Info_UClass_UPhysicsCollisionHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsCollisionHandler.OuterSingleton, Z_Construct_UClass_UPhysicsCollisionHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsCollisionHandler.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicsCollisionHandler>()
{
	return UPhysicsCollisionHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsCollisionHandler);
UPhysicsCollisionHandler::~UPhysicsCollisionHandler() {}
// End Class UPhysicsCollisionHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsCollisionHandler, UPhysicsCollisionHandler::StaticClass, TEXT("UPhysicsCollisionHandler"), &Z_Registration_Info_UClass_UPhysicsCollisionHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsCollisionHandler), 2060571278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_2281686364(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
