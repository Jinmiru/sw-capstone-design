// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothPhysicalMeshDataNv_Legacy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshDataNv_Legacy() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy();
CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy();
CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
// End Cross Module References

// Begin Class UClothPhysicalMeshDataNv_Legacy
void UClothPhysicalMeshDataNv_Legacy::StaticRegisterNativesUClothPhysicalMeshDataNv_Legacy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothPhysicalMeshDataNv_Legacy);
UClass* Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_NoRegister()
{
	return UClothPhysicalMeshDataNv_Legacy::StaticClass();
}
struct Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, use FClothPhysicalMeshData instead.\n * NV specific spatial simulation data for a mesh.\n */" },
		{ "IncludePath", "ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ToolTip", "Deprecated, use FClothPhysicalMeshData instead.\nNV specific spatial simulation data for a mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistances_MetaData[] = {
		{ "Comment", "// The distance that each vertex can move away from its reference (skinned) position\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ToolTip", "The distance that each vertex can move away from its reference (skinned) position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackstopDistances_MetaData[] = {
		{ "Comment", "// Distance along the plane of the surface that the particles can travel (separation constraint)\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ToolTip", "Distance along the plane of the surface that the particles can travel (separation constraint)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackstopRadiuses_MetaData[] = {
		{ "Comment", "// Radius of movement to allow for backstop movement\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ToolTip", "Radius of movement to allow for backstop movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveMultipliers_MetaData[] = {
		{ "Comment", "// Strength of anim drive per-particle (spring driving particle back to skinned location\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ToolTip", "Strength of anim drive per-particle (spring driving particle back to skinned location" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaxDistances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackstopDistances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BackstopDistances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackstopRadiuses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BackstopRadiuses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimDriveMultipliers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimDriveMultipliers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPhysicalMeshDataNv_Legacy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances_Inner = { "MaxDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances = { "MaxDistances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataNv_Legacy, MaxDistances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistances_MetaData), NewProp_MaxDistances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances_Inner = { "BackstopDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances = { "BackstopDistances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataNv_Legacy, BackstopDistances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackstopDistances_MetaData), NewProp_BackstopDistances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses_Inner = { "BackstopRadiuses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses = { "BackstopRadiuses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataNv_Legacy, BackstopRadiuses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackstopRadiuses_MetaData), NewProp_BackstopRadiuses_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers_Inner = { "AnimDriveMultipliers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers = { "AnimDriveMultipliers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataNv_Legacy, AnimDriveMultipliers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimDriveMultipliers_MetaData), NewProp_AnimDriveMultipliers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::ClassParams = {
	&UClothPhysicalMeshDataNv_Legacy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy()
{
	if (!Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.OuterSingleton, Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<UClothPhysicalMeshDataNv_Legacy>()
{
	return UClothPhysicalMeshDataNv_Legacy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPhysicalMeshDataNv_Legacy);
// End Class UClothPhysicalMeshDataNv_Legacy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothPhysicalMeshDataNv_Legacy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy, UClothPhysicalMeshDataNv_Legacy::StaticClass, TEXT("UClothPhysicalMeshDataNv_Legacy"), &Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothPhysicalMeshDataNv_Legacy), 2867953219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothPhysicalMeshDataNv_Legacy_h_249299461(TEXT("/Script/ClothingSystemRuntimeNv"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothPhysicalMeshDataNv_Legacy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothPhysicalMeshDataNv_Legacy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
