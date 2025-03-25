// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperTerrainActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperTerrainActor_generated_h
#error "PaperTerrainActor.generated.h already included, missing '#pragma once' in PaperTerrainActor.h"
#endif
#define PAPER2D_PaperTerrainActor_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPaperTerrainActor(); \
	friend struct Z_Construct_UClass_APaperTerrainActor_Statics; \
public: \
	DECLARE_CLASS(APaperTerrainActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(APaperTerrainActor)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperTerrainActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperTerrainActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperTerrainActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperTerrainActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APaperTerrainActor(APaperTerrainActor&&); \
	APaperTerrainActor(const APaperTerrainActor&); \
public: \
	NO_API virtual ~APaperTerrainActor();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_16_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_19_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class APaperTerrainActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
