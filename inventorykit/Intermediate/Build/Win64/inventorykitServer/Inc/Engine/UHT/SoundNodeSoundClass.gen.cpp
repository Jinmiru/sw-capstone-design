// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundNodeSoundClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeSoundClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundNode();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeSoundClass();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeSoundClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundNodeSoundClass
void USoundNodeSoundClass::StaticRegisterNativesUSoundNodeSoundClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeSoundClass);
UClass* Z_Construct_UClass_USoundNodeSoundClass_NoRegister()
{
	return USoundNodeSoundClass::StaticClass();
}
struct Z_Construct_UClass_USoundNodeSoundClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Remaps the SoundClass of SoundWaves underneath this\n */" },
		{ "DisplayName", "SoundClass" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeSoundClass.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeSoundClass.h" },
		{ "ToolTip", "Remaps the SoundClass of SoundWaves underneath this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundClassOverride_MetaData[] = {
		{ "Category", "SoundClass" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeSoundClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundClassOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeSoundClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride = { "SoundClassOverride", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeSoundClass, SoundClassOverride), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundClassOverride_MetaData), NewProp_SoundClassOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeSoundClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSoundClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundNodeSoundClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSoundClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeSoundClass_Statics::ClassParams = {
	&USoundNodeSoundClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundNodeSoundClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSoundClass_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSoundClass_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundNodeSoundClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundNodeSoundClass()
{
	if (!Z_Registration_Info_UClass_USoundNodeSoundClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeSoundClass.OuterSingleton, Z_Construct_UClass_USoundNodeSoundClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundNodeSoundClass.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundNodeSoundClass>()
{
	return USoundNodeSoundClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeSoundClass);
USoundNodeSoundClass::~USoundNodeSoundClass() {}
// End Class USoundNodeSoundClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeSoundClass, USoundNodeSoundClass::StaticClass, TEXT("USoundNodeSoundClass"), &Z_Registration_Info_UClass_USoundNodeSoundClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeSoundClass), 995770631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_4051214075(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
