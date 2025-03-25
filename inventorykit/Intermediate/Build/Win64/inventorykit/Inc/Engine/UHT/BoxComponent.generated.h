// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BoxComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BoxComponent_generated_h
#error "BoxComponent.generated.h already included, missing '#pragma once' in BoxComponent.h"
#endif
#define ENGINE_BoxComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetUnscaledBoxExtent); \
	DECLARE_FUNCTION(execGetScaledBoxExtent); \
	DECLARE_FUNCTION(execSetBoxExtent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUBoxComponent(); \
	friend struct Z_Construct_UClass_UBoxComponent_Statics; \
public: \
	DECLARE_CLASS(UBoxComponent, UShapeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBoxComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoxComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBoxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBoxComponent(UBoxComponent&&); \
	UBoxComponent(const UBoxComponent&); \
public: \
	ENGINE_API virtual ~UBoxComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBoxComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
