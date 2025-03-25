// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/RuntimeVirtualTextureVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RuntimeVirtualTextureVolume_generated_h
#error "RuntimeVirtualTextureVolume.generated.h already included, missing '#pragma once' in RuntimeVirtualTextureVolume.h"
#endif
#define ENGINE_RuntimeVirtualTextureVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_13_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ARuntimeVirtualTextureVolume, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARuntimeVirtualTextureVolume(); \
	friend struct Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics; \
public: \
	DECLARE_CLASS(ARuntimeVirtualTextureVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ARuntimeVirtualTextureVolume) \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_13_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARuntimeVirtualTextureVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARuntimeVirtualTextureVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARuntimeVirtualTextureVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARuntimeVirtualTextureVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARuntimeVirtualTextureVolume(ARuntimeVirtualTextureVolume&&); \
	ARuntimeVirtualTextureVolume(const ARuntimeVirtualTextureVolume&); \
public: \
	ENGINE_API virtual ~ARuntimeVirtualTextureVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ARuntimeVirtualTextureVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
