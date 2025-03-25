// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SLATECORE_API UClass* Z_Construct_UClass_UFontProviderInterface();
SLATECORE_API UClass* Z_Construct_UClass_UFontProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Interface UFontProviderInterface
void UFontProviderInterface::StaticRegisterNativesUFontProviderInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFontProviderInterface);
UClass* Z_Construct_UClass_UFontProviderInterface_NoRegister()
{
	return UFontProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UFontProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Fonts/FontProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFontProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFontProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFontProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFontProviderInterface_Statics::ClassParams = {
	&UFontProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFontProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UFontProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFontProviderInterface()
{
	if (!Z_Registration_Info_UClass_UFontProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFontProviderInterface.OuterSingleton, Z_Construct_UClass_UFontProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFontProviderInterface.OuterSingleton;
}
template<> SLATECORE_API UClass* StaticClass<UFontProviderInterface>()
{
	return UFontProviderInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFontProviderInterface);
UFontProviderInterface::~UFontProviderInterface() {}
// End Interface UFontProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFontProviderInterface, UFontProviderInterface::StaticClass, TEXT("UFontProviderInterface"), &Z_Registration_Info_UClass_UFontProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFontProviderInterface), 696551337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_2394708643(TEXT("/Script/SlateCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
