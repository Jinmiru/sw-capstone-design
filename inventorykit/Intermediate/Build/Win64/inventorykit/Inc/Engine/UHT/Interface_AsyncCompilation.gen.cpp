// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AsyncCompilation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_AsyncCompilation() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UInterface_AsyncCompilation
void UInterface_AsyncCompilation::StaticRegisterNativesUInterface_AsyncCompilation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_AsyncCompilation);
UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister()
{
	return UInterface_AsyncCompilation::StaticClass();
}
struct Z_Construct_UClass_UInterface_AsyncCompilation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_AsyncCompilation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_AsyncCompilation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterface_AsyncCompilation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_AsyncCompilation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_AsyncCompilation_Statics::ClassParams = {
	&UInterface_AsyncCompilation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_AsyncCompilation_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterface_AsyncCompilation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterface_AsyncCompilation()
{
	if (!Z_Registration_Info_UClass_UInterface_AsyncCompilation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_AsyncCompilation.OuterSingleton, Z_Construct_UClass_UInterface_AsyncCompilation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterface_AsyncCompilation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInterface_AsyncCompilation>()
{
	return UInterface_AsyncCompilation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_AsyncCompilation);
UInterface_AsyncCompilation::~UInterface_AsyncCompilation() {}
// End Interface UInterface_AsyncCompilation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_AsyncCompilation, UInterface_AsyncCompilation::StaticClass, TEXT("UInterface_AsyncCompilation"), &Z_Registration_Info_UClass_UInterface_AsyncCompilation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_AsyncCompilation), 1385598614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_1933954414(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
