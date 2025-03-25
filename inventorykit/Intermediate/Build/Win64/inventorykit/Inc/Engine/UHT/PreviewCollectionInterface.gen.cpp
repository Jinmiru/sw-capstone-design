// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/PreviewCollectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewCollectionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UPreviewCollectionInterface();
ENGINE_API UClass* Z_Construct_UClass_UPreviewCollectionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UPreviewCollectionInterface
void UPreviewCollectionInterface::StaticRegisterNativesUPreviewCollectionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPreviewCollectionInterface);
UClass* Z_Construct_UClass_UPreviewCollectionInterface_NoRegister()
{
	return UPreviewCollectionInterface::StaticClass();
}
struct Z_Construct_UClass_UPreviewCollectionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Animation/PreviewCollectionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPreviewCollectionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPreviewCollectionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewCollectionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPreviewCollectionInterface_Statics::ClassParams = {
	&UPreviewCollectionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewCollectionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPreviewCollectionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPreviewCollectionInterface()
{
	if (!Z_Registration_Info_UClass_UPreviewCollectionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPreviewCollectionInterface.OuterSingleton, Z_Construct_UClass_UPreviewCollectionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPreviewCollectionInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPreviewCollectionInterface>()
{
	return UPreviewCollectionInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPreviewCollectionInterface);
UPreviewCollectionInterface::~UPreviewCollectionInterface() {}
// End Interface UPreviewCollectionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPreviewCollectionInterface, UPreviewCollectionInterface::StaticClass, TEXT("UPreviewCollectionInterface"), &Z_Registration_Info_UClass_UPreviewCollectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPreviewCollectionInterface), 301644452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_741980860(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
