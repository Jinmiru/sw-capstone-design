// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/VirtualTextureBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VirtualTextureBuilder_generated_h
#error "VirtualTextureBuilder.generated.h already included, missing '#pragma once' in VirtualTextureBuilder.h"
#endif
#define ENGINE_VirtualTextureBuilder_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_50_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTextureBuilder, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualTextureBuilder(); \
	friend struct Z_Construct_UClass_UVirtualTextureBuilder_Statics; \
public: \
	DECLARE_CLASS(UVirtualTextureBuilder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVirtualTextureBuilder) \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_50_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVirtualTextureBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualTextureBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVirtualTextureBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualTextureBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVirtualTextureBuilder(UVirtualTextureBuilder&&); \
	UVirtualTextureBuilder(const UVirtualTextureBuilder&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_46_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_50_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVirtualTextureBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
