// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BlueprintCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlueprintCore_generated_h
#error "BlueprintCore.generated.h already included, missing '#pragma once' in BlueprintCore.h"
#endif
#define ENGINE_BlueprintCore_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintCore, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintCore(); \
	friend struct Z_Construct_UClass_UBlueprintCore_Statics; \
public: \
	DECLARE_CLASS(UBlueprintCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlueprintCore) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintCore(UBlueprintCore&&); \
	UBlueprintCore(const UBlueprintCore&); \
public: \
	ENGINE_API virtual ~UBlueprintCore();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
