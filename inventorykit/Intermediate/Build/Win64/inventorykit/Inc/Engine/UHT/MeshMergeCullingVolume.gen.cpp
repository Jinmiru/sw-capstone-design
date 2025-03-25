// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/MeshMergeCullingVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshMergeCullingVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AMeshMergeCullingVolume();
ENGINE_API UClass* Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AMeshMergeCullingVolume
void AMeshMergeCullingVolume::StaticRegisterNativesAMeshMergeCullingVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMeshMergeCullingVolume);
UClass* Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister()
{
	return AMeshMergeCullingVolume::StaticClass();
}
struct Z_Construct_UClass_AMeshMergeCullingVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A volume that can be added a level in order to remove triangles from source meshes before generating HLOD or merged meshes */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Engine/MeshMergeCullingVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMergeCullingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A volume that can be added a level in order to remove triangles from source meshes before generating HLOD or merged meshes" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeshMergeCullingVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMeshMergeCullingVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMeshMergeCullingVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMeshMergeCullingVolume_Statics::ClassParams = {
	&AMeshMergeCullingVolume::StaticClass,
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
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMeshMergeCullingVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AMeshMergeCullingVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMeshMergeCullingVolume()
{
	if (!Z_Registration_Info_UClass_AMeshMergeCullingVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeshMergeCullingVolume.OuterSingleton, Z_Construct_UClass_AMeshMergeCullingVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMeshMergeCullingVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AMeshMergeCullingVolume>()
{
	return AMeshMergeCullingVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMeshMergeCullingVolume);
AMeshMergeCullingVolume::~AMeshMergeCullingVolume() {}
// End Class AMeshMergeCullingVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMeshMergeCullingVolume, AMeshMergeCullingVolume::StaticClass, TEXT("AMeshMergeCullingVolume"), &Z_Registration_Info_UClass_AMeshMergeCullingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeshMergeCullingVolume), 2353491994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_2741572130(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
