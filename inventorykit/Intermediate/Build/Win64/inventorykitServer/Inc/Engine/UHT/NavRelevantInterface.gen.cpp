// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavRelevantInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EHasCustomNavigableGeometry
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHasCustomNavigableGeometry;
static UEnum* EHasCustomNavigableGeometry_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHasCustomNavigableGeometry.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHasCustomNavigableGeometry.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHasCustomNavigableGeometry"));
	}
	return Z_Registration_Info_UEnum_EHasCustomNavigableGeometry.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EHasCustomNavigableGeometry::Type>()
{
	return EHasCustomNavigableGeometry_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Determines if a NavRelevant object contains custom collision for navigation/AI */" },
		{ "DontExport.Comment", "/** Don't export navigable geometry even if primitive is relevant for navigation (can still add modifiers) */" },
		{ "DontExport.Name", "EHasCustomNavigableGeometry::DontExport" },
		{ "DontExport.ToolTip", "Don't export navigable geometry even if primitive is relevant for navigation (can still add modifiers)" },
		{ "EvenIfNotCollidable.Comment", "/** DoCustomNavigableGeometryExport() should be called even if the mesh is non-collidable and wouldn't normally affect the navmesh */" },
		{ "EvenIfNotCollidable.Name", "EHasCustomNavigableGeometry::EvenIfNotCollidable" },
		{ "EvenIfNotCollidable.ToolTip", "DoCustomNavigableGeometryExport() should be called even if the mesh is non-collidable and wouldn't normally affect the navmesh" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavRelevantInterface.h" },
		{ "No.Comment", "/** Primitive doesn't have custom navigation geometry, if collision is enabled then its convex/trimesh collision will be used for generating the navmesh */" },
		{ "No.Name", "EHasCustomNavigableGeometry::No" },
		{ "No.ToolTip", "Primitive doesn't have custom navigation geometry, if collision is enabled then its convex/trimesh collision will be used for generating the navmesh" },
		{ "ToolTip", "Determines if a NavRelevant object contains custom collision for navigation/AI" },
		{ "Yes.Comment", "/** If primitive would normally affect navmesh, DoCustomNavigableGeometryExport() should be called to export this primitive's navigable geometry */" },
		{ "Yes.Name", "EHasCustomNavigableGeometry::Yes" },
		{ "Yes.ToolTip", "If primitive would normally affect navmesh, DoCustomNavigableGeometryExport() should be called to export this primitive's navigable geometry" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHasCustomNavigableGeometry::No", (int64)EHasCustomNavigableGeometry::No },
		{ "EHasCustomNavigableGeometry::Yes", (int64)EHasCustomNavigableGeometry::Yes },
		{ "EHasCustomNavigableGeometry::EvenIfNotCollidable", (int64)EHasCustomNavigableGeometry::EvenIfNotCollidable },
		{ "EHasCustomNavigableGeometry::DontExport", (int64)EHasCustomNavigableGeometry::DontExport },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EHasCustomNavigableGeometry",
	"EHasCustomNavigableGeometry::Type",
	Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry()
{
	if (!Z_Registration_Info_UEnum_EHasCustomNavigableGeometry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHasCustomNavigableGeometry.InnerSingleton, Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHasCustomNavigableGeometry.InnerSingleton;
}
// End Enum EHasCustomNavigableGeometry

// Begin Interface UNavRelevantInterface
void UNavRelevantInterface::StaticRegisterNativesUNavRelevantInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavRelevantInterface);
UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister()
{
	return UNavRelevantInterface::StaticClass();
}
struct Z_Construct_UClass_UNavRelevantInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavRelevantInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavRelevantInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavRelevantInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavRelevantInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavRelevantInterface_Statics::ClassParams = {
	&UNavRelevantInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavRelevantInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavRelevantInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavRelevantInterface()
{
	if (!Z_Registration_Info_UClass_UNavRelevantInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavRelevantInterface.OuterSingleton, Z_Construct_UClass_UNavRelevantInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavRelevantInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavRelevantInterface>()
{
	return UNavRelevantInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavRelevantInterface);
UNavRelevantInterface::~UNavRelevantInterface() {}
// End Interface UNavRelevantInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHasCustomNavigableGeometry_StaticEnum, TEXT("EHasCustomNavigableGeometry"), &Z_Registration_Info_UEnum_EHasCustomNavigableGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4074914048U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavRelevantInterface, UNavRelevantInterface::StaticClass, TEXT("UNavRelevantInterface"), &Z_Registration_Info_UClass_UNavRelevantInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavRelevantInterface), 2600625190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_1920152567(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
