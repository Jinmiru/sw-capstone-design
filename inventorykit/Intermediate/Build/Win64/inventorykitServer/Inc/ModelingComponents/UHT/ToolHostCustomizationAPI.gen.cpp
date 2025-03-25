// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/ToolHostCustomizationAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolHostCustomizationAPI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UToolHostCustomizationAPI();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UToolHostCustomizationAPI_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Interface UToolHostCustomizationAPI
void UToolHostCustomizationAPI::StaticRegisterNativesUToolHostCustomizationAPI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolHostCustomizationAPI);
UClass* Z_Construct_UClass_UToolHostCustomizationAPI_NoRegister()
{
	return UToolHostCustomizationAPI::StaticClass();
}
struct Z_Construct_UClass_UToolHostCustomizationAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolHostCustomizationAPI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IToolHostCustomizationAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolHostCustomizationAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolHostCustomizationAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolHostCustomizationAPI_Statics::ClassParams = {
	&UToolHostCustomizationAPI::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolHostCustomizationAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolHostCustomizationAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolHostCustomizationAPI()
{
	if (!Z_Registration_Info_UClass_UToolHostCustomizationAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolHostCustomizationAPI.OuterSingleton, Z_Construct_UClass_UToolHostCustomizationAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolHostCustomizationAPI.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UToolHostCustomizationAPI>()
{
	return UToolHostCustomizationAPI::StaticClass();
}
UToolHostCustomizationAPI::UToolHostCustomizationAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolHostCustomizationAPI);
UToolHostCustomizationAPI::~UToolHostCustomizationAPI() {}
// End Interface UToolHostCustomizationAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolHostCustomizationAPI, UToolHostCustomizationAPI::StaticClass, TEXT("UToolHostCustomizationAPI"), &Z_Registration_Info_UClass_UToolHostCustomizationAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolHostCustomizationAPI), 1557609499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_858747864(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
