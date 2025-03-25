// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimLayerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimLayerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAnimLayerInterface();
ENGINE_API UClass* Z_Construct_UClass_UAnimLayerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UAnimLayerInterface
void UAnimLayerInterface::StaticRegisterNativesUAnimLayerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimLayerInterface);
UClass* Z_Construct_UClass_UAnimLayerInterface_NoRegister()
{
	return UAnimLayerInterface::StaticClass();
}
struct Z_Construct_UClass_UAnimLayerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimLayerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimLayerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimLayerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimLayerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimLayerInterface_Statics::ClassParams = {
	&UAnimLayerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimLayerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimLayerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimLayerInterface()
{
	if (!Z_Registration_Info_UClass_UAnimLayerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimLayerInterface.OuterSingleton, Z_Construct_UClass_UAnimLayerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimLayerInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimLayerInterface>()
{
	return UAnimLayerInterface::StaticClass();
}
UAnimLayerInterface::UAnimLayerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimLayerInterface);
UAnimLayerInterface::~UAnimLayerInterface() {}
// End Interface UAnimLayerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimLayerInterface, UAnimLayerInterface::StaticClass, TEXT("UAnimLayerInterface"), &Z_Registration_Info_UClass_UAnimLayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimLayerInterface), 3271676441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_460449983(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
