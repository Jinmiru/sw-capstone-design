// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRVOAvoidanceInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface();
ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface URVOAvoidanceInterface
void URVOAvoidanceInterface::StaticRegisterNativesURVOAvoidanceInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URVOAvoidanceInterface);
UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister()
{
	return URVOAvoidanceInterface::StaticClass();
}
struct Z_Construct_UClass_URVOAvoidanceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/AI/RVOAvoidanceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRVOAvoidanceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URVOAvoidanceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URVOAvoidanceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URVOAvoidanceInterface_Statics::ClassParams = {
	&URVOAvoidanceInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URVOAvoidanceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_URVOAvoidanceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URVOAvoidanceInterface()
{
	if (!Z_Registration_Info_UClass_URVOAvoidanceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URVOAvoidanceInterface.OuterSingleton, Z_Construct_UClass_URVOAvoidanceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URVOAvoidanceInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URVOAvoidanceInterface>()
{
	return URVOAvoidanceInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URVOAvoidanceInterface);
URVOAvoidanceInterface::~URVOAvoidanceInterface() {}
// End Interface URVOAvoidanceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URVOAvoidanceInterface, URVOAvoidanceInterface::StaticClass, TEXT("URVOAvoidanceInterface"), &Z_Registration_Info_UClass_URVOAvoidanceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URVOAvoidanceInterface), 3824057647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_2707666347(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
