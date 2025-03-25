// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Interfaces/IPhysicsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPhysicsComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsComponent();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UPhysicsComponent
void UPhysicsComponent::StaticRegisterNativesUPhysicsComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsComponent);
UClass* Z_Construct_UClass_UPhysicsComponent_NoRegister()
{
	return UPhysicsComponent::StaticClass();
}
struct Z_Construct_UClass_UPhysicsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Interfaces/IPhysicsComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPhysicsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPhysicsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsComponent_Statics::ClassParams = {
	&UPhysicsComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsComponent()
{
	if (!Z_Registration_Info_UClass_UPhysicsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsComponent.OuterSingleton, Z_Construct_UClass_UPhysicsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicsComponent>()
{
	return UPhysicsComponent::StaticClass();
}
UPhysicsComponent::UPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsComponent);
UPhysicsComponent::~UPhysicsComponent() {}
// End Interface UPhysicsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsComponent, UPhysicsComponent::StaticClass, TEXT("UPhysicsComponent"), &Z_Registration_Info_UClass_UPhysicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsComponent), 2273377401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_2650204607(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
