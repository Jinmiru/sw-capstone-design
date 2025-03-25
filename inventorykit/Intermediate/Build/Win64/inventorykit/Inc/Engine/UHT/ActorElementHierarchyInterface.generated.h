// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Actor/ActorElementHierarchyInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActorElementHierarchyInterface_generated_h
#error "ActorElementHierarchyInterface.generated.h already included, missing '#pragma once' in ActorElementHierarchyInterface.h"
#endif
#define ENGINE_ActorElementHierarchyInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorElementHierarchyInterface(); \
	friend struct Z_Construct_UClass_UActorElementHierarchyInterface_Statics; \
public: \
	DECLARE_CLASS(UActorElementHierarchyInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UActorElementHierarchyInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UActorElementHierarchyInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorElementHierarchyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorElementHierarchyInterface(UActorElementHierarchyInterface&&); \
	UActorElementHierarchyInterface(const UActorElementHierarchyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorElementHierarchyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorElementHierarchyInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorElementHierarchyInterface) \
	ENGINE_API virtual ~UActorElementHierarchyInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorElementHierarchyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
