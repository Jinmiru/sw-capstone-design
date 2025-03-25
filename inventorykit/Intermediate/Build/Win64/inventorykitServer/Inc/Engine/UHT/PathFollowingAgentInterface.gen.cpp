// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFollowingAgentInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UPathFollowingAgentInterface();
ENGINE_API UClass* Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UPathFollowingAgentInterface
void UPathFollowingAgentInterface::StaticRegisterNativesUPathFollowingAgentInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPathFollowingAgentInterface);
UClass* Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister()
{
	return UPathFollowingAgentInterface::StaticClass();
}
struct Z_Construct_UClass_UPathFollowingAgentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/PathFollowingAgentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPathFollowingAgentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPathFollowingAgentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingAgentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathFollowingAgentInterface_Statics::ClassParams = {
	&UPathFollowingAgentInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingAgentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathFollowingAgentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPathFollowingAgentInterface()
{
	if (!Z_Registration_Info_UClass_UPathFollowingAgentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathFollowingAgentInterface.OuterSingleton, Z_Construct_UClass_UPathFollowingAgentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPathFollowingAgentInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPathFollowingAgentInterface>()
{
	return UPathFollowingAgentInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPathFollowingAgentInterface);
UPathFollowingAgentInterface::~UPathFollowingAgentInterface() {}
// End Interface UPathFollowingAgentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPathFollowingAgentInterface, UPathFollowingAgentInterface::StaticClass, TEXT("UPathFollowingAgentInterface"), &Z_Registration_Info_UClass_UPathFollowingAgentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathFollowingAgentInterface), 3502078145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_1633870879(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
