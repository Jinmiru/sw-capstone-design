// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureLightProfile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureLightProfile_generated_h
#error "TextureLightProfile.generated.h already included, missing '#pragma once' in TextureLightProfile.h"
#endif
#define ENGINE_TextureLightProfile_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTextureLightProfile(); \
	friend struct Z_Construct_UClass_UTextureLightProfile_Statics; \
public: \
	DECLARE_CLASS(UTextureLightProfile, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureLightProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureLightProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureLightProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureLightProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureLightProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureLightProfile(UTextureLightProfile&&); \
	UTextureLightProfile(const UTextureLightProfile&); \
public: \
	ENGINE_API virtual ~UTextureLightProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureLightProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
