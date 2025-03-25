// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraph_generated_h
#error "EdGraph.generated.h already included, missing '#pragma once' in EdGraph.h"
#endif
#define ENGINE_EdGraph_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGraphReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGraphReference>();

#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UEdGraph, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraph(); \
	friend struct Z_Construct_UClass_UEdGraph_Statics; \
public: \
	DECLARE_CLASS(UEdGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEdGraph) \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEdGraph(UEdGraph&&); \
	UEdGraph(const UEdGraph&); \
public: \
	ENGINE_API virtual ~UEdGraph();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_66_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEdGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
