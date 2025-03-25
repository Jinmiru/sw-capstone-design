// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavMesh/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMeshBoundsVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class ANavMeshBoundsVolume
void ANavMeshBoundsVolume::StaticRegisterNativesANavMeshBoundsVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavMeshBoundsVolume);
UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister()
{
	return ANavMeshBoundsVolume::StaticClass();
}
struct Z_Construct_UClass_ANavMeshBoundsVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "NavMesh/NavMeshBoundsVolume.h" },
		{ "ModuleRelativePath", "Public/NavMesh/NavMeshBoundsVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavMesh/NavMeshBoundsVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAgents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavMeshBoundsVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavMeshBoundsVolume, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAgents_MetaData), NewProp_SupportedAgents_MetaData) }; // 1400047301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavMeshBoundsVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavMeshBoundsVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavMeshBoundsVolume_Statics::ClassParams = {
	&ANavMeshBoundsVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANavMeshBoundsVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavMeshBoundsVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavMeshBoundsVolume()
{
	if (!Z_Registration_Info_UClass_ANavMeshBoundsVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavMeshBoundsVolume.OuterSingleton, Z_Construct_UClass_ANavMeshBoundsVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavMeshBoundsVolume.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavMeshBoundsVolume>()
{
	return ANavMeshBoundsVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavMeshBoundsVolume);
ANavMeshBoundsVolume::~ANavMeshBoundsVolume() {}
// End Class ANavMeshBoundsVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavMeshBoundsVolume, ANavMeshBoundsVolume::StaticClass, TEXT("ANavMeshBoundsVolume"), &Z_Registration_Info_UClass_ANavMeshBoundsVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavMeshBoundsVolume), 343861104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_1982315364(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
