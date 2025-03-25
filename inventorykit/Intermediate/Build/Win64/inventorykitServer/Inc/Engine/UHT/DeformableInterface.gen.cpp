// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/DeformableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformableInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UDeformableInterface();
ENGINE_API UClass* Z_Construct_UClass_UDeformableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UDeformableInterface
void UDeformableInterface::StaticRegisterNativesUDeformableInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeformableInterface);
UClass* Z_Construct_UClass_UDeformableInterface_NoRegister()
{
	return UDeformableInterface::StaticClass();
}
struct Z_Construct_UClass_UDeformableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeformableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDeformableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDeformableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeformableInterface_Statics::ClassParams = {
	&UDeformableInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeformableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeformableInterface()
{
	if (!Z_Registration_Info_UClass_UDeformableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeformableInterface.OuterSingleton, Z_Construct_UClass_UDeformableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeformableInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDeformableInterface>()
{
	return UDeformableInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeformableInterface);
UDeformableInterface::~UDeformableInterface() {}
// End Interface UDeformableInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeformableInterface, UDeformableInterface::StaticClass, TEXT("UDeformableInterface"), &Z_Registration_Info_UClass_UDeformableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeformableInterface), 3208831011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_2953228154(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
