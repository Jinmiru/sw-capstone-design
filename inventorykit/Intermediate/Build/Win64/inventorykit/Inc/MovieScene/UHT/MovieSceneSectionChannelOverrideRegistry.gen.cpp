// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneSectionChannelOverrideRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSectionChannelOverrideRegistry() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOverrideContainer_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneSectionChannelOverrideRegistry
void UMovieSceneSectionChannelOverrideRegistry::StaticRegisterNativesUMovieSceneSectionChannelOverrideRegistry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSectionChannelOverrideRegistry);
UClass* Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_NoRegister()
{
	return UMovieSceneSectionChannelOverrideRegistry::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This object contains a map of actual channel overrides, where each override is a channel identifier and a channel container.\n*/" },
		{ "IncludePath", "Channels/MovieSceneSectionChannelOverrideRegistry.h" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneSectionChannelOverrideRegistry.h" },
		{ "ToolTip", "This object contains a map of actual channel overrides, where each override is a channel identifier and a channel container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[] = {
		{ "Comment", "/** Map of channel overrides. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneSectionChannelOverrideRegistry.h" },
		{ "ToolTip", "Map of channel overrides." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Overrides_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Overrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Overrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSectionChannelOverrideRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::NewProp_Overrides_ValueProp = { "Overrides", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMovieSceneChannelOverrideContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::NewProp_Overrides_Key_KeyProp = { "Overrides_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSectionChannelOverrideRegistry, Overrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overrides_MetaData), NewProp_Overrides_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::NewProp_Overrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::NewProp_Overrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::NewProp_Overrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::ClassParams = {
	&UMovieSceneSectionChannelOverrideRegistry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.OuterSingleton, Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSectionChannelOverrideRegistry>()
{
	return UMovieSceneSectionChannelOverrideRegistry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSectionChannelOverrideRegistry);
UMovieSceneSectionChannelOverrideRegistry::~UMovieSceneSectionChannelOverrideRegistry() {}
// End Class UMovieSceneSectionChannelOverrideRegistry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneSectionChannelOverrideRegistry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry, UMovieSceneSectionChannelOverrideRegistry::StaticClass, TEXT("UMovieSceneSectionChannelOverrideRegistry"), &Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSectionChannelOverrideRegistry), 4151270257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneSectionChannelOverrideRegistry_h_1029748627(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneSectionChannelOverrideRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneSectionChannelOverrideRegistry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
