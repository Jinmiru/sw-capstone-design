// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType_Direction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Direction() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Direction();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Direction_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryItemType_Direction
void UEnvQueryItemType_Direction::StaticRegisterNativesUEnvQueryItemType_Direction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryItemType_Direction);
UClass* Z_Construct_UClass_UEnvQueryItemType_Direction_NoRegister()
{
	return UEnvQueryItemType_Direction::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryItemType_Direction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Items/EnvQueryItemType_Direction.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Items/EnvQueryItemType_Direction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryItemType_Direction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType_VectorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::ClassParams = {
	&UEnvQueryItemType_Direction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryItemType_Direction()
{
	if (!Z_Registration_Info_UClass_UEnvQueryItemType_Direction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryItemType_Direction.OuterSingleton, Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryItemType_Direction.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryItemType_Direction>()
{
	return UEnvQueryItemType_Direction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryItemType_Direction);
UEnvQueryItemType_Direction::~UEnvQueryItemType_Direction() {}
// End Class UEnvQueryItemType_Direction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryItemType_Direction, UEnvQueryItemType_Direction::StaticClass, TEXT("UEnvQueryItemType_Direction"), &Z_Registration_Info_UClass_UEnvQueryItemType_Direction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryItemType_Direction), 1948651302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h_1919350366(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
