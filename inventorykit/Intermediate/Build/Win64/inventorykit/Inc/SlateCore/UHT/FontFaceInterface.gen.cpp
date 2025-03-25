// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Fonts/FontFaceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontFaceInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SLATECORE_API UClass* Z_Construct_UClass_UFontFaceInterface();
SLATECORE_API UClass* Z_Construct_UClass_UFontFaceInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Interface UFontFaceInterface
void UFontFaceInterface::StaticRegisterNativesUFontFaceInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFontFaceInterface);
UClass* Z_Construct_UClass_UFontFaceInterface_NoRegister()
{
	return UFontFaceInterface::StaticClass();
}
struct Z_Construct_UClass_UFontFaceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Fonts/FontFaceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFontFaceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFontFaceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFontFaceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFontFaceInterface_Statics::ClassParams = {
	&UFontFaceInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFontFaceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UFontFaceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFontFaceInterface()
{
	if (!Z_Registration_Info_UClass_UFontFaceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFontFaceInterface.OuterSingleton, Z_Construct_UClass_UFontFaceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFontFaceInterface.OuterSingleton;
}
template<> SLATECORE_API UClass* StaticClass<UFontFaceInterface>()
{
	return UFontFaceInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFontFaceInterface);
UFontFaceInterface::~UFontFaceInterface() {}
// End Interface UFontFaceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFontFaceInterface, UFontFaceInterface::StaticClass, TEXT("UFontFaceInterface"), &Z_Registration_Info_UClass_UFontFaceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFontFaceInterface), 3232847445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_2457842702(TEXT("/Script/SlateCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
