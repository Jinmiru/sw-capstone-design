// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GeometryFramework/Public/Changes/MeshChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshChange() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshCommandChangeTarget();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References

// Begin Interface UMeshCommandChangeTarget
void UMeshCommandChangeTarget::StaticRegisterNativesUMeshCommandChangeTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshCommandChangeTarget);
UClass* Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister()
{
	return UMeshCommandChangeTarget::StaticClass();
}
struct Z_Construct_UClass_UMeshCommandChangeTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Changes/MeshChange.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeshCommandChangeTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshCommandChangeTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshCommandChangeTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshCommandChangeTarget_Statics::ClassParams = {
	&UMeshCommandChangeTarget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshCommandChangeTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshCommandChangeTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshCommandChangeTarget()
{
	if (!Z_Registration_Info_UClass_UMeshCommandChangeTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshCommandChangeTarget.OuterSingleton, Z_Construct_UClass_UMeshCommandChangeTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshCommandChangeTarget.OuterSingleton;
}
template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UMeshCommandChangeTarget>()
{
	return UMeshCommandChangeTarget::StaticClass();
}
UMeshCommandChangeTarget::UMeshCommandChangeTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshCommandChangeTarget);
UMeshCommandChangeTarget::~UMeshCommandChangeTarget() {}
// End Interface UMeshCommandChangeTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshCommandChangeTarget, UMeshCommandChangeTarget::StaticClass, TEXT("UMeshCommandChangeTarget"), &Z_Registration_Info_UClass_UMeshCommandChangeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshCommandChangeTarget), 1479512687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_2687671584(TEXT("/Script/GeometryFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
