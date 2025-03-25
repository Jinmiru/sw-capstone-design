// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavEdgeProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavEdgeProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavEdgeProviderInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavEdgeProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UNavEdgeProviderInterface
void UNavEdgeProviderInterface::StaticRegisterNativesUNavEdgeProviderInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavEdgeProviderInterface);
UClass* Z_Construct_UClass_UNavEdgeProviderInterface_NoRegister()
{
	return UNavEdgeProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UNavEdgeProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavEdgeProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavEdgeProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavEdgeProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavEdgeProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavEdgeProviderInterface_Statics::ClassParams = {
	&UNavEdgeProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavEdgeProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavEdgeProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavEdgeProviderInterface()
{
	if (!Z_Registration_Info_UClass_UNavEdgeProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavEdgeProviderInterface.OuterSingleton, Z_Construct_UClass_UNavEdgeProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavEdgeProviderInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavEdgeProviderInterface>()
{
	return UNavEdgeProviderInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavEdgeProviderInterface);
UNavEdgeProviderInterface::~UNavEdgeProviderInterface() {}
// End Interface UNavEdgeProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavEdgeProviderInterface, UNavEdgeProviderInterface::StaticClass, TEXT("UNavEdgeProviderInterface"), &Z_Registration_Info_UClass_UNavEdgeProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavEdgeProviderInterface), 3866170225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_900258306(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
