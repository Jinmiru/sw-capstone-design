// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioExtensions/Public/AudioPropertiesBindings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioPropertiesBindings() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertiesBindings();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertiesBindings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References

// Begin Class UAudioPropertiesBindings
void UAudioPropertiesBindings::StaticRegisterNativesUAudioPropertiesBindings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioPropertiesBindings);
UClass* Z_Construct_UClass_UAudioPropertiesBindings_NoRegister()
{
	return UAudioPropertiesBindings::StaticClass();
}
struct Z_Construct_UClass_UAudioPropertiesBindings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AudioPropertiesBindings.h" },
		{ "ModuleRelativePath", "Public/AudioPropertiesBindings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPropertyToSheetPropertyMap_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AudioPropertiesBindings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectPropertyToSheetPropertyMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectPropertyToSheetPropertyMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectPropertyToSheetPropertyMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioPropertiesBindings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioPropertiesBindings_Statics::NewProp_ObjectPropertyToSheetPropertyMap_ValueProp = { "ObjectPropertyToSheetPropertyMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioPropertiesBindings_Statics::NewProp_ObjectPropertyToSheetPropertyMap_Key_KeyProp = { "ObjectPropertyToSheetPropertyMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAudioPropertiesBindings_Statics::NewProp_ObjectPropertyToSheetPropertyMap = { "ObjectPropertyToSheetPropertyMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioPropertiesBindings, ObjectPropertyToSheetPropertyMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPropertyToSheetPropertyMap_MetaData), NewProp_ObjectPropertyToSheetPropertyMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioPropertiesBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioPropertiesBindings_Statics::NewProp_ObjectPropertyToSheetPropertyMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioPropertiesBindings_Statics::NewProp_ObjectPropertyToSheetPropertyMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioPropertiesBindings_Statics::NewProp_ObjectPropertyToSheetPropertyMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPropertiesBindings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioPropertiesBindings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPropertiesBindings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioPropertiesBindings_Statics::ClassParams = {
	&UAudioPropertiesBindings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioPropertiesBindings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPropertiesBindings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPropertiesBindings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioPropertiesBindings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioPropertiesBindings()
{
	if (!Z_Registration_Info_UClass_UAudioPropertiesBindings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioPropertiesBindings.OuterSingleton, Z_Construct_UClass_UAudioPropertiesBindings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioPropertiesBindings.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UClass* StaticClass<UAudioPropertiesBindings>()
{
	return UAudioPropertiesBindings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioPropertiesBindings);
UAudioPropertiesBindings::~UAudioPropertiesBindings() {}
// End Class UAudioPropertiesBindings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesBindings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioPropertiesBindings, UAudioPropertiesBindings::StaticClass, TEXT("UAudioPropertiesBindings"), &Z_Registration_Info_UClass_UAudioPropertiesBindings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioPropertiesBindings), 1471595275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesBindings_h_3418539894(TEXT("/Script/AudioExtensions"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesBindings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesBindings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
