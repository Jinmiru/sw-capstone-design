// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DocumentationActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DocumentationActor_generated_h
#error "DocumentationActor.generated.h already included, missing '#pragma once' in DocumentationActor.h"
#endif
#define ENGINE_DocumentationActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesADocumentationActor(); \
	friend struct Z_Construct_UClass_ADocumentationActor_Statics; \
public: \
	DECLARE_CLASS(ADocumentationActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ADocumentationActor)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADocumentationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADocumentationActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADocumentationActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADocumentationActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADocumentationActor(ADocumentationActor&&); \
	ADocumentationActor(const ADocumentationActor&); \
public: \
	ENGINE_API virtual ~ADocumentationActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADocumentationActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
