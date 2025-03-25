// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldEndpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISoundfieldEndpoint() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References

// Begin Class USoundfieldEndpointSettingsBase
void USoundfieldEndpointSettingsBase::StaticRegisterNativesUSoundfieldEndpointSettingsBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundfieldEndpointSettingsBase);
UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister()
{
	return USoundfieldEndpointSettingsBase::StaticClass();
}
struct Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This opaque class should be used for specifying settings for how audio should be\n * send to an external endpoint.\n */" },
		{ "IncludePath", "ISoundfieldEndpoint.h" },
		{ "ModuleRelativePath", "Public/ISoundfieldEndpoint.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be\nsend to an external endpoint." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEndpointSettingsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::ClassParams = {
	&USoundfieldEndpointSettingsBase::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase()
{
	if (!Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.OuterSingleton, Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundfieldEndpointSettingsBase>()
{
	return USoundfieldEndpointSettingsBase::StaticClass();
}
USoundfieldEndpointSettingsBase::USoundfieldEndpointSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEndpointSettingsBase);
USoundfieldEndpointSettingsBase::~USoundfieldEndpointSettingsBase() {}
// End Class USoundfieldEndpointSettingsBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundfieldEndpointSettingsBase, USoundfieldEndpointSettingsBase::StaticClass, TEXT("USoundfieldEndpointSettingsBase"), &Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundfieldEndpointSettingsBase), 384281585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_1683367656(TEXT("/Script/AudioExtensions"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
