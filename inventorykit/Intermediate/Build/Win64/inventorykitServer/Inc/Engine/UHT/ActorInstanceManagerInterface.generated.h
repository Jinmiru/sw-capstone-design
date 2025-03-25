// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ActorInstanceManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActorInstanceManagerInterface_generated_h
#error "ActorInstanceManagerInterface.generated.h already included, missing '#pragma once' in ActorInstanceManagerInterface.h"
#endif
#define ENGINE_ActorInstanceManagerInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorInstanceManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorInstanceManagerInterface(UActorInstanceManagerInterface&&); \
	UActorInstanceManagerInterface(const UActorInstanceManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorInstanceManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorInstanceManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorInstanceManagerInterface) \
	ENGINE_API virtual ~UActorInstanceManagerInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActorInstanceManagerInterface(); \
	friend struct Z_Construct_UClass_UActorInstanceManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UActorInstanceManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UActorInstanceManagerInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActorInstanceManagerInterface() {} \
public: \
	typedef UActorInstanceManagerInterface UClassType; \
	typedef IActorInstanceManagerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorInstanceManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
