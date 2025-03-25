// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperTileMap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperTileMap_generated_h
#error "PaperTileMap.generated.h already included, missing '#pragma once' in PaperTileMap.h"
#endif
#define PAPER2D_PaperTileMap_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileMap, NO_API)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUPaperTileMap(); \
	friend struct Z_Construct_UClass_UPaperTileMap_Statics; \
public: \
	DECLARE_CLASS(UPaperTileMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileMap) \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_39_ARCHIVESERIALIZER


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperTileMap(UPaperTileMap&&); \
	UPaperTileMap(const UPaperTileMap&); \
public: \
	NO_API virtual ~UPaperTileMap();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_36_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_39_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperTileMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMap_h


#define FOREACH_ENUM_ETILEMAPPROJECTIONMODE(op) \
	op(ETileMapProjectionMode::Orthogonal) \
	op(ETileMapProjectionMode::IsometricDiamond) \
	op(ETileMapProjectionMode::IsometricStaggered) \
	op(ETileMapProjectionMode::HexagonalStaggered) 

namespace ETileMapProjectionMode { enum Type : int; }
template<> PAPER2D_API UEnum* StaticEnum<ETileMapProjectionMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
