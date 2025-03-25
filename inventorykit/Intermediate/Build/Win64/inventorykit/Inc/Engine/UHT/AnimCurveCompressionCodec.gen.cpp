// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimCurveCompressionCodec
void UAnimCurveCompressionCodec::StaticRegisterNativesUAnimCurveCompressionCodec()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCurveCompressionCodec);
UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister()
{
	return UAnimCurveCompressionCodec::StaticClass();
}
struct Z_Construct_UClass_UAnimCurveCompressionCodec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Base class for all curve compression codecs.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionCodec.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec.h" },
		{ "ToolTip", "* Base class for all curve compression codecs." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionCodec>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::ClassParams = {
	&UAnimCurveCompressionCodec::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCurveCompressionCodec()
{
	if (!Z_Registration_Info_UClass_UAnimCurveCompressionCodec.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCurveCompressionCodec.OuterSingleton, Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCurveCompressionCodec.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionCodec>()
{
	return UAnimCurveCompressionCodec::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionCodec);
UAnimCurveCompressionCodec::~UAnimCurveCompressionCodec() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimCurveCompressionCodec)
// End Class UAnimCurveCompressionCodec

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCurveCompressionCodec, UAnimCurveCompressionCodec::StaticClass, TEXT("UAnimCurveCompressionCodec"), &Z_Registration_Info_UClass_UAnimCurveCompressionCodec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCurveCompressionCodec), 1671545477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_357138477(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
