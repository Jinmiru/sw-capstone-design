// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualLogger/VisualLoggerKismetLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLinearColor;
#ifdef ENGINE_VisualLoggerKismetLibrary_generated_h
#error "VisualLoggerKismetLibrary.generated.h already included, missing '#pragma once' in VisualLoggerKismetLibrary.h"
#endif
#define ENGINE_VisualLoggerKismetLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLogSegment); \
	DECLARE_FUNCTION(execLogCircle); \
	DECLARE_FUNCTION(execLogArrow); \
	DECLARE_FUNCTION(execLogOrientedBox); \
	DECLARE_FUNCTION(execLogBox); \
	DECLARE_FUNCTION(execLogCapsule); \
	DECLARE_FUNCTION(execLogCylinder); \
	DECLARE_FUNCTION(execLogCone); \
	DECLARE_FUNCTION(execLogSphere); \
	DECLARE_FUNCTION(execLogLocation); \
	DECLARE_FUNCTION(execLogText); \
	DECLARE_FUNCTION(execRedirectVislog); \
	DECLARE_FUNCTION(execEnableRecording);


#define FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUVisualLoggerKismetLibrary(); \
	friend struct Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics; \
public: \
	DECLARE_CLASS(UVisualLoggerKismetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVisualLoggerKismetLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerKismetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerKismetLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerKismetLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerKismetLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVisualLoggerKismetLibrary(UVisualLoggerKismetLibrary&&); \
	UVisualLoggerKismetLibrary(const UVisualLoggerKismetLibrary&); \
public: \
	ENGINE_API virtual ~UVisualLoggerKismetLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVisualLoggerKismetLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
