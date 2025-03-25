// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavAgentInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UNavAgentInterface
void UNavAgentInterface::StaticRegisterNativesUNavAgentInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavAgentInterface);
UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister()
{
	return UNavAgentInterface::StaticClass();
}
struct Z_Construct_UClass_UNavAgentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavAgentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavAgentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavAgentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavAgentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavAgentInterface_Statics::ClassParams = {
	&UNavAgentInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavAgentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavAgentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavAgentInterface()
{
	if (!Z_Registration_Info_UClass_UNavAgentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavAgentInterface.OuterSingleton, Z_Construct_UClass_UNavAgentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavAgentInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavAgentInterface>()
{
	return UNavAgentInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavAgentInterface);
UNavAgentInterface::~UNavAgentInterface() {}
// End Interface UNavAgentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavAgentInterface, UNavAgentInterface::StaticClass, TEXT("UNavAgentInterface"), &Z_Registration_Info_UClass_UNavAgentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavAgentInterface), 3971589188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_467766079(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
