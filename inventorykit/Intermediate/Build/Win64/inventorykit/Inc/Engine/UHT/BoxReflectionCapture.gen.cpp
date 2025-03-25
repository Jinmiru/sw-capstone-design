// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/BoxReflectionCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxReflectionCapture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ABoxReflectionCapture();
ENGINE_API UClass* Z_Construct_UClass_ABoxReflectionCapture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ABoxReflectionCapture
void ABoxReflectionCapture::StaticRegisterNativesABoxReflectionCapture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoxReflectionCapture);
UClass* Z_Construct_UClass_ABoxReflectionCapture_NoRegister()
{
	return ABoxReflectionCapture::StaticClass();
}
struct Z_Construct_UClass_ABoxReflectionCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Actor used to capture the scene for reflection in a box shape \n * @see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_3/index.html\n */" },
		{ "HideCategories", "Collision Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/BoxReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/Engine/BoxReflectionCapture.h" },
		{ "ToolTip", "Actor used to capture the scene for reflection in a box shape\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_3/index.html" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxReflectionCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABoxReflectionCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AReflectionCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxReflectionCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoxReflectionCapture_Statics::ClassParams = {
	&ABoxReflectionCapture::StaticClass,
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
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxReflectionCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoxReflectionCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoxReflectionCapture()
{
	if (!Z_Registration_Info_UClass_ABoxReflectionCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoxReflectionCapture.OuterSingleton, Z_Construct_UClass_ABoxReflectionCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoxReflectionCapture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ABoxReflectionCapture>()
{
	return ABoxReflectionCapture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxReflectionCapture);
ABoxReflectionCapture::~ABoxReflectionCapture() {}
// End Class ABoxReflectionCapture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoxReflectionCapture, ABoxReflectionCapture::StaticClass, TEXT("ABoxReflectionCapture"), &Z_Registration_Info_UClass_ABoxReflectionCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoxReflectionCapture), 3184529754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_2228135057(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
