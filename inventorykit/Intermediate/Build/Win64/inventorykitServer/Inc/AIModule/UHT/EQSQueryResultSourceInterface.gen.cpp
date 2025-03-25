// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSQueryResultSourceInterface() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface();
AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Interface UEQSQueryResultSourceInterface
void UEQSQueryResultSourceInterface::StaticRegisterNativesUEQSQueryResultSourceInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEQSQueryResultSourceInterface);
UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister()
{
	return UEQSQueryResultSourceInterface::StaticClass();
}
struct Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEQSQueryResultSourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::ClassParams = {
	&UEQSQueryResultSourceInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface()
{
	if (!Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.OuterSingleton, Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEQSQueryResultSourceInterface>()
{
	return UEQSQueryResultSourceInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEQSQueryResultSourceInterface);
UEQSQueryResultSourceInterface::~UEQSQueryResultSourceInterface() {}
// End Interface UEQSQueryResultSourceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEQSQueryResultSourceInterface, UEQSQueryResultSourceInterface::StaticClass, TEXT("UEQSQueryResultSourceInterface"), &Z_Registration_Info_UClass_UEQSQueryResultSourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEQSQueryResultSourceInterface), 3749172469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_3026308831(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
