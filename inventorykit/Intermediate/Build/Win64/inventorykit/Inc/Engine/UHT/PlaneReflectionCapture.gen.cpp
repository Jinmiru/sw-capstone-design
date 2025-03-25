// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/PlaneReflectionCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneReflectionCapture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlaneReflectionCapture();
ENGINE_API UClass* Z_Construct_UClass_APlaneReflectionCapture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class APlaneReflectionCapture
void APlaneReflectionCapture::StaticRegisterNativesAPlaneReflectionCapture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlaneReflectionCapture);
UClass* Z_Construct_UClass_APlaneReflectionCapture_NoRegister()
{
	return APlaneReflectionCapture::StaticClass();
}
struct Z_Construct_UClass_APlaneReflectionCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/PlaneReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlaneReflectionCapture.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaneReflectionCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlaneReflectionCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AReflectionCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlaneReflectionCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaneReflectionCapture_Statics::ClassParams = {
	&APlaneReflectionCapture::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlaneReflectionCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_APlaneReflectionCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlaneReflectionCapture()
{
	if (!Z_Registration_Info_UClass_APlaneReflectionCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaneReflectionCapture.OuterSingleton, Z_Construct_UClass_APlaneReflectionCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlaneReflectionCapture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APlaneReflectionCapture>()
{
	return APlaneReflectionCapture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlaneReflectionCapture);
APlaneReflectionCapture::~APlaneReflectionCapture() {}
// End Class APlaneReflectionCapture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlaneReflectionCapture, APlaneReflectionCapture::StaticClass, TEXT("APlaneReflectionCapture"), &Z_Registration_Info_UClass_APlaneReflectionCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaneReflectionCapture), 3514664318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_43793876(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
