// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/DestructibleInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UDestructibleInterface();
ENGINE_API UClass* Z_Construct_UClass_UDestructibleInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UDestructibleInterface
void UDestructibleInterface::StaticRegisterNativesUDestructibleInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDestructibleInterface);
UClass* Z_Construct_UClass_UDestructibleInterface_NoRegister()
{
	return UDestructibleInterface::StaticClass();
}
struct Z_Construct_UClass_UDestructibleInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DestructibleInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDestructibleInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDestructibleInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDestructibleInterface_Statics::ClassParams = {
	&UDestructibleInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDestructibleInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDestructibleInterface()
{
	if (!Z_Registration_Info_UClass_UDestructibleInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDestructibleInterface.OuterSingleton, Z_Construct_UClass_UDestructibleInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDestructibleInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDestructibleInterface>()
{
	return UDestructibleInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDestructibleInterface);
UDestructibleInterface::~UDestructibleInterface() {}
// End Interface UDestructibleInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDestructibleInterface, UDestructibleInterface::StaticClass, TEXT("UDestructibleInterface"), &Z_Registration_Info_UClass_UDestructibleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDestructibleInterface), 516793372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_4040069701(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
