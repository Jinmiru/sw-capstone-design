// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeSplineMeshesActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplineMeshesActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_APartitionActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeSplineMeshesActor();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeSplineMeshesActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ALandscapeSplineMeshesActor
void ALandscapeSplineMeshesActor::StaticRegisterNativesALandscapeSplineMeshesActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeSplineMeshesActor);
UClass* Z_Construct_UClass_ALandscapeSplineMeshesActor_NoRegister()
{
	return ALandscapeSplineMeshesActor::StaticClass();
}
struct Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "Comment", "//\n// This class is only intended to be used by UWorldPartitionLandscapeSplineMeshesBuilder which extracts and clones\n// landscape spline and control point static meshes into partitioned actors\n//\n// This serves as an optimization as these actors will be streamed at runtime\n//\n" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "LandscapeSplineMeshesActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineMeshesActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This class is only intended to be used by UWorldPartitionLandscapeSplineMeshesBuilder which extracts and clones\nlandscape spline and control point static meshes into partitioned actors\n\nThis serves as an optimization as these actors will be streamed at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponents_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PartitionSplineMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh,Components|SplineMesh" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineMeshesActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineMeshesActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshComponents;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridGuid;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeSplineMeshesActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::NewProp_StaticMeshComponents_Inner = { "StaticMeshComponents", nullptr, (EPropertyFlags)0x01040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::NewProp_StaticMeshComponents = { "StaticMeshComponents", nullptr, (EPropertyFlags)0x014400800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeSplineMeshesActor, StaticMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponents_MetaData), NewProp_StaticMeshComponents_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::NewProp_GridGuid = { "GridGuid", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeSplineMeshesActor, GridGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridGuid_MetaData), NewProp_GridGuid_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::NewProp_StaticMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::NewProp_StaticMeshComponents,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::NewProp_GridGuid,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APartitionActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::ClassParams = {
	&ALandscapeSplineMeshesActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::PropPointers),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALandscapeSplineMeshesActor()
{
	if (!Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.OuterSingleton, Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ALandscapeSplineMeshesActor>()
{
	return ALandscapeSplineMeshesActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeSplineMeshesActor);
ALandscapeSplineMeshesActor::~ALandscapeSplineMeshesActor() {}
// End Class ALandscapeSplineMeshesActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeSplineMeshesActor, ALandscapeSplineMeshesActor::StaticClass, TEXT("ALandscapeSplineMeshesActor"), &Z_Registration_Info_UClass_ALandscapeSplineMeshesActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeSplineMeshesActor), 3651011377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h_49347672(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
