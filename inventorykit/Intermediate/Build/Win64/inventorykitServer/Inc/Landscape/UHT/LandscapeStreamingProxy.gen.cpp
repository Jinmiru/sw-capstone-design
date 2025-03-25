// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeStreamingProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeStreamingProxy() {}

// Begin Cross Module References
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ALandscapeStreamingProxy
void ALandscapeStreamingProxy::StaticRegisterNativesALandscapeStreamingProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeStreamingProxy);
UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister()
{
	return ALandscapeStreamingProxy::StaticClass();
}
struct Z_Construct_UClass_ALandscapeStreamingProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug Mobility" },
		{ "IncludePath", "LandscapeStreamingProxy.h" },
		{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeActorRef_MetaData[] = {
		{ "Category", "LandscapeProxy" },
		{ "DisplayName", "Landscape Actor" },
		{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenSharedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_LandscapeActor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LandscapeActorRef;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverriddenSharedProperties_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OverriddenSharedProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeStreamingProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor = { "LandscapeActor", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeStreamingProxy, LandscapeActor_DEPRECATED), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeActor_MetaData), NewProp_LandscapeActor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActorRef = { "LandscapeActorRef", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeStreamingProxy, LandscapeActorRef), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeActorRef_MetaData), NewProp_LandscapeActorRef_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_OverriddenSharedProperties_ElementProp = { "OverriddenSharedProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_OverriddenSharedProperties = { "OverriddenSharedProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeStreamingProxy, OverriddenSharedProperties), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverriddenSharedProperties_MetaData), NewProp_OverriddenSharedProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeStreamingProxy_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActorRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_OverriddenSharedProperties_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_OverriddenSharedProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALandscapeStreamingProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALandscapeProxy,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeStreamingProxy_Statics::ClassParams = {
	&ALandscapeStreamingProxy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALandscapeStreamingProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::PropPointers),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandscapeStreamingProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALandscapeStreamingProxy()
{
	if (!Z_Registration_Info_UClass_ALandscapeStreamingProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeStreamingProxy.OuterSingleton, Z_Construct_UClass_ALandscapeStreamingProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALandscapeStreamingProxy.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ALandscapeStreamingProxy>()
{
	return ALandscapeStreamingProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeStreamingProxy);
ALandscapeStreamingProxy::~ALandscapeStreamingProxy() {}
// End Class ALandscapeStreamingProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeStreamingProxy, ALandscapeStreamingProxy::StaticClass, TEXT("ALandscapeStreamingProxy"), &Z_Registration_Info_UClass_ALandscapeStreamingProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeStreamingProxy), 1550044321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_1099790949(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
