// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Classes/FuncTestRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuncTestRenderingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFuncTestRenderingComponent();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Class UFuncTestRenderingComponent
void UFuncTestRenderingComponent::StaticRegisterNativesUFuncTestRenderingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFuncTestRenderingComponent);
UClass* Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister()
{
	return UFuncTestRenderingComponent::StaticClass();
}
struct Z_Construct_UClass_UFuncTestRenderingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "FuncTestRenderingComponent.h" },
		{ "ModuleRelativePath", "Classes/FuncTestRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuncTestRenderingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFuncTestRenderingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuncTestRenderingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuncTestRenderingComponent_Statics::ClassParams = {
	&UFuncTestRenderingComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuncTestRenderingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuncTestRenderingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFuncTestRenderingComponent()
{
	if (!Z_Registration_Info_UClass_UFuncTestRenderingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuncTestRenderingComponent.OuterSingleton, Z_Construct_UClass_UFuncTestRenderingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuncTestRenderingComponent.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<UFuncTestRenderingComponent>()
{
	return UFuncTestRenderingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFuncTestRenderingComponent);
UFuncTestRenderingComponent::~UFuncTestRenderingComponent() {}
// End Class UFuncTestRenderingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuncTestRenderingComponent, UFuncTestRenderingComponent::StaticClass, TEXT("UFuncTestRenderingComponent"), &Z_Registration_Info_UClass_UFuncTestRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuncTestRenderingComponent), 3661141684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_1908859540(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
