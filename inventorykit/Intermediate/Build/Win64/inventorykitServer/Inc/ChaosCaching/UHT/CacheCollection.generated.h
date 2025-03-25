// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/CacheCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCACHING_CacheCollection_generated_h
#error "CacheCollection.generated.h already included, missing '#pragma once' in CacheCollection.h"
#endif
#define CHAOSCACHING_CacheCollection_generated_h

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosCacheCollection(); \
	friend struct Z_Construct_UClass_UChaosCacheCollection_Statics; \
public: \
	DECLARE_CLASS(UChaosCacheCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCaching"), CHAOSCACHING_API) \
	DECLARE_SERIALIZER(UChaosCacheCollection)


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCACHING_API UChaosCacheCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosCacheCollection(UChaosCacheCollection&&); \
	UChaosCacheCollection(const UChaosCacheCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCACHING_API, UChaosCacheCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosCacheCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosCacheCollection) \
	CHAOSCACHING_API virtual ~UChaosCacheCollection();


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSCACHING_API UClass* StaticClass<class UChaosCacheCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
