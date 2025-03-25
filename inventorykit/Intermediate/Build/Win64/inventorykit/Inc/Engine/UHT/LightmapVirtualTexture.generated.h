// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/LightmapVirtualTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LightmapVirtualTexture_generated_h
#error "LightmapVirtualTexture.generated.h already included, missing '#pragma once' in LightmapVirtualTexture.h"
#endif
#define ENGINE_LightmapVirtualTexture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULightMapVirtualTexture2D(); \
	friend struct Z_Construct_UClass_ULightMapVirtualTexture2D_Statics; \
public: \
	DECLARE_CLASS(ULightMapVirtualTexture2D, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULightMapVirtualTexture2D)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightMapVirtualTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightMapVirtualTexture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightMapVirtualTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightMapVirtualTexture2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULightMapVirtualTexture2D(ULightMapVirtualTexture2D&&); \
	ULightMapVirtualTexture2D(const ULightMapVirtualTexture2D&); \
public: \
	ENGINE_API virtual ~ULightMapVirtualTexture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightMapVirtualTexture2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
