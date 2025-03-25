// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/INodeAndChannelMappings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeINodeAndChannelMappings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UNodeAndChannelMappings();
MOVIESCENE_API UClass* Z_Construct_UClass_UNodeAndChannelMappings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UNodeAndChannelMappings
void UNodeAndChannelMappings::StaticRegisterNativesUNodeAndChannelMappings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNodeAndChannelMappings);
UClass* Z_Construct_UClass_UNodeAndChannelMappings_NoRegister()
{
	return UNodeAndChannelMappings::StaticClass();
}
struct Z_Construct_UClass_UNodeAndChannelMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/INodeAndChannelMappings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INodeAndChannelMappings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNodeAndChannelMappings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNodeAndChannelMappings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNodeAndChannelMappings_Statics::ClassParams = {
	&UNodeAndChannelMappings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNodeAndChannelMappings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNodeAndChannelMappings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNodeAndChannelMappings()
{
	if (!Z_Registration_Info_UClass_UNodeAndChannelMappings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNodeAndChannelMappings.OuterSingleton, Z_Construct_UClass_UNodeAndChannelMappings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNodeAndChannelMappings.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UNodeAndChannelMappings>()
{
	return UNodeAndChannelMappings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeAndChannelMappings);
UNodeAndChannelMappings::~UNodeAndChannelMappings() {}
// End Interface UNodeAndChannelMappings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNodeAndChannelMappings, UNodeAndChannelMappings::StaticClass, TEXT("UNodeAndChannelMappings"), &Z_Registration_Info_UClass_UNodeAndChannelMappings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNodeAndChannelMappings), 586091683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_962366669(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
