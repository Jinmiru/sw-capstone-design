// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/VirtualTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VirtualTexture_generated_h
#error "VirtualTexture.generated.h already included, missing '#pragma once' in VirtualTexture.h"
#endif
#define ENGINE_VirtualTexture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTexture, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualTexture(); \
	friend struct Z_Construct_UClass_UVirtualTexture_Statics; \
public: \
	DECLARE_CLASS(UVirtualTexture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVirtualTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVirtualTexture(UVirtualTexture&&); \
	UVirtualTexture(const UVirtualTexture&); \
public: \
	ENGINE_API virtual ~UVirtualTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVirtualTexture>();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULightMapVirtualTexture(); \
	friend struct Z_Construct_UClass_ULightMapVirtualTexture_Statics; \
public: \
	DECLARE_CLASS(ULightMapVirtualTexture, UVirtualTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULightMapVirtualTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightMapVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightMapVirtualTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightMapVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightMapVirtualTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULightMapVirtualTexture(ULightMapVirtualTexture&&); \
	ULightMapVirtualTexture(const ULightMapVirtualTexture&); \
public: \
	ENGINE_API virtual ~ULightMapVirtualTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightMapVirtualTexture>();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_29_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTextureStreamingProxy(); \
	friend struct Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics; \
public: \
	DECLARE_CLASS(URuntimeVirtualTextureStreamingProxy, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimeVirtualTextureStreamingProxy)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeVirtualTextureStreamingProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTextureStreamingProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVirtualTextureStreamingProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTextureStreamingProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeVirtualTextureStreamingProxy(URuntimeVirtualTextureStreamingProxy&&); \
	URuntimeVirtualTextureStreamingProxy(const URuntimeVirtualTextureStreamingProxy&); \
public: \
	NO_API virtual ~URuntimeVirtualTextureStreamingProxy();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_29_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimeVirtualTextureStreamingProxy>();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualTexture2D(); \
	friend struct Z_Construct_UClass_UVirtualTexture2D_Statics; \
public: \
	DECLARE_CLASS(UVirtualTexture2D, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVirtualTexture2D)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualTexture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualTexture2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVirtualTexture2D(UVirtualTexture2D&&); \
	UVirtualTexture2D(const UVirtualTexture2D&); \
public: \
	NO_API virtual ~UVirtualTexture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_40_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVirtualTexture2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
