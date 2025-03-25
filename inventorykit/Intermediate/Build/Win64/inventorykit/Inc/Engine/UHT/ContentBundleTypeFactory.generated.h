// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ContentBundle/ContentBundleTypeFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ContentBundleTypeFactory_generated_h
#error "ContentBundleTypeFactory.generated.h already included, missing '#pragma once' in ContentBundleTypeFactory.h"
#endif
#define ENGINE_ContentBundleTypeFactory_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBundleTypeFactory(); \
	friend struct Z_Construct_UClass_UContentBundleTypeFactory_Statics; \
public: \
	DECLARE_CLASS(UContentBundleTypeFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UContentBundleTypeFactory)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UContentBundleTypeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContentBundleTypeFactory(UContentBundleTypeFactory&&); \
	UContentBundleTypeFactory(const UContentBundleTypeFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UContentBundleTypeFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBundleTypeFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBundleTypeFactory) \
	ENGINE_API virtual ~UContentBundleTypeFactory();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UContentBundleTypeFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
