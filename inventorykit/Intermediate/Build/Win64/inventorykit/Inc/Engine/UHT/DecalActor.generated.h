// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DecalActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
#ifdef ENGINE_DecalActor_generated_h
#error "DecalActor.generated.h already included, missing '#pragma once' in DecalActor.h"
#endif
#define ENGINE_DecalActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetDecalMaterial); \
	DECLARE_FUNCTION(execSetDecalMaterial);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ADecalActor, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesADecalActor(); \
	friend struct Z_Construct_UClass_ADecalActor_Statics; \
public: \
	DECLARE_CLASS(ADecalActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ADecalActor) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADecalActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADecalActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADecalActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecalActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADecalActor(ADecalActor&&); \
	ADecalActor(const ADecalActor&); \
public: \
	ENGINE_API virtual ~ADecalActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADecalActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
