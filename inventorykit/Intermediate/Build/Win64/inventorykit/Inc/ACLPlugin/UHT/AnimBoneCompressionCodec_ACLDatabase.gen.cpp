// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimBoneCompressionCodec_ACLDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACLDatabase() {}

// Begin Cross Module References
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister();
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase();
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References

// Begin Class UAnimBoneCompressionCodec_ACLDatabase
void UAnimBoneCompressionCodec_ACLDatabase::StaticRegisterNativesUAnimBoneCompressionCodec_ACLDatabase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBoneCompressionCodec_ACLDatabase);
UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_NoRegister()
{
	return UAnimBoneCompressionCodec_ACLDatabase::StaticClass();
}
struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * Uses the open source Animation Compression Library with default settings and database support.\n  * The referenced database can be used to strip the least important keyframes on a per platform basis\n  * or they can be streamed in/out on demand through Blueprint or C++.\n  */" },
		{ "DisplayName", "Anim Compress ACL Database" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACLDatabase.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLDatabase.h" },
		{ "ToolTip", "Uses the open source Animation Compression Library with default settings and database support.\nThe referenced database can be used to strip the least important keyframes on a per platform basis\nor they can be streamed in/out on demand through Blueprint or C++." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseAsset_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The database asset that will hold the compressed animation data. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLDatabase.h" },
		{ "ToolTip", "The database asset that will hold the compressed animation data." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizationTargets_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal meshes used to estimate the skinning deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLDatabase.h" },
		{ "ToolTip", "The skeletal meshes used to estimate the skinning deformation during compression." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DatabaseAsset;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptimizationTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OptimizationTargets;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACLDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_DatabaseAsset = { "DatabaseAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLDatabase, DatabaseAsset), Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatabaseAsset_MetaData), NewProp_DatabaseAsset_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets_Inner = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLDatabase, OptimizationTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizationTargets_MetaData), NewProp_OptimizationTargets_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_DatabaseAsset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::NewProp_OptimizationTargets,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::ClassParams = {
	&UAnimBoneCompressionCodec_ACLDatabase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase()
{
	if (!Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLDatabase.OuterSingleton, Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLDatabase.OuterSingleton;
}
template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACLDatabase>()
{
	return UAnimBoneCompressionCodec_ACLDatabase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACLDatabase);
UAnimBoneCompressionCodec_ACLDatabase::~UAnimBoneCompressionCodec_ACLDatabase() {}
// End Class UAnimBoneCompressionCodec_ACLDatabase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLDatabase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBoneCompressionCodec_ACLDatabase, UAnimBoneCompressionCodec_ACLDatabase::StaticClass, TEXT("UAnimBoneCompressionCodec_ACLDatabase"), &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBoneCompressionCodec_ACLDatabase), 1887456987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLDatabase_h_2617510938(TEXT("/Script/ACLPlugin"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLDatabase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
