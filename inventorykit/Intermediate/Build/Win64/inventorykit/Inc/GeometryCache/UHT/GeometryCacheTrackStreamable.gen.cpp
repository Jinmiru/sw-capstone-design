// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheTrackStreamable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackStreamable() {}

// Begin Cross Module References
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecBase_NoRegister();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References

// Begin Class UGeometryCacheTrackStreamable
void UGeometryCacheTrackStreamable::StaticRegisterNativesUGeometryCacheTrackStreamable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheTrackStreamable);
UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister()
{
	return UGeometryCacheTrackStreamable::StaticClass();
}
struct Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n\x09""Derived GeometryCacheTrack class, used for Transform animation.\n\n\x09\\note FGeometryCacheTrackStreamableRenderResource keeps a reference to the track.\n\x09""Be sure to keep the implementation of this class valid so it properly releases\n\x09the render resoruce before making any changes to this object that may affect the render thread.\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheTrackStreamable.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackStreamable.h" },
		{ "ToolTip", "Derived GeometryCacheTrack class, used for Transform animation.\n\n\\note FGeometryCacheTrackStreamableRenderResource keeps a reference to the track.\nBe sure to keep the implementation of this class valid so it properly releases\nthe render resoruce before making any changes to this object that may affect the render thread." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Codec_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Codec for this track */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackStreamable.h" },
		{ "ToolTip", "Codec for this track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSampleTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackStreamable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Codec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSampleTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheTrackStreamable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCacheTrackStreamable, Codec), Z_Construct_UClass_UGeometryCacheCodecBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Codec_MetaData), NewProp_Codec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime = { "StartSampleTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCacheTrackStreamable, StartSampleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSampleTime_MetaData), NewProp_StartSampleTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::ClassParams = {
	&UGeometryCacheTrackStreamable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::PropPointers),
	0,
	0x001020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable()
{
	if (!Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.OuterSingleton, Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.OuterSingleton;
}
template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheTrackStreamable>()
{
	return UGeometryCacheTrackStreamable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrackStreamable);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCacheTrackStreamable)
// End Class UGeometryCacheTrackStreamable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheTrackStreamable, UGeometryCacheTrackStreamable::StaticClass, TEXT("UGeometryCacheTrackStreamable"), &Z_Registration_Info_UClass_UGeometryCacheTrackStreamable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheTrackStreamable), 2628072236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_2732004859(TEXT("/Script/GeometryCache"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
