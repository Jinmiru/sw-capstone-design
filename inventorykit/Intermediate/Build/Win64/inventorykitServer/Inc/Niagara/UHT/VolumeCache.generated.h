// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VolumeCache.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_VolumeCache_generated_h
#error "VolumeCache.generated.h already included, missing '#pragma once' in VolumeCache.h"
#endif
#define NIAGARA_VolumeCache_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeCache(); \
	friend struct Z_Construct_UClass_UVolumeCache_Statics; \
public: \
	DECLARE_CLASS(UVolumeCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UVolumeCache)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UVolumeCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UVolumeCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVolumeCache(UVolumeCache&&); \
	UVolumeCache(const UVolumeCache&); \
public: \
	NIAGARA_API virtual ~UVolumeCache();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_21_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_24_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UVolumeCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h


#define FOREACH_ENUM_EVOLUMECACHETYPE(op) \
	op(EVolumeCacheType::OpenVDB) 

enum class EVolumeCacheType : uint8;
template<> struct TIsUEnumClass<EVolumeCacheType> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<EVolumeCacheType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
