// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ActorInstanceManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorInstanceManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UActorInstanceManagerInterface();
ENGINE_API UClass* Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UActorInstanceManagerInterface
void UActorInstanceManagerInterface::StaticRegisterNativesUActorInstanceManagerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorInstanceManagerInterface);
UClass* Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister()
{
	return UActorInstanceManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UActorInstanceManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/ActorInstanceManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActorInstanceManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorInstanceManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorInstanceManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorInstanceManagerInterface_Statics::ClassParams = {
	&UActorInstanceManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorInstanceManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorInstanceManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorInstanceManagerInterface()
{
	if (!Z_Registration_Info_UClass_UActorInstanceManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorInstanceManagerInterface.OuterSingleton, Z_Construct_UClass_UActorInstanceManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorInstanceManagerInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UActorInstanceManagerInterface>()
{
	return UActorInstanceManagerInterface::StaticClass();
}
UActorInstanceManagerInterface::UActorInstanceManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorInstanceManagerInterface);
UActorInstanceManagerInterface::~UActorInstanceManagerInterface() {}
// End Interface UActorInstanceManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorInstanceManagerInterface, UActorInstanceManagerInterface::StaticClass, TEXT("UActorInstanceManagerInterface"), &Z_Registration_Info_UClass_UActorInstanceManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorInstanceManagerInterface), 179983734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_2809951602(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
