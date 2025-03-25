// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/NavigationObjectBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationObjectBase_generated_h
#error "NavigationObjectBase.generated.h already included, missing '#pragma once' in NavigationObjectBase.h"
#endif
#define ENGINE_NavigationObjectBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANavigationObjectBase(); \
	friend struct Z_Construct_UClass_ANavigationObjectBase_Statics; \
public: \
	DECLARE_CLASS(ANavigationObjectBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ANavigationObjectBase) \
	virtual UObject* _getUObject() const override { return const_cast<ANavigationObjectBase*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANavigationObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANavigationObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANavigationObjectBase(ANavigationObjectBase&&); \
	ANavigationObjectBase(const ANavigationObjectBase&); \
public: \
	ENGINE_API virtual ~ANavigationObjectBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ANavigationObjectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
