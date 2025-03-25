// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SphereReflectionCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SphereReflectionCapture_generated_h
#error "SphereReflectionCapture.generated.h already included, missing '#pragma once' in SphereReflectionCapture.h"
#endif
#define ENGINE_SphereReflectionCapture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASphereReflectionCapture(); \
	friend struct Z_Construct_UClass_ASphereReflectionCapture_Statics; \
public: \
	DECLARE_CLASS(ASphereReflectionCapture, AReflectionCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASphereReflectionCapture)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASphereReflectionCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASphereReflectionCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASphereReflectionCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASphereReflectionCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASphereReflectionCapture(ASphereReflectionCapture&&); \
	ASphereReflectionCapture(const ASphereReflectionCapture&); \
public: \
	ENGINE_API virtual ~ASphereReflectionCapture();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASphereReflectionCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
