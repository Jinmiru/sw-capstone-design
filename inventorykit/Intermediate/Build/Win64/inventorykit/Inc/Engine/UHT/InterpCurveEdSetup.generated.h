// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InterpCurveEdSetup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpCurveEdSetup_generated_h
#error "InterpCurveEdSetup.generated.h already included, missing '#pragma once' in InterpCurveEdSetup.h"
#endif
#define ENGINE_InterpCurveEdSetup_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveEdEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveEdEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveEdTab_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveEdTab>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUInterpCurveEdSetup(); \
	friend struct Z_Construct_UClass_UInterpCurveEdSetup_Statics; \
public: \
	DECLARE_CLASS(UInterpCurveEdSetup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpCurveEdSetup)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpCurveEdSetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpCurveEdSetup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpCurveEdSetup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpCurveEdSetup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterpCurveEdSetup(UInterpCurveEdSetup&&); \
	UInterpCurveEdSetup(const UInterpCurveEdSetup&); \
public: \
	ENGINE_API virtual ~UInterpCurveEdSetup();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_103_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_106_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpCurveEdSetup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
