// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperTileLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperTileLayer_generated_h
#error "PaperTileLayer.generated.h already included, missing '#pragma once' in PaperTileLayer.h"
#endif
#define PAPER2D_PaperTileLayer_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaperTileInfo_Statics; \
	PAPER2D_API static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FPaperTileInfo>();

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUPaperTileLayer(); \
	friend struct Z_Construct_UClass_UPaperTileLayer_Statics; \
public: \
	DECLARE_CLASS(UPaperTileLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileLayer)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_107_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileLayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileLayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperTileLayer(UPaperTileLayer&&); \
	UPaperTileLayer(const UPaperTileLayer&); \
public: \
	NO_API virtual ~UPaperTileLayer();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_104_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_107_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperTileLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
