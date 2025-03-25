// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Contexts/EnvQueryContext_Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_Item() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_Item();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_Item_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryContext_Item
void UEnvQueryContext_Item::StaticRegisterNativesUEnvQueryContext_Item()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryContext_Item);
UClass* Z_Construct_UClass_UEnvQueryContext_Item_NoRegister()
{
	return UEnvQueryContext_Item::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryContext_Item_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Contexts/EnvQueryContext_Item.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_Item.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_Item>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryContext_Item_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Item_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_Item_Statics::ClassParams = {
	&UEnvQueryContext_Item::StaticClass,
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
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Item_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryContext_Item_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryContext_Item()
{
	if (!Z_Registration_Info_UClass_UEnvQueryContext_Item.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryContext_Item.OuterSingleton, Z_Construct_UClass_UEnvQueryContext_Item_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryContext_Item.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryContext_Item>()
{
	return UEnvQueryContext_Item::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_Item);
UEnvQueryContext_Item::~UEnvQueryContext_Item() {}
// End Class UEnvQueryContext_Item

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryContext_Item, UEnvQueryContext_Item::StaticClass, TEXT("UEnvQueryContext_Item"), &Z_Registration_Info_UClass_UEnvQueryContext_Item, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryContext_Item), 904055150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h_2985588226(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
