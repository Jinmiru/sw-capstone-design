// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType_Point.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Point() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Point();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Point_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryItemType_Point
void UEnvQueryItemType_Point::StaticRegisterNativesUEnvQueryItemType_Point()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryItemType_Point);
UClass* Z_Construct_UClass_UEnvQueryItemType_Point_NoRegister()
{
	return UEnvQueryItemType_Point::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryItemType_Point_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Items/EnvQueryItemType_Point.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Items/EnvQueryItemType_Point.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryItemType_Point>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryItemType_Point_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType_VectorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_Point_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryItemType_Point_Statics::ClassParams = {
	&UEnvQueryItemType_Point::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_Point_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryItemType_Point_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryItemType_Point()
{
	if (!Z_Registration_Info_UClass_UEnvQueryItemType_Point.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryItemType_Point.OuterSingleton, Z_Construct_UClass_UEnvQueryItemType_Point_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryItemType_Point.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryItemType_Point>()
{
	return UEnvQueryItemType_Point::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryItemType_Point);
UEnvQueryItemType_Point::~UEnvQueryItemType_Point() {}
// End Class UEnvQueryItemType_Point

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Point_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryItemType_Point, UEnvQueryItemType_Point::StaticClass, TEXT("UEnvQueryItemType_Point"), &Z_Registration_Info_UClass_UEnvQueryItemType_Point, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryItemType_Point), 4225626662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Point_h_1732296493(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Point_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Point_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
