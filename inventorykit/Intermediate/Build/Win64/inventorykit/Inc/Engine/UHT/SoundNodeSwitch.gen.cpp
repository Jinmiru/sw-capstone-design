// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundNodeSwitch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundNode();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeSwitch();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeSwitch_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundNodeSwitch
void USoundNodeSwitch::StaticRegisterNativesUSoundNodeSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeSwitch);
UClass* Z_Construct_UClass_USoundNodeSwitch_NoRegister()
{
	return USoundNodeSwitch::StaticClass();
}
struct Z_Construct_UClass_USoundNodeSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Selects a child node based on the value of a integer parameter\n */" },
		{ "DisplayName", "Switch" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeSwitch.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeSwitch.h" },
		{ "ToolTip", "Selects a child node based on the value of a integer parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntParameterName_MetaData[] = {
		{ "Category", "Switch" },
		{ "Comment", "/** The name of the integer parameter to use to determine which branch we should take */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeSwitch.h" },
		{ "ToolTip", "The name of the integer parameter to use to determine which branch we should take" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_IntParameterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundNodeSwitch_Statics::NewProp_IntParameterName = { "IntParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeSwitch, IntParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntParameterName_MetaData), NewProp_IntParameterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeSwitch_Statics::NewProp_IntParameterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundNodeSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeSwitch_Statics::ClassParams = {
	&USoundNodeSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundNodeSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSwitch_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundNodeSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundNodeSwitch()
{
	if (!Z_Registration_Info_UClass_USoundNodeSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeSwitch.OuterSingleton, Z_Construct_UClass_USoundNodeSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundNodeSwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundNodeSwitch>()
{
	return USoundNodeSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeSwitch);
USoundNodeSwitch::~USoundNodeSwitch() {}
// End Class USoundNodeSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeSwitch, USoundNodeSwitch::StaticClass, TEXT("USoundNodeSwitch"), &Z_Registration_Info_UClass_USoundNodeSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeSwitch), 936129543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h_3428010699(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
