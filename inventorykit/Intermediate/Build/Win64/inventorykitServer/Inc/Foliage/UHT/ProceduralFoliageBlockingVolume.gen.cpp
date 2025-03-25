// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/ProceduralFoliageBlockingVolume.h"
#include "Runtime/Foliage/Public/FoliageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageBlockingVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AVolume();
FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume();
FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageVolume_NoRegister();
FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageDensityFalloff();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Class AProceduralFoliageBlockingVolume
void AProceduralFoliageBlockingVolume::StaticRegisterNativesAProceduralFoliageBlockingVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProceduralFoliageBlockingVolume);
UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume_NoRegister()
{
	return AProceduralFoliageBlockingVolume::StaticClass();
}
struct Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** An invisible volume used to block ProceduralFoliage instances from being spawned. */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "ProceduralFoliageBlockingVolume.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageBlockingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An invisible volume used to block ProceduralFoliage instances from being spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralFoliageVolume_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageBlockingVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityFalloff_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageBlockingVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralFoliageVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DensityFalloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralFoliageBlockingVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume = { "ProceduralFoliageVolume", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralFoliageBlockingVolume, ProceduralFoliageVolume), Z_Construct_UClass_AProceduralFoliageVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralFoliageVolume_MetaData), NewProp_ProceduralFoliageVolume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_DensityFalloff = { "DensityFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralFoliageBlockingVolume, DensityFalloff), Z_Construct_UScriptStruct_FFoliageDensityFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityFalloff_MetaData), NewProp_DensityFalloff_MetaData) }; // 2297724365
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_DensityFalloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::ClassParams = {
	&AProceduralFoliageBlockingVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume()
{
	if (!Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.OuterSingleton, Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<AProceduralFoliageBlockingVolume>()
{
	return AProceduralFoliageBlockingVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralFoliageBlockingVolume);
AProceduralFoliageBlockingVolume::~AProceduralFoliageBlockingVolume() {}
// End Class AProceduralFoliageBlockingVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralFoliageBlockingVolume, AProceduralFoliageBlockingVolume::StaticClass, TEXT("AProceduralFoliageBlockingVolume"), &Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralFoliageBlockingVolume), 1758184090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_2614325781(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
