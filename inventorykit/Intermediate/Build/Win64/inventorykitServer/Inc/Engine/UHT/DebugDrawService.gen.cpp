// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Debug/DebugDrawService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugDrawService() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawService();
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawService_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDebugDrawService
void UDebugDrawService::StaticRegisterNativesUDebugDrawService()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugDrawService);
UClass* Z_Construct_UClass_UDebugDrawService_NoRegister()
{
	return UDebugDrawService::StaticClass();
}
struct Z_Construct_UClass_UDebugDrawService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Debug/DebugDrawService.h" },
		{ "ModuleRelativePath", "Classes/Debug/DebugDrawService.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugDrawService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDebugDrawService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugDrawService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugDrawService_Statics::ClassParams = {
	&UDebugDrawService::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugDrawService_Statics::Class_MetaDataParams), Z_Construct_UClass_UDebugDrawService_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDebugDrawService()
{
	if (!Z_Registration_Info_UClass_UDebugDrawService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugDrawService.OuterSingleton, Z_Construct_UClass_UDebugDrawService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDebugDrawService.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDebugDrawService>()
{
	return UDebugDrawService::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugDrawService);
UDebugDrawService::~UDebugDrawService() {}
// End Class UDebugDrawService

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDebugDrawService, UDebugDrawService::StaticClass, TEXT("UDebugDrawService"), &Z_Registration_Info_UClass_UDebugDrawService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugDrawService), 3089550236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_2162489852(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
