// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrecomputedVisibilityOverrideVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume();
ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class APrecomputedVisibilityOverrideVolume
void APrecomputedVisibilityOverrideVolume::StaticRegisterNativesAPrecomputedVisibilityOverrideVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrecomputedVisibilityOverrideVolume);
UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_NoRegister()
{
	return APrecomputedVisibilityOverrideVolume::StaticClass();
}
struct Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Lightmass/PrecomputedVisibilityOverrideVolume.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideVisibleActors_MetaData[] = {
		{ "Category", "PrecomputedVisibilityOverrideVolume" },
		{ "Comment", "/** Array of actors that will always be considered visible by Precomputed Visibility when viewed from inside this volume. */" },
		{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
		{ "ToolTip", "Array of actors that will always be considered visible by Precomputed Visibility when viewed from inside this volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideInvisibleActors_MetaData[] = {
		{ "Category", "PrecomputedVisibilityOverrideVolume" },
		{ "Comment", "/** Array of actors that will always be considered invisible by Precomputed Visibility when viewed from inside this volume. */" },
		{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
		{ "ToolTip", "Array of actors that will always be considered invisible by Precomputed Visibility when viewed from inside this volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideInvisibleLevels_MetaData[] = {
		{ "Category", "PrecomputedVisibilityOverrideVolume" },
		{ "Comment", "/** Array of level names whose actors will always be considered invisible by Precomputed Visibility when viewed from inside this volume. */" },
		{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
		{ "ToolTip", "Array of level names whose actors will always be considered invisible by Precomputed Visibility when viewed from inside this volume." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideVisibleActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideVisibleActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideInvisibleActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideInvisibleActors;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideInvisibleLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideInvisibleLevels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrecomputedVisibilityOverrideVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors_Inner = { "OverrideVisibleActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors = { "OverrideVisibleActors", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrecomputedVisibilityOverrideVolume, OverrideVisibleActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideVisibleActors_MetaData), NewProp_OverrideVisibleActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors_Inner = { "OverrideInvisibleActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors = { "OverrideInvisibleActors", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrecomputedVisibilityOverrideVolume, OverrideInvisibleActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideInvisibleActors_MetaData), NewProp_OverrideInvisibleActors_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels_Inner = { "OverrideInvisibleLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels = { "OverrideInvisibleLevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrecomputedVisibilityOverrideVolume, OverrideInvisibleLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideInvisibleLevels_MetaData), NewProp_OverrideInvisibleLevels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideVisibleActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::NewProp_OverrideInvisibleLevels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::ClassParams = {
	&APrecomputedVisibilityOverrideVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume()
{
	if (!Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.OuterSingleton, Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APrecomputedVisibilityOverrideVolume>()
{
	return APrecomputedVisibilityOverrideVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrecomputedVisibilityOverrideVolume);
APrecomputedVisibilityOverrideVolume::~APrecomputedVisibilityOverrideVolume() {}
// End Class APrecomputedVisibilityOverrideVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrecomputedVisibilityOverrideVolume, APrecomputedVisibilityOverrideVolume::StaticClass, TEXT("APrecomputedVisibilityOverrideVolume"), &Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrecomputedVisibilityOverrideVolume), 696777101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_1239352463(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
