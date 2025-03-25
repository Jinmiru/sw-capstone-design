// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerDebugSnapshotInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface();
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UVisualLoggerDebugSnapshotInterface
void UVisualLoggerDebugSnapshotInterface::StaticRegisterNativesUVisualLoggerDebugSnapshotInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisualLoggerDebugSnapshotInterface);
UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister()
{
	return UVisualLoggerDebugSnapshotInterface::StaticClass();
}
struct Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVisualLoggerDebugSnapshotInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::ClassParams = {
	&UVisualLoggerDebugSnapshotInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface()
{
	if (!Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.OuterSingleton, Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVisualLoggerDebugSnapshotInterface>()
{
	return UVisualLoggerDebugSnapshotInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerDebugSnapshotInterface);
UVisualLoggerDebugSnapshotInterface::~UVisualLoggerDebugSnapshotInterface() {}
// End Interface UVisualLoggerDebugSnapshotInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface, UVisualLoggerDebugSnapshotInterface::StaticClass, TEXT("UVisualLoggerDebugSnapshotInterface"), &Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualLoggerDebugSnapshotInterface), 1118534434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_1933009252(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
