// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Navigation/NavFilter_AIControllerDefault.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavFilter_AIControllerDefault() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault();
AIMODULE_API UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UNavFilter_AIControllerDefault
void UNavFilter_AIControllerDefault::StaticRegisterNativesUNavFilter_AIControllerDefault()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavFilter_AIControllerDefault);
UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault_NoRegister()
{
	return UNavFilter_AIControllerDefault::StaticClass();
}
struct Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/NavFilter_AIControllerDefault.h" },
		{ "ModuleRelativePath", "Classes/Navigation/NavFilter_AIControllerDefault.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavFilter_AIControllerDefault>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::ClassParams = {
	&UNavFilter_AIControllerDefault::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault()
{
	if (!Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.OuterSingleton, Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UNavFilter_AIControllerDefault>()
{
	return UNavFilter_AIControllerDefault::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavFilter_AIControllerDefault);
UNavFilter_AIControllerDefault::~UNavFilter_AIControllerDefault() {}
// End Class UNavFilter_AIControllerDefault

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavFilter_AIControllerDefault_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavFilter_AIControllerDefault, UNavFilter_AIControllerDefault::StaticClass, TEXT("UNavFilter_AIControllerDefault"), &Z_Registration_Info_UClass_UNavFilter_AIControllerDefault, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavFilter_AIControllerDefault), 3035566308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavFilter_AIControllerDefault_h_2339882491(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavFilter_AIControllerDefault_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavFilter_AIControllerDefault_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
