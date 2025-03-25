// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureMipDataProviderFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureMipDataProviderFactory_generated_h
#error "TextureMipDataProviderFactory.generated.h already included, missing '#pragma once' in TextureMipDataProviderFactory.h"
#endif
#define ENGINE_TextureMipDataProviderFactory_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTextureMipDataProviderFactory(); \
	friend struct Z_Construct_UClass_UTextureMipDataProviderFactory_Statics; \
public: \
	DECLARE_CLASS(UTextureMipDataProviderFactory, UAssetUserData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureMipDataProviderFactory)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureMipDataProviderFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureMipDataProviderFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureMipDataProviderFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureMipDataProviderFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureMipDataProviderFactory(UTextureMipDataProviderFactory&&); \
	UTextureMipDataProviderFactory(const UTextureMipDataProviderFactory&); \
public: \
	ENGINE_API virtual ~UTextureMipDataProviderFactory();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureMipDataProviderFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
