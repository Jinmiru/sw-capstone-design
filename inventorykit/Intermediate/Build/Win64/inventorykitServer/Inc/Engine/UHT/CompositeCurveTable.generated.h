// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CompositeCurveTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CompositeCurveTable_generated_h
#error "CompositeCurveTable.generated.h already included, missing '#pragma once' in CompositeCurveTable.h"
#endif
#define ENGINE_CompositeCurveTable_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeCurveTable, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeCurveTable(); \
	friend struct Z_Construct_UClass_UCompositeCurveTable_Statics; \
public: \
	DECLARE_CLASS(UCompositeCurveTable, UCurveTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCompositeCurveTable) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCompositeCurveTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeCurveTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCompositeCurveTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeCurveTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompositeCurveTable(UCompositeCurveTable&&); \
	UCompositeCurveTable(const UCompositeCurveTable&); \
public: \
	ENGINE_API virtual ~UCompositeCurveTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCompositeCurveTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
