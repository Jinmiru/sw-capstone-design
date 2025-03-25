// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/NodeMappingContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NodeMappingContainer_generated_h
#error "NodeMappingContainer.generated.h already included, missing '#pragma once' in NodeMappingContainer.h"
#endif
#define ENGINE_NodeMappingContainer_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNodeMappingContainer(); \
	friend struct Z_Construct_UClass_UNodeMappingContainer_Statics; \
public: \
	DECLARE_CLASS(UNodeMappingContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNodeMappingContainer)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNodeMappingContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeMappingContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNodeMappingContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeMappingContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNodeMappingContainer(UNodeMappingContainer&&); \
	UNodeMappingContainer(const UNodeMappingContainer&); \
public: \
	ENGINE_API virtual ~UNodeMappingContainer();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNodeMappingContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
