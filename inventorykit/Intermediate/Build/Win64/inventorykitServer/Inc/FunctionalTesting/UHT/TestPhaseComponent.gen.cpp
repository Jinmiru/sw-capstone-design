// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Classes/TestPhaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPhaseComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTestPhaseComponent();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTestPhaseComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Class UTestPhaseComponent
void UTestPhaseComponent::StaticRegisterNativesUTestPhaseComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestPhaseComponent);
UClass* Z_Construct_UClass_UTestPhaseComponent_NoRegister()
{
	return UTestPhaseComponent::StaticClass();
}
struct Z_Construct_UClass_UTestPhaseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Trigger PhysicsVolume" },
		{ "IncludePath", "TestPhaseComponent.h" },
		{ "ModuleRelativePath", "Classes/TestPhaseComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestPhaseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTestPhaseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestPhaseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestPhaseComponent_Statics::ClassParams = {
	&UTestPhaseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestPhaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestPhaseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestPhaseComponent()
{
	if (!Z_Registration_Info_UClass_UTestPhaseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestPhaseComponent.OuterSingleton, Z_Construct_UClass_UTestPhaseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestPhaseComponent.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<UTestPhaseComponent>()
{
	return UTestPhaseComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestPhaseComponent);
UTestPhaseComponent::~UTestPhaseComponent() {}
// End Class UTestPhaseComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestPhaseComponent, UTestPhaseComponent::StaticClass, TEXT("UTestPhaseComponent"), &Z_Registration_Info_UClass_UTestPhaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestPhaseComponent), 122719706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_2266533790(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
