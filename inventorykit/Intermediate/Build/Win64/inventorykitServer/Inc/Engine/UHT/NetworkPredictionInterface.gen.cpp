// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPredictionInterface();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPredictionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UNetworkPredictionInterface
void UNetworkPredictionInterface::StaticRegisterNativesUNetworkPredictionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkPredictionInterface);
UClass* Z_Construct_UClass_UNetworkPredictionInterface_NoRegister()
{
	return UNetworkPredictionInterface::StaticClass();
}
struct Z_Construct_UClass_UNetworkPredictionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/NetworkPredictionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INetworkPredictionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetworkPredictionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkPredictionInterface_Statics::ClassParams = {
	&UNetworkPredictionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkPredictionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkPredictionInterface()
{
	if (!Z_Registration_Info_UClass_UNetworkPredictionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkPredictionInterface.OuterSingleton, Z_Construct_UClass_UNetworkPredictionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkPredictionInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkPredictionInterface>()
{
	return UNetworkPredictionInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkPredictionInterface);
UNetworkPredictionInterface::~UNetworkPredictionInterface() {}
// End Interface UNetworkPredictionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkPredictionInterface, UNetworkPredictionInterface::StaticClass, TEXT("UNetworkPredictionInterface"), &Z_Registration_Info_UClass_UNetworkPredictionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkPredictionInterface), 2777829055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_869905494(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
