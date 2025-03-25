// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundNodeParamCrossFade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeParamCrossFade() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeParamCrossFade();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundNodeParamCrossFade
void USoundNodeParamCrossFade::StaticRegisterNativesUSoundNodeParamCrossFade()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeParamCrossFade);
UClass* Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister()
{
	return USoundNodeParamCrossFade::StaticClass();
}
struct Z_Construct_UClass_USoundNodeParamCrossFade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Crossfades between different sounds based on a parameter\n */" },
		{ "DisplayName", "Crossfade by Param" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeParamCrossFade.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeParamCrossFade.h" },
		{ "ToolTip", "Crossfades between different sounds based on a parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "Category", "CrossFade" },
		{ "Comment", "/* Parameter controlling cross fades. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeParamCrossFade.h" },
		{ "ToolTip", "Parameter controlling cross fades." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeParamCrossFade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeParamCrossFade, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeParamCrossFade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundNodeParamCrossFade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundNodeDistanceCrossFade,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeParamCrossFade_Statics::ClassParams = {
	&USoundNodeParamCrossFade::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundNodeParamCrossFade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundNodeParamCrossFade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundNodeParamCrossFade()
{
	if (!Z_Registration_Info_UClass_USoundNodeParamCrossFade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeParamCrossFade.OuterSingleton, Z_Construct_UClass_USoundNodeParamCrossFade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundNodeParamCrossFade.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundNodeParamCrossFade>()
{
	return USoundNodeParamCrossFade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeParamCrossFade);
USoundNodeParamCrossFade::~USoundNodeParamCrossFade() {}
// End Class USoundNodeParamCrossFade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeParamCrossFade, USoundNodeParamCrossFade::StaticClass, TEXT("USoundNodeParamCrossFade"), &Z_Registration_Info_UClass_USoundNodeParamCrossFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeParamCrossFade), 2529375014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_2459415374(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
