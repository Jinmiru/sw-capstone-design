// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/VolumeCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeCache() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
NIAGARA_API UClass* Z_Construct_UClass_UVolumeCache();
NIAGARA_API UClass* Z_Construct_UClass_UVolumeCache_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EVolumeCacheType();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum EVolumeCacheType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVolumeCacheType;
static UEnum* EVolumeCacheType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EVolumeCacheType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("EVolumeCacheType"));
	}
	return Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<EVolumeCacheType>()
{
	return EVolumeCacheType_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
		{ "OpenVDB.Name", "EVolumeCacheType::OpenVDB" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVolumeCacheType::OpenVDB", (int64)EVolumeCacheType::OpenVDB },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"EVolumeCacheType",
	"EVolumeCacheType",
	Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_EVolumeCacheType()
{
	if (!Z_Registration_Info_UEnum_EVolumeCacheType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVolumeCacheType.InnerSingleton, Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVolumeCacheType.InnerSingleton;
}
// End Enum EVolumeCacheType

// Begin Class UVolumeCache
void UVolumeCache::StaticRegisterNativesUVolumeCache()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeCache);
UClass* Z_Construct_UClass_UVolumeCache_NoRegister()
{
	return UVolumeCache::StaticClass();
}
struct Z_Construct_UClass_UVolumeCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "VolumeCache.h" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "/** File path to load */" },
		{ "DisplayName", "File Path" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
		{ "ToolTip", "File path to load" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheType_MetaData[] = {
		{ "Category", "File" },
		{ "DisplayName", "Cache Type" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "File" },
		{ "DisplayName", "Resolution" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRangeStart_MetaData[] = {
		{ "Category", "File" },
		{ "DisplayName", "Frame Range Start" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRangeEnd_MetaData[] = {
		{ "Category", "File" },
		{ "DisplayName", "Frame Range End" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CacheType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRangeEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeCache, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType = { "CacheType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeCache, CacheType), Z_Construct_UEnum_Niagara_EVolumeCacheType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheType_MetaData), NewProp_CacheType_MetaData) }; // 4162362880
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeCache, Resolution), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeStart = { "FrameRangeStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeCache, FrameRangeStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRangeStart_MetaData), NewProp_FrameRangeStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeEnd = { "FrameRangeEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeCache, FrameRangeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRangeEnd_MetaData), NewProp_FrameRangeEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVolumeCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeCache_Statics::ClassParams = {
	&UVolumeCache::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVolumeCache_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UVolumeCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVolumeCache()
{
	if (!Z_Registration_Info_UClass_UVolumeCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeCache.OuterSingleton, Z_Construct_UClass_UVolumeCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVolumeCache.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UVolumeCache>()
{
	return UVolumeCache::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeCache);
UVolumeCache::~UVolumeCache() {}
// End Class UVolumeCache

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVolumeCacheType_StaticEnum, TEXT("EVolumeCacheType"), &Z_Registration_Info_UEnum_EVolumeCacheType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4162362880U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVolumeCache, UVolumeCache::StaticClass, TEXT("UVolumeCache"), &Z_Registration_Info_UClass_UVolumeCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeCache), 1731242969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_728046692(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
