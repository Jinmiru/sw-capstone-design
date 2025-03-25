// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshEditorData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshEditorData();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshEditorData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USkeletalMeshEditorData
void USkeletalMeshEditorData::StaticRegisterNativesUSkeletalMeshEditorData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshEditorData);
UClass* Z_Construct_UClass_USkeletalMeshEditorData_NoRegister()
{
	return USkeletalMeshEditorData::StaticClass();
}
struct Z_Construct_UClass_USkeletalMeshEditorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SkeletalMeshEditorData is a container for non editable editor data.\n * An example of data is the source import data that get updated only when we reimport an asset, but is needed if the asset need to be build. If the ddc key is uptodate the data do not have to be loaded\n *\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/SkeletalMeshEditorData.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshEditorData.h" },
		{ "ToolTip", "SkeletalMeshEditorData is a container for non editable editor data.\nAn example of data is the source import data that get updated only when we reimport an asset, but is needed if the asset need to be build. If the ddc key is uptodate the data do not have to be loaded" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshEditorData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USkeletalMeshEditorData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshEditorData_Statics::ClassParams = {
	&USkeletalMeshEditorData::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorData_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMeshEditorData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeletalMeshEditorData()
{
	if (!Z_Registration_Info_UClass_USkeletalMeshEditorData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshEditorData.OuterSingleton, Z_Construct_UClass_USkeletalMeshEditorData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeletalMeshEditorData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkeletalMeshEditorData>()
{
	return USkeletalMeshEditorData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshEditorData);
USkeletalMeshEditorData::~USkeletalMeshEditorData() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshEditorData)
#endif // WITH_EDITORONLY_DATA
// End Class USkeletalMeshEditorData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshEditorData, USkeletalMeshEditorData::StaticClass, TEXT("USkeletalMeshEditorData"), &Z_Registration_Info_UClass_USkeletalMeshEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshEditorData), 3572854862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_3659039371(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
