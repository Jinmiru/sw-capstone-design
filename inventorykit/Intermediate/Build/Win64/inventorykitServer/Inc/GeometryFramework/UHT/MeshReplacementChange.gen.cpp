// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GeometryFramework/Public/Changes/MeshReplacementChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshReplacementChange() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References

// Begin Interface UMeshReplacementCommandChangeTarget
void UMeshReplacementCommandChangeTarget::StaticRegisterNativesUMeshReplacementCommandChangeTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshReplacementCommandChangeTarget);
UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister()
{
	return UMeshReplacementCommandChangeTarget::StaticClass();
}
struct Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Changes/MeshReplacementChange.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeshReplacementCommandChangeTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::ClassParams = {
	&UMeshReplacementCommandChangeTarget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget()
{
	if (!Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.OuterSingleton, Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.OuterSingleton;
}
template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UMeshReplacementCommandChangeTarget>()
{
	return UMeshReplacementCommandChangeTarget::StaticClass();
}
UMeshReplacementCommandChangeTarget::UMeshReplacementCommandChangeTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshReplacementCommandChangeTarget);
UMeshReplacementCommandChangeTarget::~UMeshReplacementCommandChangeTarget() {}
// End Interface UMeshReplacementCommandChangeTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshReplacementCommandChangeTarget, UMeshReplacementCommandChangeTarget::StaticClass, TEXT("UMeshReplacementCommandChangeTarget"), &Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshReplacementCommandChangeTarget), 945490776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_3685799676(TEXT("/Script/GeometryFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
