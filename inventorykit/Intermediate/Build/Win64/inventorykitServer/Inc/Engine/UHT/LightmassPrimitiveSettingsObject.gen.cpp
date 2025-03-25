// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Lightmass/LightmassPrimitiveSettingsObject.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassPrimitiveSettingsObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject();
ENGINE_API UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULightmassPrimitiveSettingsObject
void ULightmassPrimitiveSettingsObject::StaticRegisterNativesULightmassPrimitiveSettingsObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightmassPrimitiveSettingsObject);
UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject_NoRegister()
{
	return ULightmassPrimitiveSettingsObject::StaticClass();
}
struct Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Lightmass/LightmassPrimitiveSettingsObject.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPrimitiveSettingsObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPrimitiveSettingsObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightmassPrimitiveSettingsObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightmassPrimitiveSettingsObject, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmassSettings_MetaData), NewProp_LightmassSettings_MetaData) }; // 675185212
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::ClassParams = {
	&ULightmassPrimitiveSettingsObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject()
{
	if (!Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.OuterSingleton, Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULightmassPrimitiveSettingsObject>()
{
	return ULightmassPrimitiveSettingsObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmassPrimitiveSettingsObject);
ULightmassPrimitiveSettingsObject::~ULightmassPrimitiveSettingsObject() {}
// End Class ULightmassPrimitiveSettingsObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightmassPrimitiveSettingsObject, ULightmassPrimitiveSettingsObject::StaticClass, TEXT("ULightmassPrimitiveSettingsObject"), &Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightmassPrimitiveSettingsObject), 2904549637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h_117292477(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
