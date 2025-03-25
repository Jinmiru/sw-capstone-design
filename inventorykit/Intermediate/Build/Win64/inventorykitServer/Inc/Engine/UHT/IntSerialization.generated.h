// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/IntSerialization.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_IntSerialization_generated_h
#error "IntSerialization.generated.h already included, missing '#pragma once' in IntSerialization.h"
#endif
#define ENGINE_IntSerialization_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUIntSerialization(); \
	friend struct Z_Construct_UClass_UIntSerialization_Statics; \
public: \
	DECLARE_CLASS(UIntSerialization, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UIntSerialization)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UIntSerialization(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIntSerialization) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UIntSerialization); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIntSerialization); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIntSerialization(UIntSerialization&&); \
	UIntSerialization(const UIntSerialization&); \
public: \
	ENGINE_API virtual ~UIntSerialization();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UIntSerialization>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
