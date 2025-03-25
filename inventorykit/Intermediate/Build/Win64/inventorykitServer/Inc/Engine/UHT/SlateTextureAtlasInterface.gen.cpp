// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateTextureAtlasInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface();
ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface USlateTextureAtlasInterface
void USlateTextureAtlasInterface::StaticRegisterNativesUSlateTextureAtlasInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateTextureAtlasInterface);
UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister()
{
	return USlateTextureAtlasInterface::StaticClass();
}
struct Z_Construct_UClass_USlateTextureAtlasInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Slate/SlateTextureAtlasInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISlateTextureAtlasInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USlateTextureAtlasInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateTextureAtlasInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateTextureAtlasInterface_Statics::ClassParams = {
	&USlateTextureAtlasInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateTextureAtlasInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateTextureAtlasInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateTextureAtlasInterface()
{
	if (!Z_Registration_Info_UClass_USlateTextureAtlasInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateTextureAtlasInterface.OuterSingleton, Z_Construct_UClass_USlateTextureAtlasInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateTextureAtlasInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USlateTextureAtlasInterface>()
{
	return USlateTextureAtlasInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateTextureAtlasInterface);
USlateTextureAtlasInterface::~USlateTextureAtlasInterface() {}
// End Interface USlateTextureAtlasInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateTextureAtlasInterface, USlateTextureAtlasInterface::StaticClass, TEXT("USlateTextureAtlasInterface"), &Z_Registration_Info_UClass_USlateTextureAtlasInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateTextureAtlasInterface), 3680432440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_752075838(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
