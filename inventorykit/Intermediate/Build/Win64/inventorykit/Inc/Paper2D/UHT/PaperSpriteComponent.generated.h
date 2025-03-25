// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperSpriteComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperSprite;
struct FLinearColor;
#ifdef PAPER2D_PaperSpriteComponent_generated_h
#error "PaperSpriteComponent.generated.h already included, missing '#pragma once' in PaperSpriteComponent.h"
#endif
#define PAPER2D_PaperSpriteComponent_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSpriteColor); \
	DECLARE_FUNCTION(execGetSprite); \
	DECLARE_FUNCTION(execSetSprite);


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperSpriteComponent, NO_API)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPaperSpriteComponent(); \
	friend struct Z_Construct_UClass_UPaperSpriteComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperSpriteComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperSpriteComponent) \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_29_ARCHIVESERIALIZER


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperSpriteComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperSpriteComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperSpriteComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperSpriteComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperSpriteComponent(UPaperSpriteComponent&&); \
	UPaperSpriteComponent(const UPaperSpriteComponent&); \
public: \
	NO_API virtual ~UPaperSpriteComponent();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_26_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_29_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperSpriteComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
