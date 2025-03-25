// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISenseBlueprintListener.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseBlueprintListener() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISenseBlueprintListener();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseBlueprintListener_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAISenseBlueprintListener
void UAISenseBlueprintListener::StaticRegisterNativesUAISenseBlueprintListener()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseBlueprintListener);
UClass* Z_Construct_UClass_UAISenseBlueprintListener_NoRegister()
{
	return UAISenseBlueprintListener::StaticClass();
}
struct Z_Construct_UClass_UAISenseBlueprintListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISenseBlueprintListener.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseBlueprintListener.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseBlueprintListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAISenseBlueprintListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserDefinedStruct,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseBlueprintListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseBlueprintListener_Statics::ClassParams = {
	&UAISenseBlueprintListener::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseBlueprintListener_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISenseBlueprintListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISenseBlueprintListener()
{
	if (!Z_Registration_Info_UClass_UAISenseBlueprintListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseBlueprintListener.OuterSingleton, Z_Construct_UClass_UAISenseBlueprintListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISenseBlueprintListener.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISenseBlueprintListener>()
{
	return UAISenseBlueprintListener::StaticClass();
}
UAISenseBlueprintListener::UAISenseBlueprintListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseBlueprintListener);
UAISenseBlueprintListener::~UAISenseBlueprintListener() {}
// End Class UAISenseBlueprintListener

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseBlueprintListener, UAISenseBlueprintListener::StaticClass, TEXT("UAISenseBlueprintListener"), &Z_Registration_Info_UClass_UAISenseBlueprintListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseBlueprintListener), 3918373871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_96826205(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
