// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DebugGarbageCollectionGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DebugGarbageCollectionGraph_generated_h
#error "DebugGarbageCollectionGraph.generated.h already included, missing '#pragma once' in DebugGarbageCollectionGraph.h"
#endif
#define ENGINE_DebugGarbageCollectionGraph_generated_h

#define FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDebugGarbageCollectionGraph(); \
	friend struct Z_Construct_UClass_UDebugGarbageCollectionGraph_Statics; \
public: \
	DECLARE_CLASS(UDebugGarbageCollectionGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDebugGarbageCollectionGraph)


#define FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDebugGarbageCollectionGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDebugGarbageCollectionGraph(UDebugGarbageCollectionGraph&&); \
	UDebugGarbageCollectionGraph(const UDebugGarbageCollectionGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugGarbageCollectionGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugGarbageCollectionGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugGarbageCollectionGraph) \
	NO_API virtual ~UDebugGarbageCollectionGraph();


#define FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDebugGarbageCollectionGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
