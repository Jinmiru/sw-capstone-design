// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithStaticMeshComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithStaticMeshComponentTemplate() {}

// Begin Cross Module References
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class UDatasmithStaticMeshComponentTemplate
void UDatasmithStaticMeshComponentTemplate::StaticRegisterNativesUDatasmithStaticMeshComponentTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshComponentTemplate);
UClass* Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_NoRegister()
{
	return UDatasmithStaticMeshComponentTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithStaticMeshComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshComponentTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshComponentTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshComponentTemplate, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshComponentTemplate, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::ClassParams = {
	&UDatasmithStaticMeshComponentTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshComponentTemplate>()
{
	return UDatasmithStaticMeshComponentTemplate::StaticClass();
}
UDatasmithStaticMeshComponentTemplate::UDatasmithStaticMeshComponentTemplate() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshComponentTemplate);
UDatasmithStaticMeshComponentTemplate::~UDatasmithStaticMeshComponentTemplate() {}
// End Class UDatasmithStaticMeshComponentTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate, UDatasmithStaticMeshComponentTemplate::StaticClass, TEXT("UDatasmithStaticMeshComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshComponentTemplate), 699575502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h_1154068898(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
