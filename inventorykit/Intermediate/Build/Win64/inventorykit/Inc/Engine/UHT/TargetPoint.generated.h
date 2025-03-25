// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TargetPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TargetPoint_generated_h
#error "TargetPoint.generated.h already included, missing '#pragma once' in TargetPoint.h"
#endif
#define ENGINE_TargetPoint_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATargetPoint(); \
	friend struct Z_Construct_UClass_ATargetPoint_Statics; \
public: \
	DECLARE_CLASS(ATargetPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ATargetPoint)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATargetPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATargetPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATargetPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATargetPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATargetPoint(ATargetPoint&&); \
	ATargetPoint(const ATargetPoint&); \
public: \
	ENGINE_API virtual ~ATargetPoint();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ATargetPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
